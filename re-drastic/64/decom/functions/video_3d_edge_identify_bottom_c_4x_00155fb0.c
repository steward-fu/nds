/*
 * Ghidra decompilation
 *
 * Function : video_3d_edge_identify_bottom_c_4x
 * Address  : 00155fb0
 * Program  : drastic64
 */


void video_3d_edge_identify_bottom_c_4x
               (byte *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  
  uVar2 = *param_3;
  uVar4 = (uint)((ulong)param_4 >> 0x18) & 0x3f;
  uVar8 = (uint)param_4;
  if ((uVar2 >> 0x1e & 1) == 0) {
    *param_1 = 0xff;
  }
  else {
    uVar1 = uVar2 & 0xffffff;
    uVar2 = uVar2 >> 0x18 & 0x7f ^ 0x40;
    bVar5 = uVar1 < (uVar8 & 0xffffff);
    bVar7 = (uVar4 != uVar2 && bVar5) + 1U & 1;
    if ((param_3[1] >> 0x18 & 0x3f) != uVar2 && uVar1 < (param_3[1] & 0xffffff)) {
      bVar7 = 0;
    }
    if ((*param_2 >> 0x18 & 0x3f) != uVar2 && uVar1 < (*param_2 & 0xffffff)) {
      bVar7 = 0;
    }
    if (uVar4 != uVar2 && bVar5) {
      bVar7 = 0;
    }
    *param_1 = bVar7 | (byte)(uVar2 >> 3);
  }
  lVar6 = 0;
  do {
    while( true ) {
      uVar3 = param_3[lVar6 + 1];
      uVar2 = uVar3 & 0xffffff;
      uVar1 = uVar3 >> 0x18 & 0x7f ^ 0x40;
      if ((uVar3 >> 0x1e & 1) != 0) break;
      param_1[lVar6 + 1] = 0xff;
      lVar6 = lVar6 + 1;
      if (lVar6 == 0x1fe) goto LAB_001560e0;
    }
    bVar7 = -((param_3[lVar6] >> 0x18 & 0x3f) == uVar1 || (param_3[lVar6] & 0xffffff) <= uVar2);
    if ((param_3[lVar6 + 2] >> 0x18 & 0x3f) != uVar1 && uVar2 < (param_3[lVar6 + 2] & 0xffffff)) {
      bVar7 = 0;
    }
    if ((param_2[lVar6 + 1] >> 0x18 & 0x3f) != uVar1 && uVar2 < (param_2[lVar6 + 1] & 0xffffff)) {
      bVar7 = 0;
    }
    if (uVar2 < (uVar8 & 0xffffff) && uVar4 != uVar1) {
      bVar7 = 0;
    }
    param_1[lVar6 + 1] = bVar7 | (byte)(uVar1 >> 3);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x1fe);
LAB_001560e0:
  uVar2 = param_3[0x1ff];
  if ((uVar2 >> 0x1e & 1) != 0) {
    uVar1 = uVar2 >> 0x18 & 0x7f ^ 0x40;
    uVar2 = uVar2 & 0xffffff;
    bVar7 = -((param_3[0x1fe] >> 0x18 & 0x3f) == uVar1 || (param_3[0x1fe] & 0xffffff) <= uVar2);
    if (uVar2 < (uVar8 & 0xffffff) && uVar4 != uVar1) {
      bVar7 = 0;
    }
    else if ((param_2[0x1ff] >> 0x18 & 0x3f) != uVar1 && uVar2 < (param_2[0x1ff] & 0xffffff)) {
      bVar7 = 0;
    }
    param_1[0x1ff] = bVar7 | (byte)(uVar1 >> 3);
    return;
  }
  param_1[0x1ff] = 0xff;
  return;
}


