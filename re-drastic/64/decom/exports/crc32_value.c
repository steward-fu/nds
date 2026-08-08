/*
 * Ghidra decompilation
 *
 * Function : crc32_value
 * Address  : 00174280
 * Program  : drastic64
 */


uint crc32_value(uint param_1,uint param_2)

{
  return *(uint *)(&crc32_table + ((ulong)(param_1 ^ param_2) & 0xff) * 4) ^ param_1 >> 8;
}


