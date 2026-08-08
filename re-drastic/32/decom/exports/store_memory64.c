/*
 * Ghidra decompilation
 *
 * Function : store_memory64
 * Address  : 08014300
 * Program  : drastic
 */


void store_memory64(memory_interface_struct *memory_interface,u32 address,u64 value)

{
  u32 in_r2;
  u32 in_r3;
  uint uVar1;
  u32 page_table_entry;
  
  uVar1 = memory_interface->page_table[address >> 0xb];
  if ((uVar1 & 0x40000000) == 0) {
    *(u32 *)(address + uVar1 * 4) = in_r2;
    *(u32 *)(address + uVar1 * 4 + 4) = in_r3;
  }
  else {
    if (address < 0x10000000) {
      extended_store32(memory_interface,address,in_r2);
    }
    if (address + 4 < 0xfffffff || address == 0xffffffb) {
      extended_store32(memory_interface,address + 4,in_r3);
      return;
    }
  }
  return;
}


