/*
 * Ghidra decompilation
 *
 * Function : crc32_value
 * Address  : 08094d54
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 crc32_value(u32 crc32,u32 value)

{
  return crc32_table[(value ^ crc32) & 0xff] ^ crc32 >> 8;
}


