/*
 * Ghidra decompilation
 *
 * Function : FUN_080dad40
 * Address  : 080dad40
 * Program  : drastic16
 */


undefined4 FUN_080dad40(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((*(int *)(param_1 + 0xc4bc) == 0x7fffffff && *(int *)(param_1 + 0xc4b8) == 0x7fffffff) ||
     (iVar1 = *(int *)(param_1 + 0xc4bc), bVar3 = param_3 < *(uint *)(param_1 + 0xc4b8),
     (int)(param_4 - (iVar1 + (uint)bVar3)) < 0 !=
     (SBORROW4(param_4,iVar1) != SBORROW4(param_4 - iVar1,(uint)bVar3)))) {
    if ((*(int *)(param_1 + 0xc4c4) == 0x7fffffff && *(int *)(param_1 + 0xc4c0) == 0x7fffffff) ||
       (iVar1 = *(int *)(param_1 + 0xc4c4), bVar3 = *(uint *)(param_1 + 0xc4c0) < param_3,
       (int)(iVar1 - (param_4 + (uint)bVar3)) < 0 !=
       (SBORROW4(iVar1,param_4) != SBORROW4(iVar1 - param_4,(uint)bVar3)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


