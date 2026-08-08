/*
 * Ghidra decompilation
 *
 * Function : FUN_0802d4cc
 * Address  : 0802d4cc
 * Program  : drastic16
 */


void FUN_0802d4cc(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [32];
  byte bVar4;
  ushort uVar5;
  short sVar6;
  bool bVar7;
  bool bVar8;
  undefined2 *puVar9;
  uint uVar10;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar11;
  uint extraout_r1_01;
  undefined2 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  bool bVar30;
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  int local_6c;
  
  uVar5 = *(ushort *)(param_1 + 0x88);
  uVar10 = ((uint)uVar5 << 0x18) >> 0x1c;
  uVar26 = uVar5 & 0xf;
  if (uVar10 == 0) {
    local_6c = 0;
  }
  else {
    __aeabi_uidivmod(param_4,uVar10 + 1);
    local_6c = extraout_r1;
  }
  if (*(char *)(param_1 + 0x92) == '\0') {
    return;
  }
  uVar10 = uVar26 + 1;
  uVar28 = 0;
LAB_0802d5cc:
  bVar4 = *(byte *)(param_1 + 0x6c + uVar28);
  iVar17 = (int)(short)(ushort)bVar4;
  puVar20 = (uint *)(param_3 + iVar17 * 0x20);
  iVar16 = param_1 + 0x98 + iVar17 * 0x88;
  iVar14 = (uint)bVar4 * 0x220 + 0x10;
  iVar27 = param_2 + iVar14;
  if ((*(ushort *)(iVar16 + 0x70) & 0x40) == 0) {
    (**(code **)(iVar16 + 0x10))(iVar16,iVar27,puVar20,param_4);
  }
  else {
    iVar23 = *(int *)(iVar16 + 0x68);
    iVar22 = *(int *)(iVar16 + 0x6c);
    sVar6 = *(short *)(iVar16 + 0x74);
    *(int *)(iVar16 + 0x68) = iVar23 - *(short *)(iVar16 + 0x7a) * local_6c;
    *(short *)(iVar16 + 0x74) = sVar6 - (short)local_6c;
    *(int *)(iVar16 + 0x6c) = iVar22 - *(short *)(iVar16 + 0x7c) * local_6c;
    (**(code **)(iVar16 + 0x10))(iVar16,iVar27,puVar20,param_4);
    *(short *)(iVar16 + 0x74) = sVar6;
    *(int *)(iVar16 + 0x68) = iVar23;
    *(int *)(iVar16 + 0x6c) = iVar22;
    if ((uVar5 & 0xf) != 0) {
      __aeabi_idivmod(0x20,uVar10);
      auVar32 = SIMDExpandImmediate(0,0,4);
      auVar31 = ZEXT816(0);
      uVar13 = *(uint *)(&DAT_080e6840 + uVar26 * 4);
      uVar18 = uVar13 & *(uint *)(param_3 + iVar17 * 0x20);
      uVar11 = 0;
      uVar19 = uVar18;
      puVar21 = puVar20;
      puVar25 = puVar20 + 1;
      uVar29 = uVar10;
LAB_0802d678:
      do {
        puVar24 = puVar25;
        __aeabi_uidivmod(uVar11 + (uVar10 - extraout_r1_00),uVar10);
        if ((uVar5 & 0xf) != 0) {
          uVar11 = 0;
          do {
            uVar11 = uVar11 + 1;
            uVar18 = uVar18 << 1;
            uVar19 = uVar19 | uVar18;
          } while (uVar11 < uVar26);
        }
        *puVar21 = uVar19;
        uVar1 = uVar19 >> 0x1f;
        if (puVar24 == puVar20 + 8) goto LAB_0802d788;
        puVar25 = puVar24 + 1;
        uVar18 = *puVar24 & uVar13 << (extraout_r1_01 & 0xff);
        uVar11 = extraout_r1_01;
        uVar19 = uVar18;
        puVar21 = puVar24;
        if (extraout_r1_01 != 0) {
          bVar30 = extraout_r1_01 >> 2 == 0;
          bVar8 = extraout_r1_01 == 5;
          bVar7 = extraout_r1_01 < 5;
          uVar15 = extraout_r1_01 & 0xfffffffc;
          if ((bVar30 || !bVar7) && (!bVar30 && !bVar8)) {
            uVar29 = 0;
          }
          if (!bVar30 && bVar7 || (bVar30 || bVar8)) {
            uVar29 = 1;
          }
          if (!bVar30 && bVar7 || (bVar30 || bVar8)) {
            uVar15 = 0;
          }
          else {
            auVar33 = ZEXT816(0);
            auVar2._4_4_ = uVar1;
            auVar2._0_4_ = uVar1;
            auVar2._8_8_ = 0;
            auVar34._8_8_ = 0x300000002;
            auVar34._0_8_ = 0x100000000;
            do {
              auVar35 = VectorShiftLeft(auVar2 & auVar2 << 0x40,auVar34,4,0);
              uVar29 = uVar29 + 1;
              auVar34 = VectorAdd(auVar34,auVar32,4);
              auVar33 = auVar33 | auVar35;
            } while (uVar29 < extraout_r1_01 >> 2);
            auVar3._16_16_ = auVar31;
            auVar3._0_16_ = auVar33;
            auVar33 = auVar3._8_16_ | auVar33;
            uVar19 = auVar33._4_4_ | auVar33._0_4_ | uVar18;
            if (uVar15 == extraout_r1_01) goto LAB_0802d678;
          }
          uVar19 = uVar19 | uVar1 << (uVar15 & 0xff);
          if (uVar15 + 1 < extraout_r1_01) {
            uVar29 = uVar15 + 2;
            uVar19 = uVar19 | uVar1 << (uVar15 + 1 & 0xff);
            if (uVar29 < extraout_r1_01) {
              uVar19 = uVar19 | uVar1 << (uVar29 & 0xff);
              if (uVar15 + 3 < extraout_r1_01) {
                uVar19 = uVar19 | uVar1 << (uVar15 + 3 & 0xff);
                if (uVar15 + 4 < extraout_r1_01) {
                  uVar19 = uVar19 | uVar1 << (uVar15 + 4 & 0xff);
                }
              }
            }
          }
        }
      } while( true );
    }
  }
  goto LAB_0802d5b8;
LAB_0802d788:
  uVar18 = 1;
  uVar12 = *(undefined2 *)(param_2 + iVar14);
  do {
    puVar9 = (undefined2 *)(iVar27 + uVar18 * 2);
    uVar11 = uVar18 + 1;
    *(undefined2 *)(iVar27 + uVar18 * 2) = uVar12;
    if ((uVar5 & 0xf) != 0 && uVar26 != 1) {
      uVar19 = uVar11;
      do {
        uVar11 = uVar19 + 1;
        if (0xff < uVar19) goto LAB_0802d5b8;
        puVar9 = puVar9 + 1;
        *puVar9 = uVar12;
        uVar19 = uVar11;
      } while (uVar11 != uVar18 + uVar26);
    }
    uVar18 = uVar11 + 1;
    uVar12 = *(undefined2 *)(iVar27 + uVar11 * 2);
  } while (uVar18 < 0x100);
LAB_0802d5b8:
  uVar28 = uVar28 + 1;
  if (*(byte *)(param_1 + 0x92) <= uVar28) {
    return;
  }
  goto LAB_0802d5cc;
}


