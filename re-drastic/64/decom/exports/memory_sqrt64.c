/*
 * Ghidra decompilation
 *
 * Function : memory_sqrt64
 * Address  : 00116dd0
 * Program  : drastic64
 */


ulong memory_sqrt64(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (param_1 != 0) {
    iVar3 = 0x1f;
    uVar1 = 0;
    uVar2 = 0x1000000000000000;
    do {
      uVar4 = uVar1 | uVar2;
      uVar1 = uVar1 >> 1;
      if (uVar4 <= param_1) {
        param_1 = param_1 - uVar4;
        uVar1 = uVar1 | uVar2;
      }
      uVar2 = uVar2 >> 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}


