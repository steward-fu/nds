/*
 * Ghidra decompilation
 *
 * Function : render_polygon_alpha_combine_fog
 * Address  : 080c3058
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */

void render_polygon_alpha_combine_fog(void)

{
  undefined8 uVar1;
  undefined8 *param_7;
  
  uVar1 = SIMDExpandImmediate(0,0xe,0x1f);
  SIMDExpandImmediate(0,0xe,0x80);
  VectorCompareEqual(*param_7,uVar1,1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


