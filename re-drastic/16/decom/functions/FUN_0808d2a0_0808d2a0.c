/*
 * Ghidra decompilation
 *
 * Function : FUN_0808d2a0
 * Address  : 0808d2a0
 * Program  : drastic16
 */


undefined8
FUN_0808d2a0(undefined (*param_1) [16],short *param_2,int param_3,uint param_4,uint param_5,
            undefined2 param_6,undefined2 param_7,uint param_8,byte param_9)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined (*pauVar5) [16];
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined8 uVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar10 [16];
  
  uVar9 = SIMDExpandImmediate(0,0xe,1);
  uVar2 = CONCAT44(CONCAT22(param_6,param_6),CONCAT22(param_6,param_6));
  uVar3 = CONCAT44(CONCAT22(param_7,param_7),CONCAT22(param_7,param_7));
  uVar4 = CONCAT22(CONCAT11(param_9,param_9),CONCAT11(param_9,param_9));
  uVar16 = VectorShiftLeft(uVar9,CONCAT44(uVar4,uVar4),1,1);
  puVar6 = (undefined8 *)(param_2 + 1);
  *param_2 = ((ushort)(param_4 >> 0xb) & (ushort)param_8) +
             (short)((param_5 >> 0xb & param_8) << (uint)param_9);
  pauVar5 = param_1 + 1;
  auVar18 = VectorCopyLong(SUB168(*param_1,0),1,1);
  auVar17 = VectorCopyLong(SUB168(*param_1,8),1,1);
  auVar10 = VectorMultiplyAccumulate(auVar18._0_8_,uVar2,2,0);
  uVar9 = auVar10._0_8_;
  auVar11 = VectorMultiplyAccumulate(auVar18._8_8_,uVar2,2,0);
  auVar12 = VectorMultiplyAccumulate(auVar17._0_8_,uVar2,2,0);
  auVar13 = VectorMultiplyAccumulate(auVar17._8_8_,uVar2,2,0);
  auVar14 = VectorMultiplyAccumulate(auVar18._0_8_,uVar3,2,0);
  auVar18 = VectorMultiplyAccumulate(auVar18._8_8_,uVar3,2,0);
  auVar15 = VectorMultiplyAccumulate(auVar17._0_8_,uVar3,2,0);
  auVar17 = VectorMultiplyAccumulate(auVar17._8_8_,uVar3,2,0);
  auVar19._0_8_ = VectorShiftNarrowRight(auVar10,8);
  auVar19._8_8_ = VectorShiftNarrowRight(auVar11,8);
  auVar12._0_8_ = VectorShiftNarrowRight(auVar12,8);
  auVar12._8_8_ = VectorShiftNarrowRight(auVar13,8);
  auVar10._0_8_ = VectorShiftNarrowRight(auVar14,8);
  auVar10._8_8_ = VectorShiftNarrowRight(auVar18,8);
  auVar11._0_8_ = VectorShiftNarrowRight(auVar15,8);
  auVar11._8_8_ = VectorShiftNarrowRight(auVar17,8);
  VectorShiftRight(auVar19,3);
  VectorShiftRight(auVar12,3);
  VectorShiftNarrowRight(auVar10,3);
  VectorShiftNarrowRight(auVar11,3);
  iVar7 = param_3 + -0x10;
  if (param_3 + -0x10 != 0 && 0xf < param_3) {
    do {
      auVar10 = *pauVar5;
      pauVar5 = pauVar5 + 1;
      auVar18 = VectorCopyLong(auVar10._0_8_,1,1);
      auVar17 = VectorCopyLong(auVar10._8_8_,1,1);
      auVar10 = VectorMultiplyAccumulate(auVar18._0_8_,uVar2,2,0);
      uVar9 = auVar10._0_8_;
      auVar11 = VectorMultiplyAccumulate(auVar18._8_8_,uVar2,2,0);
      auVar19 = VectorMultiplyAccumulate(0,uVar16,1,1);
      auVar20 = VectorMultiplyAccumulate(0,uVar16,1,1);
      auVar12 = VectorMultiplyAccumulate(auVar17._0_8_,uVar2,2,0);
      auVar13 = VectorMultiplyAccumulate(auVar17._8_8_,uVar2,2,0);
      auVar14 = VectorMultiplyAccumulate(auVar18._0_8_,uVar3,2,0);
      auVar18 = VectorMultiplyAccumulate(auVar18._8_8_,uVar3,2,0);
      auVar15 = VectorMultiplyAccumulate(auVar17._0_8_,uVar3,2,0);
      auVar17 = VectorMultiplyAccumulate(auVar17._8_8_,uVar3,2,0);
      *puVar6 = auVar19._0_8_;
      puVar6[1] = auVar19._8_8_;
      puVar6[2] = auVar20._0_8_;
      puVar6[3] = auVar20._8_8_;
      puVar6 = puVar6 + 4;
      auVar20._0_8_ = VectorShiftNarrowRight(auVar10,8);
      auVar20._8_8_ = VectorShiftNarrowRight(auVar11,8);
      auVar21._0_8_ = VectorShiftNarrowRight(auVar12,8);
      auVar21._8_8_ = VectorShiftNarrowRight(auVar13,8);
      auVar13._0_8_ = VectorShiftNarrowRight(auVar14,8);
      auVar13._8_8_ = VectorShiftNarrowRight(auVar18,8);
      auVar14._0_8_ = VectorShiftNarrowRight(auVar15,8);
      auVar14._8_8_ = VectorShiftNarrowRight(auVar17,8);
      VectorShiftRight(auVar20,3);
      VectorShiftRight(auVar21,3);
      VectorShiftNarrowRight(auVar13,3);
      VectorShiftNarrowRight(auVar14,3);
      iVar8 = iVar7 + -0x10;
      bVar1 = 0xf < iVar7;
      iVar7 = iVar8;
    } while (iVar8 != 0 && bVar1);
  }
  auVar10 = VectorMultiplyAccumulate(0,uVar16,1,1);
  auVar11 = VectorMultiplyAccumulate(0,uVar16,1,1);
  *puVar6 = auVar10._0_8_;
  puVar6[1] = auVar10._8_8_;
  puVar6[2] = auVar11._0_8_;
  puVar6[3] = auVar11._8_8_;
  return uVar9;
}


