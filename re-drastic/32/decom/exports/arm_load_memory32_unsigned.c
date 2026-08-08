/*
 * Ghidra decompilation
 *
 * Function : arm_load_memory32_unsigned
 * Address  : 080ab390
 * Program  : drastic
 */


u32 arm_load_memory32_unsigned(uint param_1,undefined4 param_2,u32 param_3,u32 param_4)

{
  int iVar1;
  u32 uVar2;
  uint uVar3;
  u32 unaff_r4;
  u32 unaff_r10;
  memory_interface_struct *unaff_r11;
  u32 in_r12;
  u32 in_lr;
  bool in_OV;
  
  if ((param_1 & 3) != 0) {
    unaff_r11[-1].page_allocation_bitmap_coarse[0x33] = unaff_r4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4b] = in_lr;
    uVar3 = arm_load_memory32_unsigned(param_1 & 0xfffffffc);
    if ((param_1 & 2) != 0) {
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    }
    if ((param_1 & 1) != 0) {
      uVar3 = uVar3 >> 8 | uVar3 << 0x18;
    }
    return uVar3;
  }
  iVar1 = unaff_r11->page_table[param_1 >> 0xb] * 4;
  if (iVar1 == 0) {
    if (in_OV) {
      uVar2 = 0x10000000;
    }
    else {
      uVar2 = 0;
    }
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar2;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x30] = param_3;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x31] = param_4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = in_r12;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x7b] = unaff_r10;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = in_lr;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = (u32)register0x00000054;
    uVar2 = extended_load32(unaff_r11,param_1);
    return uVar2;
  }
  return *(u32 *)(param_1 + iVar1);
}


