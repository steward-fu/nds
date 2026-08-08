/*
 * Ghidra decompilation
 *
 * Function : geometry_store_edge_color_entry
 * Address  : 0807e8cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_store_edge_color_entry(geometry_struct *geometry,u32 index,u32 value)

{
  u8 uVar1;
  u32 edge_g;
  u8 uVar2;
  u32 edge_b;
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
  geometry->edge_colors[index] = (u16)value;
  if ((value << 0x11) >> 0x1b != 0) {
    uVar2 = uVar2 + '\x01';
  }
  geometry->edge_cache[index] = uVar3;
  geometry->edge_cache[index + 8] = uVar1;
  geometry->edge_cache[index + 0x10] = uVar2;
  return;
}


