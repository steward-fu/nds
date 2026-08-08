/*
 * Ghidra decompilation
 *
 * Function : FUN_08030f98
 * Address  : 08030f98
 * Program  : drastic16
 */


void FUN_08030f98(int **param_1,undefined8 *param_2,uint param_3,void **param_4)

{
  undefined auVar1 [16];
  undefined (*pauVar2) [16];
  ushort uVar3;
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  int iVar6;
  undefined8 *__src;
  byte bVar7;
  uint uVar8;
  size_t __n;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  undefined (*pauVar14) [16];
  undefined8 *puVar15;
  bool bVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined8 uVar22;
  undefined auVar23 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined auVar26 [16];
  undefined8 uVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  uint local_880;
  undefined8 local_878 [65];
  undefined8 auStack_670 [201];
  
  iVar6 = FUN_0807b3d4();
  piVar9 = param_1[0x1c];
  puVar10 = local_878 + 0x40;
  puVar11 = puVar10;
  if (((uint)puVar10 & 8) != 0) {
    puVar11 = auStack_670;
  }
  if (param_4 == (void **)0x0) {
    local_880 = 0;
  }
  iVar13 = **param_1;
  iVar12 = iVar13 + 0xfc638;
  if ((param_4 != (void **)0x0) && (local_880 = (uint)*(byte *)((int)param_4 + 0xb), local_880 != 0)
     ) {
    local_880 = 1;
  }
  if (param_3 == 0xbf) {
    if ((*(int *)(iVar13 + 0xfc658) < 0) && (*(char *)(iVar13 + 0xfc65c) == '\x04')) {
      puVar15 = (undefined8 *)FUN_0801637c(iVar12,iVar13 + 0xfc640,0xbf);
      uVar8 = *(uint *)(iVar13 + 0xfc658) & 0x7fffffff;
      *(uint *)(iVar13 + 0xfc658) = uVar8;
      *(uint *)(*(int *)(iVar13 + 0xfc64c) + 8) = uVar8;
    }
    else {
      puVar15 = (undefined8 *)0x0;
    }
    if ((*(int *)(iVar13 + 0xfc678) < 0) && (*(char *)(iVar13 + 0xfc67c) == '\x04')) {
      puVar15 = (undefined8 *)FUN_0801637c(iVar12,iVar13 + 0xfc660,0xbf);
      uVar8 = *(uint *)(iVar13 + 0xfc678) & 0x7fffffff;
      *(uint *)(iVar13 + 0xfc678) = uVar8;
      *(uint *)(*(int *)(iVar13 + 0xfc66c) + 8) = uVar8;
    }
    if ((*(int *)(iVar13 + 0xfc698) < 0) && (*(char *)(iVar13 + 0xfc69c) == '\x04')) {
      puVar15 = (undefined8 *)FUN_0801637c(iVar12,iVar13 + 0xfc680,0xbf);
      uVar8 = *(uint *)(iVar13 + 0xfc698) & 0x7fffffff;
      *(uint *)(iVar13 + 0xfc698) = uVar8;
      *(uint *)(*(int *)(iVar13 + 0xfc68c) + 8) = uVar8;
    }
    if ((*(int *)(iVar13 + 0xfc6b8) < 0) && (*(char *)(iVar13 + 0xfc6bc) == '\x04')) {
      puVar15 = (undefined8 *)FUN_0801637c(iVar12,iVar13 + 0xfc6a0,0xbf);
      uVar8 = *(uint *)(iVar13 + 0xfc6b8) & 0x7fffffff;
      *(uint *)(iVar13 + 0xfc6b8) = uVar8;
      *(uint *)(*(int *)(iVar13 + 0xfc6ac) + 8) = uVar8;
    }
LAB_08031228:
    param_1[0x84] = (int *)((int)param_1[0x84] + (int)*(short *)((int)param_1 + 0x222));
    param_1[0x85] = (int *)((int)param_1[0x85] + (int)*(short *)(param_1 + 0x89));
    param_1[0xa6] = (int *)((int)param_1[0xa6] + (int)*(short *)((int)param_1 + 0x2aa));
    param_1[0xa7] = (int *)((int)param_1[0xa7] + (int)*(short *)(param_1 + 0xab));
  }
  else {
    if ((*(int *)(iVar13 + 0xfc658) < 0) && (*(char *)(iVar13 + 0xfc65c) == '\x04')) {
      puVar15 = (undefined8 *)FUN_0801637c(iVar12,iVar13 + 0xfc640,param_3);
    }
    else {
      puVar15 = (undefined8 *)0x0;
    }
    if ((*(int *)(iVar13 + 0xfc678) < 0) && (*(char *)(iVar13 + 0xfc67c) == '\x04')) {
      puVar15 = (undefined8 *)FUN_0801637c(iVar12,iVar13 + 0xfc660,param_3);
    }
    uVar8 = *(uint *)(iVar13 + 0xfc698);
    if (((int)uVar8 < 0) && (*(char *)(iVar13 + 0xfc69c) == '\x04')) {
      uVar8 = param_3;
      puVar15 = (undefined8 *)FUN_0801637c(iVar12,iVar13 + 0xfc680);
    }
    bVar7 = (byte)uVar8;
    if ((*(int *)(iVar13 + 0xfc6b8) < 0) && (*(char *)(iVar13 + 0xfc6bc) == '\x04')) {
      uVar8 = param_3;
      puVar15 = (undefined8 *)FUN_0801637c(iVar12,iVar13 + 0xfc6a0);
      bVar7 = (byte)uVar8;
    }
    if (param_3 != 0) goto LAB_08031228;
    bVar16 = 0xbfff < *(ushort *)((int)param_1 + 0x8e);
    if (bVar16) {
      bVar7 = *(byte *)(param_1 + 0x25);
    }
    param_1[0x84] = param_1[0x82];
    if (bVar16) {
      bVar7 = bVar7 | 1;
    }
    param_1[0x85] = param_1[0x83];
    if (bVar16) {
      *(byte *)(param_1 + 0x25) = bVar7;
    }
    param_1[0xa7] = param_1[0xa5];
    if (0xbf < (*(ushort *)((int)param_1 + 0x8e) & 0xff)) {
      *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xfe;
    }
    uVar3 = *(ushort *)(param_1 + 0x24);
    bVar7 = (byte)uVar3;
    if (0xbfff < uVar3) {
      *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 2;
    }
    if (0xbf < (uVar3 & 0xff)) {
      bVar7 = *(byte *)(param_1 + 0x25);
    }
    param_1[0xa6] = param_1[0xa4];
    if (0xbf < (uVar3 & 0xff)) {
      *(byte *)(param_1 + 0x25) = bVar7 & 0xfd;
    }
    *(undefined *)((int)param_1 + 0x22e) = 1;
    *(undefined *)((int)param_1 + 0x2b6) = 1;
  }
  if ((param_4 != (void **)0x0) && (*(char *)(param_4 + 3) != '\0')) {
    if (*(char *)(param_4 + 3) == '\x03') {
      __src = (undefined8 *)(param_1[2] + param_3 * 0x80);
      param_4[1] = __src;
    }
    else {
      __src = puVar15;
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = local_878;
        do {
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar15 = puVar15 + 2;
        } while (puVar15 != puVar10);
        __src = local_878;
      }
      param_4[1] = __src;
      puVar15 = __src;
    }
    if ((*(char *)((int)param_4 + 0xd) == '\0') && (param_3 < *(byte *)((int)param_4 + 10))) {
      memcpy(*param_4,__src,(uint)*(ushort *)(param_4 + 2) << 1);
    }
  }
  uVar8 = (uint)((int)piVar9 << 0xe) >> 0x1e;
  if (uVar8 == 2) {
    FUN_0808ed90(puVar11,param_1[2] + param_3 * 0x80);
    if (local_880 != 0) {
      FUN_0802ff90(param_1,puVar11 + 0x60,param_3,param_4);
    }
LAB_08031178:
    uVar3 = *(ushort *)((int)param_1 + 0x86);
  }
  else {
    if (uVar8 == 3) {
      if (local_880 != 0) {
        FUN_0802ff90(param_1,puVar11,param_3,param_4);
      }
      if (puVar15 == (undefined8 *)0x0) {
        uVar8 = *(uint *)(**param_1 + 0x1b0a8);
        memset(puVar11,(uVar8 & 0x1f) << 1,0x100);
        memset(puVar11 + 0x20,((uVar8 << 0x16) >> 0x1b) << 1,0x100);
        memset(puVar11 + 0x40,((uVar8 << 0x11) >> 0x1b) << 1,0x100);
      }
      else {
        FUN_0808ed90(puVar11,puVar15);
      }
      goto LAB_08031178;
    }
    if (uVar8 != 1) {
      if (local_880 != 0) {
        FUN_0802ff90(param_1,puVar11,param_3,param_4);
      }
      memset(puVar11,0xff,0x300);
      goto LAB_08031178;
    }
    FUN_0802ff90(param_1,puVar11,param_3,param_4);
    uVar3 = *(ushort *)((int)param_1 + 0x86);
  }
  uVar8 = (uint)uVar3;
  if (iVar6 == 2) {
    switch(uVar3 >> 0xe) {
    case 0:
    case 3:
      FUN_0808eea0(param_1,puVar11,param_2);
      break;
    case 1:
      if (0x1f < (uVar8 & 0x1f) * 2) {
        iVar6 = 0xff;
        __n = 0x200;
LAB_08031ae0:
        memset(param_2,iVar6,__n);
        return;
      }
      iVar6 = (uVar8 & 0x1f) * -2 + 0x20;
      auVar1 = SIMDExpandImmediate(0,0xc,0xff);
      pauVar14 = (undefined (*) [16])(puVar11 + 0x40);
      auVar32._4_4_ = iVar6;
      auVar32._0_4_ = iVar6;
      auVar32._8_8_ = 0;
      auVar32 = auVar32 & auVar32 << 0x40;
      puVar11 = param_2;
      do {
        auVar30 = VectorCopyLong(*(undefined8 *)pauVar14[-0x20],1,1);
        pauVar2 = pauVar14 + -0x10;
        pauVar4 = pauVar14 + -0x10;
        auVar19 = VectorCopyLong(*(undefined8 *)((int)pauVar14[-0x20] + 8),1,1);
        auVar17 = *pauVar14;
        pauVar14 = pauVar14 + 1;
        auVar18 = VectorCopyLong(auVar30._0_8_,2,1);
        auVar30 = VectorCopyLong(auVar30._8_8_,2,1);
        puVar10 = puVar11 + 4;
        auVar21 = VectorCopyLong(*(undefined8 *)*pauVar2,1,1);
        auVar18 = VectorMultiplyAccumulate(auVar18,auVar32,4,0);
        auVar28 = VectorCopyLong(auVar19._8_8_,2,1);
        auVar30 = VectorMultiplyAccumulate(auVar30,auVar32,4,0);
        auVar19 = VectorCopyLong(auVar19._0_8_,2,1);
        auVar33 = VectorMultiplyAccumulate(auVar28,auVar32,4,0);
        auVar28 = VectorCopyLong(auVar21._0_8_,2,1);
        auVar20 = VectorCopyLong(auVar17._0_8_,1,1);
        auVar23 = VectorCopyLong(auVar21._8_8_,2,1);
        auVar21 = VectorMultiplyAccumulate(auVar28,auVar32,4,0);
        auVar28 = VectorMultiplyAccumulate(auVar19,auVar32,4,0);
        auVar19 = VectorCopyLong(auVar20._0_8_,2,1);
        auVar17 = VectorCopyLong(auVar17._8_8_,1,1);
        auVar23 = VectorMultiplyAccumulate(auVar23,auVar32,4,0);
        auVar20 = VectorCopyLong(auVar20._8_8_,2,1);
        auVar34 = VectorMultiplyAccumulate(auVar19,auVar32,4,0);
        auVar19 = VectorCopyLong(auVar17._0_8_,2,1);
        auVar29 = VectorCopyLong(auVar17._8_8_,2,1);
        auVar20 = VectorMultiplyAccumulate(auVar20,auVar32,4,0);
        auVar26 = VectorCopyLong(*(undefined8 *)((int)*pauVar4 + 8),1,1);
        auVar17 = VectorShiftRight(auVar18,5);
        auVar31 = VectorMultiplyAccumulate(auVar19,auVar32,4,0);
        auVar19 = VectorCopyLong(auVar26._0_8_,2,1);
        auVar26 = VectorCopyLong(auVar26._8_8_,2,1);
        auVar18 = VectorShiftRight(auVar30,5);
        auVar30 = VectorShiftRight(auVar28,5);
        auVar28 = VectorMultiplyAccumulate(auVar29,auVar32,4,0);
        auVar29 = VectorShiftRight(auVar33,5);
        auVar17 = VectorShiftRight(auVar17,1);
        auVar35 = VectorShiftRight(auVar29,1);
        auVar33 = VectorMultiplyAccumulate(auVar19,auVar32,4,0);
        auVar29 = VectorShiftRight(auVar28,5);
        auVar18 = VectorShiftRight(auVar18,1);
        auVar19 = VectorShiftRight(auVar21,5);
        auVar26 = VectorMultiplyAccumulate(auVar26,auVar32,4,0);
        auVar34 = VectorShiftRight(auVar34,5);
        auVar21 = VectorShiftRight(auVar20,5);
        auVar30 = VectorShiftRight(auVar30,1);
        auVar23 = VectorShiftRight(auVar23,5);
        auVar20 = VectorShiftRight(auVar31,5);
        auVar28 = VectorShiftRight(auVar33,5);
        auVar26 = VectorShiftRight(auVar26,5);
        auVar31 = VectorShiftLeft(auVar23,5,0x20,0);
        auVar33 = VectorShiftRight(auVar34,1);
        auVar23 = VectorShiftLeft(auVar35,0xb,0x20,0);
        auVar26 = VectorShiftLeft(auVar26,5,0x20,0);
        auVar29 = VectorShiftRight(auVar29,1);
        auVar17 = VectorShiftLeft(auVar17,0xb,0x20,0);
        auVar18 = VectorShiftLeft(auVar18,0xb,0x20,0);
        auVar19 = VectorShiftLeft(auVar19,5,0x20,0);
        auVar21 = VectorShiftRight(auVar21,1);
        auVar30 = VectorShiftLeft(auVar30,0xb,0x20,0);
        auVar20 = VectorShiftRight(auVar20,1);
        auVar28 = VectorShiftLeft(auVar28,5,0x20,0);
        uVar25 = VectorCopyNarrow(auVar33 | auVar19 | auVar17 & auVar1,4);
        uVar27 = VectorCopyNarrow(auVar21 | auVar31 | auVar18 & auVar1,4);
        uVar22 = VectorCopyNarrow(auVar20 | auVar28 | auVar30 & auVar1,4);
        uVar24 = VectorCopyNarrow(auVar29 | auVar26 | auVar23 & auVar1,4);
        *puVar11 = uVar25;
        puVar11[1] = uVar27;
        puVar11[2] = uVar22;
        puVar11[3] = uVar24;
        puVar11 = puVar10;
      } while (puVar10 != param_2 + 0x40);
      break;
    case 2:
      if (0x1f < (uVar8 & 0x1f) * 2) {
        iVar6 = 0;
        __n = 0x200;
        goto LAB_08031ae0;
      }
      iVar6 = (uVar8 & 0x1f) * -2 + 0x20;
      SIMDExpandImmediate(0,0,0x10);
      pauVar14 = (undefined (*) [16])(puVar11 + 0x40);
      auVar1 = SIMDExpandImmediate(0,0xc,0xff);
      auVar17._4_4_ = iVar6;
      auVar17._0_4_ = iVar6;
      auVar17._8_8_ = 0;
      auVar17 = auVar17 & auVar17 << 0x40;
      puVar11 = param_2;
      do {
        auVar19 = VectorCopyLong(*(undefined8 *)pauVar14[-0x20],1,1);
        pauVar2 = pauVar14 + -0x10;
        pauVar4 = pauVar14 + -0x10;
        auVar30 = VectorCopyLong(*(undefined8 *)((int)pauVar14[-0x20] + 8),1,1);
        auVar32 = *pauVar14;
        pauVar14 = pauVar14 + 1;
        auVar18 = VectorCopyLong(auVar19._0_8_,2,1);
        auVar20 = VectorCopyLong(auVar19._8_8_,2,1);
        puVar10 = puVar11 + 4;
        auVar19 = VectorCopyLong(auVar30._0_8_,2,1);
        auVar18 = VectorMultiplyAccumulate(auVar18,auVar17,4,0);
        auVar26 = VectorCopyLong(*(undefined8 *)*pauVar2,1,1);
        auVar28 = VectorCopyLong(auVar30._8_8_,2,1);
        auVar30 = VectorMultiplyAccumulate(auVar20,auVar17,4,0);
        auVar21 = VectorCopyLong(auVar32._0_8_,1,1);
        auVar34 = VectorMultiplyAccumulate(auVar19,auVar17,4,0);
        auVar20 = VectorCopyLong(auVar21._0_8_,2,1);
        auVar32 = VectorCopyLong(auVar32._8_8_,1,1);
        auVar31 = VectorCopyLong(auVar21._8_8_,2,1);
        auVar23 = VectorCopyLong(*(undefined8 *)((int)*pauVar4 + 8),1,1);
        auVar19 = VectorCopyLong(auVar32._0_8_,2,1);
        auVar29 = VectorCopyLong(auVar32._8_8_,2,1);
        auVar35 = VectorMultiplyAccumulate(auVar28,auVar17,4,0);
        auVar32 = VectorCopyLong(auVar26._0_8_,2,1);
        auVar33 = VectorCopyLong(auVar26._8_8_,2,1);
        auVar28 = VectorCopyLong(auVar23._0_8_,2,1);
        auVar21 = VectorMultiplyAccumulate(auVar32,auVar17,4,0);
        auVar26 = VectorCopyLong(auVar23._8_8_,2,1);
        auVar32 = VectorShiftRight(auVar18,5);
        auVar18 = VectorShiftRight(auVar30,5);
        auVar30 = VectorShiftRight(auVar34,5);
        auVar23 = VectorMultiplyAccumulate(auVar33,auVar17,4,0);
        auVar34 = VectorShiftRight(auVar35,5);
        auVar33 = VectorMultiplyAccumulate(auVar20,auVar17,4,0);
        auVar34 = VectorShiftRight(auVar34,1);
        auVar20 = VectorMultiplyAccumulate(auVar31,auVar17,4,0);
        auVar32 = VectorShiftRight(auVar32,1);
        auVar31 = VectorMultiplyAccumulate(auVar19,auVar17,4,0);
        auVar18 = VectorShiftRight(auVar18,1);
        auVar19 = VectorShiftRight(auVar21,5);
        auVar33 = VectorShiftRight(auVar33,5);
        auVar29 = VectorMultiplyAccumulate(auVar29,auVar17,4,0);
        auVar21 = VectorShiftRight(auVar20,5);
        auVar30 = VectorShiftRight(auVar30,1);
        auVar20 = VectorShiftRight(auVar31,5);
        auVar28 = VectorMultiplyAccumulate(auVar28,auVar17,4,0);
        auVar29 = VectorShiftRight(auVar29,5);
        auVar33 = VectorShiftRight(auVar33,1);
        auVar32 = VectorShiftLeft(auVar32,0xb,0x20,0);
        auVar26 = VectorMultiplyAccumulate(auVar26,auVar17,4,0);
        auVar28 = VectorShiftRight(auVar28,5);
        auVar18 = VectorShiftLeft(auVar18,0xb,0x20,0);
        auVar23 = VectorShiftRight(auVar23,5);
        auVar26 = VectorShiftRight(auVar26,5);
        auVar31 = VectorShiftLeft(auVar23,5,0x20,0);
        auVar23 = VectorShiftLeft(auVar34,0xb,0x20,0);
        auVar26 = VectorShiftLeft(auVar26,5,0x20,0);
        auVar29 = VectorShiftRight(auVar29,1);
        auVar19 = VectorShiftLeft(auVar19,5,0x20,0);
        auVar21 = VectorShiftRight(auVar21,1);
        auVar30 = VectorShiftLeft(auVar30,0xb,0x20,0);
        auVar20 = VectorShiftRight(auVar20,1);
        auVar28 = VectorShiftLeft(auVar28,5,0x20,0);
        uVar25 = VectorCopyNarrow(auVar33 | auVar19 | auVar32 & auVar1,4);
        uVar27 = VectorCopyNarrow(auVar21 | auVar31 | auVar18 & auVar1,4);
        uVar22 = VectorCopyNarrow(auVar20 | auVar28 | auVar30 & auVar1,4);
        uVar24 = VectorCopyNarrow(auVar29 | auVar26 | auVar23 & auVar1,4);
        *puVar11 = uVar25;
        puVar11[1] = uVar27;
        puVar11[2] = uVar22;
        puVar11[3] = uVar24;
        puVar11 = puVar10;
      } while (puVar10 != param_2 + 0x40);
    }
  }
  else {
    switch(uVar3 >> 0xe) {
    case 0:
    case 3:
      FUN_0808ee38(param_1,puVar11,param_2);
      return;
    case 1:
      if (0x1f < (uVar8 & 0x1f) * 2) {
        iVar6 = 0xff;
        __n = 0x400;
        goto LAB_08031ae0;
      }
      iVar6 = (uVar8 & 0x1f) * -2 + 0x20;
      pauVar14 = (undefined (*) [16])(puVar11 + 0x40);
      auVar1._4_4_ = iVar6;
      auVar1._0_4_ = iVar6;
      auVar1._8_8_ = 0;
      auVar1 = auVar1 & auVar1 << 0x40;
      puVar11 = param_2;
      do {
        pauVar4 = pauVar14 + -0x10;
        auVar32 = VectorCopyLong(*(undefined8 *)pauVar14[-0x10],1,1);
        pauVar2 = pauVar14 + -0x20;
        pauVar5 = pauVar14 + -0x20;
        auVar17 = *pauVar14;
        pauVar14 = pauVar14 + 1;
        auVar30 = VectorCopyLong(auVar17._0_8_,1,1);
        auVar18 = VectorCopyLong(auVar32._0_8_,2,1);
        auVar20 = VectorCopyLong(auVar32._8_8_,2,1);
        puVar10 = puVar11 + 8;
        auVar32 = VectorCopyLong(auVar30._0_8_,2,1);
        auVar28 = VectorCopyLong(*(undefined8 *)((int)*pauVar4 + 8),1,1);
        auVar33 = VectorMultiplyAccumulate(auVar18,auVar1,4,0);
        auVar31 = VectorCopyLong(auVar30._8_8_,2,1);
        auVar30 = VectorCopyLong(auVar28._0_8_,2,1);
        auVar19 = VectorMultiplyAccumulate(auVar32,auVar1,4,0);
        auVar23 = VectorCopyLong(*(undefined8 *)*pauVar2,1,1);
        auVar32 = VectorCopyLong(*(undefined8 *)((int)*pauVar5 + 8),1,1);
        auVar26 = VectorCopyLong(auVar17._8_8_,1,1);
        auVar29 = VectorCopyLong(auVar28._8_8_,2,1);
        auVar18 = VectorCopyLong(auVar32._0_8_,2,1);
        auVar21 = VectorCopyLong(auVar32._8_8_,2,1);
        auVar28 = VectorMultiplyAccumulate(auVar31,auVar1,4,0);
        auVar17 = VectorCopyLong(auVar26._0_8_,2,1);
        auVar31 = VectorMultiplyAccumulate(auVar30,auVar1,4,0);
        auVar30 = VectorMultiplyAccumulate(auVar20,auVar1,4,0);
        auVar26 = VectorCopyLong(auVar26._8_8_,2,1);
        auVar20 = VectorMultiplyAccumulate(auVar29,auVar1,4,0);
        auVar32 = VectorCopyLong(auVar23._0_8_,2,1);
        auVar26 = VectorMultiplyAccumulate(auVar26,auVar1,4,0);
        auVar29 = VectorMultiplyAccumulate(auVar17,auVar1,4,0);
        auVar17 = VectorCopyLong(auVar23._8_8_,2,1);
        auVar34 = VectorShiftRight(auVar33,5);
        auVar23 = VectorMultiplyAccumulate(auVar17,auVar1,4,0);
        auVar32 = VectorMultiplyAccumulate(auVar32,auVar1,4,0);
        auVar26 = VectorShiftRight(auVar26,5);
        auVar33 = VectorMultiplyAccumulate(auVar18,auVar1,4,0);
        auVar18 = VectorMultiplyAccumulate(auVar21,auVar1,4,0);
        auVar21 = VectorShiftRight(auVar30,5);
        auVar30 = VectorShiftRight(auVar19,5);
        auVar28 = VectorShiftRight(auVar28,5);
        auVar19 = VectorShiftRight(auVar31,5);
        auVar20 = VectorShiftRight(auVar20,5);
        auVar17 = VectorShiftRight(auVar29,5);
        auVar32 = VectorShiftRight(auVar32,5);
        auVar23 = VectorShiftRight(auVar23,5);
        auVar29 = VectorShiftRight(auVar33,5);
        auVar31 = VectorShiftRight(auVar18,5);
        auVar18 = VectorShiftLeft(auVar26,2,0x20,0);
        auVar33 = VectorShiftLeft(auVar34,10,0x20,0);
        auVar21 = VectorShiftLeft(auVar21,10,0x20,0);
        auVar30 = VectorShiftLeft(auVar30,2,0x20,0);
        auVar28 = VectorShiftLeft(auVar28,2,0x20,0);
        auVar19 = VectorShiftLeft(auVar19,10,0x20,0);
        auVar20 = VectorShiftLeft(auVar20,10,0x20,0);
        auVar17 = VectorShiftLeft(auVar17,2,0x20,0);
        auVar26 = VectorShiftLeft(auVar23,0x12,0x20,0);
        auVar32 = VectorShiftLeft(auVar32,0x12,0x20,0);
        auVar29 = VectorShiftLeft(auVar29,0x12,0x20,0);
        auVar23 = VectorShiftLeft(auVar31,0x12,0x20,0);
        auVar26 = auVar21 | auVar28 | auVar26;
        auVar32 = auVar33 | auVar30 | auVar32;
        auVar29 = auVar19 | auVar17 | auVar29;
        auVar23 = auVar20 | auVar18 | auVar23;
        *puVar11 = auVar32._0_8_;
        puVar11[1] = auVar32._8_8_;
        puVar11[2] = auVar26._0_8_;
        puVar11[3] = auVar26._8_8_;
        puVar11[4] = auVar29._0_8_;
        puVar11[5] = auVar29._8_8_;
        puVar11[6] = auVar23._0_8_;
        puVar11[7] = auVar23._8_8_;
        puVar11 = puVar10;
      } while (puVar10 != param_2 + 0x80);
      break;
    case 2:
      FUN_0808ef40(param_1,puVar11,param_2);
    }
  }
  return;
}


