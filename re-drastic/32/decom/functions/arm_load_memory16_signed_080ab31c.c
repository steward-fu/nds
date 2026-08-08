/*
 * Ghidra decompilation
 *
 * Function : arm_load_memory16_signed
 * Address  : 080ab31c
 * Program  : drastic
 */


undefined8 arm_load_memory16_signed(uint param_1,undefined4 param_2,u32 param_3,u32 param_4)

{
  int iVar1;
  u16 uVar2;
  u32 uVar3;
  u32 unaff_r10;
  memory_interface_struct *unaff_r11;
  u32 in_r12;
  u32 in_lr;
  bool in_OV;
  
  iVar1 = unaff_r11->page_table[param_1 >> 0xb] * 4;
  if (iVar1 == 0) {
    if (in_OV) {
      uVar3 = 0x10000000;
    }
    else {
      uVar3 = 0;
    }
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar3;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x30] = param_3;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x31] = param_4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = in_r12;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x7b] = unaff_r10;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = in_lr;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = (u32)register0x00000054;
    uVar2 = extended_load16(unaff_r11,param_1 & 0xfffffffe);
    return CONCAT44(unaff_r11[-1].page_allocation_bitmap_coarse[0x4f],(int)(short)uVar2);
  }
  return CONCAT44(iVar1,(int)*(short *)((param_1 & 0xfffffffe) + iVar1));
}


