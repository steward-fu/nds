/*
 * Ghidra decompilation
 *
 * Function : print_irq_status
 * Address  : 001827d0
 * Program  : drastic64
 */


void print_irq_status(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x2080);
  __printf_chk(1,"IME: %d  IE: %08x  IF: %08x  cpu IRQ: %08x\n",*(undefined2 *)(lVar1 + 0x208),
               *(undefined4 *)(lVar1 + 0x210),*(undefined4 *)(lVar1 + 0x214),
               *(undefined4 *)(*param_1 + 0x2108));
  return;
}


