/*
 * Ghidra decompilation
 *
 * Function : event_force_task_switch_function
 * Address  : 0801780c
 * Program  : drastic
 */


void event_force_task_switch_function(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = param_1 + 0x48;
  puVar3 = *(uint **)(param_1 + 0x198);
  uVar2 = 0x80 - (*(uint *)(param_1 + 8) & 0x7f);
  if ((puVar3 == (uint *)0x0) || (uVar1 = *puVar3, uVar2 <= uVar1)) {
    *(uint *)(param_1 + 0x48) = uVar2;
    *(uint **)(param_1 + 0x54) = puVar3;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(uint *)(param_1 + 0x198) = uVar5;
  }
  else {
    do {
      puVar4 = puVar3;
      puVar3 = (uint *)puVar4[3];
      uVar2 = uVar2 - uVar1;
      if (puVar3 == (uint *)0x0) break;
      uVar1 = *puVar3;
    } while (uVar1 < uVar2);
    *(uint *)(param_1 + 0x48) = uVar2;
    *(uint **)(param_1 + 0x54) = puVar3;
    *(uint **)(param_1 + 0x58) = puVar4;
    puVar4[3] = uVar5;
  }
  if (puVar3 != (uint *)0x0) {
    puVar3[4] = uVar5;
    *puVar3 = *puVar3 - uVar2;
  }
  return;
}


