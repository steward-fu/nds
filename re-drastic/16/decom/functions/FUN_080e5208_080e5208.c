/*
 * Ghidra decompilation
 *
 * Function : FUN_080e5208
 * Address  : 080e5208
 * Program  : drastic16
 */


undefined4 FUN_080e5208(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_808 [2048];
  
  FUN_080afbc8(param_2 + 0x20f4,acStack_808,0x800);
  if ((*(int *)(param_2 + 0x20f0) == 2) || (*(int *)(param_2 + 0x20f0) == 3)) {
    iVar1 = strncmp(acStack_808,"\\??\\",4);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_080a1f2c(acStack_808,acStack_808,0x800);
  }
  uVar2 = FUN_080e4f2c(acStack_808,param_1);
  return uVar2;
}


