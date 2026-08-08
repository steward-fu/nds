/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_uv
 * Address  : 080c22e0
 * Program  : drastic
 */


void render_polygon_interpolate_uv
               (undefined2 *param_1,undefined4 *param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined4 *puVar8;
  
  puVar5 = param_2 + param_5;
  do {
    uVar10 = *param_3;
    uVar11 = param_3[1];
    param_3 = param_3 + 2;
    puVar8 = (undefined4 *)0x310;
    puVar3 = (undefined4 *)0x320;
    lVar9 = 2;
    iVar4 = param_4;
    puVar6 = param_2;
    while( true ) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) break;
      puVar8 = puVar8 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar8 = (undefined4 *)0x318;
    puVar3 = (undefined4 *)0x328;
    lVar9 = 2;
    while( true ) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) break;
      puVar8 = puVar8 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 8;
    puVar1 = (undefined2 *)0x3a0;
    puVar2 = (undefined2 *)0x3b0;
    lVar9 = 4;
    puVar8 = puVar5;
    while( true ) {
      *puVar1 = *(undefined2 *)puVar8;
      puVar7 = (undefined2 *)((int)puVar8 + 2);
      *puVar2 = *puVar7;
      puVar8 = (undefined4 *)(puVar7 + 1);
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x3a8;
    puVar2 = (undefined2 *)0x3b8;
    lVar9 = 4;
    while( true ) {
      *puVar1 = *(undefined2 *)puVar8;
      puVar7 = (undefined2 *)((int)puVar8 + 2);
      *puVar2 = *puVar7;
      puVar8 = (undefined4 *)(puVar7 + 1);
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar5 = puVar5 + 8;
    puVar8 = (undefined4 *)0x380;
    puVar3 = (undefined4 *)0x390;
    lVar9 = 2;
    puVar6 = param_2;
    while( true ) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) break;
      puVar8 = puVar8 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar8 = (undefined4 *)0x388;
    puVar3 = (undefined4 *)0x398;
    lVar9 = 2;
    while( true ) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) break;
      puVar8 = puVar8 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 8;
    auVar12 = VectorMultiplyAccumulate(in_d20,uVar10,2,0);
    auVar13 = VectorMultiplyAccumulate(in_d22,uVar10,2,0);
    auVar14 = VectorMultiplyAccumulate(in_d21,uVar11,2,0);
    auVar15 = VectorMultiplyAccumulate(in_d23,uVar11,2,0);
    auVar12._0_8_ = VectorShiftNarrowRight(auVar12,0x10);
    auVar13._0_8_ = VectorShiftNarrowRight(auVar13,0x10);
    auVar12._8_8_ = VectorShiftNarrowRight(auVar14,0x10);
    auVar13._8_8_ = VectorShiftNarrowRight(auVar15,0x10);
    VectorShiftRight(auVar12,3);
    VectorShiftRight(auVar13,3);
    puVar1 = (undefined2 *)0x3c0;
    puVar2 = (undefined2 *)0x3d0;
    lVar9 = 4;
    puVar7 = param_1;
    while( true ) {
      *puVar7 = *puVar1;
      puVar7[1] = *puVar2;
      puVar7 = puVar7 + 2;
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x3c8;
    puVar2 = (undefined2 *)0x3d8;
    lVar9 = 4;
    while( true ) {
      *puVar7 = *puVar1;
      puVar7[1] = *puVar2;
      puVar7 = puVar7 + 2;
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_1 = param_1 + 0x10;
    param_4 = iVar4 + -8;
  } while (param_4 != 0 && 7 < iVar4);
  return;
}


