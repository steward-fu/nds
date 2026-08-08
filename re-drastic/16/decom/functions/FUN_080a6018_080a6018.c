/*
 * Ghidra decompilation
 *
 * Function : FUN_080a6018
 * Address  : 080a6018
 * Program  : drastic16
 */


bool FUN_080a6018(undefined4 param_1)

{
  int iVar1;
  char acStack_808 [2048];
  
  FUN_080afbc8(param_1,acStack_808,0x800);
  iVar1 = remove(acStack_808);
  return iVar1 == 0;
}


