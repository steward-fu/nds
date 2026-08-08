/*
 * Ghidra decompilation
 *
 * Function : FUN_0808ee38
 * Address  : 0808ee38
 * Program  : drastic16
 */


/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0808ee38(undefined4 param_1,undefined (*param_2) [16])

{
  SIMDExpandImmediate(0,0,0xff);
  SIMDExpandImmediate(0,0,0xff);
  VectorShiftLeft(param_2[0x20],2,8,0);
  VectorShiftLeft(param_2[0x10],2,8,0);
  VectorShiftLeft(*param_2,2,8,0);
  VectorShiftLeft(param_2[0x21],2,8,0);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


