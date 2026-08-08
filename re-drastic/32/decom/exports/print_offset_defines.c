/*
 * Ghidra decompilation
 *
 * Function : print_offset_defines
 * Address  : 080070a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void print_offset_defines(void)

{
  __printf_chk(1,"Offset defines (nds_system @ %p):\n",&nds_system);
  __printf_chk(1,"#define %-45s 0x%03X\n","SPU_CHANNEL_SIZE",0xb8);
  return;
}


