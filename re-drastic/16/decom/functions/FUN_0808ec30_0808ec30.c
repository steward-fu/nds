/*
 * Ghidra decompilation
 *
 * Function : FUN_0808ec30
 * Address  : 0808ec30
 * Program  : drastic16
 */


undefined8 *
FUN_0808ec30(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined2 *param_4)

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
  undefined auVar14 [16];
  undefined8 uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  
  iVar7 = 0xf;
  uVar5 = CONCAT22(*param_4,*param_4);
  uVar13 = CONCAT44(uVar5,uVar5);
  param_4 = param_4 + 1;
  uVar8 = *param_2;
  uVar9 = param_2[1];
  auVar17._8_8_ = 0x80004000200010;
  auVar17._0_8_ = 0x8000400020001;
  auVar17 = VectorShiftLeft(auVar17,8,0x10,0);
  auVar14._8_8_ = uVar13;
  auVar14._0_8_ = uVar13;
  auVar3._8_8_ = 0x80004000200010;
  auVar3._0_8_ = 0x8000400020001;
  auVar14 = VectorTest(auVar14,auVar3);
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  param_2 = param_2 + 4;
  auVar16._8_8_ = uVar13;
  auVar16._0_8_ = uVar13;
  auVar16 = VectorTest(auVar16,auVar17);
  do {
    puVar6 = param_1;
    uVar12 = VectorBitwiseSelect(auVar14._0_8_,0,uVar8);
    uVar15 = VectorBitwiseSelect(auVar14._8_8_,0,uVar9);
    uVar8 = *param_2;
    uVar9 = param_2[1];
    uVar10 = VectorBitwiseSelect(auVar16._0_8_,0,uVar10);
    uVar11 = VectorBitwiseSelect(auVar16._8_8_,0,uVar11);
    uVar5 = CONCAT22(*param_4,*param_4);
    uVar13 = CONCAT44(uVar5,uVar5);
    param_4 = param_4 + 1;
    *puVar6 = uVar12;
    puVar6[1] = uVar15;
    puVar6[2] = uVar10;
    puVar6[3] = uVar11;
    auVar1._8_8_ = uVar13;
    auVar1._0_8_ = uVar13;
    auVar4._8_8_ = 0x80004000200010;
    auVar4._0_8_ = 0x8000400020001;
    auVar14 = VectorTest(auVar1,auVar4);
    uVar10 = param_2[2];
    uVar11 = param_2[3];
    param_2 = param_2 + 4;
    auVar2._8_8_ = uVar13;
    auVar2._0_8_ = uVar13;
    auVar16 = VectorTest(auVar2,auVar17);
    iVar7 = iVar7 + -1;
    param_1 = puVar6 + 4;
  } while (iVar7 != 0);
  uVar13 = VectorBitwiseSelect(auVar14._0_8_,0,uVar8);
  uVar8 = VectorBitwiseSelect(auVar14._8_8_,0,uVar9);
  uVar9 = VectorBitwiseSelect(auVar16._0_8_,0,uVar10);
  uVar10 = VectorBitwiseSelect(auVar16._8_8_,0,uVar11);
  puVar6[4] = uVar13;
  puVar6[5] = uVar8;
  puVar6[6] = uVar9;
  puVar6[7] = uVar10;
  return puVar6 + 8;
}


