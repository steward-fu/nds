/*
 * Ghidra decompilation
 *
 * Function : gamecard_lookup_key
 * Address  : 0808e9e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 gamecard_lookup_key(u32 *key_table,u32 value)

{
  u32 result;
  
  return (key_table[((value << 0x10) >> 0x18) + 0x212] ^
         key_table[(value >> 0x18) + 0x12] + key_table[((value << 8) >> 0x18) + 0x112]) +
         key_table[(value & 0xff) + 0x312];
}


