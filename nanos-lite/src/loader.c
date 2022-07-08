#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
//自己加
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern size_t get_ramdisk_size();
//Elf64_Ehdr ehdr = {0};
//Elf64_Phdr phdr = {0};
static uintptr_t loader(PCB *pcb, const char *filename) {
  //TODO();
  
  Elf_Ehdr elfhdr = {};
  Elf_Phdr elfphdr = {};

  ramdisk_read(&elfhdr, 0, sizeof(elfhdr));
  assert(*(uint32_t *)elfhdr.e_ident == 0x464c457f);
  uint16_t i = 0;
  for(i=0; i<elfhdr.e_phnum; i++){
    uint64_t phoff = elfhdr.e_phoff + elfhdr.e_phentsize * i;
    //printf("phoff:%x\n",phoff);
    ramdisk_read(&elfphdr, phoff, elfhdr.e_phentsize);

    if(elfphdr.p_type == 0x1){
      //ramdisk_read((void*)0x83000000, 0, 0x4f88);
      ramdisk_read((void*)elfphdr.p_paddr, elfphdr.p_offset, elfphdr.p_memsz);
      //ramdisk_read((void*)elfphdr.p_paddr, elfphdr.p_offset, (size_t*)elfphdr.p_memsz);
      memset((void *)(elfphdr.p_vaddr+elfphdr.p_filesz), 0, (elfphdr.p_memsz-elfphdr.p_filesz));
      
    }
  }
  
  return elfhdr.e_entry;

}
void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

