/*
 * Ghidra decompilation
 *
 * Function : reset_spi_peripherals
 * Address  : 00171370
 * Program  : drastic64
 */


void reset_spi_peripherals(long param_1)

{
  reset_backup();
  *(undefined8 *)(param_1 + 0x2428) = 0;
  *(undefined8 *)(param_1 + 0x2430) = 0;
  *(undefined *)(param_1 + 0x2440) = 0xf;
  *(undefined8 *)(param_1 + 0x2438) = 0x7f00000000;
  *(undefined2 *)(param_1 + 0x2450) = 0;
  return;
}


