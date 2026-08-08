/*
 * Ghidra decompilation
 *
 * Function : remap_address_region_vram
 * Address  : 0800c17c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 remap_address_region_vram(memory_struct *memory,void *virtual_address,u32 size,u32 file_offset)

{
  u8 *remap_ptr;
  u8 *puVar1;
  s32 sVar2;
  size_t __pgoff;
  u8 *vram_page_address;
  u8 *puVar3;
  int iVar4;
  
  if (memory->use_remap_file_pages == '\0') {
    if (size >> 0xe != 0) {
      puVar3 = (u8 *)((int)virtual_address + (size & 0xffffc000));
      iVar4 = file_offset - (int)virtual_address;
      do {
        munmap(virtual_address,0x4000);
        puVar1 = (u8 *)mmap(virtual_address,0x4000,3,1,memory->map_vram_fd,
                            (__off_t)((int)virtual_address + iVar4));
        if ((u8 *)virtual_address != puVar1) {
          __printf_chk(1,"ERROR: VRAM remap to %p didn\'t map to same location (got %p)\n",
                       virtual_address,puVar1);
          return -1;
        }
        vram_page_address = (u8 *)((int)virtual_address + 0x4000);
        virtual_address = vram_page_address;
      } while (vram_page_address != puVar3);
    }
    sVar2 = 0;
  }
  else {
    __pgoff = __aeabi_uidiv(file_offset,memory->native_page_size);
    sVar2 = remap_file_pages(virtual_address,size,0,__pgoff,0);
  }
  return sVar2;
}


