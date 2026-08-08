/*
 * Ghidra decompilation
 *
 * Function : geometry_perspective_apply_normal_asm
 * Address  : 0019e2c4
 * Program  : drastic64
 */


void geometry_perspective_apply_normal_asm(long param_1,undefined8 *param_2,uint *param_3)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  undefined auVar4 [16];
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
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint *puVar24;
  ulong *puVar26;
  uint uVar27;
  uint uVar28;
  int iVar30;
  int *piVar31;
  int *piVar32;
  int *piVar33;
  int *piVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  long lVar50;
  long lVar55;
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
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
  undefined auVar69 [16];
  ulong *puVar25;
  uint uVar29;
  
  uVar2 = *(ushort *)(param_1 + 0x9ab8);
  uVar27 = (uint)uVar2;
  if ((uVar2 & 0x3f) == 0) {
    iVar3 = (0xc0 - (uint)*(ushort *)(param_1 + 0x9abc)) - (uint)uVar2;
    uVar36 = (uint)*(ushort *)(param_1 + 0x9ab6);
    uVar28 = (uint)*(ushort *)(param_1 + 0x9aba);
    uVar29 = (uint)*(ushort *)(param_1 + 0x9aba);
    uVar27 = (uint)(uVar2 >> 6);
    piVar31 = (int *)(param_1 + 0x17f0);
    piVar32 = (int *)(param_1 + 0x3070);
    piVar33 = (int *)(param_1 + 0x48f0);
    piVar34 = (int *)(param_1 + 0x6170);
    iVar30 = *(int *)(param_1 + 0x64c);
    if (uVar36 != 0x100) {
      do {
        uVar35 = *param_3;
        puVar24 = param_3 + 1;
        puVar25 = (ulong *)(param_3 + 2);
        param_3 = param_3 + 4;
        uVar23 = *param_2;
        uVar22 = *param_2;
        uVar21 = *param_2;
        puVar26 = param_2 + 1;
        param_2 = param_2 + 2;
        iVar37 = *piVar34;
        iVar38 = piVar34[1];
        iVar39 = piVar34[2];
        iVar40 = piVar34[3];
        piVar34 = piVar34 + 4;
        lVar41 = (ulong)uVar35 - 0x30;
        lVar42 = (ulong)*puVar24 - 0x30;
        lVar43 = (*puVar25 & 0xffffffff) - 0x30;
        lVar44 = (*puVar25 >> 0x20) - 0x30;
        auVar45 = NEON_umull(CONCAT44(piVar33[1] + iVar38,*piVar33 + iVar37),uVar21,4);
        lVar50 = (ulong)(uint)((int)*(undefined8 *)(piVar33 + 2) + iVar39) * (*puVar26 & 0xffffffff)
        ;
        lVar55 = (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar33 + 2) >> 0x20) + iVar40) *
                 (*puVar26 >> 0x20);
        auVar56 = NEON_umull(CONCAT44((piVar31[1] + iVar38) * uVar36,(*piVar31 + iVar37) * uVar36),
                             uVar22,4);
        auVar63 = NEON_umull(CONCAT44((iVar38 - piVar32[1]) * uVar27,(iVar37 - *piVar32) * uVar27),
                             uVar23,4);
        auVar62._0_8_ =
             (ulong)(((int)*(undefined8 *)(piVar31 + 2) + iVar39) * uVar36) *
             (*puVar26 & 0xffffffff);
        auVar62._8_8_ =
             (ulong)(((int)((ulong)*(undefined8 *)(piVar31 + 2) >> 0x20) + iVar40) * uVar36) *
             (*puVar26 >> 0x20);
        auVar68._0_8_ =
             (ulong)((iVar39 - (int)*(undefined8 *)(piVar32 + 2)) * uVar27) *
             (*puVar26 & 0xffffffff);
        auVar68._8_8_ =
             (ulong)((iVar40 - (int)((ulong)*(undefined8 *)(piVar32 + 2) >> 0x20)) * uVar27) *
             (*puVar26 >> 0x20);
        auVar58._8_8_ = lVar42;
        auVar58._0_8_ = lVar41;
        auVar57 = NEON_ushl(auVar56,auVar58,8);
        auVar18._8_8_ = lVar44;
        auVar18._0_8_ = lVar43;
        auVar60 = NEON_ushl(auVar62,auVar18,8);
        auVar10._8_8_ = lVar42;
        auVar10._0_8_ = lVar41;
        auVar63 = NEON_ushl(auVar63,auVar10,8);
        auVar19._8_8_ = lVar44;
        auVar19._0_8_ = lVar43;
        auVar66 = NEON_ushl(auVar68,auVar19,8);
        auVar48._0_8_ = auVar45._0_8_ - (auVar45._0_8_ + 0x7fffU >> 0xf);
        auVar48._8_8_ = auVar45._8_8_ - (auVar45._8_8_ + 0x7fffU >> 0xf);
        auVar53._0_8_ = lVar50 - (lVar50 + 0x7fffU >> 0xf);
        auVar53._8_8_ = lVar55 - (lVar55 + 0x7fffU >> 0xf);
        auVar11._8_8_ = lVar42;
        auVar11._0_8_ = lVar41;
        auVar45 = NEON_ushl(auVar48,auVar11,8);
        auVar20._8_8_ = lVar44;
        auVar20._0_8_ = lVar43;
        auVar56 = NEON_ushl(auVar53,auVar20,8);
        *piVar33 = auVar45._0_4_;
        piVar33[1] = auVar45._8_4_;
        piVar33[2] = auVar56._0_4_;
        piVar33[3] = auVar56._8_4_;
        piVar33 = piVar33 + 4;
        *piVar31 = (int)(auVar57._0_8_ >> 0xf) + uVar28;
        piVar31[1] = (int)(auVar57._8_8_ >> 0xf) + uVar28;
        piVar31[2] = (int)(auVar60._0_8_ >> 0xf) + uVar29;
        piVar31[3] = (int)(auVar60._8_8_ >> 0xf) + uVar29;
        piVar31 = piVar31 + 4;
        *piVar32 = (int)(auVar63._0_8_ >> 9) + iVar3;
        piVar32[1] = (int)(auVar63._8_8_ >> 9) + iVar3;
        piVar32[2] = (int)(auVar66._0_8_ >> 9) + iVar3;
        piVar32[3] = (int)(auVar66._8_8_ >> 9) + iVar3;
        piVar32 = piVar32 + 4;
        iVar37 = iVar30 + -4;
        bVar1 = 3 < iVar30;
        iVar30 = iVar37;
      } while (iVar37 != 0 && bVar1);
      return;
    }
    do {
      uVar36 = *param_3;
      puVar24 = param_3 + 1;
      puVar25 = (ulong *)(param_3 + 2);
      param_3 = param_3 + 4;
      uVar23 = *param_2;
      uVar22 = *param_2;
      uVar21 = *param_2;
      puVar26 = param_2 + 1;
      param_2 = param_2 + 2;
      iVar37 = *piVar34;
      iVar38 = piVar34[1];
      iVar39 = piVar34[2];
      iVar40 = piVar34[3];
      piVar34 = piVar34 + 4;
      lVar41 = (ulong)uVar36 - 0x30;
      lVar42 = (ulong)*puVar24 - 0x30;
      lVar43 = (*puVar25 & 0xffffffff) - 0x30;
      lVar44 = (*puVar25 >> 0x20) - 0x30;
      auVar57 = NEON_umull(CONCAT44(piVar33[1] + iVar38,*piVar33 + iVar37),uVar21,4);
      lVar50 = (ulong)(uint)((int)*(undefined8 *)(piVar33 + 2) + iVar39) * (*puVar26 & 0xffffffff);
      lVar55 = (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar33 + 2) >> 0x20) + iVar40) *
               (*puVar26 >> 0x20);
      auVar56 = NEON_umull(CONCAT44(piVar31[1] + iVar38,*piVar31 + iVar37),uVar22,4);
      auVar63 = NEON_umull(CONCAT44((iVar38 - piVar32[1]) * uVar27,(iVar37 - *piVar32) * uVar27),
                           uVar23,4);
      auVar64._0_8_ =
           (ulong)(uint)((int)*(undefined8 *)(piVar31 + 2) + iVar39) * (*puVar26 & 0xffffffff);
      auVar64._8_8_ =
           (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar31 + 2) >> 0x20) + iVar40) *
           (*puVar26 >> 0x20);
      auVar69._0_8_ =
           (ulong)((iVar39 - (int)*(undefined8 *)(piVar32 + 2)) * uVar27) * (*puVar26 & 0xffffffff);
      auVar69._8_8_ =
           (ulong)((iVar40 - (int)((ulong)*(undefined8 *)(piVar32 + 2) >> 0x20)) * uVar27) *
           (*puVar26 >> 0x20);
      auVar45._8_8_ = lVar42;
      auVar45._0_8_ = lVar41;
      auVar58 = NEON_ushl(auVar56,auVar45,8);
      auVar60._8_8_ = lVar44;
      auVar60._0_8_ = lVar43;
      auVar60 = NEON_ushl(auVar64,auVar60,8);
      auVar56._8_8_ = lVar42;
      auVar56._0_8_ = lVar41;
      auVar64 = NEON_ushl(auVar63,auVar56,8);
      auVar63._8_8_ = lVar44;
      auVar63._0_8_ = lVar43;
      auVar63 = NEON_ushl(auVar69,auVar63,8);
      auVar49._0_8_ = auVar57._0_8_ - (auVar57._0_8_ + 0x7fffU >> 0xf);
      auVar49._8_8_ = auVar57._8_8_ - (auVar57._8_8_ + 0x7fffU >> 0xf);
      auVar54._0_8_ = lVar50 - (lVar50 + 0x7fffU >> 0xf);
      auVar54._8_8_ = lVar55 - (lVar55 + 0x7fffU >> 0xf);
      auVar57._8_8_ = lVar42;
      auVar57._0_8_ = lVar41;
      auVar45 = NEON_ushl(auVar49,auVar57,8);
      auVar66._8_8_ = lVar44;
      auVar66._0_8_ = lVar43;
      auVar56 = NEON_ushl(auVar54,auVar66,8);
      *piVar33 = auVar45._0_4_;
      piVar33[1] = auVar45._8_4_;
      piVar33[2] = auVar56._0_4_;
      piVar33[3] = auVar56._8_4_;
      piVar33 = piVar33 + 4;
      *piVar31 = (int)(auVar58._0_8_ >> 7) + uVar28;
      piVar31[1] = (int)(auVar58._8_8_ >> 7) + uVar28;
      piVar31[2] = (int)(auVar60._0_8_ >> 7) + uVar29;
      piVar31[3] = (int)(auVar60._8_8_ >> 7) + uVar29;
      piVar31 = piVar31 + 4;
      *piVar32 = (int)(auVar64._0_8_ >> 9) + iVar3;
      piVar32[1] = (int)(auVar64._8_8_ >> 9) + iVar3;
      piVar32[2] = (int)(auVar63._0_8_ >> 9) + iVar3;
      piVar32[3] = (int)(auVar63._8_8_ >> 9) + iVar3;
      piVar32 = piVar32 + 4;
      iVar37 = iVar30 + -4;
      bVar1 = 3 < iVar30;
      iVar30 = iVar37;
    } while (iVar37 != 0 && bVar1);
    return;
  }
  iVar3 = (0xc0 - (uint)*(ushort *)(param_1 + 0x9abc)) - uVar27;
  uVar36 = (uint)*(ushort *)(param_1 + 0x9ab6);
  uVar28 = (uint)*(ushort *)(param_1 + 0x9aba);
  uVar29 = (uint)*(ushort *)(param_1 + 0x9aba);
  piVar31 = (int *)(param_1 + 0x17f0);
  piVar32 = (int *)(param_1 + 0x3070);
  piVar33 = (int *)(param_1 + 0x48f0);
  piVar34 = (int *)(param_1 + 0x6170);
  iVar30 = *(int *)(param_1 + 0x64c);
  if (uVar36 != 0x100) {
    do {
      uVar35 = *param_3;
      puVar24 = param_3 + 1;
      puVar25 = (ulong *)(param_3 + 2);
      param_3 = param_3 + 4;
      uVar23 = *param_2;
      uVar22 = *param_2;
      uVar21 = *param_2;
      puVar26 = param_2 + 1;
      param_2 = param_2 + 2;
      iVar37 = *piVar34;
      iVar38 = piVar34[1];
      iVar39 = piVar34[2];
      iVar40 = piVar34[3];
      piVar34 = piVar34 + 4;
      lVar41 = (ulong)uVar35 - 0x30;
      lVar42 = (ulong)*puVar24 - 0x30;
      lVar43 = (*puVar25 & 0xffffffff) - 0x30;
      lVar44 = (*puVar25 >> 0x20) - 0x30;
      auVar45 = NEON_umull(CONCAT44(piVar33[1] + iVar38,*piVar33 + iVar37),uVar21,4);
      lVar50 = (ulong)(uint)((int)*(undefined8 *)(piVar33 + 2) + iVar39) * (*puVar26 & 0xffffffff);
      lVar55 = (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar33 + 2) >> 0x20) + iVar40) *
               (*puVar26 >> 0x20);
      auVar56 = NEON_umull(CONCAT44((piVar31[1] + iVar38) * uVar36,(*piVar31 + iVar37) * uVar36),
                           uVar22,4);
      auVar63 = NEON_umull(CONCAT44((iVar38 - piVar32[1]) * uVar27,(iVar37 - *piVar32) * uVar27),
                           uVar23,4);
      auVar59._0_8_ =
           (ulong)(((int)*(undefined8 *)(piVar31 + 2) + iVar39) * uVar36) * (*puVar26 & 0xffffffff);
      auVar59._8_8_ =
           (ulong)(((int)((ulong)*(undefined8 *)(piVar31 + 2) >> 0x20) + iVar40) * uVar36) *
           (*puVar26 >> 0x20);
      auVar65._0_8_ =
           (ulong)((iVar39 - (int)*(undefined8 *)(piVar32 + 2)) * uVar27) * (*puVar26 & 0xffffffff);
      auVar65._8_8_ =
           (ulong)((iVar40 - (int)((ulong)*(undefined8 *)(piVar32 + 2) >> 0x20)) * uVar27) *
           (*puVar26 >> 0x20);
      auVar4._8_8_ = lVar42;
      auVar4._0_8_ = lVar41;
      auVar57 = NEON_ushl(auVar56,auVar4,8);
      auVar12._8_8_ = lVar44;
      auVar12._0_8_ = lVar43;
      auVar60 = NEON_ushl(auVar59,auVar12,8);
      auVar5._8_8_ = lVar42;
      auVar5._0_8_ = lVar41;
      auVar63 = NEON_ushl(auVar63,auVar5,8);
      auVar13._8_8_ = lVar44;
      auVar13._0_8_ = lVar43;
      auVar66 = NEON_ushl(auVar65,auVar13,8);
      auVar46._0_8_ = auVar45._0_8_ - (auVar45._0_8_ + 0x7fffU >> 0xf);
      auVar46._8_8_ = auVar45._8_8_ - (auVar45._8_8_ + 0x7fffU >> 0xf);
      auVar51._0_8_ = lVar50 - (lVar50 + 0x7fffU >> 0xf);
      auVar51._8_8_ = lVar55 - (lVar55 + 0x7fffU >> 0xf);
      auVar6._8_8_ = lVar42;
      auVar6._0_8_ = lVar41;
      auVar45 = NEON_ushl(auVar46,auVar6,8);
      auVar14._8_8_ = lVar44;
      auVar14._0_8_ = lVar43;
      auVar56 = NEON_ushl(auVar51,auVar14,8);
      *piVar33 = auVar45._0_4_;
      piVar33[1] = auVar45._8_4_;
      piVar33[2] = auVar56._0_4_;
      piVar33[3] = auVar56._8_4_;
      piVar33 = piVar33 + 4;
      *piVar31 = (int)(auVar57._0_8_ >> 0xf) + uVar28;
      piVar31[1] = (int)(auVar57._8_8_ >> 0xf) + uVar28;
      piVar31[2] = (int)(auVar60._0_8_ >> 0xf) + uVar29;
      piVar31[3] = (int)(auVar60._8_8_ >> 0xf) + uVar29;
      piVar31 = piVar31 + 4;
      *piVar32 = (int)(auVar63._0_8_ >> 0xf) + iVar3;
      piVar32[1] = (int)(auVar63._8_8_ >> 0xf) + iVar3;
      piVar32[2] = (int)(auVar66._0_8_ >> 0xf) + iVar3;
      piVar32[3] = (int)(auVar66._8_8_ >> 0xf) + iVar3;
      piVar32 = piVar32 + 4;
      iVar37 = iVar30 + -4;
      bVar1 = 3 < iVar30;
      iVar30 = iVar37;
    } while (iVar37 != 0 && bVar1);
    return;
  }
  do {
    uVar36 = *param_3;
    puVar24 = param_3 + 1;
    puVar25 = (ulong *)(param_3 + 2);
    param_3 = param_3 + 4;
    uVar23 = *param_2;
    uVar22 = *param_2;
    uVar21 = *param_2;
    puVar26 = param_2 + 1;
    param_2 = param_2 + 2;
    iVar37 = *piVar34;
    iVar38 = piVar34[1];
    iVar39 = piVar34[2];
    iVar40 = piVar34[3];
    piVar34 = piVar34 + 4;
    lVar41 = (ulong)uVar36 - 0x30;
    lVar42 = (ulong)*puVar24 - 0x30;
    lVar43 = (*puVar25 & 0xffffffff) - 0x30;
    lVar44 = (*puVar25 >> 0x20) - 0x30;
    auVar45 = NEON_umull(CONCAT44(piVar33[1] + iVar38,*piVar33 + iVar37),uVar21,4);
    lVar50 = (ulong)(uint)((int)*(undefined8 *)(piVar33 + 2) + iVar39) * (*puVar26 & 0xffffffff);
    lVar55 = (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar33 + 2) >> 0x20) + iVar40) *
             (*puVar26 >> 0x20);
    auVar56 = NEON_umull(CONCAT44(piVar31[1] + iVar38,*piVar31 + iVar37),uVar22,4);
    auVar63 = NEON_umull(CONCAT44((iVar38 - piVar32[1]) * uVar27,(iVar37 - *piVar32) * uVar27),
                         uVar23,4);
    auVar61._0_8_ =
         (ulong)(uint)((int)*(undefined8 *)(piVar31 + 2) + iVar39) * (*puVar26 & 0xffffffff);
    auVar61._8_8_ =
         (ulong)(uint)((int)((ulong)*(undefined8 *)(piVar31 + 2) >> 0x20) + iVar40) *
         (*puVar26 >> 0x20);
    auVar67._0_8_ =
         (ulong)((iVar39 - (int)*(undefined8 *)(piVar32 + 2)) * uVar27) * (*puVar26 & 0xffffffff);
    auVar67._8_8_ =
         (ulong)((iVar40 - (int)((ulong)*(undefined8 *)(piVar32 + 2) >> 0x20)) * uVar27) *
         (*puVar26 >> 0x20);
    auVar7._8_8_ = lVar42;
    auVar7._0_8_ = lVar41;
    auVar57 = NEON_ushl(auVar56,auVar7,8);
    auVar15._8_8_ = lVar44;
    auVar15._0_8_ = lVar43;
    auVar60 = NEON_ushl(auVar61,auVar15,8);
    auVar8._8_8_ = lVar42;
    auVar8._0_8_ = lVar41;
    auVar63 = NEON_ushl(auVar63,auVar8,8);
    auVar16._8_8_ = lVar44;
    auVar16._0_8_ = lVar43;
    auVar66 = NEON_ushl(auVar67,auVar16,8);
    auVar47._0_8_ = auVar45._0_8_ - (auVar45._0_8_ + 0x7fffU >> 0xf);
    auVar47._8_8_ = auVar45._8_8_ - (auVar45._8_8_ + 0x7fffU >> 0xf);
    auVar52._0_8_ = lVar50 - (lVar50 + 0x7fffU >> 0xf);
    auVar52._8_8_ = lVar55 - (lVar55 + 0x7fffU >> 0xf);
    auVar9._8_8_ = lVar42;
    auVar9._0_8_ = lVar41;
    auVar45 = NEON_ushl(auVar47,auVar9,8);
    auVar17._8_8_ = lVar44;
    auVar17._0_8_ = lVar43;
    auVar56 = NEON_ushl(auVar52,auVar17,8);
    *piVar33 = auVar45._0_4_;
    piVar33[1] = auVar45._8_4_;
    piVar33[2] = auVar56._0_4_;
    piVar33[3] = auVar56._8_4_;
    piVar33 = piVar33 + 4;
    *piVar31 = (int)(auVar57._0_8_ >> 7) + uVar28;
    piVar31[1] = (int)(auVar57._8_8_ >> 7) + uVar28;
    piVar31[2] = (int)(auVar60._0_8_ >> 7) + uVar29;
    piVar31[3] = (int)(auVar60._8_8_ >> 7) + uVar29;
    piVar31 = piVar31 + 4;
    *piVar32 = (int)(auVar63._0_8_ >> 0xf) + iVar3;
    piVar32[1] = (int)(auVar63._8_8_ >> 0xf) + iVar3;
    piVar32[2] = (int)(auVar66._0_8_ >> 0xf) + iVar3;
    piVar32[3] = (int)(auVar66._8_8_ >> 0xf) + iVar3;
    piVar32 = piVar32 + 4;
    iVar37 = iVar30 + -4;
    bVar1 = 3 < iVar30;
    iVar30 = iVar37;
  } while (iVar37 != 0 && bVar1);
  return;
}


