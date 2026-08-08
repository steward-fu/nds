/*
 * Ghidra decompilation
 *
 * Function : unzip_out_func
 * Address  : 001a5480
 * Program  : drastic64
 */


bool unzip_out_func(void **param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)((long)param_1 + 0x1c);
  uVar3 = *(uint *)((long)param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 3);
  uVar1 = iVar5 + param_3;
  *(uint *)((long)param_1 + 0x1c) = uVar1;
  if (uVar1 < uVar4) {
    return uVar3 == 0;
  }
  uVar1 = uVar1 - uVar4;
  uVar2 = uVar1;
  if (uVar3 < uVar1) {
    uVar2 = uVar3;
  }
  if (uVar3 < uVar1) {
    uVar1 = uVar3;
  }
  memcpy(*param_1,(void *)(param_2 + (ulong)(uVar4 - iVar5)),(ulong)uVar2);
  iVar5 = *(int *)((long)param_1 + 0x14) - uVar1;
  *param_1 = (void *)((long)*param_1 + (ulong)uVar2);
  *(int *)((long)param_1 + 0x14) = iVar5;
  *(uint *)(param_1 + 3) = *(int *)(param_1 + 3) + uVar1;
  return iVar5 == 0;
}


