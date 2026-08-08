/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_shade_32_1x
 * Address  : 080bf3a8
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */

void render_scanline_color_convert_shade_32_1x
               (undefined8 *param_1,undefined4 param_2,undefined param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  uVar2 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
  uVar1 = CONCAT44(uVar2,uVar2);
  SIMDExpandImmediate(0,0,0xff);
  SIMDExpandImmediate(0,0,0xff);
  auVar6 = VectorMultiplyAccumulate(param_1[0x40],uVar1,1,1);
  auVar7 = VectorMultiplyAccumulate(param_1[0x20],uVar1,1,1);
  auVar8 = VectorMultiplyAccumulate(*param_1,uVar1,1,1);
  auVar3 = VectorMultiplyAccumulate(param_1[0x41],uVar1,1,1);
  auVar4 = VectorMultiplyAccumulate(param_1[0x21],uVar1,1,1);
  auVar5 = VectorMultiplyAccumulate(param_1[1],uVar1,1,1);
  VectorShiftNarrowRight(auVar6,3);
  VectorShiftNarrowRight(auVar7,3);
  VectorShiftNarrowRight(auVar8,3);
  VectorShiftNarrowRight(auVar3,3);
  VectorShiftNarrowRight(auVar4,3);
  VectorShiftNarrowRight(auVar5,3);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


