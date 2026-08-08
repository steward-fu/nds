/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_shade_32_2x
 * Address  : 080bf438
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */

void render_scanline_color_convert_shade_32_2x
               (undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined param_4)

{
  undefined4 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined8 uVar10;
  
  uVar1 = CONCAT22(CONCAT11(param_4,param_4),CONCAT11(param_4,param_4));
  uVar7 = CONCAT44(uVar1,uVar1);
  SIMDExpandImmediate(0,0,0xff);
  SIMDExpandImmediate(0,0,0xff);
  auVar5 = VectorMultiplyAccumulate(param_1[0x40],uVar7,1,1);
  auVar6 = VectorMultiplyAccumulate(param_1[0x20],uVar7,1,1);
  auVar9 = VectorMultiplyAccumulate(*param_1,uVar7,1,1);
  auVar2 = VectorMultiplyAccumulate(param_2[0x40],uVar7,1,1);
  auVar3 = VectorMultiplyAccumulate(param_2[0x20],uVar7,1,1);
  auVar4 = VectorMultiplyAccumulate(*param_2,uVar7,1,1);
  VectorShiftNarrowRight(auVar5,3);
  VectorShiftNarrowRight(auVar6,3);
  VectorShiftNarrowRight(auVar9,3);
  uVar7 = VectorShiftNarrowRight(auVar2,3);
  uVar8 = VectorShiftNarrowRight(auVar3,3);
  uVar10 = VectorShiftNarrowRight(auVar4,3);
  VectorZip(uVar7,1);
  VectorZip(uVar8,1);
  VectorZip(uVar10,1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


