/*
 * Ghidra decompilation
 *
 * Function : FUN_080a1208
 * Address  : 080a1208
 * Program  : drastic16
 */


undefined4 FUN_080a1208(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_080a11bc(param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_080b0b10(iVar1 + 4,param_2), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


