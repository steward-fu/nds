/*
 * Ghidra decompilation
 *
 * Function : video_3d_fog_calculate_weights_4x
 * Address  : 080c5160
 * Program  : drastic
 */


void video_3d_fog_calculate_weights_4x
               (undefined (*param_1) [16],undefined8 *param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined (*pauVar5) [16];
  undefined4 unaff_r8;
  int iVar6;
  undefined (*pauVar7) [16];
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
  
  param_3 = param_3 + 0x20;
  uVar1 = (undefined2)((uint)param_4 >> 0x10);
  uVar4 = CONCAT22(uVar1,uVar1);
  auVar2._4_4_ = uVar4;
  auVar2._0_4_ = uVar4;
  auVar2._8_8_ = 0;
  auVar2 = auVar2 & auVar2 << 0x40;
  uVar4 = CONCAT22((short)param_4,(short)param_4);
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = uVar4;
  auVar3._8_8_ = 0;
  auVar3 = auVar3 & auVar3 << 0x40;
  iVar6 = 0x200;
  do {
    pauVar5 = param_1 + 6;
    pauVar7 = param_1 + 7;
    auVar9._0_8_ = VectorShiftNarrowRight(*param_1,9);
    auVar9._8_8_ = VectorShiftNarrowRight(param_1[1],9);
    auVar11._0_8_ = VectorShiftNarrowRight(param_1[2],9);
    auVar11._8_8_ = VectorShiftNarrowRight(param_1[3],9);
    auVar13._0_8_ = VectorShiftNarrowRight(param_1[4],9);
    auVar13._8_8_ = VectorShiftNarrowRight(param_1[5],9);
    auVar15._0_8_ = VectorShiftNarrowRight(*pauVar5,9);
    auVar15._8_8_ = VectorShiftNarrowRight(*pauVar7,9);
    auVar8 = SIMDExpandImmediate(1,0xb,0x80);
    auVar10 = SIMDExpandImmediate(1,0xb,0x80);
    auVar12 = SIMDExpandImmediate(1,0xb,0x80);
    auVar14 = SIMDExpandImmediate(1,0xb,0x80);
    auVar8 = VectorSub(auVar9 & ~auVar8,auVar2,2,1);
    auVar8 = SatQ(auVar8,2,1);
    auVar10 = VectorSub(auVar11 & ~auVar10,auVar2,2,1);
    auVar10 = SatQ(auVar10,2,1);
    auVar12 = VectorSub(auVar13 & ~auVar12,auVar2,2,1);
    auVar12 = SatQ(auVar12,2,1);
    auVar14 = VectorSub(auVar15 & ~auVar14,auVar2,2,1);
    auVar14 = SatQ(auVar14,2,1);
    auVar9 = VectorShiftLeft(auVar8,auVar3,2,0);
    auVar11 = VectorShiftLeft(auVar10,auVar3,2,0);
    auVar13 = VectorShiftLeft(auVar12,auVar3,2,0);
    auVar15 = VectorShiftLeft(auVar14,auVar3,2,0);
    auVar12._0_8_ = VectorShiftNarrowRight(auVar9,8);
    auVar12._8_8_ = VectorShiftNarrowRight(auVar11,8);
    auVar14._0_8_ = VectorShiftNarrowRight(auVar13,8);
    auVar14._8_8_ = VectorShiftNarrowRight(auVar15,8);
    auVar8 = SIMDExpandImmediate(1,0xb,0xfc);
    auVar10 = SIMDExpandImmediate(1,0xb,0xfc);
    auVar16 = VectorShiftRight(auVar12,2);
    auVar17 = VectorShiftRight(auVar14,2);
    auVar12 = SIMDExpandImmediate(1,0xb,0xfc);
    auVar14 = SIMDExpandImmediate(1,0xb,0xfc);
    VectorTableLookup(param_1 + 8,unaff_r8,4);
    VectorTableLookup(param_2,unaff_r8,4);
    VectorTableLookup(param_3,unaff_r8,4);
    VectorTableLookup(param_4,unaff_r8,4);
    param_1 = (undefined (*) [16])VectorTableLookup(param_1 + 8,iVar6,4);
    param_2 = (undefined8 *)VectorTableLookup(param_2,iVar6,4);
    param_3 = VectorTableLookup(param_3,iVar6,4);
    param_4 = VectorTableLookup(param_4,iVar6,4);
    auVar18 = VectorShiftLongLeft(auVar16._0_8_,5);
    auVar19 = VectorShiftLongLeft(auVar16._8_8_,5);
    auVar16 = VectorShiftLongLeft(auVar17._0_8_,5);
    auVar17 = VectorShiftLongLeft(auVar17._8_8_,5);
    auVar8 = VectorDoubleMultiplyHighHalf(auVar18,auVar9 & ~auVar8,2,0);
    auVar9 = SatQ(auVar8,2,0);
    auVar8 = VectorDoubleMultiplyHighHalf(auVar19,auVar11 & ~auVar10,2,0);
    auVar11 = SatQ(auVar8,2,0);
    auVar8 = VectorDoubleMultiplyHighHalf(auVar16,auVar13 & ~auVar12,2,0);
    auVar8 = SatQ(auVar8,2,0);
    auVar10 = VectorDoubleMultiplyHighHalf(auVar17,auVar15 & ~auVar14,2,0);
    auVar10 = SatQ(auVar10,2,0);
    auVar16._0_8_ = VectorCopyNarrow(auVar9,2);
    auVar16._8_8_ = VectorCopyNarrow(auVar11,2);
    auVar17._0_8_ = VectorCopyNarrow(auVar8,2);
    auVar17._8_8_ = VectorCopyNarrow(auVar10,2);
    auVar8 = VectorAdd(*pauVar5,auVar16,1);
    auVar10 = VectorAdd(*pauVar7,auVar17,1);
    *param_2 = auVar8._0_8_;
    param_2[1] = auVar8._8_8_;
    param_2[2] = auVar10._0_8_;
    param_2[3] = auVar10._8_8_;
    param_2 = param_2 + 4;
    iVar6 = iVar6 + -0x20;
  } while (iVar6 != 0);
  return;
}


