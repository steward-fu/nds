/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_rgb
 * Address  : 080c23e0
 * Program  : drastic
 */


void render_polygon_interpolate_rgb
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined8 uVar21;
  
  puVar3 = (undefined8 *)((int)param_2 + param_5);
  puVar5 = (undefined8 *)((int)param_1 + param_5);
  puVar4 = (undefined8 *)((int)param_2 + param_5 * 2);
  puVar6 = (undefined8 *)((int)param_1 + param_5 * 2);
  do {
    uVar10 = *param_3;
    uVar11 = param_3[1];
    param_3 = param_3 + 2;
    uVar21 = *param_2;
    puVar7 = param_2 + 1;
    param_2 = param_2 + 2;
    uVar16 = *puVar3;
    puVar8 = puVar3 + 1;
    puVar3 = puVar3 + 2;
    uVar17 = *puVar4;
    puVar9 = puVar4 + 1;
    puVar4 = puVar4 + 2;
    auVar12 = VectorMultiplyAccumulate(uVar21,uVar10,2,0);
    auVar13 = VectorMultiplyAccumulate(*puVar7,uVar11,2,0);
    auVar14 = VectorMultiplyAccumulate(uVar16,uVar10,2,0);
    auVar15 = VectorMultiplyAccumulate(*puVar8,uVar11,2,0);
    auVar19 = VectorMultiplyAccumulate(uVar17,uVar10,2,0);
    auVar20 = VectorMultiplyAccumulate(*puVar9,uVar11,2,0);
    uVar10 = VectorShiftNarrowRight(auVar12,0x10);
    uVar11 = VectorShiftNarrowRight(auVar13,0x10);
    uVar16 = VectorShiftNarrowRight(auVar14,0x10);
    uVar17 = VectorShiftNarrowRight(auVar15,0x10);
    uVar21 = VectorShiftNarrowRight(auVar19,0x10);
    uVar18 = VectorShiftNarrowRight(auVar20,0x10);
    auVar12._8_8_ = uVar11;
    auVar12._0_8_ = uVar10;
    uVar10 = VectorShiftNarrowRight(auVar12,2);
    auVar13._8_8_ = uVar17;
    auVar13._0_8_ = uVar16;
    uVar11 = VectorShiftNarrowRight(auVar13,2);
    auVar14._8_8_ = uVar18;
    auVar14._0_8_ = uVar21;
    uVar16 = VectorShiftNarrowRight(auVar14,2);
    *param_1 = uVar10;
    param_1 = param_1 + 1;
    *puVar5 = uVar11;
    puVar5 = puVar5 + 1;
    *puVar6 = uVar16;
    puVar6 = puVar6 + 1;
    iVar2 = param_4 + -8;
    bVar1 = 7 < param_4;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


