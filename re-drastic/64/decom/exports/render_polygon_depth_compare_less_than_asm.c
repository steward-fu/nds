/*
 * Ghidra decompilation
 *
 * Function : render_polygon_depth_compare_less_than_asm
 * Address  : 0019a150
 * Program  : drastic64
 */


char * render_polygon_depth_compare_less_than_asm
                 (char *param_1,undefined (*param_2) [16],ulong *param_3,int param_4,uint *param_5)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  ulong uVar4;
  uint *puVar5;
  undefined (*pauVar10) [16];
  undefined (*pauVar11) [16];
  ulong *puVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  undefined2 uVar16;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined auVar17 [16];
  undefined auVar21 [16];
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined8 uVar22;
  ushort uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  uint *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  
  uVar30 = 0;
  puVar12 = param_3 + 4;
  pauVar11 = param_2 + 2;
  auVar17._8_4_ = *(uint *)(param_3 + 1) & 0xffffff;
  auVar17._0_8_ = *param_3 & 0xffffff00ffffff;
  auVar17._12_4_ = *(uint *)((long)param_3 + 0xc) & 0xffffff;
  auVar17 = NEON_cmhi(auVar17,*param_2,4);
  auVar21._8_4_ = *(uint *)(param_3 + 3) & 0xffffff;
  auVar21._0_8_ = param_3[2] & 0xffffff00ffffff;
  auVar21._12_4_ = *(uint *)((long)param_3 + 0x1c) & 0xffffff;
  auVar21 = NEON_cmhi(auVar21,param_2[1],4);
  uVar16 = auVar17._0_2_;
  uVar18 = auVar17._4_2_;
  uVar19 = auVar17._8_2_;
  uVar20 = auVar17._12_2_;
  cVar23 = auVar17[0];
  cVar25 = auVar17[4];
  cVar27 = auVar17[8];
  cVar15 = auVar17[12];
  uVar22 = CONCAT26(auVar21._12_2_,CONCAT24(auVar21._8_2_,CONCAT22(auVar21._4_2_,auVar21._0_2_)));
  iVar14 = param_4 + -8;
  iVar13 = iVar14;
  if (iVar14 != 0 && 7 < param_4) {
    do {
      uVar4 = *puVar12;
      puVar7 = puVar12 + 1;
      puVar5 = (uint *)((long)puVar12 + 0xc);
      puVar8 = puVar12 + 2;
      puVar9 = puVar12 + 3;
      puVar6 = (uint *)((long)puVar12 + 0x1c);
      puVar12 = puVar12 + 4;
      auVar17 = *pauVar11;
      pauVar10 = pauVar11 + 1;
      pauVar11 = pauVar11 + 2;
      cVar23 = (char)((ulong)uVar22 >> 0x10);
      cVar25 = (char)((ulong)uVar22 >> 0x20);
      cVar27 = (char)((ulong)uVar22 >> 0x30);
      uVar30 = CONCAT17((char)((ulong)uVar30 >> 0x38) - cVar27,
                        CONCAT16((char)((ulong)uVar30 >> 0x30) - cVar25,
                                 CONCAT15((char)((ulong)uVar30 >> 0x28) - cVar23,
                                          CONCAT14((char)((ulong)uVar30 >> 0x20) - (char)uVar22,
                                                   CONCAT13((char)((ulong)uVar30 >> 0x18) -
                                                            (char)uVar20,
                                                            CONCAT12((char)((ulong)uVar30 >> 0x10) -
                                                                     (char)uVar19,
                                                                     CONCAT11((char)((ulong)uVar30
                                                                                    >> 8) -
                                                                              (char)uVar18,
                                                                              (char)uVar30 -
                                                                              (char)uVar16)))))));
      auVar2._8_4_ = *(uint *)puVar7 & 0xffffff;
      auVar2._0_8_ = uVar4 & 0xffffff00ffffff;
      auVar2._12_4_ = *puVar5 & 0xffffff;
      auVar17 = NEON_cmhi(auVar2,auVar17,4);
      auVar3._8_4_ = *(uint *)puVar9 & 0xffffff;
      auVar3._0_8_ = *puVar8 & 0xffffff00ffffff;
      auVar3._12_4_ = *puVar6 & 0xffffff;
      auVar21 = NEON_cmhi(auVar3,*pauVar10,4);
      *param_1 = (char)uVar16;
      param_1[1] = (char)uVar18;
      param_1[2] = (char)uVar19;
      param_1[3] = (char)uVar20;
      param_1[4] = (char)uVar22;
      param_1[5] = cVar23;
      param_1[6] = cVar25;
      param_1[7] = cVar27;
      param_1 = param_1 + 8;
      uVar16 = auVar17._0_2_;
      uVar18 = auVar17._4_2_;
      uVar19 = auVar17._8_2_;
      uVar20 = auVar17._12_2_;
      cVar23 = auVar17[0];
      cVar25 = auVar17[4];
      cVar27 = auVar17[8];
      cVar15 = auVar17[12];
      uVar22 = CONCAT26(auVar21._12_2_,CONCAT24(auVar21._8_2_,CONCAT22(auVar21._4_2_,auVar21._0_2_))
                       );
      iVar14 = iVar13 + -8;
      bVar1 = 7 < iVar13;
      iVar13 = iVar14;
    } while (iVar14 != 0 && bVar1);
  }
  cVar24 = (char)((ulong)uVar22 >> 0x10);
  cVar26 = (char)((ulong)uVar22 >> 0x20);
  cVar28 = (char)((ulong)uVar22 >> 0x30);
  uVar31 = NEON_ushl(CONCAT17(cVar28,CONCAT16(cVar26,CONCAT15(cVar24,CONCAT14((char)uVar22,
                                                                              CONCAT13(cVar15,
                                                  CONCAT12(cVar27,CONCAT11(cVar25,cVar23))))))),
                     CONCAT44(iVar14 * -8,iVar14 * -8));
  *param_1 = cVar23;
  param_1[1] = cVar25;
  param_1[2] = cVar27;
  param_1[3] = cVar15;
  param_1[4] = (char)uVar22;
  param_1[5] = cVar24;
  param_1[6] = cVar26;
  param_1[7] = cVar28;
  uVar29 = NEON_uaddlv(CONCAT17((char)((ulong)uVar30 >> 0x38) - (char)((ulong)uVar31 >> 0x38),
                                CONCAT16((char)((ulong)uVar30 >> 0x30) -
                                         (char)((ulong)uVar31 >> 0x30),
                                         CONCAT15((char)((ulong)uVar30 >> 0x28) -
                                                  (char)((ulong)uVar31 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar30 >> 0x20) -
                                                           (char)((ulong)uVar31 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar30 >> 0x18) -
                                                                    (char)((ulong)uVar31 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar30 >>
                                                                                   0x10) -
                                                                             (char)((ulong)uVar31 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar30 >> 8) - (char)((ulong)uVar31 >> 8),
                                                  (char)uVar30 - (char)uVar31))))))),1);
  *param_5 = (uint)uVar29;
  return param_1 + 8;
}


