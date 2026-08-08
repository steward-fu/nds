/*
 * Ghidra decompilation
 *
 * Function : dma_load_savestate
 * Address  : 001240e0
 * Program  : drastic64
 */


void dma_load_savestate(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  if (param_3 < 4) {
    *(undefined4 *)(param_1 + 0x28) = **(undefined4 **)(param_2 + 0x20);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(param_1 + 0x34) = *(undefined *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0x36) = 0;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar2 + 1);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(param_1 + 0x5c) = *(undefined *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined *)(param_1 + 0x5e) = 0;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar2 + 1);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(param_1 + 0x84) = *(undefined *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x86) = 0;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(lVar2 + 1);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(param_1 + 0xac) = *(undefined *)(lVar2 + 4);
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined *)(param_1 + 0xae) = 0;
    return;
  }
  if (param_3 != 4) {
    *(undefined4 *)(param_1 + 0x28) = **(undefined4 **)(param_2 + 0x20);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(param_1 + 0x34) = *(undefined *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar2 + 1);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 8;
    *(undefined *)(param_1 + 0x36) = *(undefined *)(lVar2 + 8);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar2 + 1);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(param_1 + 0x5c) = *(undefined *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar2 + 1);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 8;
    *(undefined *)(param_1 + 0x5e) = *(undefined *)(lVar2 + 8);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar2 + 1);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(param_1 + 0x84) = *(undefined *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar2 + 1);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 8;
    *(undefined *)(param_1 + 0x86) = *(undefined *)(lVar2 + 8);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(lVar2 + 1);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(param_1 + 0xac) = *(undefined *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar2 + 1);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 8;
    *(undefined *)(param_1 + 0xae) = *(undefined *)(lVar2 + 8);
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
    return;
  }
  puVar4 = *(undefined4 **)(param_2 + 0x20);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  do {
    *(undefined4 *)(puVar3 + 3) = *puVar4;
    puVar1 = puVar3 + 5;
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)((long)puVar3 + 0x1c) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)((long)puVar3 + 0x24) = *(undefined *)(lVar2 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *puVar3 = *(undefined8 *)(lVar2 + 1);
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0x20) + 8);
    *(undefined4 **)(param_2 + 0x20) = puVar4;
    *(undefined *)((long)puVar3 + 0x26) = 0;
    puVar3 = puVar1;
  } while ((undefined8 *)(param_1 + 0xb0) != puVar1);
  return;
}


