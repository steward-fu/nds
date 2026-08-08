/*
 * Ghidra decompilation
 *
 * Function : render_scanline_select_pixels_binary
 * Address  : 080beda0
 * Program  : drastic
 */


void render_scanline_select_pixels_binary
               (undefined (*param_1) [16],undefined (*param_2) [16],undefined (*param_3) [16],
               int *param_4)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  iVar4 = 0x100;
  auVar6._8_8_ = 0x80004000200010;
  auVar6._0_8_ = 0x8000400020001;
  auVar6 = VectorShiftLeft(auVar6,8,0x10,0);
  if (param_2 == param_1) {
    do {
      iVar5 = *param_4;
      uVar3 = CONCAT22(*(undefined2 *)param_4,*(undefined2 *)param_4);
      uVar1 = CONCAT44(uVar3,uVar3);
      auVar7._8_8_ = uVar1;
      auVar7._0_8_ = uVar1;
      uVar3 = CONCAT22(*(undefined2 *)((int)param_4 + 2),*(undefined2 *)((int)param_4 + 2));
      uVar1 = CONCAT44(uVar3,uVar3);
      auVar8._8_8_ = uVar1;
      auVar8._0_8_ = uVar1;
      param_4 = param_4 + 1;
      if (iVar5 != 0) {
        auVar11._8_8_ = 0x80004000200010;
        auVar11._0_8_ = 0x8000400020001;
        auVar11 = VectorTest(auVar7,auVar11);
        auVar13 = VectorTest(auVar7,auVar6);
        auVar10._8_8_ = 0x80004000200010;
        auVar10._0_8_ = 0x8000400020001;
        auVar7 = VectorTest(auVar8,auVar10);
        auVar8 = VectorTest(auVar8,auVar6);
        auVar11 = VectorBitwiseInsertIfTrue(*param_2,*param_3,auVar11);
        auVar10 = VectorBitwiseInsertIfTrue(param_2[1],param_3[1],auVar13);
        auVar7 = VectorBitwiseInsertIfTrue(param_2[2],param_3[2],auVar7);
        auVar8 = VectorBitwiseInsertIfTrue(param_2[3],param_3[3],auVar8);
        *(longlong *)*param_1 = auVar11._0_8_;
        *(longlong *)(*param_1 + 8) = auVar11._8_8_;
        *(longlong *)param_1[1] = auVar10._0_8_;
        *(longlong *)(param_1[1] + 8) = auVar10._8_8_;
        *(longlong *)param_1[2] = auVar7._0_8_;
        *(longlong *)(param_1[2] + 8) = auVar7._8_8_;
        *(longlong *)param_1[3] = auVar8._0_8_;
        *(longlong *)(param_1[3] + 8) = auVar8._8_8_;
      }
      param_3 = param_3 + 4;
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
      iVar4 = iVar4 + -0x20;
    } while (iVar4 != 0);
    return;
  }
  do {
    iVar5 = *param_4;
    uVar3 = CONCAT22(*(undefined2 *)param_4,*(undefined2 *)param_4);
    uVar1 = CONCAT44(uVar3,uVar3);
    auVar13._8_8_ = uVar1;
    auVar13._0_8_ = uVar1;
    uVar3 = CONCAT22(*(undefined2 *)((int)param_4 + 2),*(undefined2 *)((int)param_4 + 2));
    uVar1 = CONCAT44(uVar3,uVar3);
    auVar9._8_8_ = uVar1;
    auVar9._0_8_ = uVar1;
    param_4 = param_4 + 1;
    auVar7 = *param_2;
    auVar8 = param_2[1];
    auVar11 = param_2[2];
    auVar10 = param_2[3];
    param_2 = param_2 + 4;
    if (iVar5 != 0) {
      auVar12._8_8_ = 0x80004000200010;
      auVar12._0_8_ = 0x8000400020001;
      auVar12 = VectorTest(auVar13,auVar12);
      auVar14 = VectorTest(auVar13,auVar6);
      auVar2._8_8_ = 0x80004000200010;
      auVar2._0_8_ = 0x8000400020001;
      auVar13 = VectorTest(auVar9,auVar2);
      auVar9 = VectorTest(auVar9,auVar6);
      auVar7 = VectorBitwiseInsertIfTrue(auVar7,*param_3,auVar12);
      auVar8 = VectorBitwiseInsertIfTrue(auVar8,param_3[1],auVar14);
      auVar11 = VectorBitwiseInsertIfTrue(auVar11,param_3[2],auVar13);
      auVar10 = VectorBitwiseInsertIfTrue(auVar10,param_3[3],auVar9);
    }
    param_3 = param_3 + 4;
    *(longlong *)*param_1 = auVar7._0_8_;
    *(longlong *)(*param_1 + 8) = auVar7._8_8_;
    *(longlong *)param_1[1] = auVar8._0_8_;
    *(longlong *)(param_1[1] + 8) = auVar8._8_8_;
    *(longlong *)param_1[2] = auVar11._0_8_;
    *(longlong *)(param_1[2] + 8) = auVar11._8_8_;
    *(longlong *)param_1[3] = auVar10._0_8_;
    *(longlong *)(param_1[3] + 8) = auVar10._8_8_;
    param_1 = param_1 + 4;
    iVar4 = iVar4 + -0x20;
  } while (iVar4 != 0);
  return;
}


