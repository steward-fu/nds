/*
 * Ghidra decompilation
 *
 * Function : render_polygon_alpha_combine_depth_constant
 * Address  : 080c3238
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */

void render_polygon_alpha_combine_depth_constant(void)

{
  undefined8 uVar1;
  undefined8 *param_7;
  
  uVar1 = SIMDExpandImmediate(0,0xe,0x1f);
  VectorCompareEqual(*param_7,uVar1,1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


