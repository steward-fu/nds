/*
 * Ghidra decompilation
 *
 * Function : load_cart_arm7_32
 * Address  : 0800805c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 load_cart_arm7_32(memory_struct *memory,u32 address)

{
  return (*(int *)(memory->arm9_io_registers + 0x204) << 0x18) >> 0x1f;
}


