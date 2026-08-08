/*
 * Ghidra decompilation
 *
 * Function : FUN_08013dbc
 * Address  : 08013dbc
 * Program  : drastic16
 */


void FUN_08013dbc(void **param_1,int param_2,uint param_3)

{
  void *pvVar1;
  size_t __pgoff;
  void *pvVar2;
  void **ppvVar3;
  int iVar4;
  void **ppvVar5;
  uint uVar6;
  void **ppvVar7;
  void **__dest;
  uint uVar8;
  void **ppvVar9;
  bool bVar10;
  
  memcpy(*param_1,*(void **)(param_2 + 0x10),0x400000);
  pvVar1 = param_1[1];
  pvVar2 = (void *)(*(int *)(param_2 + 0x10) + 0x400000);
  *(void **)(param_2 + 0x10) = pvVar2;
  memcpy(pvVar1,pvVar2,0x8000);
  pvVar1 = param_1[2];
  pvVar2 = (void *)(*(int *)(param_2 + 0x10) + 0x8000);
  *(void **)(param_2 + 0x10) = pvVar2;
  memcpy(pvVar1,pvVar2,0x8000);
  pvVar1 = param_1[3];
  pvVar2 = (void *)(*(int *)(param_2 + 0x10) + 0x8000);
  *(void **)(param_2 + 0x10) = pvVar2;
  memcpy(pvVar1,pvVar2,0x4000);
  __dest = param_1 + 4;
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x4000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(__dest,pvVar1,0x10000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x10000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1[0x5404],pvVar1,0x20000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x20000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1[0x5405],pvVar1,0x20000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x20000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1[0x5406],pvVar1,0x20000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x20000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1[0x5407],pvVar1,0x20000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x20000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1[0x5408],pvVar1,0x10000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x10000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1[0x5409],pvVar1,0x4000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x4000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1[0x540a],pvVar1,0x4000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x4000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1[0x540b],pvVar1,0x8000);
  pvVar2 = (void *)(*(int *)(param_2 + 0x10) + 0x8000);
  pvVar1 = param_1[0x540c];
  *(void **)(param_2 + 0x10) = pvVar2;
  memcpy(pvVar1,pvVar2,0x4000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x4000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1 + 0x5410,pvVar1,0x800);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x800);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1 + 0x5810,pvVar1,0x800);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x800);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1 + 0x5c10,pvVar1,0x4000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x4000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1 + 0x6c10,pvVar1,0x8000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x8000);
  *(void **)(param_2 + 0x10) = pvVar1;
  memcpy(param_1 + 0x8c10,pvVar1,0x8000);
  pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x8000);
  *(void **)(param_2 + 0x10) = pvVar1;
  if (1 < param_3) {
    memcpy(param_1 + 0x3ed60,pvVar1,0x400);
    pvVar1 = (void *)(*(int *)(param_2 + 0x10) + 0x400);
    *(void **)(param_2 + 0x10) = pvVar1;
    memcpy(param_1 + 0x3ee60,pvVar1,0x80);
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 0x80;
  }
  FUN_0801ade4(param_1 + 0x3f18e,param_2,param_3);
  FUN_0801ade4(param_1 + 0x3f1b0,param_2,param_3);
  FUN_0801da84(param_1 + 0x3f1d2,param_2,param_3);
  FUN_0801da84(param_1 + 0x3f1e6,param_2,param_3);
  ppvVar9 = (void **)0x80140a4;
  FUN_0801d6f0(param_1 + 0x3f208,param_2,param_3);
  if ((*(byte *)((int)param_1 + 0xfc81e) & 2) != 0) {
    ppvVar9 = (void **)0x80140e0;
    memcpy(param_1 + 0x400c,(void *)(*(int *)(*(int *)((int)param_1[0x3f1fa] + 0x884) + 4) + 0xc0),
           0x9e);
  }
  ppvVar5 = (void **)param_1[2];
  ppvVar7 = ppvVar5 + 0x1000;
  ppvVar3 = ppvVar5;
  if ((*(byte *)((int)param_1 + 0x1b287) & 1) != 0) {
    ppvVar3 = param_1 + 0x1ac10;
    __dest = ppvVar5;
  }
  bVar10 = (*(byte *)((int)param_1 + 0x1b287) & 2) != 0;
  ppvVar5 = (void **)0xfba04;
  param_1[0x3ee83] = __dest;
  param_1[0x3ee81] = ppvVar3;
  if (bVar10) {
    ppvVar5 = param_1 + 0x1ac00;
    ppvVar9 = ppvVar7;
  }
  pvVar1 = param_1[0x3ee8b];
  if (bVar10) {
    ppvVar7 = ppvVar5 + 0x10;
  }
  else {
    ppvVar9 = param_1 + 0x1004;
  }
  iVar4 = *(int *)((int)pvVar1 + 0x800004);
  param_1[0x3ee84] = ppvVar9;
  uVar6 = *(uint *)(iVar4 + 0xfc7f4);
  uVar8 = *(uint *)(iVar4 + 0xfc7f8);
  param_1[0x3ee82] = ppvVar7;
  if ((uVar6 < 0x3000001) && (0x4000000 < uVar8)) {
    FUN_0800a1fc(pvVar1,0x3000000,uVar6 + 0xfd000000);
    iVar4 = 0x4000000 - uVar8;
  }
  else {
    iVar4 = 0x1000000;
    uVar6 = 0x3000000;
  }
  FUN_0800a1fc(pvVar1,uVar6,iVar4);
  pvVar1 = param_1[0x3ee8c];
  uVar6 = *(uint *)(*(int *)((int)pvVar1 + 0x800004) + 0xfc7f4);
  uVar8 = *(uint *)(*(int *)((int)pvVar1 + 0x800004) + 0xfc7f8);
  if ((uVar6 < 0x3000001) && (0x3800000 < uVar8)) {
    FUN_0800a1fc(pvVar1,0x3000000,uVar6 + 0xfd000000);
    iVar4 = 0x3800000 - uVar8;
  }
  else {
    iVar4 = 0x800000;
    uVar6 = 0x3000000;
  }
  FUN_0800a1fc(pvVar1,uVar6,iVar4);
  iVar4 = 0x3000000;
  do {
    pvVar1 = param_1[0x3f203];
    __pgoff = __aeabi_uidiv(0x408000,param_1[0x3f200]);
    pvVar1 = (void *)(iVar4 + (int)pvVar1);
    iVar4 = iVar4 + 0x8000;
    remap_file_pages(pvVar1,0x8000,0,__pgoff,0);
  } while (iVar4 != 0x4000000);
  return;
}


