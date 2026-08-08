/*
 * Ghidra decompilation
 *
 * Function : print_offset_defines
 * Address  : 0010f670
 * Program  : drastic64
 */


void print_offset_defines(void)

{
  __printf_chk(1,"Offset defines (nds_system @ %p):\n",nds_system);
  __printf_chk(1,"#define %-45s 0x%03X\n","SPU_CHANNEL_SIZE",200);
  return;
}


