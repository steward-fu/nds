/*
 * Ghidra decompilation
 *
 * Function : load_cart_arm9_32
 * Address  : 08008020
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 load_cart_arm9_32(memory_struct *memory,u32 address)

{
  return 0xffffffff - ((*(int *)(memory->arm9_io_registers + 0x204) << 0x18) >> 0x1f);
}


