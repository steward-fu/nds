/*
 * Ghidra decompilation
 *
 * Function : FUN_080dcb78
 * Address  : 080dcb78
 * Program  : drastic16
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_080dcb78(int param_1,int param_2,byte *param_3,uint param_4,byte *param_5,uint param_6,
                byte *param_7,int param_8,int param_9,int param_10)

{
  undefined auVar1 [16];
  byte bVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  byte *pbVar7;
  ushort *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  uint local_240;
  byte *local_23c;
  uint local_230;
  byte *local_22c;
  undefined8 local_228 [64];
  undefined8 local_28;
  
  auVar1 = SIMDExpandImmediate(0,10,4);
  puVar9 = local_228;
  do {
    *puVar9 = auVar1._0_8_;
    puVar9[1] = auVar1._8_8_;
    puVar9 = puVar9 + 2;
  } while (puVar9 != &local_28);
  pbVar7 = param_7 + param_8;
  local_28._0_2_ = 0x400;
  local_28._2_2_ = 0x400;
  if ((((param_7 == pbVar7) || (pbVar7 == param_7 + 1)) || (pbVar7 == param_7 + 2)) ||
     ((pbVar7 == param_7 + 3 || (pbVar7 == param_7 + 4)))) {
    return 1;
  }
  local_23c = param_7 + 5;
  local_240 = CONCAT31(CONCAT21(CONCAT11(param_7[1],param_7[2]),param_7[3]),param_7[4]);
  if (param_10 == 0) {
    return 0;
  }
  uVar11 = 0;
  iVar12 = 0;
  iVar16 = 0;
  uVar15 = 0xffffffff;
  local_230 = param_4;
  local_22c = param_3;
LAB_080dcc5c:
  uVar10 = param_2 - iVar16;
  if ((uint)(param_10 - iVar12) < (uint)(param_2 - iVar16)) {
    uVar10 = param_10 - iVar12;
  }
  if (uVar10 == 0) {
    if (iVar12 == param_10) {
      return 0;
    }
    return 1;
  }
  bVar2 = *(byte *)(param_1 + iVar16);
  pbVar14 = (byte *)(param_1 + iVar16);
  *(byte *)(param_9 + iVar12) = bVar2;
  pbVar13 = (byte *)(param_9 + iVar12);
  uVar6 = (ushort)uVar11;
  iVar4 = iVar12;
  while( true ) {
    uVar3 = (uint)bVar2;
    iVar12 = iVar4 + 1;
    if ((uVar3 & 0xfe) == 0xe8) break;
    uVar6 = (ushort)uVar11;
    uVar5 = (ushort)bVar2;
    if ((uVar11 == 0xf) && ((uVar3 & 0xf0) == 0x80)) break;
    uVar10 = uVar10 - 1;
    iVar16 = iVar16 + 1;
    if (uVar10 == 0) goto LAB_080dcd74;
    pbVar14 = pbVar14 + 1;
    bVar2 = *pbVar14;
    pbVar13 = pbVar13 + 1;
    *pbVar13 = bVar2;
    uVar11 = uVar3;
    uVar6 = uVar5;
    iVar4 = iVar12;
  }
  if (iVar12 != param_10) {
    uVar11 = (uint)*(byte *)(param_1 + iVar16);
    iVar16 = iVar16 + 1;
    if (uVar11 == 0xe8) {
      puVar8 = (ushort *)((int)local_228 + (short)uVar6 * 2);
    }
    else {
      puVar8 = (ushort *)&local_28;
      if (uVar11 != 0xe9) {
        puVar8 = (ushort *)((int)&local_28 + 2);
      }
    }
    uVar6 = *puVar8;
    uVar10 = (uVar15 >> 0xb) * (uint)uVar6;
    if (local_240 < uVar10) {
      *puVar8 = uVar6 + (short)(0x800 - uVar6 >> 5);
      uVar15 = uVar10;
      if (uVar10 < 0x1000000) {
        if (local_23c == pbVar7) {
          return 1;
        }
        bVar2 = *local_23c;
        local_23c = local_23c + 1;
        local_240 = (uint)bVar2 | local_240 << 8;
        uVar15 = uVar10 * 0x100;
      }
      goto LAB_080dcc5c;
    }
    uVar15 = uVar15 - uVar10;
    local_240 = local_240 - uVar10;
    *puVar8 = uVar6 - (uVar6 >> 5);
    if (uVar15 < 0x1000000) {
      if (local_23c == pbVar7) {
        return 1;
      }
      bVar2 = *local_23c;
      uVar15 = uVar15 * 0x100;
      local_23c = local_23c + 1;
      local_240 = (uint)bVar2 | local_240 * 0x100;
    }
    if (uVar11 == 0xe8) {
      if (local_230 < 4) {
        return 1;
      }
      local_230 = local_230 - 4;
      pbVar14 = local_22c;
      local_22c = local_22c + 4;
    }
    else {
      if (param_6 < 4) {
        return 1;
      }
      param_6 = param_6 - 4;
      pbVar14 = param_5;
      param_5 = param_5 + 4;
    }
    uVar10 = (-4 - iVar12) +
             ((uint)pbVar14[1] << 0x10 | (uint)*pbVar14 << 0x18 | (uint)pbVar14[3] |
             (uint)pbVar14[2] << 8);
    *(char *)(param_9 + iVar12) = (char)uVar10;
    iVar12 = param_10;
    if (iVar4 + 2 == param_10) goto LAB_080dcd74;
    *(char *)(param_9 + iVar4 + 2) = (char)(uVar10 >> 8);
    if (iVar4 + 3 != param_10) {
      *(char *)(param_9 + iVar4 + 3) = (char)(uVar10 >> 0x10);
      if (iVar4 + 4 != param_10) {
        uVar11 = uVar10 >> 0x18;
        iVar12 = iVar4 + 5;
        *(char *)(param_9 + iVar4 + 4) = (char)(uVar10 >> 0x18);
        goto LAB_080dcc5c;
      }
    }
  }
LAB_080dcd74:
  if (iVar12 == param_10) {
    return 0;
  }
  return 1;
}


