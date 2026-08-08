/*
 * Ghidra decompilation
 *
 * Function : FUN_080a5a7c
 * Address  : 080a5a7c
 * Program  : drastic16
 */


bool FUN_080a5a7c(undefined4 param_1,__mode_t param_2)

{
  int iVar1;
  char acStack_808 [2048];
  
  FUN_080afbc8(param_1,acStack_808,0x800);
  iVar1 = chmod(acStack_808,param_2);
  return iVar1 == 0;
}


