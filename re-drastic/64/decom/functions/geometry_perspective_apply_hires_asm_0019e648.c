/*
 * Ghidra decompilation
 *
 * Function : geometry_perspective_apply_hires_asm
 * Address  : 0019e648
 * Program  : drastic64
 */


void geometry_perspective_apply_hires_asm(long param_1,undefined8 *param_2,uint *param_3)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint *puVar25;
  ulong *puVar27;
  uint uVar28;
  int iVar29;
  int *piVar30;
  int *piVar31;
  int *piVar32;
  int *piVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  long lVar49;
  long lVar54;
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  ulong *puVar26;
  
  uVar2 = *(ushort *)(param_1 + 0x9ab8);
  uVar28 = (uint)uVar2;
  if ((uVar2 & 0x3f) == 0) {
    uVar3 = *(ushort *)(param_1 + 0x9aba);
    iVar4 = (0xc0 - (uint)*(ushort *)(param_1 + 0x9abc)) - (uint)uVar2;
    uVar35 = (uint)*(ushort *)(param_1 + 0x9ab6);
    uVar28 = (uint)(uVar2 >> 6);
    piVar30 = (int *)(param_1 + 0x17f0);
    piVar31 = (int *)(param_1 + 0x3070);
    iVar69 = (uint)uVar3 * 2;
    iVar70 = (uint)uVar3 * 2;
    iVar71 = (uint)uVar3 * 2;
    iVar72 = (uint)uVar3 * 2;
    piVar32 = (int *)(param_1 + 0x48f0);
    piVar33 = (int *)(param_1 + 0x6170);
    iVar29 = *(int *)(param_1 + 0x64c);
    if (uVar35 != 0x100) {
      do {
        uVar34 = *param_3;
        puVar25 = param_3 + 1;
        puVar26 = (ulong *)(param_3 + 2);
        param_3 = param_3 + 4;
        uVar24 = *param_2;
        uVar23 = *param_2;
        uVar22 = *param_2;
        puVar27 = param_2 + 1;
        param_2 = param_2 + 2;
        iVar36 = *piVar33;
        iVar37 = piVar33[1];
        iVar38 = piVar33[2];
        iVar39 = piVar33[3];
        piVar33 = piVar33 + 4;
        lVar40 = (ulong)uVar34 - 0x30;
        lVar41 = (ulong)*puVar25 - 0x30;
        lVar42 = (*puVar26 & 0xffffffff) - 0x30;
        lVar43 = (*puVar26 >> 0x20) - 0x30;
        auVar44 = NEON_umull(CONCAT44(piVar32[1] + iVar37,*piVar32 + iVar36),uVar22,4);
        lVar49 = (ulong)(uint)((int)*(undefined8 *)(piVar32 + 2) + iVar38) * (*puVar27 & 0xffffffff)
        ;
        lVar54 = (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar32 + 2) >> 0x20) + iVar39) *
                 (*puVar27 >> 0x20);
        auVar55 = NEON_umull(CONCAT44((piVar30[1] + iVar37) * uVar35,(*piVar30 + iVar36) * uVar35),
                             uVar23,4);
        auVar62 = NEON_umull(CONCAT44((iVar37 - piVar31[1]) * uVar28,(iVar36 - *piVar31) * uVar28),
                             uVar24,4);
        auVar61._0_8_ =
             (ulong)(((int)*(undefined8 *)(piVar30 + 2) + iVar38) * uVar35) *
             (*puVar27 & 0xffffffff);
        auVar61._8_8_ =
             (ulong)(((int)((ulong)*(undefined8 *)(piVar30 + 2) >> 0x20) + iVar39) * uVar35) *
             (*puVar27 >> 0x20);
        auVar67._0_8_ =
             (ulong)((iVar38 - (int)*(undefined8 *)(piVar31 + 2)) * uVar28) *
             (*puVar27 & 0xffffffff);
        auVar67._8_8_ =
             (ulong)((iVar39 - (int)((ulong)*(undefined8 *)(piVar31 + 2) >> 0x20)) * uVar28) *
             (*puVar27 >> 0x20);
        auVar57._8_8_ = lVar41;
        auVar57._0_8_ = lVar40;
        auVar56 = NEON_ushl(auVar55,auVar57,8);
        auVar19._8_8_ = lVar43;
        auVar19._0_8_ = lVar42;
        auVar59 = NEON_ushl(auVar61,auVar19,8);
        auVar11._8_8_ = lVar41;
        auVar11._0_8_ = lVar40;
        auVar62 = NEON_ushl(auVar62,auVar11,8);
        auVar20._8_8_ = lVar43;
        auVar20._0_8_ = lVar42;
        auVar65 = NEON_ushl(auVar67,auVar20,8);
        auVar47._0_8_ = auVar44._0_8_ - (auVar44._0_8_ + 0x7fffU >> 0xf);
        auVar47._8_8_ = auVar44._8_8_ - (auVar44._8_8_ + 0x7fffU >> 0xf);
        auVar52._0_8_ = lVar49 - (lVar49 + 0x7fffU >> 0xf);
        auVar52._8_8_ = lVar54 - (lVar54 + 0x7fffU >> 0xf);
        auVar12._8_8_ = lVar41;
        auVar12._0_8_ = lVar40;
        auVar44 = NEON_ushl(auVar47,auVar12,8);
        auVar21._8_8_ = lVar43;
        auVar21._0_8_ = lVar42;
        auVar55 = NEON_ushl(auVar52,auVar21,8);
        *piVar32 = auVar44._0_4_;
        piVar32[1] = auVar44._8_4_;
        piVar32[2] = auVar55._0_4_;
        piVar32[3] = auVar55._8_4_;
        piVar32 = piVar32 + 4;
        *piVar30 = (int)(auVar56._0_8_ >> 0xe) + iVar69;
        piVar30[1] = (int)(auVar56._8_8_ >> 0xe) + iVar70;
        piVar30[2] = (int)(auVar59._0_8_ >> 0xe) + iVar71;
        piVar30[3] = (int)(auVar59._8_8_ >> 0xe) + iVar72;
        piVar30 = piVar30 + 4;
        *piVar31 = auVar62._1_4_ + iVar4 * 2;
        piVar31[1] = auVar62._9_4_ + iVar4 * 2;
        piVar31[2] = auVar65._1_4_ + iVar4 * 2;
        piVar31[3] = auVar65._9_4_ + iVar4 * 2;
        piVar31 = piVar31 + 4;
        iVar36 = iVar29 + -4;
        bVar1 = 3 < iVar29;
        iVar29 = iVar36;
      } while (iVar36 != 0 && bVar1);
      return;
    }
    do {
      uVar35 = *param_3;
      puVar25 = param_3 + 1;
      puVar26 = (ulong *)(param_3 + 2);
      param_3 = param_3 + 4;
      uVar24 = *param_2;
      uVar23 = *param_2;
      uVar22 = *param_2;
      puVar27 = param_2 + 1;
      param_2 = param_2 + 2;
      iVar36 = *piVar33;
      iVar37 = piVar33[1];
      iVar38 = piVar33[2];
      iVar39 = piVar33[3];
      piVar33 = piVar33 + 4;
      lVar40 = (ulong)uVar35 - 0x30;
      lVar41 = (ulong)*puVar25 - 0x30;
      lVar42 = (*puVar26 & 0xffffffff) - 0x30;
      lVar43 = (*puVar26 >> 0x20) - 0x30;
      auVar56 = NEON_umull(CONCAT44(piVar32[1] + iVar37,*piVar32 + iVar36),uVar22,4);
      lVar49 = (ulong)(uint)((int)*(undefined8 *)(piVar32 + 2) + iVar38) * (*puVar27 & 0xffffffff);
      lVar54 = (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar32 + 2) >> 0x20) + iVar39) *
               (*puVar27 >> 0x20);
      auVar55 = NEON_umull(CONCAT44(piVar30[1] + iVar37,*piVar30 + iVar36),uVar23,4);
      auVar62 = NEON_umull(CONCAT44((iVar37 - piVar31[1]) * uVar28,(iVar36 - *piVar31) * uVar28),
                           uVar24,4);
      auVar63._0_8_ =
           (ulong)(uint)((int)*(undefined8 *)(piVar30 + 2) + iVar38) * (*puVar27 & 0xffffffff);
      auVar63._8_8_ =
           (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar30 + 2) >> 0x20) + iVar39) *
           (*puVar27 >> 0x20);
      auVar68._0_8_ =
           (ulong)((iVar38 - (int)*(undefined8 *)(piVar31 + 2)) * uVar28) * (*puVar27 & 0xffffffff);
      auVar68._8_8_ =
           (ulong)((iVar39 - (int)((ulong)*(undefined8 *)(piVar31 + 2) >> 0x20)) * uVar28) *
           (*puVar27 >> 0x20);
      auVar44._8_8_ = lVar41;
      auVar44._0_8_ = lVar40;
      auVar57 = NEON_ushl(auVar55,auVar44,8);
      auVar59._8_8_ = lVar43;
      auVar59._0_8_ = lVar42;
      auVar59 = NEON_ushl(auVar63,auVar59,8);
      auVar55._8_8_ = lVar41;
      auVar55._0_8_ = lVar40;
      auVar63 = NEON_ushl(auVar62,auVar55,8);
      auVar62._8_8_ = lVar43;
      auVar62._0_8_ = lVar42;
      auVar62 = NEON_ushl(auVar68,auVar62,8);
      auVar48._0_8_ = auVar56._0_8_ - (auVar56._0_8_ + 0x7fffU >> 0xf);
      auVar48._8_8_ = auVar56._8_8_ - (auVar56._8_8_ + 0x7fffU >> 0xf);
      auVar53._0_8_ = lVar49 - (lVar49 + 0x7fffU >> 0xf);
      auVar53._8_8_ = lVar54 - (lVar54 + 0x7fffU >> 0xf);
      auVar56._8_8_ = lVar41;
      auVar56._0_8_ = lVar40;
      auVar44 = NEON_ushl(auVar48,auVar56,8);
      auVar65._8_8_ = lVar43;
      auVar65._0_8_ = lVar42;
      auVar55 = NEON_ushl(auVar53,auVar65,8);
      *piVar32 = auVar44._0_4_;
      piVar32[1] = auVar44._8_4_;
      piVar32[2] = auVar55._0_4_;
      piVar32[3] = auVar55._8_4_;
      piVar32 = piVar32 + 4;
      *piVar30 = (int)(auVar57._0_8_ >> 6) + iVar69;
      piVar30[1] = (int)(auVar57._8_8_ >> 6) + iVar70;
      piVar30[2] = (int)(auVar59._0_8_ >> 6) + iVar71;
      piVar30[3] = (int)(auVar59._8_8_ >> 6) + iVar72;
      piVar30 = piVar30 + 4;
      *piVar31 = auVar63._1_4_ + iVar4 * 2;
      piVar31[1] = auVar63._9_4_ + iVar4 * 2;
      piVar31[2] = auVar62._1_4_ + iVar4 * 2;
      piVar31[3] = auVar62._9_4_ + iVar4 * 2;
      piVar31 = piVar31 + 4;
      iVar36 = iVar29 + -4;
      bVar1 = 3 < iVar29;
      iVar29 = iVar36;
    } while (iVar36 != 0 && bVar1);
    return;
  }
  uVar2 = *(ushort *)(param_1 + 0x9aba);
  iVar4 = (0xc0 - (uint)*(ushort *)(param_1 + 0x9abc)) - uVar28;
  uVar35 = (uint)*(ushort *)(param_1 + 0x9ab6);
  iVar69 = (uint)uVar2 * 2;
  iVar70 = (uint)uVar2 * 2;
  iVar71 = (uint)uVar2 * 2;
  iVar72 = (uint)uVar2 * 2;
  piVar30 = (int *)(param_1 + 0x17f0);
  piVar31 = (int *)(param_1 + 0x3070);
  piVar32 = (int *)(param_1 + 0x48f0);
  piVar33 = (int *)(param_1 + 0x6170);
  iVar29 = *(int *)(param_1 + 0x64c);
  if (uVar35 != 0x100) {
    do {
      uVar34 = *param_3;
      puVar25 = param_3 + 1;
      puVar26 = (ulong *)(param_3 + 2);
      param_3 = param_3 + 4;
      uVar24 = *param_2;
      uVar23 = *param_2;
      uVar22 = *param_2;
      puVar27 = param_2 + 1;
      param_2 = param_2 + 2;
      iVar36 = *piVar33;
      iVar37 = piVar33[1];
      iVar38 = piVar33[2];
      iVar39 = piVar33[3];
      piVar33 = piVar33 + 4;
      lVar40 = (ulong)uVar34 - 0x30;
      lVar41 = (ulong)*puVar25 - 0x30;
      lVar42 = (*puVar26 & 0xffffffff) - 0x30;
      lVar43 = (*puVar26 >> 0x20) - 0x30;
      auVar44 = NEON_umull(CONCAT44(piVar32[1] + iVar37,*piVar32 + iVar36),uVar22,4);
      lVar49 = (ulong)(uint)((int)*(undefined8 *)(piVar32 + 2) + iVar38) * (*puVar27 & 0xffffffff);
      lVar54 = (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar32 + 2) >> 0x20) + iVar39) *
               (*puVar27 >> 0x20);
      auVar55 = NEON_umull(CONCAT44((piVar30[1] + iVar37) * uVar35,(*piVar30 + iVar36) * uVar35),
                           uVar23,4);
      auVar62 = NEON_umull(CONCAT44((iVar37 - piVar31[1]) * uVar28,(iVar36 - *piVar31) * uVar28),
                           uVar24,4);
      auVar58._0_8_ =
           (ulong)(((int)*(undefined8 *)(piVar30 + 2) + iVar38) * uVar35) * (*puVar27 & 0xffffffff);
      auVar58._8_8_ =
           (ulong)(((int)((ulong)*(undefined8 *)(piVar30 + 2) >> 0x20) + iVar39) * uVar35) *
           (*puVar27 >> 0x20);
      auVar64._0_8_ =
           (ulong)((iVar38 - (int)*(undefined8 *)(piVar31 + 2)) * uVar28) * (*puVar27 & 0xffffffff);
      auVar64._8_8_ =
           (ulong)((iVar39 - (int)((ulong)*(undefined8 *)(piVar31 + 2) >> 0x20)) * uVar28) *
           (*puVar27 >> 0x20);
      auVar5._8_8_ = lVar41;
      auVar5._0_8_ = lVar40;
      auVar56 = NEON_ushl(auVar55,auVar5,8);
      auVar13._8_8_ = lVar43;
      auVar13._0_8_ = lVar42;
      auVar59 = NEON_ushl(auVar58,auVar13,8);
      auVar6._8_8_ = lVar41;
      auVar6._0_8_ = lVar40;
      auVar62 = NEON_ushl(auVar62,auVar6,8);
      auVar14._8_8_ = lVar43;
      auVar14._0_8_ = lVar42;
      auVar65 = NEON_ushl(auVar64,auVar14,8);
      auVar45._0_8_ = auVar44._0_8_ - (auVar44._0_8_ + 0x7fffU >> 0xf);
      auVar45._8_8_ = auVar44._8_8_ - (auVar44._8_8_ + 0x7fffU >> 0xf);
      auVar50._0_8_ = lVar49 - (lVar49 + 0x7fffU >> 0xf);
      auVar50._8_8_ = lVar54 - (lVar54 + 0x7fffU >> 0xf);
      auVar7._8_8_ = lVar41;
      auVar7._0_8_ = lVar40;
      auVar44 = NEON_ushl(auVar45,auVar7,8);
      auVar15._8_8_ = lVar43;
      auVar15._0_8_ = lVar42;
      auVar55 = NEON_ushl(auVar50,auVar15,8);
      *piVar32 = auVar44._0_4_;
      piVar32[1] = auVar44._8_4_;
      piVar32[2] = auVar55._0_4_;
      piVar32[3] = auVar55._8_4_;
      piVar32 = piVar32 + 4;
      *piVar30 = (int)(auVar56._0_8_ >> 0xe) + iVar69;
      piVar30[1] = (int)(auVar56._8_8_ >> 0xe) + iVar70;
      piVar30[2] = (int)(auVar59._0_8_ >> 0xe) + iVar71;
      piVar30[3] = (int)(auVar59._8_8_ >> 0xe) + iVar72;
      piVar30 = piVar30 + 4;
      *piVar31 = (int)(auVar62._0_8_ >> 0xe) + iVar4 * 2;
      piVar31[1] = (int)(auVar62._8_8_ >> 0xe) + iVar4 * 2;
      piVar31[2] = (int)(auVar65._0_8_ >> 0xe) + iVar4 * 2;
      piVar31[3] = (int)(auVar65._8_8_ >> 0xe) + iVar4 * 2;
      piVar31 = piVar31 + 4;
      iVar36 = iVar29 + -4;
      bVar1 = 3 < iVar29;
      iVar29 = iVar36;
    } while (iVar36 != 0 && bVar1);
    return;
  }
  do {
    uVar35 = *param_3;
    puVar25 = param_3 + 1;
    puVar26 = (ulong *)(param_3 + 2);
    param_3 = param_3 + 4;
    uVar24 = *param_2;
    uVar23 = *param_2;
    uVar22 = *param_2;
    puVar27 = param_2 + 1;
    param_2 = param_2 + 2;
    iVar36 = *piVar33;
    iVar37 = piVar33[1];
    iVar38 = piVar33[2];
    iVar39 = piVar33[3];
    piVar33 = piVar33 + 4;
    lVar40 = (ulong)uVar35 - 0x30;
    lVar41 = (ulong)*puVar25 - 0x30;
    lVar42 = (*puVar26 & 0xffffffff) - 0x30;
    lVar43 = (*puVar26 >> 0x20) - 0x30;
    auVar44 = NEON_umull(CONCAT44(piVar32[1] + iVar37,*piVar32 + iVar36),uVar22,4);
    lVar49 = (ulong)(uint)((int)*(undefined8 *)(piVar32 + 2) + iVar38) * (*puVar27 & 0xffffffff);
    lVar54 = (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar32 + 2) >> 0x20) + iVar39) *
             (*puVar27 >> 0x20);
    auVar55 = NEON_umull(CONCAT44(piVar30[1] + iVar37,*piVar30 + iVar36),uVar23,4);
    auVar62 = NEON_umull(CONCAT44((iVar37 - piVar31[1]) * uVar28,(iVar36 - *piVar31) * uVar28),
                         uVar24,4);
    auVar60._0_8_ =
         (ulong)(uint)((int)*(undefined8 *)(piVar30 + 2) + iVar38) * (*puVar27 & 0xffffffff);
    auVar60._8_8_ =
         (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar30 + 2) >> 0x20) + iVar39) *
         (*puVar27 >> 0x20);
    auVar66._0_8_ =
         (ulong)((iVar38 - (int)*(undefined8 *)(piVar31 + 2)) * uVar28) * (*puVar27 & 0xffffffff);
    auVar66._8_8_ =
         (ulong)((iVar39 - (int)((ulong)*(undefined8 *)(piVar31 + 2) >> 0x20)) * uVar28) *
         (*puVar27 >> 0x20);
    auVar8._8_8_ = lVar41;
    auVar8._0_8_ = lVar40;
    auVar56 = NEON_ushl(auVar55,auVar8,8);
    auVar16._8_8_ = lVar43;
    auVar16._0_8_ = lVar42;
    auVar59 = NEON_ushl(auVar60,auVar16,8);
    auVar9._8_8_ = lVar41;
    auVar9._0_8_ = lVar40;
    auVar62 = NEON_ushl(auVar62,auVar9,8);
    auVar17._8_8_ = lVar43;
    auVar17._0_8_ = lVar42;
    auVar65 = NEON_ushl(auVar66,auVar17,8);
    auVar46._0_8_ = auVar44._0_8_ - (auVar44._0_8_ + 0x7fffU >> 0xf);
    auVar46._8_8_ = auVar44._8_8_ - (auVar44._8_8_ + 0x7fffU >> 0xf);
    auVar51._0_8_ = lVar49 - (lVar49 + 0x7fffU >> 0xf);
    auVar51._8_8_ = lVar54 - (lVar54 + 0x7fffU >> 0xf);
    auVar10._8_8_ = lVar41;
    auVar10._0_8_ = lVar40;
    auVar44 = NEON_ushl(auVar46,auVar10,8);
    auVar18._8_8_ = lVar43;
    auVar18._0_8_ = lVar42;
    auVar55 = NEON_ushl(auVar51,auVar18,8);
    *piVar32 = auVar44._0_4_;
    piVar32[1] = auVar44._8_4_;
    piVar32[2] = auVar55._0_4_;
    piVar32[3] = auVar55._8_4_;
    piVar32 = piVar32 + 4;
    *piVar30 = (int)(auVar56._0_8_ >> 6) + iVar69;
    piVar30[1] = (int)(auVar56._8_8_ >> 6) + iVar70;
    piVar30[2] = (int)(auVar59._0_8_ >> 6) + iVar71;
    piVar30[3] = (int)(auVar59._8_8_ >> 6) + iVar72;
    piVar30 = piVar30 + 4;
    *piVar31 = (int)(auVar62._0_8_ >> 0xe) + iVar4 * 2;
    piVar31[1] = (int)(auVar62._8_8_ >> 0xe) + iVar4 * 2;
    piVar31[2] = (int)(auVar65._0_8_ >> 0xe) + iVar4 * 2;
    piVar31[3] = (int)(auVar65._8_8_ >> 0xe) + iVar4 * 2;
    piVar31 = piVar31 + 4;
    iVar36 = iVar29 + -4;
    bVar1 = 3 < iVar29;
    iVar29 = iVar36;
  } while (iVar36 != 0 && bVar1);
  return;
}


