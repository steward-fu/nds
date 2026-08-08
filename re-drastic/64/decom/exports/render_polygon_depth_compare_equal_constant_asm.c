/*
 * Ghidra decompilation
 *
 * Function : render_polygon_depth_compare_equal_constant_asm
 * Address  : 0019a0a0
 * Program  : drastic64
 */


char * render_polygon_depth_compare_equal_constant_asm
                 (char *param_1,int param_2,uint *param_3,int param_4,uint *param_5)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  ushort uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  uint *puVar9;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined auVar27 [16];
  undefined auVar28 [16];
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  undefined8 uVar37;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  
  cVar29 = '\0';
  cVar30 = '\0';
  cVar31 = '\0';
  cVar32 = '\0';
  cVar33 = '\0';
  cVar34 = '\0';
  cVar35 = '\0';
  cVar36 = '\0';
  iVar17 = param_4 + -8;
  iVar16 = iVar17;
  if (iVar17 != 0 && 7 < param_4) {
    do {
      uVar18 = *param_3;
      puVar9 = param_3 + 1;
      puVar10 = param_3 + 2;
      puVar11 = param_3 + 3;
      puVar12 = param_3 + 4;
      puVar13 = param_3 + 5;
      puVar14 = param_3 + 6;
      puVar15 = param_3 + 7;
      param_3 = param_3 + 8;
      uVar19 = MP_INT_ABS(param_2 - (uVar18 & 0xffffff));
      uVar20 = MP_INT_ABS(param_2 - (*puVar9 & 0xffffff));
      uVar21 = MP_INT_ABS(param_2 - (*puVar10 & 0xffffff));
      uVar22 = MP_INT_ABS(param_2 - (*puVar11 & 0xffffff));
      uVar23 = MP_INT_ABS(param_2 - (*puVar12 & 0xffffff));
      uVar24 = MP_INT_ABS(param_2 - (*puVar13 & 0xffffff));
      uVar25 = MP_INT_ABS(param_2 - (*puVar14 & 0xffffff));
      uVar26 = MP_INT_ABS(param_2 - (*puVar15 & 0xffffff));
      auVar27._4_4_ = uVar20;
      auVar27._0_4_ = uVar19;
      auVar27._8_4_ = uVar21;
      auVar27._12_4_ = uVar22;
      auVar5._8_4_ = 0x100;
      auVar5._0_8_ = 0x10000000100;
      auVar5._12_4_ = 0x100;
      auVar27 = NEON_cmhi(auVar5,auVar27,4);
      auVar28._4_4_ = uVar24;
      auVar28._0_4_ = uVar23;
      auVar28._8_4_ = uVar25;
      auVar28._12_4_ = uVar26;
      auVar6._8_4_ = 0x100;
      auVar6._0_8_ = 0x10000000100;
      auVar6._12_4_ = 0x100;
      auVar28 = NEON_cmhi(auVar6,auVar28,4);
      cVar29 = cVar29 - auVar27[0];
      cVar30 = cVar30 - auVar27[4];
      cVar31 = cVar31 - auVar27[8];
      cVar32 = cVar32 - auVar27[12];
      cVar33 = cVar33 - auVar28[0];
      cVar34 = cVar34 - auVar28[4];
      cVar35 = cVar35 - auVar28[8];
      cVar36 = cVar36 - auVar28[12];
      *param_1 = auVar27[0];
      param_1[1] = auVar27[4];
      param_1[2] = auVar27[8];
      param_1[3] = auVar27[12];
      param_1[4] = auVar28[0];
      param_1[5] = auVar28[4];
      param_1[6] = auVar28[8];
      param_1[7] = auVar28[12];
      param_1 = param_1 + 8;
      iVar17 = iVar16 + -8;
      bVar1 = 7 < iVar16;
      iVar16 = iVar17;
    } while (iVar17 != 0 && bVar1);
  }
  uVar19 = MP_INT_ABS(param_2 - (*param_3 & 0xffffff));
  uVar20 = MP_INT_ABS(param_2 - (param_3[1] & 0xffffff));
  uVar21 = MP_INT_ABS(param_2 - (param_3[2] & 0xffffff));
  uVar22 = MP_INT_ABS(param_2 - (param_3[3] & 0xffffff));
  uVar23 = MP_INT_ABS(param_2 - (param_3[4] & 0xffffff));
  uVar24 = MP_INT_ABS(param_2 - (param_3[5] & 0xffffff));
  uVar25 = MP_INT_ABS(param_2 - (param_3[6] & 0xffffff));
  uVar26 = MP_INT_ABS(param_2 - (param_3[7] & 0xffffff));
  auVar2._4_4_ = uVar20;
  auVar2._0_4_ = uVar19;
  auVar2._8_4_ = uVar21;
  auVar2._12_4_ = uVar22;
  auVar7._8_4_ = 0x100;
  auVar7._0_8_ = 0x10000000100;
  auVar7._12_4_ = 0x100;
  auVar27 = NEON_cmhi(auVar7,auVar2,4);
  auVar3._4_4_ = uVar24;
  auVar3._0_4_ = uVar23;
  auVar3._8_4_ = uVar25;
  auVar3._12_4_ = uVar26;
  auVar8._8_4_ = 0x100;
  auVar8._0_8_ = 0x10000000100;
  auVar8._12_4_ = 0x100;
  auVar28 = NEON_cmhi(auVar8,auVar3,4);
  *param_1 = auVar27[0];
  param_1[1] = auVar27[4];
  param_1[2] = auVar27[8];
  param_1[3] = auVar27[12];
  param_1[4] = auVar28[0];
  param_1[5] = auVar28[4];
  param_1[6] = auVar28[8];
  param_1[7] = auVar28[12];
  uVar37 = NEON_ushl(CONCAT17(auVar28[12],
                              CONCAT16(auVar28[8],
                                       CONCAT15(auVar28[4],
                                                CONCAT14(auVar28[0],
                                                         CONCAT13(auVar27[12],
                                                                  CONCAT12(auVar27[8],
                                                                           CONCAT11(auVar27[4],
                                                                                    auVar27[0]))))))
                             ),CONCAT44(iVar17 * -8,iVar17 * -8));
  uVar4 = NEON_uaddlv(CONCAT17(cVar36 - (char)((ulong)uVar37 >> 0x38),
                               CONCAT16(cVar35 - (char)((ulong)uVar37 >> 0x30),
                                        CONCAT15(cVar34 - (char)((ulong)uVar37 >> 0x28),
                                                 CONCAT14(cVar33 - (char)((ulong)uVar37 >> 0x20),
                                                          CONCAT13(cVar32 - (char)((ulong)uVar37 >>
                                                                                  0x18),
                                                                   CONCAT12(cVar31 - (char)((ulong)
                                                  uVar37 >> 0x10),
                                                  CONCAT11(cVar30 - (char)((ulong)uVar37 >> 8),
                                                           cVar29 - (char)uVar37))))))),1);
  *param_5 = (uint)uVar4;
  return param_1 + 8;
}


