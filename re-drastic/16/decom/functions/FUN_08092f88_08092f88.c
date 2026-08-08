/*
 * Ghidra decompilation
 *
 * Function : FUN_08092f88
 * Address  : 08092f88
 * Program  : drastic16
 */


/* WARNING: Control flow encountered unimplemented instructions */

void FUN_08092f88(void)

{
  undefined8 uVar1;
  undefined8 *param_7;
  
  uVar1 = SIMDExpandImmediate(0,0xe,0x1f);
  VectorCompareEqual(*param_7,uVar1,1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


