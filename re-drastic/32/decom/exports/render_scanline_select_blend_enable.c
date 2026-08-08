/*
 * Ghidra decompilation
 *
 * Function : render_scanline_select_blend_enable
 * Address  : 080becf8
 * Program  : drastic
 */


void render_scanline_select_blend_enable
               (undefined8 *param_1,undefined (*param_2) [16],undefined param_3,undefined param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined (*pauVar4) [16];
  int iVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  auVar10 = SIMDExpandImmediate(0,0xe,1);
  iVar5 = 5;
  uVar3 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
  auVar1._4_4_ = uVar3;
  auVar1._0_4_ = uVar3;
  auVar1._8_8_ = 0;
  auVar6 = ZEXT816(0);
  uVar3 = CONCAT22(CONCAT11(param_4,param_4),CONCAT11(param_4,param_4));
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = uVar3;
  auVar2._8_8_ = 0;
  auVar2 = auVar2 & auVar2 << 0x40;
  auVar7 = ZEXT816(0);
  do {
    pauVar4 = param_2;
    auVar8 = VectorTest(auVar1 & auVar1 << 0x40,auVar10);
    auVar9 = VectorTest(auVar2,auVar10);
    param_2 = pauVar4 + 2;
    auVar6 = (auVar6 | *pauVar4 & auVar9 & auVar8) & ~(*pauVar4 & auVar8 & ~auVar9);
    auVar7 = (auVar7 | pauVar4[1] & auVar9 & auVar8) & ~(pauVar4[1] & auVar8 & ~auVar9);
    auVar10 = VectorShiftLeft(auVar10,1,8,0);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  auVar10 = VectorTest(auVar2,auVar10);
  auVar6 = (auVar6 | *param_2 & auVar10) & ~(*param_2 & ~auVar10);
  auVar7 = (auVar7 | pauVar4[3] & auVar10) & ~(pauVar4[3] & ~auVar10);
  *param_1 = auVar6._0_8_;
  param_1[1] = auVar6._8_8_;
  param_1[2] = auVar7._0_8_;
  param_1[3] = auVar7._8_8_;
  return;
}


