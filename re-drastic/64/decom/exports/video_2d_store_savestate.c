/*
 * Ghidra decompilation
 *
 * Function : video_2d_store_savestate
 * Address  : 00143ba0
 * Program  : drastic64
 */


void video_2d_store_savestate(long param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  **(undefined4 **)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x90);
  lVar3 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar3 + 4;
  *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(param_1 + 0x9c);
  lVar3 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar3 + 4;
  *(undefined2 *)(lVar3 + 4) = *(undefined2 *)(param_1 + 0xa0);
  lVar3 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar3 + 2;
  *(undefined2 *)(lVar3 + 2) = *(undefined2 *)(param_1 + 0xa4);
  lVar3 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar3 + 2;
  *(undefined2 *)(lVar3 + 2) = *(undefined2 *)(param_1 + 0xa2);
  lVar3 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar3 + 2;
  *(undefined2 *)(lVar3 + 2) = *(undefined2 *)(param_1 + 0xa6);
  lVar3 = *(long *)(param_2 + 0x20);
  puVar4 = (undefined4 *)(lVar3 + 2);
  *(undefined4 **)(param_2 + 0x20) = puVar4;
  if (9 < param_3) {
    *(undefined2 *)(lVar3 + 2) = *(undefined2 *)(param_1 + 0xa8);
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0x20) + 2);
    *(undefined4 **)(param_2 + 0x20) = puVar4;
  }
  *puVar4 = *(undefined4 *)(param_1 + 0xaa);
  lVar3 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar3 + 4;
  *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(param_1 + 0xae);
  lVar3 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar3 + 4;
  *(undefined *)(lVar3 + 4) = *(undefined *)(param_1 + 0xb4);
  puVar2 = (undefined2 *)(*(long *)(param_2 + 0x20) + 1);
  *(undefined2 **)(param_2 + 0x20) = puVar2;
  puVar4 = (undefined4 *)(param_1 + 0x100);
  do {
    *puVar2 = *(undefined2 *)(puVar4 + 0x16);
    puVar1 = puVar4 + 0x2c;
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 2;
    *(undefined4 *)(lVar3 + 2) = *puVar4;
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 4;
    *(undefined4 *)(lVar3 + 4) = puVar4[1];
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 4;
    *(undefined4 *)(lVar3 + 4) = puVar4[2];
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 4;
    *(undefined4 *)(lVar3 + 4) = puVar4[0x12];
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 4;
    *(undefined4 *)(lVar3 + 4) = puVar4[0x13];
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 4;
    *(undefined4 *)(lVar3 + 4) = puVar4[0x14];
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 4;
    *(undefined4 *)(lVar3 + 4) = puVar4[0x15];
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 4;
    *(undefined2 *)(lVar3 + 4) = *(undefined2 *)((long)puVar4 + 0x5a);
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 2;
    *(undefined2 *)(lVar3 + 2) = *(undefined2 *)(puVar4 + 0x17);
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 2;
    *(undefined2 *)(lVar3 + 2) = *(undefined2 *)((long)puVar4 + 0x5e);
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 2;
    *(undefined2 *)(lVar3 + 2) = *(undefined2 *)(puVar4 + 0x18);
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 2;
    *(undefined2 *)(lVar3 + 2) = *(undefined2 *)((long)puVar4 + 0x62);
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 2;
    *(undefined2 *)(lVar3 + 2) = *(undefined2 *)(puVar4 + 0x19);
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 2;
    *(undefined2 *)(lVar3 + 2) = *(undefined2 *)((long)puVar4 + 0x66);
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 2;
    *(undefined2 *)(lVar3 + 2) = *(undefined2 *)(puVar4 + 0x1a);
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 2;
    *(undefined *)(lVar3 + 2) = *(undefined *)((long)puVar4 + 0x6a);
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 1;
    *(undefined *)(lVar3 + 1) = *(undefined *)((long)puVar4 + 0x6b);
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 1;
    *(undefined *)(lVar3 + 1) = *(undefined *)(puVar4 + 0x1b);
    lVar3 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar3 + 1;
    *(undefined *)(lVar3 + 1) = *(undefined *)((long)puVar4 + 0x6d);
    puVar2 = (undefined2 *)(*(long *)(param_2 + 0x20) + 1);
    *(undefined2 **)(param_2 + 0x20) = puVar2;
    puVar4 = puVar1;
  } while ((undefined4 *)(param_1 + 0x3c0) != puVar1);
  return;
}


