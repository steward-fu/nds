/*
 * Ghidra decompilation
 *
 * Function : _Z10IsLeapYeari
 * Address  : 001c2f20
 * Program  : drastic64
 */


/* IsLeapYear(int) */

bool IsLeapYear(int param_1)

{
  uint uVar1;
  
  if ((param_1 & 3U) != 0) {
    return false;
  }
  uVar1 = param_1 * -0x3d70a3d7 + 0x51eb850;
  if (0x28f5c28 < (uVar1 >> 2 | param_1 * 0x40000000)) {
    return true;
  }
  return (uVar1 >> 4 | param_1 * -0x70000000) < 0xa3d70b;
}


