/*
 * Ghidra decompilation
 *
 * Function : FUN_08046a38
 * Address  : 08046a38
 * Program  : drastic16
 */


void FUN_08046a38(uint *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint local_90;
  int iStack_8c;
  uint local_88;
  int iStack_84;
  uint local_80;
  int iStack_7c;
  uint local_78;
  int iStack_74;
  uint local_68;
  int iStack_64;
  uint local_60;
  int iStack_5c;
  uint local_58;
  int iStack_54;
  
  iVar12 = param_2[3];
  iVar6 = *param_2;
  iVar28 = param_2[1];
  iVar7 = param_2[2];
  iVar20 = param_3[6];
  iVar23 = *param_3;
  iVar27 = param_3[3];
  iVar13 = *param_3;
  iVar30 = param_3[1];
  iVar26 = param_3[4];
  iVar29 = param_2[5];
  iVar21 = param_2[7];
  iVar24 = param_3[7];
  iVar14 = param_2[6];
  iVar15 = *param_3;
  iVar22 = param_3[2];
  iVar16 = param_2[8];
  iVar8 = param_2[9];
  iVar17 = param_2[10];
  iVar9 = param_2[0xb];
  iVar31 = param_3[5];
  uVar25 = param_2[0xe];
  iVar32 = param_3[8];
  iVar10 = param_2[4];
  uVar18 = param_2[0xc];
  uVar19 = param_2[0xd];
  lVar1 = (longlong)iVar16 * (longlong)iVar22 +
          (longlong)param_2[4] * (longlong)iVar30 + (longlong)iVar6 * (longlong)*param_3;
  iVar11 = param_2[4];
  param_1[0xf] = param_2[0xf];
  local_90 = (uint)lVar1;
  iStack_8c = (int)((ulonglong)lVar1 >> 0x20);
  *param_1 = local_90 >> 0xc | iStack_8c << 0x14;
  lVar1 = (longlong)iVar22 * (longlong)iVar8 +
          (longlong)iVar30 * (longlong)iVar29 + (longlong)iVar23 * (longlong)iVar28;
  param_1[1] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)iVar22 * (longlong)iVar17 +
          (longlong)iVar30 * (longlong)iVar14 + (longlong)iVar13 * (longlong)iVar7;
  local_78 = (uint)lVar1;
  iStack_74 = (int)((ulonglong)lVar1 >> 0x20);
  param_1[2] = local_78 >> 0xc | iStack_74 << 0x14;
  lVar1 = (longlong)iVar22 * (longlong)iVar9 +
          (longlong)iVar30 * (longlong)iVar21 + (longlong)iVar15 * (longlong)iVar12;
  param_1[3] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)iVar16 * (longlong)iVar31 +
          (longlong)iVar10 * (longlong)iVar26 + (longlong)iVar6 * (longlong)iVar27;
  lVar2 = (longlong)iVar16 * (longlong)iVar32 +
          (longlong)iVar11 * (longlong)iVar24 + (longlong)iVar6 * (longlong)iVar20;
  local_68 = (uint)lVar1;
  iStack_64 = (int)((ulonglong)lVar1 >> 0x20);
  param_1[4] = local_68 >> 0xc | iStack_64 << 0x14;
  lVar1 = (longlong)iVar8 * (longlong)iVar31 +
          (longlong)iVar29 * (longlong)iVar26 + (longlong)iVar28 * (longlong)iVar27;
  lVar3 = (longlong)iVar17 * (longlong)iVar31 +
          (longlong)iVar14 * (longlong)iVar26 + (longlong)iVar7 * (longlong)iVar27;
  local_58 = (uint)lVar2;
  iStack_54 = (int)((ulonglong)lVar2 >> 0x20);
  lVar2 = (longlong)iVar9 * (longlong)iVar32 +
          (longlong)iVar21 * (longlong)iVar24 + (longlong)iVar12 * (longlong)iVar20;
  lVar4 = (longlong)iVar9 * (longlong)iVar31 +
          (longlong)iVar21 * (longlong)iVar26 + (longlong)iVar12 * (longlong)iVar27;
  local_80 = (uint)lVar1;
  iStack_7c = (int)((ulonglong)lVar1 >> 0x20);
  param_1[5] = local_80 >> 0xc | iStack_7c << 0x14;
  lVar1 = (longlong)iVar8 * (longlong)iVar32 +
          (longlong)iVar29 * (longlong)iVar24 + (longlong)iVar28 * (longlong)iVar20;
  lVar5 = (longlong)iVar17 * (longlong)iVar32 +
          (longlong)iVar14 * (longlong)iVar24 + (longlong)iVar7 * (longlong)iVar20;
  local_90 = (uint)lVar4;
  iStack_8c = (int)((ulonglong)lVar4 >> 0x20);
  local_60 = (uint)lVar3;
  iStack_5c = (int)((ulonglong)lVar3 >> 0x20);
  local_88 = (uint)lVar1;
  iStack_84 = (int)((ulonglong)lVar1 >> 0x20);
  param_1[6] = local_60 >> 0xc | iStack_5c << 0x14;
  param_1[7] = local_90 >> 0xc | iStack_8c << 0x14;
  param_1[8] = local_58 >> 0xc | iStack_54 << 0x14;
  param_1[0xc] = uVar18;
  param_1[9] = local_88 >> 0xc | iStack_84 << 0x14;
  param_1[0xd] = uVar19;
  param_1[0xe] = uVar25;
  param_1[10] = (uint)lVar5 >> 0xc | (int)((ulonglong)lVar5 >> 0x20) << 0x14;
  param_1[0xb] = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  return;
}


