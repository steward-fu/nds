/*
 * Ghidra decompilation
 *
 * Function : FUN_080a4270
 * Address  : 080a4270
 * Program  : drastic16
 */


bool FUN_080a4270(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_080a40ec(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_080b7220(&DAT_081cd0a0,9);
    FUN_080b7110(&DAT_081cd0a0,param_2);
  }
  return iVar1 != 0;
}


