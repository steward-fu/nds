/*
 * Ghidra decompilation
 *
 * Function : print_div_status
 * Address  : 00182800
 * Program  : drastic64
 */


void print_div_status(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x2080);
  __printf_chk(1,"DIV: %016lx / %016lx =\n  %016lx,  %016lx\n",*(undefined8 *)(lVar1 + 0x290),
               *(undefined8 *)(lVar1 + 0x298),*(undefined8 *)(lVar1 + 0x2a0),
               *(undefined8 *)(lVar1 + 0x2a8));
  return;
}


