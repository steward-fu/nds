/*
 * Ghidra decompilation
 *
 * Function : FUN_080dfe7c
 * Address  : 080dfe7c
 * Program  : drastic16
 */


undefined4 FUN_080dfe7c(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((int)(param_4 - (param_2 + (uint)(param_3 < param_1))) < 0 ==
      (SBORROW4(param_4,param_2) != SBORROW4(param_4 - param_2,(uint)(param_3 < param_1)))) {
    uVar1 = FUN_080dfec8(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = 100;
  }
  return uVar1;
}


