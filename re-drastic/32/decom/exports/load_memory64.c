/*
 * Ghidra decompilation
 *
 * Function : load_memory64
 * Address  : 08013d0c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u64 load_memory64(memory_interface_struct *memory_interface,u32 address)

{
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  
  iVar1 = memory_interface->page_table[address >> 0xb] * 4;
  if (iVar1 != 0) {
    return *(u64 *)(address + iVar1);
  }
  if (address < 0x10000000) {
    uVar3 = extended_load32(memory_interface,address);
  }
  else {
    uVar3 = 0xffffffff;
  }
  if (address + 4 < 0xfffffff || address == 0xffffffb) {
    uVar2 = extended_load32(memory_interface,address + 4);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(uVar2,uVar3);
}


