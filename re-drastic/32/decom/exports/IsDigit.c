/*
 * Ghidra decompilation
 *
 * Function : IsDigit
 * Address  : 080d2358
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool IsDigit(int ch)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ch - 0x30;
  uVar3 = uVar2;
  if (9 < uVar2) {
    uVar3 = 0;
  }
  uVar1 = (undefined)uVar3;
  if (uVar2 < 10) {
    uVar1 = 1;
  }
  return (bool)uVar1;
}


