/*
 * Ghidra decompilation
 *
 * Function : reset_spi_peripherals
 * Address  : 08091cac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_spi_peripherals(spi_peripherals_struct *spi_peripherals)

{
  reset_backup(&spi_peripherals->flash_firmware);
  *(undefined8 *)(spi_peripherals->touchscreen).channel_data = 0;
  *(undefined8 *)((spi_peripherals->touchscreen).channel_data + 4) = 0;
  spi_peripherals->control = 0;
  (spi_peripherals->touchscreen).control = '\0';
  (spi_peripherals->touchscreen).read_counter = '\0';
  (spi_peripherals->power_management).state = '\0';
  (spi_peripherals->power_management).index = '\0';
  (spi_peripherals->power_management).registers[0] = '\x7f';
  (spi_peripherals->power_management).registers[1] = '\0';
  (spi_peripherals->power_management).registers[2] = '\0';
  (spi_peripherals->power_management).registers[3] = '\0';
  (spi_peripherals->power_management).registers[4] = '\x0f';
  return;
}


