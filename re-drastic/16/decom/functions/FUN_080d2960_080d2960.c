/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2960
 * Address  : 080d2960
 * Program  : drastic16
 */


undefined4 FUN_080d2960(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  param_1[2] = (uint)param_1[2] >> (param_2 & 0xff);
  uVar1 = __aeabi_uidiv(param_1[1] - *param_1,param_1[2]);
  return uVar1;
}


