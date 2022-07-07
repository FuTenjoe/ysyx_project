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
Elf64_Ehdr ehdr = {0};
Elf64_Phdr phdr = {0};
static uintptr_t loader(PCB *pcb, const char *filename) {
  //TODO();
  //return 0;
  //自己加
  printf("loderok1\n");
  ramdisk_read(&ehdr, 0, sizeof(Elf64_Ehdr));
  printf("ehdr.e_phnum = %lx\n",ehdr.e_phnum);
  assert(*(uint32_t *)ehdr.e_ident == 0x464c457f);
  ramdisk_read(&phdr, sizeof(Elf64_Ehdr),ehdr.e_phnum);
  for(uint32_t i=0;i < ehdr.e_phnum; i++){
    
     ramdisk_read(&phdr, sizeof(Elf64_Ehdr)+ i*sizeof(phdr),phdr.p_filesz);
    printf("for i = %d\n",i);
    if(phdr.p_type == PT_LOAD){
      ramdisk_read((void*)(phdr.p_vaddr), phdr.p_offset, phdr.p_filesz);
      printf("eok2\n");
    }
    if(phdr.p_memsz > phdr.p_filesz){
      printf("eok3\n");
      //uint64_t length = phdr.p_paddr + phdr.p_filesz;
      //ramdisk_read((void*)(length), 0x0, phdr.p_memsz - phdr.p_filesz);
      //memset((void*)(phdr.p_vaddr +phdr.p_filesz),0,phdr.p_memsz - phdr.p_filesz);
      printf("eok32\n");
  }
  }
   return  ehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

