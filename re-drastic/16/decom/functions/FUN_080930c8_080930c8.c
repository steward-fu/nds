/*
 * Ghidra decompilation
 *
 * Function : FUN_080930c8
 * Address  : 080930c8
 * Program  : drastic16
 */


/* WARNING: Control flow encountered unimplemented instructions */

void FUN_080930c8(void)

{
  undefined8 uVar1;
  undefined8 *param_7;
  
  uVar1 = SIMDExpandImmediate(0,0xe,0x1f);
  SIMDExpandImmediate(0,0xe,0x80);
  VectorCompareEqual(*param_7,uVar1,1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


