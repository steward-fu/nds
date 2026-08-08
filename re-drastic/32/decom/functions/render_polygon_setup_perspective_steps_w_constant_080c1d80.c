/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_perspective_steps_w_constant
 * Address  : 080c1d80
 * Program  : drastic
 */


void render_polygon_setup_perspective_steps_w_constant(undefined8 *param_1,int param_2,int param_3)

{
  bool bVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  u32 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  uVar3 = (uint)*(ushort *)(param_2 + 0x630);
  uVar5 = reciprocal_table_u[uVar3];
  puVar2 = (ushort *)(param_2 + 0x634);
  while( true ) {
    auVar8._4_4_ = uVar5;
    auVar8._0_4_ = uVar5;
    auVar8._8_8_ = 0;
    auVar9._0_8_ = VectorShiftLeft(0,0x20,0x40,0);
    uVar6 = VectorAdd(0,0,4);
    uVar7 = VectorShiftLeft(0,2,0x20,0);
    auVar8 = VectorShiftLeft(auVar8 & auVar8 << 0x40,3,0x20,0);
    auVar9._8_8_ = VectorAdd(auVar9._0_8_,uVar6,4);
    auVar10._0_8_ = VectorAdd(auVar9._0_8_,uVar7,4);
    auVar10._8_8_ = VectorAdd(auVar9._8_8_,uVar7,4);
    do {
      uVar6 = VectorShiftNarrowRight(auVar9,0x10);
      uVar7 = VectorShiftNarrowRight(auVar10,0x10);
      auVar9 = VectorAdd(auVar9,auVar8,4);
      auVar10 = VectorAdd(auVar10,auVar8,4);
      *param_1 = uVar6;
      param_1[1] = uVar7;
      param_1 = param_1 + 2;
      uVar4 = uVar3 - 8;
      bVar1 = 7 < (int)uVar3;
      uVar3 = uVar4;
    } while (uVar4 != 0 && bVar1);
    param_1 = (undefined8 *)((int)param_1 + uVar4 * 2);
    uVar3 = (uint)*puVar2;
    param_3 = param_3 + -1;
    if (param_3 == 0) break;
    uVar5 = reciprocal_table_u[uVar3];
    puVar2 = puVar2 + 2;
  }
  return;
}


