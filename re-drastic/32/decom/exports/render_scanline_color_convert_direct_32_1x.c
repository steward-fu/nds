/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_direct_32_1x
 * Address  : 080bf160
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */

void render_scanline_color_convert_direct_32_1x(undefined (*param_1) [16])

{
  SIMDExpandImmediate(0,0,0xff);
  SIMDExpandImmediate(0,0,0xff);
  VectorShiftLeft(param_1[0x20],2,8,0);
  VectorShiftLeft(param_1[0x10],2,8,0);
  VectorShiftLeft(*param_1,2,8,0);
  VectorShiftLeft(param_1[0x21],2,8,0);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


