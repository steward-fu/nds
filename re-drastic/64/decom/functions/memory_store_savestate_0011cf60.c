/*
 * Ghidra decompilation
 *
 * Function : memory_store_savestate
 * Address  : 0011cf60
 * Program  : drastic64
 */


void memory_store_savestate(void **param_1,long param_2,uint param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  
  memcpy(*(void **)(param_2 + 0x20),*param_1,0x400000);
  pvVar2 = param_1[1];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x400000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,pvVar2,0x8000);
  pvVar2 = param_1[2];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x8000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,pvVar2,0x8000);
  pvVar2 = param_1[3];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x8000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,pvVar2,0x4000);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x4000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,param_1 + 4,0x10000);
  pvVar2 = param_1[0x2a04];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x10000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,pvVar2,0x20000);
  pvVar2 = param_1[0x2a05];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x20000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,pvVar2,0x20000);
  pvVar2 = param_1[0x2a06];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x20000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,pvVar2,0x20000);
  pvVar2 = param_1[0x2a07];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x20000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,pvVar2,0x20000);
  pvVar2 = param_1[0x2a08];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x20000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,pvVar2,0x10000);
  pvVar2 = param_1[0x2a09];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x10000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,pvVar2,0x4000);
  pvVar2 = param_1[0x2a0a];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x4000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,pvVar2,0x4000);
  pvVar2 = param_1[0x2a0b];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x4000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,pvVar2,0x8000);
  pvVar2 = param_1[0x2a0c];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x8000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,pvVar2,0x4000);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x4000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,param_1 + 0x2a0e,0x800);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x800);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,param_1 + 0x2c0e,0x800);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x800);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,param_1 + 0x2e0e,0x4000);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x4000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,param_1 + 0x360e,0x8000);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x8000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar3,param_1 + 0x460e,0x8000);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x8000);
  *(void **)(param_2 + 0x20) = pvVar3;
  if (1 < param_3) {
    memcpy(pvVar3,param_1 + 0x1f6b7,0x400);
    lVar1 = *(long *)(param_2 + 0x20);
    *(void ***)(param_2 + 0x20) = (void **)(lVar1 + 0x400);
    pvVar3 = param_1[0x1f738];
    *(void **)(lVar1 + 0x400) = param_1[0x1f737];
    *(void **)(lVar1 + 0x408) = pvVar3;
    pvVar3 = param_1[0x1f73a];
    *(void **)(lVar1 + 0x410) = param_1[0x1f739];
    *(void **)(lVar1 + 0x418) = pvVar3;
    pvVar3 = param_1[0x1f73c];
    *(void **)(lVar1 + 0x420) = param_1[0x1f73b];
    *(void **)(lVar1 + 0x428) = pvVar3;
    pvVar3 = param_1[0x1f73e];
    *(void **)(lVar1 + 0x430) = param_1[0x1f73d];
    *(void **)(lVar1 + 0x438) = pvVar3;
    pvVar3 = param_1[0x1f740];
    *(void **)(lVar1 + 0x440) = param_1[0x1f73f];
    *(void **)(lVar1 + 0x448) = pvVar3;
    pvVar3 = param_1[0x1f742];
    *(void **)(lVar1 + 0x450) = param_1[0x1f741];
    *(void **)(lVar1 + 0x458) = pvVar3;
    pvVar3 = param_1[0x1f744];
    *(void **)(lVar1 + 0x460) = param_1[0x1f743];
    *(void **)(lVar1 + 0x468) = pvVar3;
    pvVar3 = param_1[0x1f746];
    *(void **)(lVar1 + 0x470) = param_1[0x1f745];
    *(void **)(lVar1 + 0x478) = pvVar3;
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 0x80;
  }
  dma_store_savestate(param_1 + 0x1fa53,param_2,param_3);
  dma_store_savestate(param_1 + 0x1fa69,param_2,param_3);
  ipc_store_savestate(param_1 + 0x1fa7f,param_2,param_3);
  ipc_store_savestate(param_1 + 0x1fa8b,param_2,param_3);
  coprocessor_store_savestate(param_1 + 0x1faa3,param_2,param_3);
  return;
}


