/*
 * Ghidra decompilation
 *
 * Function : memory_load_savestate
 * Address  : 0011cc20
 * Program  : drastic64
 */


void memory_load_savestate(void **param_1,long param_2,uint param_3)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  
  memcpy(*param_1,*(void **)(param_2 + 0x20),0x400000);
  pvVar1 = param_1[1];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x400000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar1,pvVar3,0x8000);
  pvVar1 = param_1[2];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x8000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar1,pvVar3,0x8000);
  pvVar1 = param_1[3];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x8000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar1,pvVar3,0x4000);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x4000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(param_1 + 4,pvVar3,0x10000);
  pvVar1 = param_1[0x2a04];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x10000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar1,pvVar3,0x20000);
  pvVar1 = param_1[0x2a05];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x20000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar1,pvVar3,0x20000);
  pvVar1 = param_1[0x2a06];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x20000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar1,pvVar3,0x20000);
  pvVar1 = param_1[0x2a07];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x20000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar1,pvVar3,0x20000);
  pvVar1 = param_1[0x2a08];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x20000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar1,pvVar3,0x10000);
  pvVar1 = param_1[0x2a09];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x10000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar1,pvVar3,0x4000);
  pvVar1 = param_1[0x2a0a];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x4000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar1,pvVar3,0x4000);
  pvVar1 = param_1[0x2a0b];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x4000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar1,pvVar3,0x8000);
  pvVar1 = param_1[0x2a0c];
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x8000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(pvVar1,pvVar3,0x4000);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x4000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(param_1 + 0x2a0e,pvVar3,0x800);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x800);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(param_1 + 0x2c0e,pvVar3,0x800);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x800);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(param_1 + 0x2e0e,pvVar3,0x4000);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x4000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(param_1 + 0x360e,pvVar3,0x8000);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x8000);
  *(void **)(param_2 + 0x20) = pvVar3;
  memcpy(param_1 + 0x460e,pvVar3,0x8000);
  pvVar3 = (void *)(*(long *)(param_2 + 0x20) + 0x8000);
  *(void **)(param_2 + 0x20) = pvVar3;
  if (1 < param_3) {
    memcpy(param_1 + 0x1f6b7,pvVar3,0x400);
    lVar2 = *(long *)(param_2 + 0x20);
    *(void ***)(param_2 + 0x20) = (void **)(lVar2 + 0x400);
    pvVar3 = *(void **)(lVar2 + 0x408);
    param_1[0x1f737] = *(void **)(lVar2 + 0x400);
    param_1[0x1f738] = pvVar3;
    pvVar3 = *(void **)(lVar2 + 0x418);
    param_1[0x1f739] = *(void **)(lVar2 + 0x410);
    param_1[0x1f73a] = pvVar3;
    pvVar3 = *(void **)(lVar2 + 0x428);
    param_1[0x1f73b] = *(void **)(lVar2 + 0x420);
    param_1[0x1f73c] = pvVar3;
    pvVar3 = *(void **)(lVar2 + 0x438);
    param_1[0x1f73d] = *(void **)(lVar2 + 0x430);
    param_1[0x1f73e] = pvVar3;
    pvVar3 = *(void **)(lVar2 + 0x448);
    param_1[0x1f73f] = *(void **)(lVar2 + 0x440);
    param_1[0x1f740] = pvVar3;
    pvVar3 = *(void **)(lVar2 + 0x458);
    param_1[0x1f741] = *(void **)(lVar2 + 0x450);
    param_1[0x1f742] = pvVar3;
    pvVar3 = *(void **)(lVar2 + 0x468);
    param_1[0x1f743] = *(void **)(lVar2 + 0x460);
    param_1[0x1f744] = pvVar3;
    pvVar3 = *(void **)(lVar2 + 0x478);
    param_1[0x1f745] = *(void **)(lVar2 + 0x470);
    param_1[0x1f746] = pvVar3;
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 0x80;
  }
  dma_load_savestate(param_1 + 0x1fa53,param_2,param_3);
  dma_load_savestate(param_1 + 0x1fa69,param_2,param_3);
  ipc_load_savestate(param_1 + 0x1fa7f,param_2,param_3);
  ipc_load_savestate(param_1 + 0x1fa8b,param_2,param_3);
  coprocessor_load_savestate(param_1 + 0x1faa3,param_2,param_3);
  if ((*(byte *)((long)param_1 + 0xfd512) >> 1 & 1) == 0) {
    remap_wram(param_1);
    return;
  }
  memcpy(param_1 + 0x2008,(void *)(*(long *)(*(long *)((long)param_1[0x1fa97] + 0x920) + 8) + 0xc0),
         0x9e);
  remap_wram(param_1);
  return;
}


