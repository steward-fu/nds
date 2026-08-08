/*
 * Ghidra decompilation
 *
 * Function : render_polygon_depth_compare_less_than_constant_asm
 * Address  : 0019a1e0
 * Program  : drastic64
 */


char * render_polygon_depth_compare_less_than_constant_asm
                 (char *param_1,undefined4 param_2,ulong *param_3,int param_4,uint *param_5)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  ulong uVar8;
  uint *puVar9;
  ulong *puVar14;
  int iVar15;
  int iVar16;
  char cVar17;
  undefined2 uVar18;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined auVar19 [16];
  undefined auVar23 [16];
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined8 uVar24;
  ushort uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  uint *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  
  uVar32 = 0;
  puVar14 = param_3 + 4;
  auVar19._4_4_ = param_2;
  auVar19._0_4_ = param_2;
  auVar19._8_4_ = param_2;
  auVar19._12_4_ = param_2;
  auVar4._8_4_ = *(uint *)(param_3 + 1) & 0xffffff;
  auVar4._0_8_ = *param_3 & 0xffffff00ffffff;
  auVar4._12_4_ = *(uint *)((long)param_3 + 0xc) & 0xffffff;
  auVar19 = NEON_cmhi(auVar4,auVar19,4);
  auVar23._4_4_ = param_2;
  auVar23._0_4_ = param_2;
  auVar23._8_4_ = param_2;
  auVar23._12_4_ = param_2;
  auVar6._8_4_ = *(uint *)(param_3 + 3) & 0xffffff;
  auVar6._0_8_ = param_3[2] & 0xffffff00ffffff;
  auVar6._12_4_ = *(uint *)((long)param_3 + 0x1c) & 0xffffff;
  auVar23 = NEON_cmhi(auVar6,auVar23,4);
  uVar18 = auVar19._0_2_;
  uVar20 = auVar19._4_2_;
  uVar21 = auVar19._8_2_;
  uVar22 = auVar19._12_2_;
  cVar25 = auVar19[0];
  cVar27 = auVar19[4];
  cVar29 = auVar19[8];
  cVar17 = auVar19[12];
  uVar24 = CONCAT26(auVar23._12_2_,CONCAT24(auVar23._8_2_,CONCAT22(auVar23._4_2_,auVar23._0_2_)));
  iVar16 = param_4 + -8;
  iVar15 = iVar16;
  if (iVar16 != 0 && 7 < param_4) {
    do {
      uVar8 = *puVar14;
      puVar11 = puVar14 + 1;
      puVar9 = (uint *)((long)puVar14 + 0xc);
      puVar12 = puVar14 + 2;
      puVar13 = puVar14 + 3;
      puVar10 = (uint *)((long)puVar14 + 0x1c);
      puVar14 = puVar14 + 4;
      cVar25 = (char)((ulong)uVar24 >> 0x10);
      cVar27 = (char)((ulong)uVar24 >> 0x20);
      cVar29 = (char)((ulong)uVar24 >> 0x30);
      uVar32 = CONCAT17((char)((ulong)uVar32 >> 0x38) - cVar29,
                        CONCAT16((char)((ulong)uVar32 >> 0x30) - cVar27,
                                 CONCAT15((char)((ulong)uVar32 >> 0x28) - cVar25,
                                          CONCAT14((char)((ulong)uVar32 >> 0x20) - (char)uVar24,
                                                   CONCAT13((char)((ulong)uVar32 >> 0x18) -
                                                            (char)uVar22,
                                                            CONCAT12((char)((ulong)uVar32 >> 0x10) -
                                                                     (char)uVar21,
                                                                     CONCAT11((char)((ulong)uVar32
                                                                                    >> 8) -
                                                                              (char)uVar20,
                                                                              (char)uVar32 -
                                                                              (char)uVar18)))))));
      auVar2._4_4_ = param_2;
      auVar2._0_4_ = param_2;
      auVar2._8_4_ = param_2;
      auVar2._12_4_ = param_2;
      auVar5._8_4_ = *(uint *)puVar11 & 0xffffff;
      auVar5._0_8_ = uVar8 & 0xffffff00ffffff;
      auVar5._12_4_ = *puVar9 & 0xffffff;
      auVar19 = NEON_cmhi(auVar5,auVar2,4);
      auVar3._4_4_ = param_2;
      auVar3._0_4_ = param_2;
      auVar3._8_4_ = param_2;
      auVar3._12_4_ = param_2;
      auVar7._8_4_ = *(uint *)puVar13 & 0xffffff;
      auVar7._0_8_ = *puVar12 & 0xffffff00ffffff;
      auVar7._12_4_ = *puVar10 & 0xffffff;
      auVar23 = NEON_cmhi(auVar7,auVar3,4);
      *param_1 = (char)uVar18;
      param_1[1] = (char)uVar20;
      param_1[2] = (char)uVar21;
      param_1[3] = (char)uVar22;
      param_1[4] = (char)uVar24;
      param_1[5] = cVar25;
      param_1[6] = cVar27;
      param_1[7] = cVar29;
      param_1 = param_1 + 8;
      uVar18 = auVar19._0_2_;
      uVar20 = auVar19._4_2_;
      uVar21 = auVar19._8_2_;
      uVar22 = auVar19._12_2_;
      cVar25 = auVar19[0];
      cVar27 = auVar19[4];
      cVar29 = auVar19[8];
      cVar17 = auVar19[12];
      uVar24 = CONCAT26(auVar23._12_2_,CONCAT24(auVar23._8_2_,CONCAT22(auVar23._4_2_,auVar23._0_2_))
                       );
      iVar16 = iVar15 + -8;
      bVar1 = 7 < iVar15;
      iVar15 = iVar16;
    } while (iVar16 != 0 && bVar1);
  }
  cVar26 = (char)((ulong)uVar24 >> 0x10);
  cVar28 = (char)((ulong)uVar24 >> 0x20);
  cVar30 = (char)((ulong)uVar24 >> 0x30);
  uVar33 = NEON_ushl(CONCAT17(cVar30,CONCAT16(cVar28,CONCAT15(cVar26,CONCAT14((char)uVar24,
                                                                              CONCAT13(cVar17,
                                                  CONCAT12(cVar29,CONCAT11(cVar27,cVar25))))))),
                     CONCAT44(iVar16 * -8,iVar16 * -8));
  *param_1 = cVar25;
  param_1[1] = cVar27;
  param_1[2] = cVar29;
  param_1[3] = cVar17;
  param_1[4] = (char)uVar24;
  param_1[5] = cVar26;
  param_1[6] = cVar28;
  param_1[7] = cVar30;
  uVar31 = NEON_uaddlv(CONCAT17((char)((ulong)uVar32 >> 0x38) - (char)((ulong)uVar33 >> 0x38),
                                CONCAT16((char)((ulong)uVar32 >> 0x30) -
                                         (char)((ulong)uVar33 >> 0x30),
                                         CONCAT15((char)((ulong)uVar32 >> 0x28) -
                                                  (char)((ulong)uVar33 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar32 >> 0x20) -
                                                           (char)((ulong)uVar33 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar32 >> 0x18) -
                                                                    (char)((ulong)uVar33 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar32 >>
                                                                                   0x10) -
                                                                             (char)((ulong)uVar33 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar32 >> 8) - (char)((ulong)uVar33 >> 8),
                                                  (char)uVar32 - (char)uVar33))))))),1);
  *param_5 = (uint)uVar31;
  return param_1 + 8;
}


