/*
 * Ghidra decompilation
 *
 * Function : hex_to_bcd
 * Address  : 001715a0
 * Program  : drastic64
 */


int hex_to_bcd(uint param_1)

{
  return param_1 % 10 + (param_1 / 10) * 0x10;
}


