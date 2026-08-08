/*
 * Ghidra decompilation
 *
 * Function : video_3d_edge_identify_c_1x
 * Address  : 00150b20
 * Program  : drastic64
 */


void video_3d_edge_identify_c_1x
               (byte *param_1,uint *param_2,uint *param_3,uint *param_4,undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  uVar3 = *param_3;
  uVar5 = (uint)((ulong)param_5 >> 0x18);
  if ((uVar3 >> 0x1e & 1) == 0) {
    *param_1 = 0xff;
  }
  else {
    uVar2 = uVar3 >> 0x18 & 0x7f ^ 0x40;
    uVar3 = uVar3 & 0xffffff;
    bVar1 = -((uVar5 & 0x3f) == uVar2 || ((uint)param_5 & 0xffffff) <= uVar3);
    if ((param_3[1] >> 0x18 & 0x3f) != uVar2 && uVar3 < (param_3[1] & 0xffffff)) {
      bVar1 = 0;
    }
    if ((*param_2 >> 0x18 & 0x3f) != uVar2 && uVar3 < (*param_2 & 0xffffff)) {
      bVar1 = 0;
    }
    if ((*param_4 >> 0x18 & 0x3f) != uVar2 && uVar3 < (*param_4 & 0xffffff)) {
      bVar1 = 0;
    }
    *param_1 = bVar1 | (byte)(uVar2 >> 3);
  }
  lVar6 = 0;
  do {
    while( true ) {
      uVar4 = param_3[lVar6 + 1];
      uVar3 = uVar4 & 0xffffff;
      uVar2 = uVar4 >> 0x18 & 0x7f ^ 0x40;
      if ((uVar4 >> 0x1e & 1) != 0) break;
      param_1[lVar6 + 1] = 0xff;
      lVar6 = lVar6 + 1;
      if (lVar6 == 0xfe) goto LAB_00150c58;
    }
    bVar1 = -((param_3[lVar6] >> 0x18 & 0x3f) == uVar2 || (param_3[lVar6] & 0xffffff) <= uVar3);
    if ((param_3[lVar6 + 2] >> 0x18 & 0x3f) != uVar2 && uVar3 < (param_3[lVar6 + 2] & 0xffffff)) {
      bVar1 = 0;
    }
    if ((param_2[lVar6 + 1] >> 0x18 & 0x3f) != uVar2 && uVar3 < (param_2[lVar6 + 1] & 0xffffff)) {
      bVar1 = 0;
    }
    if ((param_4[lVar6 + 1] >> 0x18 & 0x3f) != uVar2 && uVar3 < (param_4[lVar6 + 1] & 0xffffff)) {
      bVar1 = 0;
    }
    param_1[lVar6 + 1] = bVar1 | (byte)(uVar2 >> 3);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0xfe);
LAB_00150c58:
  uVar3 = param_3[0xff];
  if ((uVar3 >> 0x1e & 1) != 0) {
    uVar2 = uVar3 >> 0x18 & 0x7f ^ 0x40;
    uVar3 = uVar3 & 0xffffff;
    bVar1 = -((param_3[0xfe] >> 0x18 & 0x3f) == uVar2 || (param_3[0xfe] & 0xffffff) <= uVar3);
    if ((uVar5 & 0x3f) != uVar2 && uVar3 < ((uint)param_5 & 0xffffff)) {
      bVar1 = 0;
    }
    if ((param_2[0xff] >> 0x18 & 0x3f) != uVar2 && uVar3 < (param_2[0xff] & 0xffffff)) {
      bVar1 = 0;
    }
    if ((param_4[0xff] >> 0x18 & 0x3f) != uVar2 && uVar3 < (param_4[0xff] & 0xffffff)) {
      bVar1 = 0;
    }
    param_1[0xff] = bVar1 | (byte)(uVar2 >> 3);
    return;
  }
  param_1[0xff] = 0xff;
  return;
}


