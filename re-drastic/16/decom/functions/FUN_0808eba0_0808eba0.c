/*
 * Ghidra decompilation
 *
 * Function : FUN_0808eba0
 * Address  : 0808eba0
 * Program  : drastic16
 */


undefined8 *
FUN_0808eba0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined2 *param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined auVar17 [16];
  undefined8 uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  
  iVar7 = 0xf;
  uVar5 = CONCAT22(*param_4,*param_4);
  uVar14 = CONCAT44(uVar5,uVar5);
  param_4 = param_4 + 1;
  uVar8 = *param_2;
  uVar9 = param_2[1];
  auVar20._8_8_ = 0x80004000200010;
  auVar20._0_8_ = 0x8000400020001;
  auVar20 = VectorShiftLeft(auVar20,8,0x10,0);
  uVar12 = *param_3;
  uVar13 = param_3[1];
  auVar17._8_8_ = uVar14;
  auVar17._0_8_ = uVar14;
  auVar3._8_8_ = 0x80004000200010;
  auVar3._0_8_ = 0x8000400020001;
  auVar17 = VectorTest(auVar17,auVar3);
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  param_2 = param_2 + 4;
  auVar19._8_8_ = uVar14;
  auVar19._0_8_ = uVar14;
  auVar19 = VectorTest(auVar19,auVar20);
  uVar14 = param_3[2];
  uVar15 = param_3[3];
  param_3 = param_3 + 4;
  do {
    puVar6 = param_1;
    uVar16 = VectorBitwiseSelect(auVar17._0_8_,uVar12,uVar8);
    uVar18 = VectorBitwiseSelect(auVar17._8_8_,uVar13,uVar9);
    uVar8 = *param_2;
    uVar9 = param_2[1];
    uVar10 = VectorBitwiseSelect(auVar19._0_8_,uVar14,uVar10);
    uVar11 = VectorBitwiseSelect(auVar19._8_8_,uVar15,uVar11);
    uVar12 = *param_3;
    uVar13 = param_3[1];
    uVar5 = CONCAT22(*param_4,*param_4);
    uVar14 = CONCAT44(uVar5,uVar5);
    param_4 = param_4 + 1;
    *puVar6 = uVar16;
    puVar6[1] = uVar18;
    puVar6[2] = uVar10;
    puVar6[3] = uVar11;
    auVar1._8_8_ = uVar14;
    auVar1._0_8_ = uVar14;
    auVar4._8_8_ = 0x80004000200010;
    auVar4._0_8_ = 0x8000400020001;
    auVar17 = VectorTest(auVar1,auVar4);
    uVar10 = param_2[2];
    uVar11 = param_2[3];
    param_2 = param_2 + 4;
    auVar2._8_8_ = uVar14;
    auVar2._0_8_ = uVar14;
    auVar19 = VectorTest(auVar2,auVar20);
    uVar14 = param_3[2];
    uVar15 = param_3[3];
    param_3 = param_3 + 4;
    iVar7 = iVar7 + -1;
    param_1 = puVar6 + 4;
  } while (iVar7 != 0);
  uVar8 = VectorBitwiseSelect(auVar17._0_8_,uVar12,uVar8);
  uVar9 = VectorBitwiseSelect(auVar17._8_8_,uVar13,uVar9);
  uVar14 = VectorBitwiseSelect(auVar19._0_8_,uVar14,uVar10);
  uVar10 = VectorBitwiseSelect(auVar19._8_8_,uVar15,uVar11);
  puVar6[4] = uVar8;
  puVar6[5] = uVar9;
  puVar6[6] = uVar14;
  puVar6[7] = uVar10;
  return puVar6 + 8;
}


