/*
 * Ghidra decompilation
 *
 * Function : FUN_0805d17c
 * Address  : 0805d17c
 * Program  : drastic16
 */


void FUN_0805d17c(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  time_t tVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = (*(undefined4 **)(param_2 + 0x10))[1];
  param_1[2] = **(undefined4 **)(param_2 + 0x10);
  param_1[3] = uVar2;
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 8;
  *(undefined *)(param_1 + 4) = *(undefined *)(iVar3 + 8);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 1;
  *(undefined *)((int)param_1 + 0x11) = *(undefined *)(iVar3 + 1);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 1;
  *(undefined *)((int)param_1 + 0x12) = *(undefined *)(iVar3 + 1);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 1;
  *(undefined *)((int)param_1 + 0x13) = *(undefined *)(iVar3 + 1);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 1;
  *(undefined *)(param_1 + 5) = *(undefined *)(iVar3 + 1);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 1;
  *(undefined *)((int)param_1 + 0x15) = *(undefined *)(iVar3 + 1);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 1;
  *(undefined *)((int)param_1 + 0x16) = *(undefined *)(iVar3 + 1);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 1;
  *(undefined *)((int)param_1 + 0x17) = *(undefined *)(iVar3 + 1);
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 1;
  *(undefined *)(param_1 + 6) = *(undefined *)(iVar3 + 1);
  puVar4 = (undefined4 *)(*(int *)(param_2 + 0x10) + 1);
  *(undefined4 **)(param_2 + 0x10) = puVar4;
  if (param_3 < 9) {
    tVar1 = time((time_t *)0x0);
    iVar3 = __aeabi_uldivmod(*(undefined4 *)*param_1,((undefined4 *)*param_1)[1],0x3c,0,param_4);
    param_1[1] = tVar1 - iVar3;
    return;
  }
  param_1[1] = *puVar4;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 4;
  return;
}


