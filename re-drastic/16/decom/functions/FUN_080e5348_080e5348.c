/*
 * Ghidra decompilation
 *
 * Function : FUN_080e5348
 * Address  : 080e5348
 * Program  : drastic16
 */


void FUN_080e5348(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  
  if (((*(char *)(param_1 + 0xc290) == '\0') || (*(int *)(param_2 + 0x10e98) != 2)) ||
     (iVar1 = FUN_080af950(param_2 + 0xc770,&DAT_080ef224), iVar1 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_080e49d4(param_2,param_3);
  }
  return;
}


