/*
 * Ghidra decompilation
 *
 * Function : remove_event
 * Address  : 0011e190
 * Program  : drastic64
 */


void remove_event(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x30;
  lVar3 = *(long *)(lVar1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x300) = uVar2;
  }
  else {
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
  }
  lVar3 = (param_2 & 0xffffffff) * 0x30;
  lVar1 = param_1 + lVar3;
  if (*(long *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(*(long *)(lVar1 + 0x18) + 0x20) = *(undefined8 *)(lVar1 + 0x20);
    **(int **)(lVar1 + 0x18) = **(int **)(lVar1 + 0x18) + *(int *)(param_1 + lVar3);
  }
  return;
}


