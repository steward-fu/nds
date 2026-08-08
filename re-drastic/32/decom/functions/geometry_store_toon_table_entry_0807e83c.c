/*
 * Ghidra decompilation
 *
 * Function : geometry_store_toon_table_entry
 * Address  : 0807e83c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_store_toon_table_entry(geometry_struct *geometry,u32 index,u32 value)

{
  u8 uVar1;
  u32 toon_g;
  u8 uVar2;
  u32 toon_b;
  u8 uVar3;
  
  uVar1 = (byte)((value << 0x16) >> 0x1b) * '\x02';
  uVar3 = (char)(value & 0x1f) * '\x02';
  uVar2 = (byte)((value << 0x11) >> 0x1b) * '\x02';
  if ((value & 0x1f) != 0) {
    uVar3 = uVar3 + '\x01';
  }
  if ((value << 0x16) >> 0x1b != 0) {
    uVar1 = uVar1 + '\x01';
  }
  geometry->toon_table[index] = (u16)value;
  if ((value << 0x11) >> 0x1b != 0) {
    uVar2 = uVar2 + '\x01';
  }
  geometry->toon_cache[index] = uVar3;
  geometry->toon_cache[index + 0x20] = uVar1;
  geometry->toon_cache[index + 0x40] = uVar2;
  return;
}


