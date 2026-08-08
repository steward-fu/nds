/*
 * Ghidra decompilation
 *
 * Function : render_scanline_select_pixels_binary32_c
 * Address  : 00139120
 * Program  : drastic64
 */


void render_scanline_select_pixels_binary32_c
               (undefined *param_1,long param_2,long param_3,uint *param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  
  if (param_2 != 0) {
    puVar8 = param_1 + 0x100;
    param_1 = param_1 + 0x200;
    lVar1 = param_2 + 0x100;
    do {
      uVar6 = *param_4;
      lVar3 = 0;
      do {
        if ((uVar6 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_3 + lVar3 * 4);
          puVar8[lVar3 + -0x100] = (char)uVar2;
          puVar8[lVar3] = (char)((uint)uVar2 >> 8);
          param_1[lVar3] = (char)((uint)uVar2 >> 0x10);
          *(char *)(param_2 + lVar3) = (char)((uint)uVar2 >> 0x18);
        }
        lVar3 = lVar3 + 1;
        uVar6 = uVar6 >> 1;
      } while (lVar3 != 0x20);
      param_2 = param_2 + 0x20;
      param_3 = param_3 + 0x80;
      param_4 = param_4 + 1;
      puVar8 = puVar8 + 0x20;
      param_1 = param_1 + 0x20;
    } while (lVar1 != param_2);
    return;
  }
  puVar7 = (undefined4 *)(param_3 + 0x80);
  puVar8 = param_1 + 0x100;
  do {
    uVar6 = *param_4;
    puVar4 = puVar7 + -0x20;
    puVar5 = param_1;
    do {
      if ((uVar6 & 1) != 0) {
        uVar2 = *puVar4;
        *puVar5 = (char)uVar2;
        puVar5[0x100] = (char)((uint)uVar2 >> 8);
        puVar5[0x200] = (char)((uint)uVar2 >> 0x10);
      }
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 >> 1;
      puVar5 = puVar5 + 1;
    } while (puVar4 != puVar7);
    param_1 = param_1 + 0x20;
    puVar7 = puVar7 + 0x20;
    param_4 = param_4 + 1;
  } while (puVar8 != param_1);
  return;
}


