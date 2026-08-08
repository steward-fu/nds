/*
 * Ghidra decompilation
 *
 * Function : FUN_080a1318
 * Address  : 080a1318
 * Program  : drastic16
 */


int FUN_080a1318(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_080a2360(param_1);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_080a00e8(*param_1);
    iVar1 = iVar1 + -0x41;
  }
  return iVar1;
}


