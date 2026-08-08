/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_direct_32_2x
 * Address  : 080bf1c4
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */

void render_scanline_color_convert_direct_32_2x(undefined (*param_1) [16],undefined (*param_2) [16])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  SIMDExpandImmediate(0,0,0xff);
  SIMDExpandImmediate(0,0,0xff);
  VectorShiftLeft(param_1[0x20],2,8,0);
  VectorShiftLeft(param_1[0x10],2,8,0);
  VectorShiftLeft(*param_1,2,8,0);
  auVar1 = VectorShiftLeft(param_2[0x20],2,8,0);
  auVar2 = VectorShiftLeft(param_2[0x10],2,8,0);
  auVar3 = VectorShiftLeft(*param_2,2,8,0);
  VectorZip(auVar1._0_8_,1);
  VectorZip(auVar2._0_8_,1);
  VectorZip(auVar3._0_8_,1);
  VectorZip(auVar1._8_8_,1);
  VectorZip(auVar2._8_8_,1);
  VectorZip(auVar3._8_8_,1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


