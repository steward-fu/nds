/*
 * Ghidra decompilation
 *
 * Function : FUN_0800cb50
 * Address  : 0800cb50
 * Program  : drastic16
 */


void FUN_0800cb50(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x800004) + 0xfc7f4);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x800004) + 0xfc7f8);
  if ((uVar1 <= param_2) && (param_2 + param_3 < uVar2)) {
    param_3 = (param_3 - uVar2) + param_2;
    FUN_0800a1fc(param_1,param_2,uVar1 - param_2);
    param_2 = uVar1;
  }
  FUN_0800a1fc(param_1,param_2,param_3);
  return;
}


