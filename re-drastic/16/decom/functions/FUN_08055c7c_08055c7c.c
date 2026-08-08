/*
 * Ghidra decompilation
 *
 * Function : FUN_08055c7c
 * Address  : 08055c7c
 * Program  : drastic16
 */


void FUN_08055c7c(int param_1,ushort *param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined (*pauVar4) [16];
  ushort *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    puVar6 = (uint *)malloc(param_4 << 2);
    *(uint **)(param_1 + 0x10) = puVar6;
  }
  uVar8 = (uint)*param_2;
  uVar8 = ((uVar8 << 0x11) >> 0x1b) << 0x10 | ((uVar8 << 0x16) >> 0x1b) << 8 | uVar8 & 0x1f;
  uVar8 = (uVar8 + 0x1f1f1f >> 5 & 0x10101) + uVar8 * 2;
  if (param_3 == 0) {
    uVar8 = uVar8 | 0x1f000000;
  }
  *puVar6 = uVar8;
  if (1 < param_4) {
    pauVar4 = (undefined (*) [16])(param_2 + 1);
    uVar8 = param_4 - 1;
    if (uVar8 < 8 ||
        puVar6 + 1 < (undefined8 *)((int)pauVar4[-1] + (param_4 + 7) * 2) &&
        pauVar4 < (undefined (*) [16])(puVar6 + param_4)) {
      puVar5 = param_2 + (param_4 - 1);
      do {
        param_2 = param_2 + 1;
        uVar8 = (uint)*param_2;
        uVar8 = ((uVar8 << 0x16) >> 0x1b) << 8 | ((uVar8 << 0x11) >> 0x1b) << 0x10 | uVar8 & 0x1f;
        puVar6 = puVar6 + 1;
        *puVar6 = (uVar8 + 0x1f1f1f >> 5 & 0x10101) + uVar8 * 2 | 0x1f000000;
      } while (param_2 != puVar5);
      return;
    }
    auVar2 = SIMDExpandImmediate(0,8,0x1f);
    auVar3 = SIMDExpandImmediate(0,0,0x1f);
    uVar9 = 0;
    uVar1 = uVar8 & 0xfffffff8;
    puVar7 = (undefined8 *)(puVar6 + 1);
    do {
      auVar13 = *pauVar4;
      pauVar4 = pauVar4 + 1;
      uVar9 = uVar9 + 1;
      auVar14 = VectorCopyLong(auVar13._0_8_,2,1);
      auVar12 = VectorCopyLong(auVar13._8_8_,2,1);
      auVar11 = VectorCopyLong(SUB168(auVar13 & auVar2,0),2,1);
      auVar10 = VectorShiftRight(auVar14,5);
      auVar14 = VectorShiftRight(auVar14,10);
      auVar15 = VectorShiftRight(auVar12,5);
      auVar12 = VectorShiftRight(auVar12,10);
      auVar10 = VectorShiftLeft(auVar10 & auVar3,8,0x20,0);
      auVar15 = VectorShiftLeft(auVar15 & auVar3,8,0x20,0);
      auVar14 = VectorShiftLeft(auVar14 & auVar3,0x10,0x20,0);
      auVar12 = VectorShiftLeft(auVar12 & auVar3,0x10,0x20,0);
      auVar13 = VectorCopyLong(SUB168(auVar13 & auVar2,8),2,1);
      auVar13 = auVar15 | auVar12 | auVar13;
      auVar11 = auVar10 | auVar14 | auVar11;
      auVar12._8_8_ = 0x1f1f1f001f1f1f;
      auVar12._0_8_ = 0x1f1f1f001f1f1f;
      auVar10 = VectorAdd(auVar13,auVar12,4);
      auVar14._8_8_ = 0x1f1f1f001f1f1f;
      auVar14._0_8_ = 0x1f1f1f001f1f1f;
      auVar14 = VectorAdd(auVar11,auVar14,4);
      auVar12 = VectorShiftLeft(auVar13,1,0x20,0);
      auVar16 = VectorShiftRight(auVar14,5);
      auVar15 = VectorShiftRight(auVar10,5);
      auVar14 = VectorShiftLeft(auVar11,1,0x20,0);
      auVar13._8_8_ = 0x1010100010101;
      auVar13._0_8_ = 0x1010100010101;
      auVar10._8_8_ = 0x1010100010101;
      auVar10._0_8_ = 0x1010100010101;
      auVar14 = VectorAdd(auVar16 & auVar13,auVar14,4);
      auVar12 = VectorAdd(auVar15 & auVar10,auVar12,4);
      auVar13 = SIMDExpandImmediate(0,7,0x1f);
      auVar10 = SIMDExpandImmediate(0,7,0x1f);
      *puVar7 = SUB168(auVar14 | auVar13,0);
      puVar7[1] = SUB168(auVar14 | auVar13,8);
      puVar7[2] = SUB168(auVar12 | auVar10,0);
      puVar7[3] = SUB168(auVar12 | auVar10,8);
      puVar7 = puVar7 + 4;
    } while (uVar9 < uVar8 >> 3);
    uVar9 = uVar1 + 1;
    if (uVar1 != uVar8) {
      param_2 = param_2 + uVar1;
      puVar6 = puVar6 + uVar1;
      do {
        param_2 = param_2 + 1;
        uVar8 = (uint)*param_2;
        uVar9 = uVar9 + 1;
        uVar8 = ((uVar8 << 0x16) >> 0x1b) << 8 | ((uVar8 << 0x11) >> 0x1b) << 0x10 | uVar8 & 0x1f;
        puVar6 = puVar6 + 1;
        *puVar6 = (uVar8 + 0x1f1f1f >> 5 & 0x10101) + uVar8 * 2 | 0x1f000000;
      } while (uVar9 < param_4);
    }
  }
  return;
}


