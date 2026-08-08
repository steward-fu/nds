/*
 * Ghidra decompilation
 *
 * Function : load_cart_arm9_8
 * Address  : 08007ff0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 load_cart_arm9_8(memory_struct *memory,u32 address)

{
  return 0xff - ((char)*(undefined4 *)(memory->arm9_io_registers + 0x204) >> 7);
}


