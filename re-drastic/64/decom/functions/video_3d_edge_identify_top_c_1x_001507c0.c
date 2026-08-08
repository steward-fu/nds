/*
 * Ghidra decompilation
 *
 * Function : video_3d_edge_identify_top_c_1x
 * Address  : 001507c0
 * Program  : drastic64
 */


void video_3d_edge_identify_top_c_1x(byte *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  
  uVar2 = *param_2;
  uVar4 = (uint)((ulong)param_4 >> 0x18) & 0x3f;
  uVar5 = (uint)param_4;
  if ((uVar2 >> 0x1e & 1) == 0) {
    *param_1 = 0xff;
  }
  else {
    uVar1 = uVar2 & 0xffffff;
    uVar2 = uVar2 >> 0x18 & 0x7f ^ 0x40;
    if (uVar1 < (uVar5 & 0xffffff) && uVar4 != uVar2) {
      bVar7 = 0;
    }
    else {
      bVar7 = -((param_2[1] >> 0x18 & 0x3f) == uVar2 || (param_2[1] & 0xffffff) <= uVar1);
    }
    if ((*param_3 >> 0x18 & 0x3f) != uVar2 && uVar1 < (*param_3 & 0xffffff)) {
      bVar7 = 0;
    }
    *param_1 = bVar7 | (byte)(uVar2 >> 3);
  }
  lVar6 = 0;
  do {
    while( true ) {
      uVar3 = param_2[lVar6 + 1];
      uVar2 = uVar3 & 0xffffff;
      uVar1 = uVar3 >> 0x18 & 0x7f ^ 0x40;
      if ((uVar3 >> 0x1e & 1) != 0) break;
      param_1[lVar6 + 1] = 0xff;
      lVar6 = lVar6 + 1;
      if (lVar6 == 0xfe) goto LAB_001508e0;
    }
    bVar7 = -((param_2[lVar6] >> 0x18 & 0x3f) == uVar1 || (param_2[lVar6] & 0xffffff) <= uVar2);
    if ((param_2[lVar6 + 2] >> 0x18 & 0x3f) != uVar1 && uVar2 < (param_2[lVar6 + 2] & 0xffffff)) {
      bVar7 = 0;
    }
    if (uVar2 < (uVar5 & 0xffffff) && uVar4 != uVar1) {
      bVar7 = 0;
    }
    if ((param_3[lVar6 + 1] >> 0x18 & 0x3f) != uVar1 && uVar2 < (param_3[lVar6 + 1] & 0xffffff)) {
      bVar7 = 0;
    }
    param_1[lVar6 + 1] = bVar7 | (byte)(uVar1 >> 3);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0xfe);
LAB_001508e0:
  uVar2 = param_2[0xff];
  if ((uVar2 >> 0x1e & 1) != 0) {
    uVar1 = uVar2 >> 0x18 & 0x7f ^ 0x40;
    uVar2 = uVar2 & 0xffffff;
    bVar7 = -((param_2[0xfe] >> 0x18 & 0x3f) == uVar1 || (param_2[0xfe] & 0xffffff) <= uVar2);
    if (uVar2 < (uVar5 & 0xffffff) && uVar4 != uVar1) {
      bVar7 = 0;
    }
    if ((param_3[0xff] >> 0x18 & 0x3f) != uVar1 && uVar2 < (param_3[0xff] & 0xffffff)) {
      bVar7 = 0;
    }
    param_1[0xff] = bVar7 | (byte)(uVar1 >> 3);
    return;
  }
  param_1[0xff] = 0xff;
  return;
}


