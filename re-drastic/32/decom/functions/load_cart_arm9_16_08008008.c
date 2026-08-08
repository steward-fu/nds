/*
 * Ghidra decompilation
 *
 * Function : load_cart_arm9_16
 * Address  : 08008008
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u16 load_cart_arm9_16(memory_struct *memory,u32 address)

{
  return -(short)((*(int *)(memory->arm9_io_registers + 0x204) << 0x18) >> 0x1f) - 1;
}


