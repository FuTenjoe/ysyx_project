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
Elf64_Ehdr *ehdr;
Elf64_Phdr *phdr;
static uintptr_t loader(PCB *pcb, const char *filename) {
  //TODO();
  //return 0;
  //自己加
  printf("eok\n");
  ramdisk_read(ehdr, 0x800023f1, get_ramdisk_size());
  //assert(*(uint32_t *)ehdr->e_ident == 0x7f454c46);
  assert(*(uint32_t *)ehdr->e_ident == 0x464c457f);
  printf("eok2\n");
  //return  phdr->p_vaddr;
  return ehdr->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

