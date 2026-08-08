/*
 * Ghidra decompilation
 *
 * Function : execute_events
 * Address  : 0011e8a0
 * Program  : drastic64
 */


void execute_events(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  code *pcVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  puVar4 = *(uint **)(param_1 + 0x318);
  uVar2 = *puVar4;
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + (ulong)uVar1;
  if (uVar1 < uVar2) {
    *puVar4 = uVar2 - uVar1;
  }
  else {
    do {
      pcVar5 = *(code **)(puVar4 + 2);
      uVar3 = *(undefined8 *)(puVar4 + 4);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(puVar4 + 6);
      (*pcVar5)(param_1,uVar3);
      puVar4 = *(uint **)(param_1 + 0x318);
      if (puVar4 == (uint *)0x0) {
        return;
      }
      *(undefined8 *)(puVar4 + 8) = 0;
    } while (*puVar4 == 0);
  }
  return;
}


