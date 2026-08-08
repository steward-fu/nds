/*
 * Ghidra decompilation
 *
 * Function : FUN_080a891c
 * Address  : 080a891c
 * Program  : drastic16
 */


void FUN_080a891c(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined *puVar2;
  
  FUN_080a6194(param_1,1);
  iVar1 = FUN_080a8838(param_1);
  puVar2 = (undefined *)FUN_080a609c(param_1,iVar1 + -1);
  *puVar2 = param_2;
  return;
}


