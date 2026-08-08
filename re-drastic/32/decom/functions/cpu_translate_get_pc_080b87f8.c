/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_get_pc
 * Address  : 080b87f8
 * Program  : drastic
 */


int cpu_translate_get_pc(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = param_1;
  if (*param_1 == -0x1ee5fff6) {
    uVar1 = 0;
  }
  else {
    do {
      piVar3 = piVar3 + -1;
    } while (*piVar3 != -0x1ee5fff6);
    uVar1 = (int)param_1 - (int)piVar3 >> 2;
    param_1 = piVar3;
  }
  puVar2 = *(uint **)(param_1[-1] + 0x14);
  uVar4 = *puVar2;
  while (uVar1 != uVar4 >> 0x10) {
    puVar2 = puVar2 + 1;
    uVar4 = *puVar2;
  }
  return (uVar4 & 0xffff) + *(int *)(param_1[-1] + 4);
}


