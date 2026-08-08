/*
 * Ghidra decompilation
 *
 * Function : FUN_080d28ec
 * Address  : 080d28ec
 * Program  : drastic16
 */


undefined4 FUN_080d28ec(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = *param_1;
  iVar1 = __aeabi_uidiv(param_1[2],param_1[5]);
  param_1[2] = iVar1;
  uVar2 = __aeabi_uidiv(iVar3 - iVar4,param_1[2]);
  return uVar2;
}


