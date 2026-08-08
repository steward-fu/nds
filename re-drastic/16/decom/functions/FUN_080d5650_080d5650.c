/*
 * Ghidra decompilation
 *
 * Function : FUN_080d5650
 * Address  : 080d5650
 * Program  : drastic16
 */


void FUN_080d5650(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_080d5aec(param_1,1);
  iVar1 = FUN_080d54b8(param_1);
  puVar2 = (undefined4 *)FUN_080d56a0(param_1,iVar1 + -1);
  *puVar2 = param_2;
  return;
}


