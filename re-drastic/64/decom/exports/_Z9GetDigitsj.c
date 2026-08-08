/*
 * Ghidra decompilation
 *
 * Function : _Z9GetDigitsj
 * Address  : 001b4c70
 * Program  : drastic64
 */


/* GetDigits(unsigned int) */

int GetDigits(uint param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = (ulong)param_1;
  iVar1 = 1;
  if (9 < param_1) {
    do {
      iVar1 = iVar1 + 1;
      uVar3 = (uint)uVar2;
      uVar2 = uVar2 / 10;
    } while (99 < uVar3);
  }
  return iVar1;
}


