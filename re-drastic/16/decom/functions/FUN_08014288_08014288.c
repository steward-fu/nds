/*
 * Ghidra decompilation
 *
 * Function : FUN_08014288
 * Address  : 08014288
 * Program  : drastic16
 */


void FUN_08014288(void **param_1,int param_2,uint param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  
  memcpy(*(void **)(param_2 + 0x10),*param_1,0x400000);
  pvVar2 = param_1[1];
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x400000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,pvVar2,0x8000);
  pvVar2 = param_1[2];
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x8000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,pvVar2,0x8000);
  pvVar2 = param_1[3];
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x8000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,pvVar2,0x4000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x4000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,param_1 + 4,0x10000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x10000);
  pvVar2 = param_1[0x5404];
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,pvVar2,0x20000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x20000);
  pvVar2 = param_1[0x5405];
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,pvVar2,0x20000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x20000);
  pvVar2 = param_1[0x5406];
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,pvVar2,0x20000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x20000);
  pvVar2 = param_1[0x5407];
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,pvVar2,0x20000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x20000);
  pvVar2 = param_1[0x5408];
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,pvVar2,0x10000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x10000);
  pvVar2 = param_1[0x5409];
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,pvVar2,0x4000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x4000);
  pvVar2 = param_1[0x540a];
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,pvVar2,0x4000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x4000);
  pvVar2 = param_1[0x540b];
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,pvVar2,0x8000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x8000);
  pvVar2 = param_1[0x540c];
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,pvVar2,0x4000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x4000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,param_1 + 0x5410,0x800);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x800);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,param_1 + 0x5810,0x800);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x800);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,param_1 + 0x5c10,0x4000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x4000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,param_1 + 0x6c10,0x8000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x8000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(pvVar1,param_1 + 0x8c10,0x8000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x8000);
  *(void **)(param_2 + 0x10) = pvVar1;
  if (1 < param_3) {
    memcpy(pvVar1,param_1 + 0x3ed60,0x400);
    pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x400);
    *(void **)(param_2 + 0x10) = pvVar1;
    memcpy(pvVar1,param_1 + 0x3ee60,0x80);
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 0x80;
  }
  FUN_0801af90(param_1 + 0x3f18e,param_2,param_3);
  FUN_0801af90(param_1 + 0x3f1b0,param_2,param_3);
  FUN_0801db14(param_1 + 0x3f1d2,param_2,param_3);
  FUN_0801db14(param_1 + 0x3f1e6,param_2,param_3);
  **(void ***)(param_2 + 0x10) = param_1[0x3f20b];
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 4;
  *(void **)(iVar3 + 4) = param_1[0x3f20c];
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 4;
  *(void **)(iVar3 + 4) = param_1[0x3f20d];
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 4;
  return;
}


