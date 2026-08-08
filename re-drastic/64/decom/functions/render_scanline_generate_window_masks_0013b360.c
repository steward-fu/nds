/*
 * Ghidra decompilation
 *
 * Function : render_scanline_generate_window_masks
 * Address  : 0013b360
 * Program  : drastic64
 */


void render_scanline_generate_window_masks
               (long param_1,undefined8 *param_2,undefined8 *param_3,long param_4,uint param_5,
               uint param_6)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  
  uVar2 = *(uint *)(param_1 + 0x90);
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = uVar2 >> 0xd;
  param_3[2] = 0;
  param_3[3] = 0;
  if ((uVar2 & 7) != 0) {
    bVar3 = *(byte *)(param_1 + 0xaf);
    bVar4 = *(byte *)(param_1 + 0xb1);
    bVar5 = *(byte *)(param_1 + 0xb4);
    bVar6 = *(byte *)(param_1 + 0xb5);
    bVar7 = *(byte *)(param_1 + 0xb0);
    bVar8 = *(byte *)(param_1 + 0xae);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    lVar11 = param_1 + 0x44;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    uVar12 = *(uint *)(param_1 + 0x9c) ^ 0x3f3f3f3f;
    if ((bVar6 & 1) != 0) {
      render_scanline_update_window_mask(lVar11,*(undefined2 *)(param_1 + 0xaa));
    }
    if ((bVar6 >> 1 & 1) != 0) {
      render_scanline_update_window_mask(param_1 + 100,*(undefined2 *)(param_1 + 0xac));
    }
    uVar9 = bVar5 | 5;
    if (bVar3 != param_6) {
      uVar9 = bVar5 | 4;
    }
    uVar1 = uVar9 & 0xfffffffe;
    if (bVar8 != param_6) {
      uVar1 = uVar9;
    }
    uVar9 = uVar1 | 2;
    if (bVar4 != param_6) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 & 0xfffffffd;
    if (bVar7 != param_6) {
      uVar1 = uVar9;
    }
    *(char *)(param_1 + 0xb4) = (char)uVar1;
    *(undefined *)(param_1 + 0xb5) = 0;
    uVar1 = uVar1 & uVar2 & 7;
    uVar2 = uVar12 >> 0x10;
    if (uVar1 == 4) {
      uVar12 = uVar12 >> 0x18;
LAB_0013b530:
      render_scanline_window_inhibit_masks_single(param_2,param_3,param_5,param_4,uVar12);
      return;
    }
    if (uVar1 < 5) {
      if (uVar1 == 2) {
        uVar12 = uVar12 >> 8;
        param_4 = param_1 + 100;
        goto LAB_0013b530;
      }
      if (uVar1 == 3) {
        param_4 = param_1 + 100;
        uVar9 = uVar12 >> 8;
        goto LAB_0013b494;
      }
      param_4 = lVar11;
      if (uVar1 == 1) goto LAB_0013b530;
    }
    else {
      if (uVar1 == 6) {
        lVar11 = param_1 + 100;
        uVar9 = uVar12 >> 0x18;
        uVar12 = uVar12 >> 8;
LAB_0013b494:
        render_scanline_window_inhibit_masks_double
                  (param_2,param_3,param_5,lVar11,param_4,uVar12,uVar9,uVar2);
        return;
      }
      if (uVar1 == 7) {
        render_scanline_window_inhibit_masks_triple
                  (param_2,param_3,param_5,lVar11,param_1 + 100,param_4,uVar12,uVar12 >> 8,
                   uVar12 >> 0x18,uVar2);
        return;
      }
      if (uVar1 == 5) {
        uVar9 = uVar12 >> 0x18;
        goto LAB_0013b494;
      }
    }
    param_5 = param_5 & uVar2;
    if ((uVar12 >> 0x15 & 1) != 0) {
      *param_3 = 0xffffffffffffffff;
      param_3[1] = 0xffffffffffffffff;
      param_3[2] = 0xffffffffffffffff;
      param_3[3] = 0xffffffffffffffff;
    }
    uVar10 = 0;
    for (; param_5 != 0; param_5 = param_5 >> 1) {
      if ((param_5 & 1) != 0) {
        (param_2 + uVar10 * 4)[1] = 0xffffffffffffffff;
        param_2[uVar10 * 4] = 0xffffffffffffffff;
        param_2[uVar10 * 4 + 3] = 0xffffffffffffffff;
        param_2[uVar10 * 4 + 2] = 0xffffffffffffffff;
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    }
  }
  return;
}


