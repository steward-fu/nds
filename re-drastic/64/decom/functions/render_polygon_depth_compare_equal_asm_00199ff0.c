/*
 * Ghidra decompilation
 *
 * Function : render_polygon_depth_compare_equal_asm
 * Address  : 00199ff0
 * Program  : drastic64
 */


undefined  [16]
render_polygon_depth_compare_equal_asm
          (char *param_1,int *param_2,uint *param_3,int param_4,uint *param_5)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  ushort uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  int *piVar9;
  uint *puVar16;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined auVar34 [16];
  undefined auVar35 [16];
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  undefined8 uVar44;
  undefined auVar45 [16];
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  
  cVar36 = '\0';
  cVar37 = '\0';
  cVar38 = '\0';
  cVar39 = '\0';
  cVar40 = '\0';
  cVar41 = '\0';
  cVar42 = '\0';
  cVar43 = '\0';
  iVar24 = param_4 + -8;
  iVar23 = iVar24;
  if (iVar24 != 0 && 7 < param_4) {
    do {
      iVar24 = *param_2;
      piVar9 = param_2 + 1;
      piVar10 = param_2 + 2;
      piVar11 = param_2 + 3;
      piVar12 = param_2 + 4;
      piVar13 = param_2 + 5;
      piVar14 = param_2 + 6;
      piVar15 = param_2 + 7;
      param_2 = param_2 + 8;
      uVar25 = *param_3;
      puVar16 = param_3 + 1;
      puVar17 = param_3 + 2;
      puVar18 = param_3 + 3;
      puVar19 = param_3 + 4;
      puVar20 = param_3 + 5;
      puVar21 = param_3 + 6;
      puVar22 = param_3 + 7;
      param_3 = param_3 + 8;
      uVar26 = MP_INT_ABS(iVar24 - (uVar25 & 0xffffff));
      uVar27 = MP_INT_ABS(*piVar9 - (*puVar16 & 0xffffff));
      uVar28 = MP_INT_ABS(*piVar10 - (*puVar17 & 0xffffff));
      uVar29 = MP_INT_ABS(*piVar11 - (*puVar18 & 0xffffff));
      uVar30 = MP_INT_ABS(*piVar12 - (*puVar19 & 0xffffff));
      uVar31 = MP_INT_ABS(*piVar13 - (*puVar20 & 0xffffff));
      uVar32 = MP_INT_ABS(*piVar14 - (*puVar21 & 0xffffff));
      uVar33 = MP_INT_ABS(*piVar15 - (*puVar22 & 0xffffff));
      auVar34._4_4_ = uVar27;
      auVar34._0_4_ = uVar26;
      auVar34._8_4_ = uVar28;
      auVar34._12_4_ = uVar29;
      auVar5._8_4_ = 0x100;
      auVar5._0_8_ = 0x10000000100;
      auVar5._12_4_ = 0x100;
      auVar34 = NEON_cmhi(auVar5,auVar34,4);
      auVar35._4_4_ = uVar31;
      auVar35._0_4_ = uVar30;
      auVar35._8_4_ = uVar32;
      auVar35._12_4_ = uVar33;
      auVar6._8_4_ = 0x100;
      auVar6._0_8_ = 0x10000000100;
      auVar6._12_4_ = 0x100;
      auVar35 = NEON_cmhi(auVar6,auVar35,4);
      cVar36 = cVar36 - auVar34[0];
      cVar37 = cVar37 - auVar34[4];
      cVar38 = cVar38 - auVar34[8];
      cVar39 = cVar39 - auVar34[12];
      cVar40 = cVar40 - auVar35[0];
      cVar41 = cVar41 - auVar35[4];
      cVar42 = cVar42 - auVar35[8];
      cVar43 = cVar43 - auVar35[12];
      *param_1 = auVar34[0];
      param_1[1] = auVar34[4];
      param_1[2] = auVar34[8];
      param_1[3] = auVar34[12];
      param_1[4] = auVar35[0];
      param_1[5] = auVar35[4];
      param_1[6] = auVar35[8];
      param_1[7] = auVar35[12];
      param_1 = param_1 + 8;
      iVar24 = iVar23 + -8;
      bVar1 = 7 < iVar23;
      iVar23 = iVar24;
    } while (iVar24 != 0 && bVar1);
  }
  uVar26 = MP_INT_ABS(*param_2 - (*param_3 & 0xffffff));
  uVar27 = MP_INT_ABS(param_2[1] - (param_3[1] & 0xffffff));
  uVar28 = MP_INT_ABS(param_2[2] - (param_3[2] & 0xffffff));
  uVar29 = MP_INT_ABS(param_2[3] - (param_3[3] & 0xffffff));
  uVar30 = MP_INT_ABS(param_2[4] - (param_3[4] & 0xffffff));
  uVar31 = MP_INT_ABS(param_2[5] - (param_3[5] & 0xffffff));
  uVar32 = MP_INT_ABS(param_2[6] - (param_3[6] & 0xffffff));
  uVar33 = MP_INT_ABS(param_2[7] - (param_3[7] & 0xffffff));
  auVar2._4_4_ = uVar27;
  auVar2._0_4_ = uVar26;
  auVar2._8_4_ = uVar28;
  auVar2._12_4_ = uVar29;
  auVar7._8_4_ = 0x100;
  auVar7._0_8_ = 0x10000000100;
  auVar7._12_4_ = 0x100;
  auVar34 = NEON_cmhi(auVar7,auVar2,4);
  auVar3._4_4_ = uVar31;
  auVar3._0_4_ = uVar30;
  auVar3._8_4_ = uVar32;
  auVar3._12_4_ = uVar33;
  auVar8._8_4_ = 0x100;
  auVar8._0_8_ = 0x10000000100;
  auVar8._12_4_ = 0x100;
  auVar35 = NEON_cmhi(auVar8,auVar3,4);
  *param_1 = auVar34[0];
  param_1[1] = auVar34[4];
  param_1[2] = auVar34[8];
  param_1[3] = auVar34[12];
  param_1[4] = auVar35[0];
  param_1[5] = auVar35[4];
  param_1[6] = auVar35[8];
  param_1[7] = auVar35[12];
  uVar44 = NEON_ushl(CONCAT17(auVar35[12],
                              CONCAT16(auVar35[8],
                                       CONCAT15(auVar35[4],
                                                CONCAT14(auVar35[0],
                                                         CONCAT13(auVar34[12],
                                                                  CONCAT12(auVar34[8],
                                                                           CONCAT11(auVar34[4],
                                                                                    auVar34[0]))))))
                             ),CONCAT44(iVar24 * -8,iVar24 * -8));
  uVar4 = NEON_uaddlv(CONCAT17(cVar43 - (char)((ulong)uVar44 >> 0x38),
                               CONCAT16(cVar42 - (char)((ulong)uVar44 >> 0x30),
                                        CONCAT15(cVar41 - (char)((ulong)uVar44 >> 0x28),
                                                 CONCAT14(cVar40 - (char)((ulong)uVar44 >> 0x20),
                                                          CONCAT13(cVar39 - (char)((ulong)uVar44 >>
                                                                                  0x18),
                                                                   CONCAT12(cVar38 - (char)((ulong)
                                                  uVar44 >> 0x10),
                                                  CONCAT11(cVar37 - (char)((ulong)uVar44 >> 8),
                                                           cVar36 - (char)uVar44))))))),1);
  *param_5 = (uint)uVar4;
  auVar45._8_8_ = param_2 + 8;
  auVar45._0_8_ = param_1 + 8;
  return auVar45;
}


