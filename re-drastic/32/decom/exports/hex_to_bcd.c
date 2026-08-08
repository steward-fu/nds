/*
 * Ghidra decompilation
 *
 * Function : hex_to_bcd
 * Address  : 08091f14
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 hex_to_bcd(u32 value)

{
  return value + (value / 10) * 6;
}


