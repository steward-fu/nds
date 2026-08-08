/*
 * Ghidra decompilation
 *
 * Function : FUN_080895b0
 * Address  : 080895b0
 * Program  : drastic16
 */


int FUN_080895b0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  
  if (*param_1 == -0x1ee5fff6) {
    uVar4 = 0;
  }
  else {
    piVar1 = param_1 + -1;
    do {
      piVar3 = piVar1;
      piVar1 = piVar3 + -1;
    } while (*piVar3 != -0x1ee5fff6);
    uVar4 = (int)param_1 - (int)piVar3 >> 2;
    param_1 = piVar3;
  }
  puVar5 = *(uint **)(param_1[-1] + 0x14);
  uVar2 = *puVar5;
  while (uVar4 != uVar2 >> 0x10) {
    puVar5 = puVar5 + 1;
    uVar2 = *puVar5;
  }
  return (uVar2 & 0xffff) + *(int *)(param_1[-1] + 4);
}


