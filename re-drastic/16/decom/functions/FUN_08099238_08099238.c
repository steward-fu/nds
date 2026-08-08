/*
 * Ghidra decompilation
 *
 * Function : FUN_08099238
 * Address  : 08099238
 * Program  : drastic16
 */


uint FUN_08099238(int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint local_18 [2];
  
  iVar2 = *(int *)(param_1 + 0x14);
  local_18[0] = *(int *)(param_1 + 0x18) - iVar2;
  if (local_18[0] == 0) {
    uVar1 = *param_3;
    if (uVar1 == 0) goto LAB_08099268;
    *(undefined4 *)(param_1 + 0x14) = 0;
    local_18[0] = 0x4000;
    uVar1 = (***(code ***)(param_1 + 0x10))(*(code ***)(param_1 + 0x10),param_1 + 0x1c,local_18);
    *(uint *)(param_1 + 0x18) = local_18[0];
  }
  else {
    uVar1 = 0;
  }
  if (local_18[0] < *param_3) {
    *param_3 = local_18[0];
  }
  iVar2 = *(int *)(param_1 + 0x14);
LAB_08099268:
  *param_2 = param_1 + iVar2 + 0x1c;
  return uVar1;
}


