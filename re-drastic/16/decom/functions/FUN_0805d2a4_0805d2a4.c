/*
 * Ghidra decompilation
 *
 * Function : FUN_0805d2a4
 * Address  : 0805d2a4
 * Program  : drastic16
 */


void FUN_0805d2a4(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  time_t tVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = *(undefined4 **)(param_2 + 0x10);
  uVar3 = param_1[3];
  *puVar1 = param_1[2];
  puVar1[1] = uVar3;
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 8;
  *(undefined *)(iVar4 + 8) = *(undefined *)(param_1 + 4);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(iVar4 + 1) = *(undefined *)((int)param_1 + 0x11);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(iVar4 + 1) = *(undefined *)((int)param_1 + 0x12);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(iVar4 + 1) = *(undefined *)((int)param_1 + 0x13);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(iVar4 + 1) = *(undefined *)(param_1 + 5);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(iVar4 + 1) = *(undefined *)((int)param_1 + 0x15);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(iVar4 + 1) = *(undefined *)((int)param_1 + 0x16);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(iVar4 + 1) = *(undefined *)((int)param_1 + 0x17);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  *(undefined *)(iVar4 + 1) = *(undefined *)(param_1 + 6);
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 1;
  if (param_3 < 9) {
    tVar2 = time((time_t *)0x0);
    iVar4 = __aeabi_uldivmod(*(undefined4 *)*param_1,((undefined4 *)*param_1)[1],0x3c,0,param_4);
    param_1[1] = tVar2 - iVar4;
    return;
  }
  *(undefined4 *)(iVar4 + 1) = param_1[1];
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 4;
  return;
}


