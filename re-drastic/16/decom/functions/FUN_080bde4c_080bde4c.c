/*
 * Ghidra decompilation
 *
 * Function : FUN_080bde4c
 * Address  : 080bde4c
 * Program  : drastic16
 */


undefined4 FUN_080bde4c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined auStack_2c [36];
  
  FUN_080bdd40(param_1,auStack_2c);
  if (param_3 != 0) {
    FUN_080b3508(auStack_2c,param_3);
  }
  uVar1 = FUN_080bd9f4(auStack_2c,param_2);
  return uVar1;
}


