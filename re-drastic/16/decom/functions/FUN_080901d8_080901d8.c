/*
 * Ghidra decompilation
 *
 * Function : FUN_080901d8
 * Address  : 080901d8
 * Program  : drastic16
 */


void FUN_080901d8(undefined8 *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined auVar2 [16];
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  
  auVar2 = SIMDExpandImmediate(0,0xe,0xff);
  do {
    uVar8 = CONCAT31(0,*(byte *)(param_3 + (*(uint *)param_1 & 0xffff)));
    bVar3 = *(byte *)(param_3 + (*(uint *)param_1 >> 0x10));
    uVar9 = CONCAT31(0,*(byte *)(param_3 + (*(uint *)((int)param_1 + 4) & 0xffff)));
    bVar4 = *(byte *)(param_3 + (*(uint *)((int)param_1 + 4) >> 0x10));
    uVar10 = CONCAT31(0,*(byte *)(param_3 + (*(uint *)(param_1 + 1) & 0xffff)));
    iVar7 = param_4 + -8;
    auVar13[4] = bVar3;
    auVar13._0_4_ = uVar8;
    auVar13._5_3_ = 0;
    bVar5 = *(byte *)(param_3 + (*(uint *)(param_1 + 1) >> 0x10));
    uVar11 = CONCAT31(0,*(byte *)(param_3 + (*(uint *)((int)param_1 + 0xc) & 0xffff)));
    auVar13[12] = bVar4;
    auVar13._8_4_ = uVar9;
    auVar13._13_3_ = 0;
    bVar6 = *(byte *)(param_3 + (*(uint *)((int)param_1 + 0xc) >> 0x10));
    auVar14[4] = bVar5;
    auVar14._0_4_ = uVar10;
    auVar14._5_3_ = 0;
    auVar14[12] = bVar6;
    auVar14._8_4_ = uVar11;
    auVar14._13_3_ = 0;
    auVar15._2_2_ = *(undefined2 *)(param_2 + (uint)bVar3 * 2);
    auVar15._0_2_ = *(undefined2 *)(param_2 + uVar8 * 2);
    auVar12._0_8_ = VectorCopyNarrow(auVar13,4);
    auVar15._6_2_ = *(undefined2 *)(param_2 + (uint)bVar4 * 2);
    auVar15._4_2_ = *(undefined2 *)(param_2 + uVar9 * 2);
    auVar12._8_8_ = VectorCopyNarrow(auVar14,4);
    auVar15._10_2_ = *(undefined2 *)(param_2 + (uint)bVar5 * 2);
    auVar15._8_2_ = *(undefined2 *)(param_2 + uVar10 * 2);
    auVar13 = VectorTest(auVar12,auVar2);
    auVar15._14_2_ = *(undefined2 *)(param_2 + (uint)bVar6 * 2);
    auVar15._12_2_ = *(undefined2 *)(param_2 + uVar11 * 2);
    auVar13 = VectorShiftLeftInsert(auVar15,auVar13,0xf);
    *param_1 = auVar13._0_8_;
    param_1[1] = auVar13._8_8_;
    param_1 = param_1 + 2;
    bVar1 = 7 < param_4;
    param_4 = iVar7;
  } while (iVar7 != 0 && bVar1);
  return;
}


