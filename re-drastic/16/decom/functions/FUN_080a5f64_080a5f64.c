/*
 * Ghidra decompilation
 *
 * Function : FUN_080a5f64
 * Address  : 080a5f64
 * Program  : drastic16
 */


bool FUN_080a5f64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char acStack_1008 [2048];
  char acStack_808 [2048];
  
  FUN_080afbc8(param_1,acStack_1008,0x800);
  FUN_080afbc8(param_2,acStack_808,0x800);
  iVar1 = rename(acStack_1008,acStack_808);
  return iVar1 == 0;
}


