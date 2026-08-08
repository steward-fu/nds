/*
 * Ghidra decompilation
 *
 * Function : IsAlpha
 * Address  : 080d2380
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool IsAlpha(int ch)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (ch & 0xffffffdfU) - 0x41;
  uVar3 = uVar2;
  if (0x19 < uVar2) {
    uVar3 = 0;
  }
  uVar1 = (undefined)uVar3;
  if (uVar2 < 0x1a) {
    uVar1 = 1;
  }
  return (bool)uVar1;
}


