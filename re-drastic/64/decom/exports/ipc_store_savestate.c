/*
 * Ghidra decompilation
 *
 * Function : ipc_store_savestate
 * Address  : 00129ea0
 * Program  : drastic64
 */


void ipc_store_savestate(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar1[1] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[2] = *(undefined8 *)(param_1 + 0x28);
  puVar1[3] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[4] = *(undefined8 *)(param_1 + 0x38);
  puVar1[5] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  puVar1[6] = *(undefined8 *)(param_1 + 0x48);
  puVar1[7] = uVar3;
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 0x40;
  *(undefined *)(lVar2 + 0x40) = *(undefined *)(param_1 + 0x58);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(lVar2 + 1) = *(undefined *)(param_1 + 0x59);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(lVar2 + 1) = *(undefined *)(param_1 + 0x5a);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  return;
}


