/*
 * Ghidra decompilation
 *
 * Function : geometry_load_savestate_v1_vertex
 * Address  : 00163840
 * Program  : drastic64
 */


void geometry_load_savestate_v1_vertex(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = (*(undefined8 **)(param_1 + 0x20))[1];
  *param_2 = **(undefined8 **)(param_1 + 0x20);
  param_2[1] = uVar2;
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1 + 0x10;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1 + 4;
  *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)(lVar1 + 4);
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1 + 4;
  *(undefined2 *)(param_2 + 3) = *(undefined2 *)(lVar1 + 4);
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1 + 2;
  *(undefined2 *)((long)param_2 + 0x1a) = *(undefined2 *)(lVar1 + 2);
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1 + 2;
  *(undefined2 *)((long)param_2 + 0x1c) = *(undefined2 *)(lVar1 + 2);
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1 + 2;
  *(undefined *)((long)param_2 + 0x1e) = *(undefined *)(lVar1 + 2);
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1 + 1;
  *(undefined *)((long)param_2 + 0x1f) = *(undefined *)(lVar1 + 1);
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  return;
}


