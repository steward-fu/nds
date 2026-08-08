/*
 * Ghidra decompilation
 *
 * Function : FUN_080a4edc
 * Address  : 080a4edc
 * Program  : drastic16
 */


bool FUN_080a4edc(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = fileno(*(FILE **)(param_1 + 4));
    iVar1 = isatty(iVar1);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


