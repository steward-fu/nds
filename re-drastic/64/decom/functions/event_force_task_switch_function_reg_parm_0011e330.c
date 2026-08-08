/*
 * Ghidra decompilation
 *
 * Function : event_force_task_switch_function_reg_parm
 * Address  : 0011e330
 * Program  : drastic64
 */


void event_force_task_switch_function_reg_parm(long param_1)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  lVar1 = param_1 + 0x78;
  uVar5 = 0x80 - ((uint)*(undefined8 *)(param_1 + 8) & 0x7f);
  if (*(uint **)(param_1 + 0x318) == (uint *)0x0) {
    *(uint *)(param_1 + 0x78) = uVar5;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(long *)(param_1 + 0x318) = lVar1;
    return;
  }
  puVar3 = (uint *)0x0;
  puVar2 = *(uint **)(param_1 + 0x318);
  do {
    puVar4 = puVar2;
    if (uVar5 <= *puVar4) {
      *(uint *)(param_1 + 0x78) = uVar5;
      *(uint **)(param_1 + 0x90) = puVar4;
      *(uint **)(param_1 + 0x98) = puVar3;
      if (puVar3 == (uint *)0x0) {
        *(long *)(param_1 + 0x318) = lVar1;
      }
      else {
        *(long *)(puVar3 + 6) = lVar1;
      }
      *(long *)(puVar4 + 8) = lVar1;
      *puVar4 = *puVar4 - uVar5;
      return;
    }
    uVar5 = uVar5 - *puVar4;
    puVar3 = puVar4;
    puVar2 = *(uint **)(puVar4 + 6);
  } while (*(uint **)(puVar4 + 6) != (uint *)0x0);
  *(uint *)(param_1 + 0x78) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(uint **)(param_1 + 0x98) = puVar4;
  *(long *)(puVar4 + 6) = lVar1;
  return;
}


