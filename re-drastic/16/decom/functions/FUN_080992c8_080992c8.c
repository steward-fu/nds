/*
 * Ghidra decompilation
 *
 * Function : FUN_080992c8
 * Address  : 080992c8
 * Program  : drastic16
 */


uint FUN_080992c8(int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  code **ppcVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x14);
  uVar3 = *(int *)(param_1 + 0x18) - iVar4;
  if (uVar3 == 0) {
    uVar1 = *param_3;
    if (uVar1 != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      ppcVar2 = *(code ***)(param_1 + 0x10);
      if (0x4000 < *param_3) {
        *param_3 = 0x4000;
      }
      uVar1 = (**ppcVar2)(ppcVar2,param_1 + 0x1c,param_3);
      uVar3 = *param_3;
      *(uint *)(param_1 + 0x18) = uVar3;
      if (uVar3 < *param_3) {
        *param_3 = uVar3;
      }
      iVar4 = *(int *)(param_1 + 0x14);
    }
  }
  else {
    uVar1 = 0;
    if (uVar3 < *param_3) {
      *param_3 = uVar3;
    }
    iVar4 = *(int *)(param_1 + 0x14);
  }
  *param_2 = param_1 + iVar4 + 0x1c;
  return uVar1;
}


