/*
 * Ghidra decompilation
 *
 * Function : FUN_08093028
 * Address  : 08093028
 * Program  : drastic16
 */


/* WARNING: Control flow encountered unimplemented instructions */

void FUN_08093028(void)

{
  undefined8 uVar1;
  undefined8 *param_7;
  
  uVar1 = SIMDExpandImmediate(0,0xe,0x1f);
  VectorCompareEqual(*param_7,uVar1,1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


