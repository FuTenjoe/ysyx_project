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
  Elf_Ehdr *elf_head = (Elf_Ehdr*)malloc(sizeof(Elf_Ehdr));
  ramdisk_read(elf_head, 0 ,sizeof(Elf_Ehdr));
  assert(*(uint32_t *)elf_head->e_ident == 0x464c457f);
  assert(elf_head ->e_machine == 0xf3);

  Elf_Phdr *pro_head = (Elf_Phdr*)malloc(sizeof(Elf_Phdr)*elf_head->e_phnum);
  ramdisk_read(pro_head,sizeof(Elf_Ehdr),sizeof(Elf_Phdr)*elf_head->e_phnum);
  for(Elf_Phdr *p=pro_head; p<pro_head+elf_head->e_phnum; p++){
    ramdisk_read((void*)(p->p_vaddr),p->p_offset, p->p_filesz);
     ramdisk_read((void *)(p->p_vaddr + p->p_filesz), 0, p->p_memsz - p->p_filesz);
  }
  return elf_head->e_entry;
}
void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

