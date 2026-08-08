/*
 * Ghidra decompilation
 *
 * Function : spi_control_write
 * Address  : 080919dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void spi_control_write(spi_peripherals_struct *spi_peripherals,u16 value)

{
  if ((((spi_peripherals->control & 0x8000) != 0) && ((value & 0x8000) == 0)) &&
     (((uint)spi_peripherals->control << 0x16) >> 0x1e == 1)) {
    backup_deselect(&spi_peripherals->flash_firmware);
  }
  spi_peripherals->control = value;
  return;
}


