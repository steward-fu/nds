/*
 * Ghidra decompilation
 *
 * Function : dma_store_savestate
 * Address  : 001244d0
 * Program  : drastic64
 */


void dma_store_savestate(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  if (param_3 < 4) {
    **(undefined4 **)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x28);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x2c);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x30);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(lVar2 + 4) = *(undefined *)(param_1 + 0x34);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0x36) = 0;
    *(undefined4 *)(lVar2 + 1) = *(undefined4 *)(param_1 + 0x50);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x54);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x58);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(lVar2 + 4) = *(undefined *)(param_1 + 0x5c);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined *)(param_1 + 0x5e) = 0;
    *(undefined4 *)(lVar2 + 1) = *(undefined4 *)(param_1 + 0x78);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x7c);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x80);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(lVar2 + 4) = *(undefined *)(param_1 + 0x84);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x86) = 0;
    *(undefined4 *)(lVar2 + 1) = *(undefined4 *)(param_1 + 0xa0);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0xa4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0xa8);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(lVar2 + 4) = *(undefined *)(param_1 + 0xac);
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined *)(param_1 + 0xae) = 0;
    return;
  }
  if (param_3 != 4) {
    **(undefined4 **)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x28);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x2c);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x30);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(lVar2 + 4) = *(undefined *)(param_1 + 0x34);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(lVar2 + 1) = *(undefined8 *)(param_1 + 0x10);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 8;
    *(undefined *)(lVar2 + 8) = *(undefined *)(param_1 + 0x36);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined4 *)(lVar2 + 1) = *(undefined4 *)(param_1 + 0x50);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x54);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x58);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(lVar2 + 4) = *(undefined *)(param_1 + 0x5c);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(lVar2 + 1) = *(undefined8 *)(param_1 + 0x38);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 8;
    *(undefined *)(lVar2 + 8) = *(undefined *)(param_1 + 0x5e);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined4 *)(lVar2 + 1) = *(undefined4 *)(param_1 + 0x78);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x7c);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x80);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(lVar2 + 4) = *(undefined *)(param_1 + 0x84);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(lVar2 + 1) = *(undefined8 *)(param_1 + 0x60);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 8;
    *(undefined *)(lVar2 + 8) = *(undefined *)(param_1 + 0x86);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined4 *)(lVar2 + 1) = *(undefined4 *)(param_1 + 0xa0);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0xa4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0xa8);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(lVar2 + 4) = *(undefined *)(param_1 + 0xac);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(lVar2 + 1) = *(undefined8 *)(param_1 + 0x88);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 8;
    *(undefined *)(lVar2 + 8) = *(undefined *)(param_1 + 0xae);
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
    return;
  }
  puVar4 = *(undefined4 **)(param_2 + 0x20);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  do {
    *puVar4 = *(undefined4 *)(puVar3 + 3);
    puVar1 = puVar3 + 5;
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)((long)puVar3 + 0x1c);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(puVar3 + 4);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 4;
    *(undefined *)(lVar2 + 4) = *(undefined *)((long)puVar3 + 0x24);
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar2 + 1;
    *(undefined8 *)(lVar2 + 1) = *puVar3;
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0x20) + 8);
    *(undefined4 **)(param_2 + 0x20) = puVar4;
    *(undefined *)((long)puVar3 + 0x26) = 0;
    puVar3 = puVar1;
  } while ((undefined8 *)(param_1 + 0xb0) != puVar1);
  return;
}


