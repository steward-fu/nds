/*
 * Ghidra decompilation
 *
 * Function : initialize_spi_peripherals
 * Address  : 001712f0
 * Program  : drastic64
 */


void initialize_spi_peripherals(long param_1,long param_2)

{
  *(long *)(param_1 + 0x2448) = param_2;
  initialize_backup(param_1,1,param_2 + 0x35ff9a0,0x40000,0);
  *(undefined *)(param_1 + 0x2426) = 1;
  return;
}


