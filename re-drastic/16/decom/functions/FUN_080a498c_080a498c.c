/*
 * Ghidra decompilation
 *
 * Function : FUN_080a498c
 * Address  : 080a498c
 * Program  : drastic16
 */


void FUN_080a498c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = FUN_080a4a0c(param_1,param_2,param_3,param_4,param_5);
  if ((cVar2 == '\x01') || (*(char *)(param_1 + 0x14) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_080b701c(&DAT_081cd0a0,param_1 + 0x18);
  }
  return;
}


