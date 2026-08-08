/*
 * Ghidra decompilation
 *
 * Function : render_scanline_select_pixels_binary_scalar
 * Address  : 080bee90
 * Program  : drastic
 */


void render_scanline_select_pixels_binary_scalar
               (undefined (*param_1) [16],undefined (*param_2) [16],undefined2 param_3,int *param_4)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  
  iVar6 = 0x100;
  auVar7._8_8_ = 0x80004000200010;
  auVar7._0_8_ = 0x8000400020001;
  auVar7 = VectorShiftLeft(auVar7,8,0x10,0);
  auVar1._4_4_ = CONCAT22(param_3,param_3);
  auVar1._0_4_ = CONCAT22(param_3,param_3);
  auVar1._8_8_ = 0;
  auVar1 = auVar1 & auVar1 << 0x40;
  if (param_2 == param_1) {
    do {
      iVar5 = *param_4;
      uVar4 = CONCAT22(*(undefined2 *)param_4,*(undefined2 *)param_4);
      uVar2 = CONCAT44(uVar4,uVar4);
      auVar8._8_8_ = uVar2;
      auVar8._0_8_ = uVar2;
      uVar4 = CONCAT22(*(undefined2 *)((int)param_4 + 2),*(undefined2 *)((int)param_4 + 2));
      uVar2 = CONCAT44(uVar4,uVar4);
      auVar9._8_8_ = uVar2;
      auVar9._0_8_ = uVar2;
      param_4 = param_4 + 1;
      if (iVar5 != 0) {
        auVar12._8_8_ = 0x80004000200010;
        auVar12._0_8_ = 0x8000400020001;
        auVar12 = VectorTest(auVar8,auVar12);
        auVar14 = VectorTest(auVar8,auVar7);
        auVar11._8_8_ = 0x80004000200010;
        auVar11._0_8_ = 0x8000400020001;
        auVar8 = VectorTest(auVar9,auVar11);
        auVar9 = VectorTest(auVar9,auVar7);
        auVar12 = VectorBitwiseInsertIfTrue(*param_2,auVar1,auVar12);
        auVar11 = VectorBitwiseInsertIfTrue(param_2[1],auVar1,auVar14);
        auVar8 = VectorBitwiseInsertIfTrue(param_2[2],auVar1,auVar8);
        auVar9 = VectorBitwiseInsertIfTrue(param_2[3],auVar1,auVar9);
        *(longlong *)*param_1 = auVar12._0_8_;
        *(longlong *)(*param_1 + 8) = auVar12._8_8_;
        *(longlong *)param_1[1] = auVar11._0_8_;
        *(longlong *)(param_1[1] + 8) = auVar11._8_8_;
        *(longlong *)param_1[2] = auVar8._0_8_;
        *(longlong *)(param_1[2] + 8) = auVar8._8_8_;
        *(longlong *)param_1[3] = auVar9._0_8_;
        *(longlong *)(param_1[3] + 8) = auVar9._8_8_;
      }
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
      iVar6 = iVar6 + -0x20;
    } while (iVar6 != 0);
    return;
  }
  do {
    iVar5 = *param_4;
    uVar4 = CONCAT22(*(undefined2 *)param_4,*(undefined2 *)param_4);
    uVar2 = CONCAT44(uVar4,uVar4);
    auVar14._8_8_ = uVar2;
    auVar14._0_8_ = uVar2;
    uVar4 = CONCAT22(*(undefined2 *)((int)param_4 + 2),*(undefined2 *)((int)param_4 + 2));
    uVar2 = CONCAT44(uVar4,uVar4);
    auVar10._8_8_ = uVar2;
    auVar10._0_8_ = uVar2;
    param_4 = param_4 + 1;
    auVar8 = *param_2;
    auVar9 = param_2[1];
    auVar12 = param_2[2];
    auVar11 = param_2[3];
    param_2 = param_2 + 4;
    if (iVar5 != 0) {
      auVar13._8_8_ = 0x80004000200010;
      auVar13._0_8_ = 0x8000400020001;
      auVar13 = VectorTest(auVar14,auVar13);
      auVar15 = VectorTest(auVar14,auVar7);
      auVar3._8_8_ = 0x80004000200010;
      auVar3._0_8_ = 0x8000400020001;
      auVar14 = VectorTest(auVar10,auVar3);
      auVar10 = VectorTest(auVar10,auVar7);
      auVar8 = VectorBitwiseInsertIfTrue(auVar8,auVar1,auVar13);
      auVar9 = VectorBitwiseInsertIfTrue(auVar9,auVar1,auVar15);
      auVar12 = VectorBitwiseInsertIfTrue(auVar12,auVar1,auVar14);
      auVar11 = VectorBitwiseInsertIfTrue(auVar11,auVar1,auVar10);
    }
    *(longlong *)*param_1 = auVar8._0_8_;
    *(longlong *)(*param_1 + 8) = auVar8._8_8_;
    *(longlong *)param_1[1] = auVar9._0_8_;
    *(longlong *)(param_1[1] + 8) = auVar9._8_8_;
    *(longlong *)param_1[2] = auVar12._0_8_;
    *(longlong *)(param_1[2] + 8) = auVar12._8_8_;
    *(longlong *)param_1[3] = auVar11._0_8_;
    *(longlong *)(param_1[3] + 8) = auVar11._8_8_;
    param_1 = param_1 + 4;
    iVar6 = iVar6 + -0x20;
  } while (iVar6 != 0);
  return;
}


