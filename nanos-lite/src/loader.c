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
  ramdisk_read(&ehdr, 0, get_ramdisk_size());
  //assert(*(uint32_t *)ehdr.e_ident == 0x7f454c46);
  printf("loderok2\n");
  assert(*(uint32_t *)ehdr.e_ident == 0x464c457f);
  for(int i = 0;i <ehdr.e_phnum; i++){
    ramdisk_read(&phdr, ehdr.e_phoff,ehdr.e_phentsize);
  if(phdr.p_type == PT_LOAD){
    ramdisk_read((void*)(phdr.p_paddr), phdr.p_offset,phdr.p_filesz);
    printf("eok2\n");
  }
  if(phdr.p_memsz > phdr.p_filesz){
    printf("eok3\n");
    uint64_t length = phdr.p_paddr + phdr.p_filesz;
    ramdisk_read((void*)(length), 0x0, phdr.p_memsz - phdr.p_filesz);
    printf("eok32\n");
  }
  }
  
  printf("eok4\n");
  printf("e_entryad = 0x%lx\n",ehdr.e_entry);
  return  ehdr.e_entry;
  //return ehdr->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

