/*
 * Ghidra decompilation
 *
 * Function : memory_region_block_memory_load
 * Address  : 0800c6b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 memory_region_block_memory_load
              (memory_region_struct *memory_regions,memory_struct *memory,u32 address,u8 *src,
              u32 length)

{
  u8 uVar1;
  u32 *code_bitmap_pointer_coarse_00;
  u32 *code_bitmap_pointer_fine_00;
  u32 *code_bitmap_pointer_fine;
  u32 uVar2;
  uint length_00;
  u32 block_length;
  uint uVar3;
  u32 mask;
  memory_region_struct *pmVar4;
  memory_region_struct *store_region;
  u8 *__dest;
  u32 *code_bitmap_pointer_coarse;
  u32 local_3c;
  _func_void_memory_struct_ptr_u32_u32 *local_30;
  
  if (length == 0) {
    local_3c = 0;
  }
  else {
    local_3c = 0;
    local_30 = (_func_void_memory_struct_ptr_u32_u32 *)0x0;
    do {
      while( true ) {
        pmVar4 = memory_regions + (address >> 0x17);
        uVar3 = memory_regions[address >> 0x17].mask;
        code_bitmap_pointer_coarse_00 = (*pmVar4->get_code_bitmap_coarse)(memory,pmVar4,address);
        code_bitmap_pointer_fine_00 = (*pmVar4->get_code_bitmap_fine)(memory,pmVar4,address);
        uVar1 = pmVar4->store_access;
        length_00 = uVar3 + 1;
        if (uVar1 == '\x01') break;
        if (uVar1 == '\0') {
          __dest = (pmVar4->store_handler).direct_memory + (uVar3 & address);
          goto LAB_0800c7f0;
        }
        if (uVar1 == '\x02') {
          local_30 = (pmVar4->store_handler).extended_function.store32;
        }
        else {
          __printf_chk(1,"can\'t get ptr @ %x type is %x!!!\n",address);
        }
        if (length <= length_00) {
          length_00 = length;
        }
        length = length - length_00;
LAB_0800c774:
        if (local_30 == (_func_void_memory_struct_ptr_u32_u32 *)0x0) {
          address = address + length_00;
          src = (u8 *)((int)src + length_00);
        }
        else {
          for (; length_00 != 0; length_00 = length_00 - 4) {
            (*local_30)(memory,uVar3 & address,*(u32 *)src);
            address = address + 4;
            src = (u8 *)((int)src + 4);
          }
        }
        if (length == 0) {
          return local_3c;
        }
      }
      __dest = (*(pmVar4->store_handler).get_pointer)(memory,address);
LAB_0800c7f0:
      if (length <= length_00) {
        length_00 = length;
      }
      length = length - length_00;
      if (__dest == (u8 *)0x0) goto LAB_0800c774;
      if (code_bitmap_pointer_coarse_00 != (u32 *)0x0) {
        uVar2 = memory_check_code_region
                          (code_bitmap_pointer_coarse_00,code_bitmap_pointer_fine_00,address,
                           length_00);
        local_3c = local_3c | uVar2;
      }
      address = address + length_00;
      memcpy(__dest,src,length_00);
      src = (u8 *)((int)src + length_00);
    } while (length != 0);
  }
  return local_3c;
}


