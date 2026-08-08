/*
 * Ghidra decompilation
 *
 * Function : geometry_transform_vertex_block_asm
 * Address  : 0019dda0
 * Program  : drastic64
 */


void geometry_transform_vertex_block_asm(undefined (*param_1) [16])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [16];
  undefined (*pauVar11) [16];
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined auVar48 [16];
  ulong uVar49;
  undefined auVar50 [16];
  ulong uVar51;
  undefined auVar52 [16];
  ulong uVar53;
  undefined auVar54 [16];
  ulong uVar55;
  undefined auVar56 [16];
  ulong uVar57;
  undefined auVar58 [16];
  undefined auVar59 [16];
  
  iVar8 = *(int *)param_1[0x30];
  pauVar9 = param_1 + 0x10;
  pauVar10 = param_1 + 0x20;
  if (iVar8 != 0) {
    iVar31 = *(int *)(param_1[0x97e] + 4);
    iVar32 = *(int *)(param_1[0x97e] + 8);
    iVar33 = *(int *)(param_1[0x97e] + 0xc);
    iVar34 = *(int *)param_1[0x97f];
    iVar35 = *(int *)(param_1[0x97f] + 4);
    iVar36 = *(int *)(param_1[0x97f] + 8);
    iVar37 = *(int *)(param_1[0x97f] + 0xc);
    iVar38 = *(int *)param_1[0x980];
    iVar39 = *(int *)(param_1[0x980] + 4);
    iVar40 = *(int *)(param_1[0x980] + 8);
    iVar41 = *(int *)(param_1[0x980] + 0xc);
    iVar42 = *(int *)param_1[0x981];
    pauVar11 = param_1 + (ulong)*(uint *)param_1[0x33] + 0x65;
    puVar12 = (undefined4 *)(param_1[0x129] + *(uint *)param_1[0x33]);
    lVar43 = (ulong)*(uint *)(param_1[0x981] + 4) * 0x1000;
    lVar44 = (ulong)*(uint *)(param_1[0x981] + 8) * 0x1000;
    lVar45 = (*(ulong *)(param_1[0x981] + 0xc) & 0xffffffff) * 0x1000;
    lVar46 = (*(ulong *)(param_1[0x981] + 0xc) >> 0x20) * 0x1000;
    do {
      auVar48 = *param_1;
      param_1 = param_1 + 1;
      auVar50 = *pauVar10;
      pauVar10 = pauVar10 + 1;
      auVar52 = *pauVar9;
      pauVar9 = pauVar9 + 1;
      iVar17 = auVar48._0_4_;
      iVar18 = auVar48._4_4_;
      iVar19 = auVar52._0_4_;
      iVar20 = auVar52._4_4_;
      iVar21 = auVar50._0_4_;
      iVar22 = auVar50._4_4_;
      uVar13 = (undefined4)
               ((ulong)(lVar46 + (long)iVar17 * (long)iVar34 + (long)iVar19 * (long)iVar38 +
                       (long)iVar21 * (long)iVar42) >> 0xc);
      uVar23 = (undefined4)
               ((ulong)(lVar46 + (long)iVar18 * (long)iVar34 + (long)iVar20 * (long)iVar38 +
                       (long)iVar22 * (long)iVar42) >> 0xc);
      uVar14 = (undefined4)
               ((ulong)(lVar43 + (long)iVar17 * (long)iVar31 + (long)iVar19 * (long)iVar35 +
                       (long)iVar21 * (long)iVar39) >> 0xc);
      uVar24 = (undefined4)
               ((ulong)(lVar43 + (long)iVar18 * (long)iVar31 + (long)iVar20 * (long)iVar35 +
                       (long)iVar22 * (long)iVar39) >> 0xc);
      uVar15 = (undefined4)
               ((ulong)(lVar44 + (long)iVar17 * (long)iVar32 + (long)iVar19 * (long)iVar36 +
                       (long)iVar21 * (long)iVar40) >> 0xc);
      uVar25 = (undefined4)
               ((ulong)(lVar44 + (long)iVar18 * (long)iVar32 + (long)iVar20 * (long)iVar36 +
                       (long)iVar22 * (long)iVar40) >> 0xc);
      uVar16 = (undefined4)
               ((ulong)(lVar45 + (long)iVar17 * (long)iVar33 + (long)iVar19 * (long)iVar37 +
                       (long)iVar21 * (long)iVar41) >> 0xc);
      uVar26 = (undefined4)
               ((ulong)(lVar45 + (long)iVar18 * (long)iVar33 + (long)iVar20 * (long)iVar37 +
                       (long)iVar22 * (long)iVar41) >> 0xc);
      iVar17 = auVar48._8_4_;
      iVar20 = auVar48._12_4_;
      iVar18 = auVar52._8_4_;
      iVar21 = auVar52._12_4_;
      iVar19 = auVar50._8_4_;
      iVar22 = auVar50._12_4_;
      uVar4 = (undefined4)
              ((ulong)(lVar46 + (long)iVar17 * (long)iVar34 + (long)iVar18 * (long)iVar38 +
                      (long)iVar19 * (long)iVar42) >> 0xc);
      uVar27 = (undefined4)
               ((ulong)(lVar46 + (long)iVar20 * (long)iVar34 + (long)iVar21 * (long)iVar38 +
                       (long)iVar22 * (long)iVar42) >> 0xc);
      uVar5 = (undefined4)
              ((ulong)(lVar43 + (long)iVar17 * (long)iVar31 + (long)iVar18 * (long)iVar35 +
                      (long)iVar19 * (long)iVar39) >> 0xc);
      uVar28 = (undefined4)
               ((ulong)(lVar43 + (long)iVar20 * (long)iVar31 + (long)iVar21 * (long)iVar35 +
                       (long)iVar22 * (long)iVar39) >> 0xc);
      uVar6 = (undefined4)
              ((ulong)(lVar44 + (long)iVar17 * (long)iVar32 + (long)iVar18 * (long)iVar36 +
                      (long)iVar19 * (long)iVar40) >> 0xc);
      uVar29 = (undefined4)
               ((ulong)(lVar44 + (long)iVar20 * (long)iVar32 + (long)iVar21 * (long)iVar36 +
                       (long)iVar22 * (long)iVar40) >> 0xc);
      uVar7 = (undefined4)
              ((ulong)(lVar45 + (long)iVar17 * (long)iVar33 + (long)iVar18 * (long)iVar37 +
                      (long)iVar19 * (long)iVar41) >> 0xc);
      uVar30 = (undefined4)
               ((ulong)(lVar45 + (long)iVar20 * (long)iVar33 + (long)iVar21 * (long)iVar37 +
                       (long)iVar22 * (long)iVar41) >> 0xc);
      auVar59._4_4_ = uVar23;
      auVar59._0_4_ = uVar13;
      auVar59._8_4_ = uVar4;
      auVar59._12_4_ = uVar27;
      auVar59 = NEON_neg(auVar59,4);
      auVar48._4_4_ = uVar24;
      auVar48._0_4_ = uVar14;
      auVar48._8_4_ = uVar5;
      auVar48._12_4_ = uVar28;
      auVar1._4_4_ = uVar23;
      auVar1._0_4_ = uVar13;
      auVar1._8_4_ = uVar4;
      auVar1._12_4_ = uVar27;
      auVar48 = NEON_cmgt(auVar48,auVar1,4);
      auVar50._4_4_ = uVar24;
      auVar50._0_4_ = uVar14;
      auVar50._8_4_ = uVar5;
      auVar50._12_4_ = uVar28;
      auVar50 = NEON_cmgt(auVar59,auVar50,4);
      *(undefined4 *)*pauVar11 = uVar14;
      *(undefined4 *)(*pauVar11 + 4) = uVar15;
      *(undefined4 *)(*pauVar11 + 8) = uVar16;
      *(undefined4 *)(*pauVar11 + 0xc) = uVar13;
      *(undefined4 *)pauVar11[1] = uVar24;
      *(undefined4 *)(pauVar11[1] + 4) = uVar25;
      *(undefined4 *)(pauVar11[1] + 8) = uVar26;
      *(undefined4 *)(pauVar11[1] + 0xc) = uVar23;
      *(undefined4 *)pauVar11[2] = uVar5;
      *(undefined4 *)(pauVar11[2] + 4) = uVar6;
      *(undefined4 *)(pauVar11[2] + 8) = uVar7;
      *(undefined4 *)(pauVar11[2] + 0xc) = uVar4;
      *(undefined4 *)pauVar11[3] = uVar28;
      *(undefined4 *)(pauVar11[3] + 4) = uVar29;
      *(undefined4 *)(pauVar11[3] + 8) = uVar30;
      *(undefined4 *)(pauVar11[3] + 0xc) = uVar27;
      pauVar11 = pauVar11 + 4;
      auVar52._4_4_ = uVar25;
      auVar52._0_4_ = uVar15;
      auVar52._8_4_ = uVar6;
      auVar52._12_4_ = uVar29;
      auVar2._4_4_ = uVar23;
      auVar2._0_4_ = uVar13;
      auVar2._8_4_ = uVar4;
      auVar2._12_4_ = uVar27;
      auVar52 = NEON_cmgt(auVar52,auVar2,4);
      auVar54._4_4_ = uVar25;
      auVar54._0_4_ = uVar15;
      auVar54._8_4_ = uVar6;
      auVar54._12_4_ = uVar29;
      auVar54 = NEON_cmgt(auVar59,auVar54,4);
      auVar56._4_4_ = uVar26;
      auVar56._0_4_ = uVar16;
      auVar56._8_4_ = uVar7;
      auVar56._12_4_ = uVar30;
      auVar3._4_4_ = uVar23;
      auVar3._0_4_ = uVar13;
      auVar3._8_4_ = uVar4;
      auVar3._12_4_ = uVar27;
      auVar56 = NEON_cmgt(auVar56,auVar3,4);
      auVar58._4_4_ = uVar26;
      auVar58._0_4_ = uVar16;
      auVar58._8_4_ = uVar7;
      auVar58._12_4_ = uVar30;
      auVar58 = NEON_cmgt(auVar59,auVar58,4);
      uVar47 = (ulong)CONCAT24(auVar48._4_2_,(uint)(auVar48._0_2_ & 0xff01)) & 0xff01ff01ffffffff;
      uVar49 = (ulong)CONCAT24(auVar50._4_2_,(uint)(auVar50._0_2_ & 0xff02)) & 0xff02ff02ffffffff;
      uVar51 = (ulong)CONCAT24(auVar52._4_2_,(uint)(auVar52._0_2_ & 0xff04)) & 0xff04ff04ffffffff;
      uVar53 = (ulong)CONCAT24(auVar54._4_2_,(uint)(auVar54._0_2_ & 0xff08)) & 0xff08ff08ffffffff;
      uVar55 = (ulong)CONCAT24(auVar56._4_2_,(uint)(auVar56._0_2_ & 0xff10)) & 0xff10ff10ffffffff;
      uVar57 = (ulong)CONCAT24(auVar58._4_2_,(uint)(auVar58._0_2_ & 0xff20)) & 0xff20ff20ffffffff;
      *puVar12 = CONCAT13(auVar48[12] & 1 | auVar50[12] & 2 | auVar52[12] & 4 | auVar54[12] & 8 |
                          auVar56[12] & 0x10 | auVar58[12] & 0x20,
                          CONCAT12(auVar48[8] & 1 | auVar50[8] & 2 | auVar52[8] & 4 | auVar54[8] & 8
                                   | auVar56[8] & 0x10 | auVar58[8] & 0x20,
                                   CONCAT11((byte)(uVar47 >> 0x20) | (byte)(uVar49 >> 0x20) |
                                            (byte)(uVar51 >> 0x20) | (byte)(uVar53 >> 0x20) |
                                            (byte)(uVar55 >> 0x20) | (byte)(uVar57 >> 0x20),
                                            (byte)uVar47 | (byte)uVar49 |
                                            (byte)uVar51 | (byte)uVar53 |
                                            (byte)uVar55 | (byte)uVar57)));
      puVar12 = puVar12 + 1;
      iVar8 = iVar8 + -4;
    } while (-1 < iVar8);
  }
  return;
}


