/*
 * Ghidra decompilation
 *
 * Function : arm_load_block11
 * Address  : 080acaec
 * Program  : drastic
 */


u32 * arm_load_block11(uint param_1,undefined4 param_2,u32 param_3,u32 param_4)

{
  u32 *puVar1;
  u32 unaff_r4;
  u32 unaff_r5;
  int iVar2;
  u32 uVar3;
  uint address;
  u32 unaff_r6;
  u32 unaff_r10;
  memory_interface_struct *unaff_r11;
  u32 in_r12;
  u32 in_lr;
  bool in_OV;
  
  unaff_r11[-1].page_allocation_bitmap_coarse[0x30] = param_3;
  unaff_r11[-1].page_allocation_bitmap_coarse[0x31] = unaff_r4;
  iVar2 = unaff_r11->page_table[param_1 >> 0xb] * 4;
  if (iVar2 == 0) {
    unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = param_4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x33] = unaff_r5;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x34] = unaff_r6;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x35] = in_r12;
    iVar2 = 0xb;
    if (in_OV) {
      uVar3 = 0x10000000;
    }
    else {
      uVar3 = 0;
    }
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar3;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x7b] = unaff_r10;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = in_lr;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = (u32)register0x00000054;
    puVar1 = unaff_r11[-1].page_allocation_bitmap_coarse + 0x50;
    address = param_1 & 0xfffffffc;
    do {
      uVar3 = extended_load32(unaff_r11,address);
      *puVar1 = uVar3;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 1;
      address = address + 4;
    } while (iVar2 != 0);
    return unaff_r11[-1].page_allocation_bitmap_coarse + 0x50;
  }
  puVar1 = (u32 *)((param_1 & 0xfffffffc) + iVar2);
  unaff_r11[-1].page_allocation_bitmap_coarse[0x50] = *puVar1;
  unaff_r11[-1].page_allocation_bitmap_coarse[0x51] = puVar1[1];
  unaff_r11[-1].page_allocation_bitmap_coarse[0x52] = puVar1[2];
  unaff_r11[-1].page_allocation_bitmap_coarse[0x53] = puVar1[3];
  unaff_r11[-1].page_allocation_bitmap_coarse[0x54] = puVar1[4];
  unaff_r11[-1].page_allocation_bitmap_coarse[0x55] = puVar1[5];
  unaff_r11[-1].page_allocation_bitmap_coarse[0x56] = puVar1[6];
  unaff_r11[-1].page_allocation_bitmap_coarse[0x57] = puVar1[7];
  unaff_r11[-1].page_allocation_bitmap_coarse[0x58] = puVar1[8];
  unaff_r11[-1].page_allocation_bitmap_coarse[0x59] = puVar1[9];
  unaff_r11[-1].page_allocation_bitmap_coarse[0x5a] = puVar1[10];
  return unaff_r11[-1].page_allocation_bitmap_coarse + 0x50;
}


