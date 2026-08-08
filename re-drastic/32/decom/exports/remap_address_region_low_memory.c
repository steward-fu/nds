/*
 * Ghidra decompilation
 *
 * Function : remap_address_region_low_memory
 * Address  : 0800c058
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 remap_address_region_low_memory
              (memory_struct *memory,void *virtual_address,u32 size,u32 file_offset)

{
  u8 *remap_ptr;
  u8 *puVar1;
  s32 sVar2;
  size_t __pgoff;
  u8 *page_address;
  u8 *puVar3;
  int iVar4;
  
  page_address = (u8 *)((int)virtual_address + memory->memory_map_offset);
  if (memory->use_remap_file_pages == '\0') {
    if ((((file_offset | size) & 0x3fff) == 0) && (((uint)page_address & 0x3fff) == 0)) {
      if (size >> 0xe != 0) {
        puVar3 = page_address + (size & 0xffffc000);
        iVar4 = file_offset - (int)page_address;
        do {
          munmap(page_address,0x4000);
          puVar1 = (u8 *)mmap(page_address,0x4000,3,1,memory->memory_map_fd,
                              (__off_t)(page_address + iVar4));
          if (page_address != puVar1) {
            __printf_chk(1,"ERROR: Low memory remap to %p didn\'t map to same location (got %p)\n",
                         page_address,puVar1);
            return -1;
          }
          page_address = page_address + 0x4000;
        } while (page_address != puVar3);
      }
      sVar2 = 0;
    }
    else {
      __printf_chk(1,
                   "ERROR: remap_address_region_low_memory chunk not 16KB aligned\n (mapping %x to %p for %x)\n"
                   ,file_offset,page_address,size);
      sVar2 = -1;
    }
  }
  else {
    __pgoff = __aeabi_uidiv(file_offset,memory->native_page_size);
    sVar2 = remap_file_pages(page_address,size,0,__pgoff,0);
  }
  return sVar2;
}


