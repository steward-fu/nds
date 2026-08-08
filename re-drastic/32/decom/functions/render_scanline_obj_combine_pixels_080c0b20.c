/*
 * Ghidra decompilation
 *
 * Function : render_scanline_obj_combine_pixels
 * Address  : 080c0b20
 * Program  : drastic
 */


void render_scanline_obj_combine_pixels(undefined8 *param_1,undefined (*param_2) [16],int param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 *puVar3;
  undefined (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined auVar14 [16];
  undefined8 uVar16;
  undefined auVar15 [16];
  undefined8 uVar17;
  undefined auVar18 [16];
  undefined8 uVar19;
  
  uVar5 = *param_1;
  uVar6 = param_1[1];
  param_3 = param_3 + -0x10;
  uVar9 = *(undefined8 *)*param_2;
  uVar10 = *(undefined8 *)(*param_2 + 8);
  uVar11 = *(undefined8 *)param_2[1];
  uVar12 = *(undefined8 *)(param_2[1] + 8);
  pauVar4 = param_2 + 2;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  puVar3 = param_1 + 4;
  auVar14 = VectorShiftRight(*param_2,0xf);
  auVar18 = VectorShiftRight(param_2[1],0xf);
  for (; param_3 != 0; param_3 = param_3 + -0x10) {
    uVar13 = VectorBitwiseSelect(auVar14._0_8_,uVar9,uVar5);
    uVar16 = VectorBitwiseSelect(auVar14._8_8_,uVar10,uVar6);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar17 = VectorBitwiseSelect(auVar18._0_8_,uVar11,uVar7);
    uVar19 = VectorBitwiseSelect(auVar18._8_8_,uVar12,uVar8);
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    puVar3 = puVar3 + 4;
    uVar9 = *(undefined8 *)*pauVar4;
    uVar10 = *(undefined8 *)(*pauVar4 + 8);
    auVar14 = *pauVar4;
    uVar11 = *(undefined8 *)pauVar4[1];
    uVar12 = *(undefined8 *)(pauVar4[1] + 8);
    auVar18 = pauVar4[1];
    pauVar4 = pauVar4 + 2;
    *param_1 = uVar13;
    param_1[1] = uVar16;
    auVar14 = VectorShiftRight(auVar14,0xf);
    param_1[2] = uVar17;
    param_1[3] = uVar19;
    param_1 = param_1 + 4;
    auVar18 = VectorShiftRight(auVar18,0xf);
  }
  auVar15._8_8_ = uVar6;
  auVar15._0_8_ = uVar5;
  auVar1._8_8_ = uVar10;
  auVar1._0_8_ = uVar9;
  auVar15 = VectorBitwiseSelect(auVar14,auVar1,auVar15);
  auVar14._8_8_ = uVar8;
  auVar14._0_8_ = uVar7;
  auVar2._8_8_ = uVar12;
  auVar2._0_8_ = uVar11;
  auVar14 = VectorBitwiseSelect(auVar18,auVar2,auVar14);
  *param_1 = auVar15._0_8_;
  param_1[1] = auVar15._8_8_;
  param_1[2] = auVar14._0_8_;
  param_1[3] = auVar14._8_8_;
  return;
}


