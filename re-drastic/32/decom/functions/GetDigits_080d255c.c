/*
 * Ghidra decompilation
 *
 * Function : GetDigits
 * Address  : 080d255c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

uint GetDigits(uint Number)

{
  uint uVar1;
  
  if (Number < 10) {
    uVar1 = 1;
  }
  else {
    uVar1 = 1;
    do {
      uVar1 = uVar1 + 1;
      Number = Number / 10;
    } while (9 < Number);
  }
  return uVar1;
}


