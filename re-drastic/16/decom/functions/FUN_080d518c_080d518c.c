/*
 * Ghidra decompilation
 *
 * Function : FUN_080d518c
 * Address  : 080d518c
 * Program  : drastic16
 */


int FUN_080d518c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_080c55ac(param_1 + 0x98d0);
  if (iVar1 == -1) {
    FUN_080c53c8(param_1 + 0x98d0);
    *(undefined4 *)(param_1 + 0xe670) = 0;
  }
  return iVar1;
}


