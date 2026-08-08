/*
 * Ghidra decompilation
 *
 * Function : render_scanline_obj_bitmap_span_hflip_yes
 * Address  : 080c04c0
 * Program  : drastic
 */


void render_scanline_obj_bitmap_span_hflip_yes(int param_1,undefined8 *param_2,short param_3)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  undefined auVar3 [16];
  
  param_3 = param_3 - *(short *)(param_1 + 0x40);
  if ((*(uint *)(param_1 + 0x4b) & 0x100) != 0) {
    param_3 = -param_3;
  }
  uVar2 = (*(uint *)(param_1 + 0x4b) << 9) >> 0x1c;
  pauVar1 = (undefined (*) [16])
            ((int)param_3 * (int)*(short *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34) + -0xe);
  do {
    auVar3 = *pauVar1;
    pauVar1 = pauVar1 + -1;
    auVar3 = vrev(auVar3,2);
    uVar2 = uVar2 - 1;
    *param_2 = auVar3._8_8_;
    param_2[1] = auVar3._0_8_;
    param_2 = param_2 + 2;
  } while (uVar2 != 0);
  return;
}


