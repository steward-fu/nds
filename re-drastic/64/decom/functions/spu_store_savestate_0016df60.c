/*
 * Ghidra decompilation
 *
 * Function : spu_store_savestate
 * Address  : 0016df60
 * Program  : drastic64
 */


void spu_store_savestate(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  puVar2 = (undefined8 *)(param_1 + 0x400a8);
  do {
    *puVar3 = *puVar2;
    puVar1 = puVar2 + 0x19;
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 8;
    *(undefined4 *)(lVar4 + 8) = 0;
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 4;
    *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(puVar2 + 5);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 4;
    *(undefined4 *)(lVar4 + 4) = *(undefined4 *)((long)puVar2 + 0x2c);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 4;
    *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(puVar2 + 6);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 4;
    *(undefined2 *)(lVar4 + 4) = *(undefined2 *)(puVar2 + 7);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 2;
    *(undefined2 *)(lVar4 + 2) = *(undefined2 *)((long)puVar2 + 0x3a);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 2;
    *(undefined *)(lVar4 + 2) = *(undefined *)((long)puVar2 + 0x3f);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 1;
    *(undefined *)(lVar4 + 1) = *(undefined *)(puVar2 + 8);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 1;
    *(undefined *)(lVar4 + 1) = *(undefined *)((long)puVar2 + 0x41);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 1;
    *(undefined *)(lVar4 + 1) = *(undefined *)((long)puVar2 + 0x3c);
    lVar4 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar4 + 1;
    *(undefined *)(lVar4 + 1) = *(undefined *)((long)puVar2 + 0x3e);
    lVar4 = *(long *)(param_2 + 0x20);
    puVar3 = (undefined8 *)(lVar4 + 1);
    *(undefined8 **)(param_2 + 0x20) = puVar3;
    puVar2 = puVar1;
  } while (puVar1 != (undefined8 *)(param_1 + 0x40d28));
  *(undefined8 *)(lVar4 + 1) = *(undefined8 *)(param_1 + 0x40d00);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 8;
  return;
}


