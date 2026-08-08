/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_get_pc
 * Address  : 00196830
 * Program  : drastic64
 */


int cpu_translate_get_pc(int *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  
  piVar3 = param_1;
  if (*param_1 == 0x36f8004c) {
    uVar5 = 0;
  }
  else {
    do {
      piVar3 = piVar3 + -1;
    } while (*piVar3 != 0x36f8004c);
    uVar5 = (uint)((ulong)((long)param_1 - (long)piVar3) >> 2);
    param_1 = piVar3;
  }
  uVar2 = (ulong)*(uint *)((ulong)(uint)param_1[-1] + param_2 + 0x14);
  puVar4 = (uint *)(uVar2 + param_2);
  uVar1 = *(uint *)(uVar2 + param_2);
  while (uVar5 != uVar1 >> 0x10) {
    puVar4 = puVar4 + 1;
    uVar1 = *puVar4;
  }
  return (uVar1 & 0xffff) + *(int *)((ulong)(uint)param_1[-1] + param_2 + 4);
}


