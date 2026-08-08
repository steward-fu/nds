/*
 * Ghidra decompilation
 *
 * Function : schedule_event
 * Address  : 0011e0d0
 * Program  : drastic64
 */


void schedule_event(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  
  lVar6 = param_1 + (param_3 & 0xffffffff) * 0x30;
  if (*(uint **)(param_1 + 0x300) == (uint *)0x0) {
    lVar3 = (param_3 & 0xffffffff) * 0x30;
    lVar1 = param_1 + lVar3;
    *(uint *)(param_1 + lVar3) = param_2;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(long *)(param_1 + 0x300) = lVar6;
    return;
  }
  puVar2 = *(uint **)(param_1 + 0x300);
  puVar5 = (uint *)0x0;
  do {
    puVar4 = puVar2;
    if (param_2 <= *puVar4) {
      lVar3 = (param_3 & 0xffffffff) * 0x30;
      lVar1 = param_1 + lVar3;
      *(uint *)(param_1 + lVar3) = param_2;
      *(uint **)(lVar1 + 0x18) = puVar4;
      *(uint **)(lVar1 + 0x20) = puVar5;
      if (puVar5 == (uint *)0x0) {
        *(long *)(param_1 + 0x300) = lVar6;
      }
      else {
        *(long *)(puVar5 + 6) = lVar6;
      }
      *(long *)(puVar4 + 8) = lVar6;
      *puVar4 = *puVar4 - param_2;
      return;
    }
    param_2 = param_2 - *puVar4;
    puVar2 = *(uint **)(puVar4 + 6);
    puVar5 = puVar4;
  } while (*(uint **)(puVar4 + 6) != (uint *)0x0);
  lVar3 = (param_3 & 0xffffffff) * 0x30;
  lVar1 = param_1 + lVar3;
  *(uint *)(param_1 + lVar3) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(uint **)(lVar1 + 0x20) = puVar4;
  *(long *)(puVar4 + 6) = lVar6;
  return;
}


