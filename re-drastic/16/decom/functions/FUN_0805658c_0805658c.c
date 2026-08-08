/*
 * Ghidra decompilation
 *
 * Function : FUN_0805658c
 * Address  : 0805658c
 * Program  : drastic16
 */


/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0805658c(int param_1,undefined (*param_2) [16],undefined (*param_3) [16],
                 undefined (*param_4) [16],undefined4 param_5,size_t param_6,int param_7)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
  uint uVar8;
  uint uVar9;
  undefined (*pauVar10) [16];
  undefined (*pauVar11) [16];
  ushort *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  undefined (*pauVar18) [16];
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  
  switch(param_5) {
  case 1:
    if (param_3 == (undefined (*) [16])0x0) {
LAB_08057708:
      piVar17 = *(int **)(param_1 + 0x10);
      if (piVar17 == (int *)0x0) {
        piVar17 = (int *)malloc(0x400);
        *(int **)(param_1 + 0x10) = piVar17;
      }
      uVar9 = (uint)*(ushort *)*param_4;
      uVar9 = ((uVar9 << 0x11) >> 0x1b) << 0x10 | ((uVar9 << 0x16) >> 0x1b) << 8 | uVar9 & 0x1f;
      *piVar17 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2;
LAB_08057760:
      memset(param_2,0,param_6);
      return;
    }
    pauVar6 = *(undefined (**) [16])(param_1 + 0x10);
    if (pauVar6 == (undefined (*) [16])0x0) {
      pauVar6 = (undefined (*) [16])malloc(0x400);
      *(undefined (**) [16])(param_1 + 0x10) = pauVar6;
    }
    pauVar18 = pauVar6 + 8;
    auVar34 = SIMDExpandImmediate(0,8,0x1f);
    auVar30 = SIMDExpandImmediate(0,0,0x1f);
    uVar9 = 0;
    auVar41._8_8_ = 0x1f1f1f001f1f1f;
    auVar41._0_8_ = 0x1f1f1f001f1f1f;
    auVar38._8_8_ = 0x1010100010101;
    auVar38._0_8_ = 0x1010100010101;
    pauVar11 = pauVar18;
    while( true ) {
      uVar8 = (uVar9 * 4 + (uVar9 >> 1)) * 0x1000000;
      if (param_4 < pauVar18 && pauVar6 < param_4 + 4) {
        puVar12 = (ushort *)(param_4[-1] + 0xe);
        do {
          puVar12 = puVar12 + 1;
          uVar16 = (uint)*puVar12;
          uVar16 = ((uVar16 << 0x16) >> 0x1b) << 8 | ((uVar16 << 0x11) >> 0x1b) << 0x10 |
                   uVar16 & 0x1f;
          puVar3 = *pauVar6;
          *(uint *)*pauVar6 = uVar8 | (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2;
          pauVar6 = (undefined (*) [16])(puVar3 + 4);
        } while ((undefined (*) [16])(puVar3 + 4) != pauVar18);
      }
      else {
        auVar2._4_4_ = uVar8;
        auVar2._0_4_ = uVar8;
        auVar2._8_8_ = 0;
        auVar2 = auVar2 & auVar2 << 0x40;
        pauVar10 = param_4;
        do {
          auVar33 = *pauVar10;
          pauVar10 = pauVar10 + 1;
          pauVar7 = pauVar6 + 2;
          auVar28 = VectorCopyLong(auVar33._0_8_,2,1);
          auVar24 = VectorCopyLong(auVar33._8_8_,2,1);
          auVar25 = VectorCopyLong(SUB168(auVar33 & auVar34,0),2,1);
          auVar27 = VectorShiftRight(auVar28,10);
          auVar26 = VectorShiftRight(auVar24,10);
          auVar28 = VectorShiftRight(auVar28,5);
          auVar24 = VectorShiftRight(auVar24,5);
          auVar28 = VectorShiftLeft(auVar28 & auVar30,8,0x20,0);
          auVar27 = VectorShiftLeft(auVar27 & auVar30,0x10,0x20,0);
          auVar26 = VectorShiftLeft(auVar26 & auVar30,0x10,0x20,0);
          auVar24 = VectorShiftLeft(auVar24 & auVar30,8,0x20,0);
          auVar33 = VectorCopyLong(SUB168(auVar33 & auVar34,8),2,1);
          auVar25 = auVar27 | auVar28 | auVar25;
          auVar33 = auVar26 | auVar24 | auVar33;
          auVar27 = VectorAdd(auVar25,auVar41,4);
          auVar24 = VectorAdd(auVar33,auVar41,4);
          auVar26 = VectorShiftLeft(auVar25,1,0x20,0);
          auVar27 = VectorShiftRight(auVar27,5);
          auVar25 = VectorShiftRight(auVar24,5);
          auVar33 = VectorShiftLeft(auVar33,1,0x20,0);
          auVar26 = VectorAdd(auVar27 & auVar38,auVar26,4);
          auVar33 = VectorAdd(auVar25 & auVar38,auVar33,4);
          auVar26 = auVar26 | auVar2;
          auVar33 = auVar33 | auVar2;
          *(longlong *)*pauVar6 = auVar26._0_8_;
          *(longlong *)(*pauVar6 + 8) = auVar26._8_8_;
          *(longlong *)pauVar6[1] = auVar33._0_8_;
          *(longlong *)(pauVar6[1] + 8) = auVar33._8_8_;
          pauVar6 = pauVar7;
        } while (pauVar18 != pauVar7);
      }
      uVar9 = uVar9 + 1;
      pauVar18 = pauVar18 + 8;
      if (uVar9 == 8) break;
      pauVar6 = pauVar11;
      pauVar11 = pauVar11 + 8;
    }
    if (param_6 == 0) {
      return;
    }
    if (param_6 < 0x10 || param_3 < param_2 + 1 && param_2 < param_3 + 1) {
      uVar9 = 0;
      do {
        (*param_2)[uVar9] = (*param_3)[uVar9];
        uVar9 = uVar9 + 1;
      } while (uVar9 != param_6);
      return;
    }
    uVar9 = 0;
    pauVar6 = param_2;
    pauVar11 = param_3;
    do {
      uVar9 = uVar9 + 1;
      auVar34 = *pauVar11;
      pauVar11 = pauVar11 + 1;
      *(longlong *)*pauVar6 = auVar34._0_8_;
      *(longlong *)(*pauVar6 + 8) = auVar34._8_8_;
      pauVar6 = pauVar6 + 1;
    } while (uVar9 < param_6 >> 4);
    goto LAB_08056648;
  case 2:
    if (param_3 == (undefined (*) [16])0x0) {
      puVar14 = *(uint **)(param_1 + 0x10);
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)malloc(0x10);
        *(uint **)(param_1 + 0x10) = puVar14;
      }
      uVar9 = (uint)*(ushort *)*param_4;
      uVar9 = ((uVar9 << 0x11) >> 0x1b) << 0x10 | ((uVar9 << 0x16) >> 0x1b) << 8 | uVar9 & 0x1f;
      param_6 = param_6 << 2;
      uVar9 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2;
      if (param_7 == 0) {
        uVar9 = uVar9 | 0x1f000000;
      }
      *puVar14 = uVar9;
      goto LAB_08057760;
    }
    puVar14 = *(uint **)(param_1 + 0x10);
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)malloc(0x10);
      *(uint **)(param_1 + 0x10) = puVar14;
    }
    uVar8 = (uint)*(ushort *)*param_4;
    uVar9 = (uVar8 << 0x11) >> 0x1b;
    if (param_7 == 0) {
      uVar9 = uVar9 << 0x10 | ((uVar8 << 0x16) >> 0x1b) << 8 | uVar8 & 0x1f;
      uVar9 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2 | 0x1f000000;
    }
    else {
      uVar9 = uVar9 << 0x10 | ((uVar8 << 0x16) >> 0x1b) << 8 | uVar8 & 0x1f;
      uVar9 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2;
    }
    uVar16 = (uint)*(ushort *)(*param_4 + 2);
    uVar8 = (uint)*(ushort *)(*param_4 + 6);
    uVar15 = (uint)*(ushort *)(*param_4 + 4);
    uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 | uVar16 & 0x1f;
    uVar15 = ((uVar15 << 0x16) >> 0x1b) << 8 | ((uVar15 << 0x11) >> 0x1b) << 0x10 | uVar15 & 0x1f;
    uVar8 = ((uVar8 << 0x11) >> 0x1b) << 0x10 | ((uVar8 << 0x16) >> 0x1b) << 8 | uVar8 & 0x1f;
    *puVar14 = uVar9;
    puVar14[1] = (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 | 0x1f000000;
    puVar14[2] = (uVar15 + 0x1f1f1f >> 5 & 0x10101) + uVar15 * 2 | 0x1f000000;
    puVar14[3] = (uVar8 + 0x1f1f1f >> 5 & 0x10101) + uVar8 * 2 | 0x1f000000;
    if (param_6 != 0) {
      puVar3 = *param_3;
      if (0xf < param_6 &&
          ((undefined (*) [16])(*param_2 + param_6 * 4) <= param_3 ||
          (undefined (*) [16])(puVar3 + param_6) <= param_2)) {
        SIMDExpandImmediate(0,0xe,3);
        auVar34 = VectorCopyLong(SUB168(*param_3,0),1,1);
        auVar33 = VectorCopyLong(SUB168(*param_3,8),1,1);
        auVar28 = VectorCopyLong(auVar34._0_8_,2,1);
        auVar27 = VectorCopyLong(auVar34._8_8_,2,1);
        auVar24 = VectorCopyLong(auVar33._0_8_,2,1);
        auVar34 = VectorShiftRight(auVar28,2);
        auVar30 = VectorShiftRight(auVar27,2);
        auVar25 = VectorCopyLong(auVar33._8_8_,2,1);
        auVar32 = VectorShiftRight(auVar28,4);
        auVar26 = VectorShiftRight(auVar25,2);
        auVar31 = VectorShiftRight(auVar27,4);
        auVar29 = VectorShiftRight(auVar24,4);
        auVar33 = VectorShiftRight(auVar24,2);
        auVar35._0_8_ = VectorCopyNarrow(auVar34,4);
        auVar35._8_8_ = VectorCopyNarrow(auVar30,4);
        auVar30 = VectorShiftRight(auVar25,4);
        auVar34._0_8_ = VectorCopyNarrow(auVar33,4);
        auVar34._8_8_ = VectorCopyNarrow(auVar26,4);
        auVar37._0_8_ = VectorCopyNarrow(auVar32,4);
        auVar37._8_8_ = VectorCopyNarrow(auVar31,4);
        auVar39._0_8_ = VectorCopyNarrow(auVar29,4);
        auVar39._8_8_ = VectorCopyNarrow(auVar30,4);
        auVar26 = VectorShiftRight(auVar27,6);
        auVar27 = VectorShiftRight(auVar28,6);
        auVar33 = VectorShiftRight(auVar24,6);
        auVar30 = VectorShiftRight(auVar25,6);
        VectorCopyNarrow(auVar35,2);
        VectorCopyNarrow(auVar34,2);
        VectorCopyNarrow(auVar37,2);
        VectorCopyNarrow(auVar39,2);
        auVar36._0_8_ = VectorCopyNarrow(auVar27,4);
        auVar36._8_8_ = VectorCopyNarrow(auVar26,4);
        auVar40._0_8_ = VectorCopyNarrow(auVar33,4);
        auVar40._8_8_ = VectorCopyNarrow(auVar30,4);
        VectorCopyNarrow(auVar36,2);
        VectorCopyNarrow(auVar40,2);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      do {
        puVar4 = *param_3;
        bVar5 = (*param_3)[0];
        (*param_2)[1] = (byte)(((uint)bVar5 << 0x1c) >> 0x1e);
        (*param_2)[0] = bVar5 & 3;
        (*param_2)[2] = (byte)(((uint)bVar5 << 0x1a) >> 0x1e);
        (*param_2)[3] = bVar5 >> 6;
        param_3 = (undefined (*) [16])(puVar4 + 1);
        param_2 = (undefined (*) [16])(*param_2 + 4);
      } while ((undefined (*) [16])(puVar4 + 1) != (undefined (*) [16])(puVar3 + param_6));
    }
    break;
  case 3:
    if (param_3 != (undefined (*) [16])0x0) {
      puVar14 = *(uint **)(param_1 + 0x10);
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)malloc(0x40);
        *(uint **)(param_1 + 0x10) = puVar14;
      }
      uVar16 = (uint)*(ushort *)*param_4;
      uVar8 = (uVar16 << 0x16) >> 0x1b;
      uVar9 = ((uVar16 << 0x11) >> 0x1b) << 0x10;
      if (param_7 == 0) {
        uVar9 = uVar9 | uVar8 << 8 | uVar16 & 0x1f;
        uVar9 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2 | 0x1f000000;
      }
      else {
        uVar9 = uVar9 | uVar8 << 8 | uVar16 & 0x1f;
        uVar9 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2;
      }
      *puVar14 = uVar9;
      if ((undefined (*) [16])(puVar14 + 1) < param_4 + 2 &&
          (undefined (*) [16])(*param_4 + 2) < (undefined (*) [16])(puVar14 + 0x10)) {
        iVar19 = 1;
        do {
          param_4 = (undefined (*) [16])(*param_4 + 2);
          uVar9 = (uint)*(ushort *)*param_4;
          iVar19 = iVar19 + 1;
          uVar9 = ((uVar9 << 0x11) >> 0x1b) << 0x10 | ((uVar9 << 0x16) >> 0x1b) << 8 | uVar9 & 0x1f;
          puVar14 = puVar14 + 1;
          *puVar14 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2 | 0x1f000000;
        } while (iVar19 != 0x10);
      }
      else {
        auVar33 = *(undefined (*) [16])(*param_4 + 2);
        auVar34 = SIMDExpandImmediate(0,8,0x1f);
        auVar30 = SIMDExpandImmediate(0,0,0x1f);
        uVar15 = (uint)*(ushort *)(param_4[1] + 4);
        auVar25 = VectorCopyLong(auVar33._0_8_,2,1);
        uVar8 = (uint)*(ushort *)(param_4[1] + 8);
        auVar24 = VectorCopyLong(auVar33._8_8_,2,1);
        auVar32._8_8_ = 0x1f1f1f001f1f1f;
        auVar32._0_8_ = 0x1f1f1f001f1f1f;
        auVar26 = VectorShiftRight(auVar25,5);
        uVar22 = (uint)*(ushort *)(param_4[1] + 10);
        auVar25 = VectorShiftRight(auVar25,10);
        uVar9 = (uint)*(ushort *)(param_4[1] + 0xc);
        auVar31._8_8_ = 0x1010100010101;
        auVar31._0_8_ = 0x1010100010101;
        auVar27 = VectorShiftRight(auVar24,5);
        auVar28 = VectorShiftRight(auVar24,10);
        uVar21 = (uint)*(ushort *)(param_4[1] + 0xe);
        uVar20 = (uint)*(ushort *)(param_4[1] + 2);
        auVar25 = VectorShiftLeft(auVar25 & auVar30,0x10,0x20,0);
        uVar16 = (uint)*(ushort *)(param_4[1] + 6);
        auVar24 = VectorShiftLeft(auVar26 & auVar30,8,0x20,0);
        auVar27 = VectorShiftLeft(auVar27 & auVar30,8,0x20,0);
        auVar30 = VectorShiftLeft(auVar28 & auVar30,0x10,0x20,0);
        uVar20 = ((uVar20 << 0x11) >> 0x1b) << 0x10 | ((uVar20 << 0x16) >> 0x1b) << 8 |
                 uVar20 & 0x1f;
        auVar26 = VectorCopyLong(SUB168(auVar33 & auVar34,0),2,1);
        auVar34 = VectorCopyLong(SUB168(auVar33 & auVar34,8),2,1);
        auVar26 = auVar24 | auVar25 | auVar26;
        auVar33 = VectorAdd(auVar26,auVar32,4);
        auVar34 = auVar27 | auVar30 | auVar34;
        auVar30 = VectorShiftLeft(auVar26,1,0x20,0);
        auVar26 = VectorAdd(auVar34,auVar32,4);
        uVar15 = ((uVar15 << 0x11) >> 0x1b) << 0x10 | ((uVar15 << 0x16) >> 0x1b) << 8 |
                 uVar15 & 0x1f;
        auVar33 = VectorShiftRight(auVar33,5);
        auVar25 = VectorShiftRight(auVar26,5);
        auVar34 = VectorShiftLeft(auVar34,1,0x20,0);
        auVar26 = VectorAdd(auVar33 & auVar31,auVar30,4);
        auVar33 = VectorAdd(auVar25 & auVar31,auVar34,4);
        auVar34 = SIMDExpandImmediate(0,7,0x1f);
        auVar30 = SIMDExpandImmediate(0,7,0x1f);
        *(longlong *)*(undefined (*) [16])(puVar14 + 1) = SUB168(auVar26 | auVar34,0);
        *(longlong *)(puVar14 + 3) = SUB168(auVar26 | auVar34,8);
        *(longlong *)(puVar14 + 5) = SUB168(auVar33 | auVar30,0);
        *(longlong *)(puVar14 + 7) = SUB168(auVar33 | auVar30,8);
        uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 |
                 uVar16 & 0x1f;
        uVar8 = ((uVar8 << 0x11) >> 0x1b) << 0x10 | ((uVar8 << 0x16) >> 0x1b) << 8 | uVar8 & 0x1f;
        uVar22 = ((uVar22 << 0x11) >> 0x1b) << 0x10 | ((uVar22 << 0x16) >> 0x1b) << 8 |
                 uVar22 & 0x1f;
        uVar9 = ((uVar9 << 0x11) >> 0x1b) << 0x10 | ((uVar9 << 0x16) >> 0x1b) << 8 | uVar9 & 0x1f;
        puVar14[9] = (uVar20 + 0x1f1f1f >> 5 & 0x10101) + uVar20 * 2 | 0x1f000000;
        uVar20 = ((uVar21 << 0x11) >> 0x1b) << 0x10 | ((uVar21 << 0x16) >> 0x1b) << 8 |
                 uVar21 & 0x1f;
        puVar14[10] = (uVar15 + 0x1f1f1f >> 5 & 0x10101) + uVar15 * 2 | 0x1f000000;
        puVar14[0xb] = (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 | 0x1f000000;
        puVar14[0xc] = (uVar8 + 0x1f1f1f >> 5 & 0x10101) + uVar8 * 2 | 0x1f000000;
        puVar14[0xd] = (uVar22 + 0x1f1f1f >> 5 & 0x10101) + uVar22 * 2 | 0x1f000000;
        puVar14[0xe] = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2 | 0x1f000000;
        puVar14[0xf] = (uVar20 + 0x1f1f1f >> 5 & 0x10101) + uVar20 * 2 | 0x1f000000;
      }
      SIMDExpandImmediate(0,0xe,0xf);
      iVar13 = param_6 - 0x40;
      iVar19 = iVar13;
      if (iVar13 != 0 && 0x3f < (int)param_6) {
        do {
          HintPreloadData(param_3 + 8);
          auVar34 = *param_3;
          pauVar11 = param_3 + 1;
          pauVar6 = param_3 + 2;
          pauVar18 = param_3 + 3;
          param_3 = param_3 + 4;
          VectorShiftRight(auVar34,4);
          VectorShiftRight(*pauVar11,4);
          VectorShiftRight(*pauVar6,4);
          VectorShiftRight(*pauVar18,4);
          puVar3 = (undefined *)0x340;
          puVar4 = (undefined *)0x350;
          lVar23 = 8;
          pauVar6 = param_2;
          while( true ) {
            (*pauVar6)[0] = *puVar3;
            (*pauVar6)[1] = *puVar4;
            pauVar6 = (undefined (*) [16])(*pauVar6 + 2);
            lVar23 = lVar23 + -1;
            if (lVar23 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = (undefined *)0x348;
          puVar4 = (undefined *)0x358;
          lVar23 = 8;
          while( true ) {
            (*pauVar6)[0] = *puVar3;
            (*pauVar6)[1] = *puVar4;
            pauVar6 = (undefined (*) [16])(*pauVar6 + 2);
            lVar23 = lVar23 + -1;
            if (lVar23 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          pauVar6 = param_2 + 2;
          puVar3 = (undefined *)0x360;
          puVar4 = (undefined *)0x370;
          lVar23 = 8;
          while( true ) {
            (*pauVar6)[0] = *puVar3;
            (*pauVar6)[1] = *puVar4;
            pauVar6 = (undefined (*) [16])(*pauVar6 + 2);
            lVar23 = lVar23 + -1;
            if (lVar23 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = (undefined *)0x368;
          puVar4 = (undefined *)0x378;
          lVar23 = 8;
          while( true ) {
            (*pauVar6)[0] = *puVar3;
            (*pauVar6)[1] = *puVar4;
            pauVar6 = (undefined (*) [16])(*pauVar6 + 2);
            lVar23 = lVar23 + -1;
            if (lVar23 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          pauVar6 = param_2 + 4;
          puVar3 = (undefined *)0x380;
          puVar4 = (undefined *)0x390;
          lVar23 = 8;
          while( true ) {
            (*pauVar6)[0] = *puVar3;
            (*pauVar6)[1] = *puVar4;
            pauVar6 = (undefined (*) [16])(*pauVar6 + 2);
            lVar23 = lVar23 + -1;
            if (lVar23 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = (undefined *)0x388;
          puVar4 = (undefined *)0x398;
          lVar23 = 8;
          while( true ) {
            (*pauVar6)[0] = *puVar3;
            (*pauVar6)[1] = *puVar4;
            pauVar6 = (undefined (*) [16])(*pauVar6 + 2);
            lVar23 = lVar23 + -1;
            if (lVar23 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          pauVar6 = param_2 + 6;
          puVar3 = (undefined *)0x3a0;
          puVar4 = (undefined *)0x3b0;
          lVar23 = 8;
          while( true ) {
            (*pauVar6)[0] = *puVar3;
            (*pauVar6)[1] = *puVar4;
            pauVar6 = (undefined (*) [16])(*pauVar6 + 2);
            lVar23 = lVar23 + -1;
            if (lVar23 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = (undefined *)0x3a8;
          puVar4 = (undefined *)0x3b8;
          lVar23 = 8;
          while( true ) {
            (*pauVar6)[0] = *puVar3;
            (*pauVar6)[1] = *puVar4;
            pauVar6 = (undefined (*) [16])(*pauVar6 + 2);
            lVar23 = lVar23 + -1;
            if (lVar23 == 0) break;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          param_2 = param_2 + 8;
          iVar13 = iVar19 + -0x40;
          bVar1 = 0x3f < iVar19;
          iVar19 = iVar13;
        } while (iVar13 != 0 && bVar1);
      }
      iVar13 = iVar13 + 0x40;
      if (iVar13 == 0) {
        return;
      }
      do {
        bVar5 = (*param_3)[0];
        (*param_2)[0] = bVar5 & 0xf;
        (*param_2)[1] = bVar5 >> 4;
        param_2 = (undefined (*) [16])(*param_2 + 2);
        iVar13 = iVar13 + -1;
        param_3 = (undefined (*) [16])(*param_3 + 1);
      } while (iVar13 != 0);
      return;
    }
    puVar14 = *(uint **)(param_1 + 0x10);
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)malloc(0x40);
      *(uint **)(param_1 + 0x10) = puVar14;
    }
    uVar9 = (uint)*(ushort *)*param_4;
    uVar9 = ((uVar9 << 0x11) >> 0x1b) << 0x10 | ((uVar9 << 0x16) >> 0x1b) << 8 | uVar9 & 0x1f;
    param_6 = param_6 << 1;
    uVar9 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2;
    if (param_7 == 0) {
      uVar9 = uVar9 | 0x1f000000;
    }
    *puVar14 = uVar9;
    goto LAB_08057760;
  case 4:
    if (param_3 == (undefined (*) [16])0x0) {
      puVar14 = *(uint **)(param_1 + 0x10);
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)malloc(0x400);
        *(uint **)(param_1 + 0x10) = puVar14;
      }
      uVar9 = (uint)*(ushort *)*param_4;
      uVar9 = ((uVar9 << 0x11) >> 0x1b) << 0x10 | ((uVar9 << 0x16) >> 0x1b) << 8 | uVar9 & 0x1f;
      uVar9 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2;
      if (param_7 == 0) {
        uVar9 = uVar9 | 0x1f000000;
      }
      *puVar14 = uVar9;
      goto LAB_08057760;
    }
    puVar14 = *(uint **)(param_1 + 0x10);
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)malloc(0x400);
      *(uint **)(param_1 + 0x10) = puVar14;
    }
    uVar16 = (uint)*(ushort *)*param_4;
    uVar8 = (uVar16 << 0x16) >> 0x1b;
    uVar9 = ((uVar16 << 0x11) >> 0x1b) << 0x10;
    if (param_7 == 0) {
      uVar9 = uVar9 | uVar8 << 8 | uVar16 & 0x1f;
      uVar9 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2 | 0x1f000000;
    }
    else {
      uVar9 = uVar9 | uVar8 << 8 | uVar16 & 0x1f;
      uVar9 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2;
    }
    pauVar6 = (undefined (*) [16])(*param_4 + 2);
    *puVar14 = uVar9;
    if ((undefined (*) [16])(puVar14 + 1) < param_4 + 0x20 &&
        pauVar6 < (undefined (*) [16])(puVar14 + 0x100)) {
      iVar19 = 1;
      do {
        param_4 = (undefined (*) [16])(*param_4 + 2);
        uVar9 = (uint)*(ushort *)*param_4;
        iVar19 = iVar19 + 1;
        uVar9 = ((uVar9 << 0x11) >> 0x1b) << 0x10 | ((uVar9 << 0x16) >> 0x1b) << 8 | uVar9 & 0x1f;
        puVar14 = puVar14 + 1;
        *puVar14 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2 | 0x1f000000;
      } while (iVar19 != 0x100);
    }
    else {
      auVar34 = SIMDExpandImmediate(0,8,0x1f);
      auVar30 = SIMDExpandImmediate(0,0,0x1f);
      auVar29._8_8_ = 0x1f1f1f001f1f1f;
      auVar29._0_8_ = 0x1f1f1f001f1f1f;
      auVar28._8_8_ = 0x1010100010101;
      auVar28._0_8_ = 0x1010100010101;
      pauVar11 = (undefined (*) [16])(puVar14 + 1);
      do {
        auVar33 = *pauVar6;
        pauVar6 = pauVar6 + 1;
        auVar31 = VectorCopyLong(auVar33._0_8_,2,1);
        auVar24 = VectorCopyLong(auVar33._8_8_,2,1);
        auVar27 = VectorCopyLong(SUB168(auVar33 & auVar34,0),2,1);
        auVar26 = VectorShiftRight(auVar31,5);
        auVar25 = VectorShiftRight(auVar24,5);
        auVar31 = VectorShiftRight(auVar31,10);
        auVar24 = VectorShiftRight(auVar24,10);
        auVar26 = VectorShiftLeft(auVar26 & auVar30,8,0x20,0);
        auVar31 = VectorShiftLeft(auVar31 & auVar30,0x10,0x20,0);
        auVar25 = VectorShiftLeft(auVar25 & auVar30,8,0x20,0);
        auVar24 = VectorShiftLeft(auVar24 & auVar30,0x10,0x20,0);
        auVar33 = VectorCopyLong(SUB168(auVar33 & auVar34,8),2,1);
        auVar27 = auVar26 | auVar31 | auVar27;
        auVar33 = auVar25 | auVar24 | auVar33;
        auVar24 = VectorAdd(auVar27,auVar29,4);
        auVar25 = VectorAdd(auVar33,auVar29,4);
        auVar26 = VectorShiftLeft(auVar27,1,0x20,0);
        auVar24 = VectorShiftRight(auVar24,5);
        auVar25 = VectorShiftRight(auVar25,5);
        auVar33 = VectorShiftLeft(auVar33,1,0x20,0);
        auVar24 = VectorAdd(auVar24 & auVar28,auVar26,4);
        auVar25 = VectorAdd(auVar25 & auVar28,auVar33,4);
        auVar33 = SIMDExpandImmediate(0,7,0x1f);
        auVar26 = SIMDExpandImmediate(0,7,0x1f);
        *(longlong *)*pauVar11 = SUB168(auVar24 | auVar33,0);
        *(longlong *)(*pauVar11 + 8) = SUB168(auVar24 | auVar33,8);
        *(longlong *)pauVar11[1] = SUB168(auVar25 | auVar26,0);
        *(longlong *)(pauVar11[1] + 8) = SUB168(auVar25 | auVar26,8);
        pauVar11 = pauVar11 + 2;
      } while (pauVar6 != (undefined (*) [16])(param_4[0x1f] + 2));
      uVar16 = (uint)*(ushort *)(param_4[0x1f] + 2);
      uVar15 = (uint)*(ushort *)(param_4[0x1f] + 8);
      uVar9 = (uint)*(ushort *)(param_4[0x1f] + 4);
      uVar8 = (uint)*(ushort *)(param_4[0x1f] + 6);
      uVar21 = (uint)*(ushort *)(param_4[0x1f] + 10);
      uVar20 = (uint)*(ushort *)(param_4[0x1f] + 0xc);
      uVar22 = (uint)*(ushort *)(param_4[0x1f] + 0xe);
      uVar16 = ((uVar16 << 0x11) >> 0x1b) << 0x10 | ((uVar16 << 0x16) >> 0x1b) << 8 | uVar16 & 0x1f;
      uVar9 = ((uVar9 << 0x11) >> 0x1b) << 0x10 | ((uVar9 << 0x16) >> 0x1b) << 8 | uVar9 & 0x1f;
      uVar8 = ((uVar8 << 0x11) >> 0x1b) << 0x10 | ((uVar8 << 0x16) >> 0x1b) << 8 | uVar8 & 0x1f;
      puVar14[0xf9] = (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 | 0x1f000000;
      uVar15 = ((uVar15 << 0x11) >> 0x1b) << 0x10 | ((uVar15 << 0x16) >> 0x1b) << 8 | uVar15 & 0x1f;
      uVar16 = ((uVar21 << 0x11) >> 0x1b) << 0x10 | ((uVar21 << 0x16) >> 0x1b) << 8 | uVar21 & 0x1f;
      uVar21 = ((uVar22 << 0x11) >> 0x1b) << 0x10 | ((uVar22 << 0x16) >> 0x1b) << 8 | uVar22 & 0x1f;
      uVar20 = ((uVar20 << 0x11) >> 0x1b) << 0x10 | ((uVar20 << 0x16) >> 0x1b) << 8 | uVar20 & 0x1f;
      puVar14[0xfb] = (uVar8 + 0x1f1f1f >> 5 & 0x10101) + uVar8 * 2 | 0x1f000000;
      puVar14[0xfa] = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2 | 0x1f000000;
      puVar14[0xfc] = (uVar15 + 0x1f1f1f >> 5 & 0x10101) + uVar15 * 2 | 0x1f000000;
      puVar14[0xfd] = (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 | 0x1f000000;
      puVar14[0xfe] = (uVar20 + 0x1f1f1f >> 5 & 0x10101) + uVar20 * 2 | 0x1f000000;
      puVar14[0xff] = (uVar21 + 0x1f1f1f >> 5 & 0x10101) + uVar21 * 2 | 0x1f000000;
    }
    if (param_6 == 0) {
      return;
    }
    if (param_6 < 0x10 || param_3 < param_2 + 1 && param_2 < param_3 + 1) {
      uVar9 = 0;
      do {
        (*param_2)[uVar9] = (*param_3)[uVar9];
        uVar9 = uVar9 + 1;
      } while (uVar9 != param_6);
      return;
    }
    uVar9 = 0;
    pauVar6 = param_3;
    pauVar11 = param_2;
    do {
      uVar9 = uVar9 + 1;
      auVar34 = *pauVar6;
      pauVar6 = pauVar6 + 1;
      *(longlong *)*pauVar11 = auVar34._0_8_;
      *(longlong *)(*pauVar11 + 8) = auVar34._8_8_;
      pauVar11 = pauVar11 + 1;
    } while (uVar9 < param_6 >> 4);
    if (param_6 == (param_6 & 0xfffffff0)) {
      return;
    }
    uVar9 = (param_6 & 0xfffffff0) + 1;
    (*param_2)[param_6 & 0xfffffff0] = (*param_3)[param_6 & 0xfffffff0];
    if (param_6 <= uVar9) {
      return;
    }
    goto LAB_08056674;
  case 6:
    if (param_3 == (undefined (*) [16])0x0) goto LAB_08057708;
    pauVar6 = *(undefined (**) [16])(param_1 + 0x10);
    if (pauVar6 == (undefined (*) [16])0x0) {
      pauVar6 = (undefined (*) [16])malloc(0x400);
      *(undefined (**) [16])(param_1 + 0x10) = pauVar6;
    }
    pauVar18 = pauVar6 + 2;
    iVar19 = 0;
    auVar34 = SIMDExpandImmediate(0,8,0x1f);
    auVar30 = SIMDExpandImmediate(0,0,0x1f);
    auVar24._8_8_ = 0x1f1f1f001f1f1f;
    auVar24._0_8_ = 0x1f1f1f001f1f1f;
    auVar25._8_8_ = 0x1010100010101;
    auVar25._0_8_ = 0x1010100010101;
    pauVar11 = pauVar18;
    while( true ) {
      uVar9 = iVar19 << 0x18;
      if (pauVar6 < param_4 + 1 && param_4 < pauVar18) {
        puVar12 = (ushort *)(param_4[-1] + 0xe);
        do {
          puVar12 = puVar12 + 1;
          uVar8 = (uint)*puVar12;
          uVar8 = ((uVar8 << 0x11) >> 0x1b) << 0x10 | ((uVar8 << 0x16) >> 0x1b) << 8 | uVar8 & 0x1f;
          puVar3 = *pauVar6;
          *(uint *)*pauVar6 = uVar9 | (uVar8 + 0x1f1f1f >> 5 & 0x10101) + uVar8 * 2;
          pauVar6 = (undefined (*) [16])(puVar3 + 4);
        } while (pauVar18 != (undefined (*) [16])(puVar3 + 4));
      }
      else {
        auVar33 = *param_4;
        auVar32 = VectorCopyLong(auVar33._0_8_,2,1);
        auVar27._4_4_ = uVar9;
        auVar27._0_4_ = uVar9;
        auVar27._8_8_ = 0;
        auVar27 = auVar27 & auVar27 << 0x40;
        auVar29 = VectorCopyLong(auVar33._8_8_,2,1);
        auVar28 = VectorCopyLong(SUB168(auVar33 & auVar34,0),2,1);
        auVar31 = VectorShiftRight(auVar32,5);
        auVar26 = VectorShiftRight(auVar29,5);
        auVar32 = VectorShiftRight(auVar32,10);
        auVar29 = VectorShiftRight(auVar29,10);
        auVar32 = VectorShiftLeft(auVar32 & auVar30,0x10,0x20,0);
        auVar31 = VectorShiftLeft(auVar31 & auVar30,8,0x20,0);
        auVar26 = VectorShiftLeft(auVar26 & auVar30,8,0x20,0);
        auVar29 = VectorShiftLeft(auVar29 & auVar30,0x10,0x20,0);
        auVar33 = VectorCopyLong(SUB168(auVar33 & auVar34,8),2,1);
        auVar28 = auVar31 | auVar32 | auVar28;
        auVar33 = auVar26 | auVar29 | auVar33;
        auVar31 = VectorAdd(auVar28,auVar24,4);
        auVar29 = VectorAdd(auVar33,auVar24,4);
        auVar26 = VectorShiftLeft(auVar28,1,0x20,0);
        auVar31 = VectorShiftRight(auVar31,5);
        auVar28 = VectorShiftRight(auVar29,5);
        auVar33 = VectorShiftLeft(auVar33,1,0x20,0);
        auVar26 = VectorAdd(auVar31 & auVar25,auVar26,4);
        auVar33 = VectorAdd(auVar28 & auVar25,auVar33,4);
        auVar26 = auVar26 | auVar27;
        auVar33 = auVar33 | auVar27;
        *(longlong *)*pauVar6 = auVar26._0_8_;
        *(longlong *)(*pauVar6 + 8) = auVar26._8_8_;
        *(longlong *)pauVar6[1] = auVar33._0_8_;
        *(longlong *)(pauVar6[1] + 8) = auVar33._8_8_;
      }
      iVar19 = iVar19 + 1;
      pauVar18 = pauVar18 + 2;
      if (iVar19 == 0x20) break;
      pauVar6 = pauVar11;
      pauVar11 = pauVar11 + 2;
    }
    if (param_6 == 0) {
      return;
    }
    if (param_6 < 0x10 || param_3 < param_2 + 1 && param_2 < param_3 + 1) {
      uVar9 = 0;
      do {
        (*param_2)[uVar9] = (*param_3)[uVar9];
        uVar9 = uVar9 + 1;
      } while (uVar9 != param_6);
      return;
    }
    uVar9 = 0;
    pauVar6 = param_3;
    pauVar11 = param_2;
    do {
      uVar9 = uVar9 + 1;
      auVar34 = *pauVar6;
      pauVar6 = pauVar6 + 1;
      *(longlong *)*pauVar11 = auVar34._0_8_;
      *(longlong *)(*pauVar11 + 8) = auVar34._8_8_;
      pauVar11 = pauVar11 + 1;
    } while (uVar9 < param_6 >> 4);
LAB_08056648:
    if (param_6 != (param_6 & 0xfffffff0)) {
      uVar9 = (param_6 & 0xfffffff0) + 1;
      (*param_2)[param_6 & 0xfffffff0] = (*param_3)[param_6 & 0xfffffff0];
      if (uVar9 < param_6) {
LAB_08056674:
        uVar8 = param_6 & 0xfffffff0;
        (*param_2)[uVar8 + 1] = (*param_3)[uVar9];
        if (uVar8 + 2 < param_6) {
          (*param_2)[uVar8 + 2] = (*param_3)[uVar8 + 2];
          if (uVar8 + 3 < param_6) {
            (*param_2)[uVar8 + 3] = (*param_3)[uVar8 + 3];
            if (uVar8 + 4 < param_6) {
              (*param_2)[uVar8 + 4] = (*param_3)[uVar8 + 4];
              if (uVar8 + 5 < param_6) {
                (*param_2)[uVar8 + 5] = (*param_3)[uVar8 + 5];
                if (uVar8 + 6 < param_6) {
                  (*param_2)[uVar8 + 6] = (*param_3)[uVar8 + 6];
                  if (uVar8 + 7 < param_6) {
                    (*param_2)[uVar8 + 7] = (*param_3)[uVar8 + 7];
                    if (uVar8 + 8 < param_6) {
                      (*param_2)[uVar8 + 8] = (*param_3)[uVar8 + 8];
                      if (uVar8 + 9 < param_6) {
                        (*param_2)[uVar8 + 9] = (*param_3)[uVar8 + 9];
                        if (uVar8 + 10 < param_6) {
                          (*param_2)[uVar8 + 10] = (*param_3)[uVar8 + 10];
                          if (uVar8 + 0xb < param_6) {
                            (*param_2)[uVar8 + 0xb] = (*param_3)[uVar8 + 0xb];
                            if (uVar8 + 0xc < param_6) {
                              (*param_2)[uVar8 + 0xc] = (*param_3)[uVar8 + 0xc];
                              if (uVar8 + 0xd < param_6) {
                                (*param_2)[uVar8 + 0xd] = (*param_3)[uVar8 + 0xd];
                                if (uVar8 + 0xe < param_6) {
                                  (*param_2)[uVar8 + 0xe] = (*param_3)[uVar8 + 0xe];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 7:
    uVar9 = param_6 >> 1;
    if (param_3 == (undefined (*) [16])0x0) {
      param_6 = uVar9 << 2;
      goto LAB_08057760;
    }
    if (uVar9 != 0) {
      if (uVar9 < 8 ||
          param_3 < (undefined (*) [16])(*param_2 + uVar9 * 4) &&
          param_2 < (undefined (*) [16])(*param_3 + (param_6 & 0xfffffffe))) {
        puVar14 = (uint *)(param_2[-1] + 0xc);
        pauVar6 = param_3;
        do {
          puVar3 = *pauVar6;
          uVar9 = (uint)*(ushort *)*pauVar6;
          uVar9 = ((uVar9 << 0x16) >> 0x1b) << 8 | ((uVar9 << 0x11) >> 0x1b) << 0x10 | uVar9 & 0x1f;
          puVar14 = puVar14 + 1;
          *puVar14 = (uVar9 + 0x1f1f1f >> 5 & 0x10101) + uVar9 * 2 |
                     (uint)(*(ushort *)*pauVar6 >> 0xf) * 0x1f000000;
          pauVar6 = (undefined (*) [16])(puVar3 + 2);
        } while ((undefined (*) [16])(puVar3 + 2) !=
                 (undefined (*) [16])(*param_3 + (param_6 & 0xfffffffe)));
      }
      else {
        auVar34 = SIMDExpandImmediate(0,8,0x1f);
        auVar30 = SIMDExpandImmediate(0,0,0x1f);
        uVar15 = 0;
        uVar16 = param_6 >> 4;
        auVar26._8_8_ = 0x1f1f1f001f1f1f;
        auVar26._0_8_ = 0x1f1f1f001f1f1f;
        auVar33._8_8_ = 0x1010100010101;
        auVar33._0_8_ = 0x1010100010101;
        uVar8 = uVar16 * 8;
        pauVar6 = param_2;
        pauVar11 = param_3;
        do {
          auVar25 = *pauVar11;
          pauVar11 = pauVar11 + 1;
          uVar15 = uVar15 + 1;
          auVar32 = VectorCopyLong(auVar25._0_8_,2,1);
          auVar31 = VectorCopyLong(auVar25._8_8_,2,1);
          auVar40 = VectorCopyLong(SUB168(auVar25 & auVar34,0),2,1);
          auVar24 = VectorShiftRight(auVar32,10);
          auVar28 = VectorShiftRight(auVar32,5);
          auVar27 = VectorShiftRight(auVar31,10);
          auVar29 = VectorShiftRight(auVar31,5);
          auVar24 = VectorShiftLeft(auVar24 & auVar30,0x10,0x20,0);
          auVar27 = VectorShiftLeft(auVar27 & auVar30,0x10,0x20,0);
          auVar28 = VectorShiftLeft(auVar28 & auVar30,8,0x20,0);
          auVar29 = VectorShiftLeft(auVar29 & auVar30,8,0x20,0);
          auVar32 = VectorShiftRight(auVar32,0xf);
          auVar31 = VectorShiftRight(auVar31,0xf);
          auVar37 = VectorCopyLong(SUB168(auVar25 & auVar34,8),2,1);
          auVar40 = auVar24 | auVar28 | auVar40;
          auVar37 = auVar27 | auVar29 | auVar37;
          auVar27 = VectorAdd(auVar40,auVar26,4);
          auVar28 = VectorAdd(auVar37,auVar26,4);
          auVar25 = VectorShiftLeft(auVar32,5,0x20,0);
          auVar24 = VectorShiftLeft(auVar31,5,0x20,0);
          auVar27 = VectorShiftRight(auVar27,5);
          auVar28 = VectorShiftRight(auVar28,5);
          auVar29 = VectorSub(auVar25,auVar32,4);
          auVar25 = VectorSub(auVar24,auVar31,4);
          auVar32 = VectorShiftLeft(auVar40,1,0x20,0);
          auVar31 = VectorShiftLeft(auVar37,1,0x20,0);
          auVar24 = VectorShiftLeft(auVar29,0x18,0x20,0);
          auVar25 = VectorShiftLeft(auVar25,0x18,0x20,0);
          auVar29 = VectorAdd(auVar27 & auVar33,auVar32,4);
          auVar27 = VectorAdd(auVar28 & auVar33,auVar31,4);
          *(longlong *)*pauVar6 = SUB168(auVar29 | auVar24,0);
          *(longlong *)(*pauVar6 + 8) = SUB168(auVar29 | auVar24,8);
          *(longlong *)pauVar6[1] = SUB168(auVar27 | auVar25,0);
          *(longlong *)(pauVar6[1] + 8) = SUB168(auVar27 | auVar25,8);
          pauVar6 = pauVar6 + 2;
        } while (uVar15 < uVar16);
        if (uVar9 != uVar8) {
          puVar12 = (ushort *)(param_3[uVar16 - 1] + 0xe);
          puVar14 = (uint *)(param_2[uVar16 * 2 + -1] + 0xc);
          do {
            puVar12 = puVar12 + 1;
            uVar16 = (uint)*puVar12;
            uVar8 = uVar8 + 1;
            uVar16 = ((uVar16 << 0x16) >> 0x1b) << 8 | ((uVar16 << 0x11) >> 0x1b) << 0x10 |
                     uVar16 & 0x1f;
            puVar14 = puVar14 + 1;
            *puVar14 = (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 |
                       (uint)(*puVar12 >> 0xf) * 0x1f000000;
          } while (uVar8 < uVar9);
        }
      }
    }
  }
  return;
}


