/*
 * Ghidra decompilation
 *
 * Function : FUN_08094454
 * Address  : 08094454
 * Program  : drastic16
 */


int FUN_08094454(void **param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar1 = param_1[5];
  pvVar4 = param_1[4];
  pvVar3 = (void *)(param_3 + (int)pvVar1);
  param_1[5] = pvVar3;
  if (pvVar3 < pvVar4) {
    pvVar1 = param_1[3];
  }
  else {
    pvVar3 = (void *)((int)pvVar3 - (int)pvVar4);
    if (param_1[3] <= pvVar3) {
      pvVar3 = param_1[3];
    }
    memcpy(*param_1,(void *)((int)pvVar4 + (param_2 - (int)pvVar1)),(size_t)pvVar3);
    pvVar1 = (void *)((int)param_1[3] - (int)pvVar3);
    param_1[3] = pvVar1;
    *param_1 = (void *)((int)*param_1 + (int)pvVar3);
    param_1[4] = (void *)((int)param_1[4] + (int)pvVar3);
  }
  iVar2 = 1 - (int)pvVar1;
  if ((void *)0x1 < pvVar1) {
    iVar2 = 0;
  }
  return iVar2;
}


