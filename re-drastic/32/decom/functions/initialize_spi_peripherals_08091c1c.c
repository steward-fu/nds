/*
 * Ghidra decompilation
 *
 * Function : initialize_spi_peripherals
 * Address  : 08091c1c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_spi_peripherals(spi_peripherals_struct *spi_peripherals,system_struct *system)

{
  spi_peripherals->system = system;
  initialize_backup(&spi_peripherals->flash_firmware,BACKUP_TYPE_FLASH,
                    (system->memory).firmware_data,0x40000,(char *)0x0);
  (spi_peripherals->flash_firmware).firmware = '\x01';
  return;
}


