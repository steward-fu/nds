/*
 * Ghidra decompilation
 *
 * Function : spi_peripherals_load_savestate
 * Address  : 08091d14
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void spi_peripherals_load_savestate
               (spi_peripherals_struct *spi_peripherals,mem_file_struct *savestate_file,u32 version)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  u8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  spi_peripherals->control = *(u16 *)savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 2;
  backup_load_savestate(&spi_peripherals->flash_firmware,savestate_file,version);
  puVar1 = (undefined4 *)savestate_file->buffer_ptr;
  uVar5 = puVar1[1];
  uVar4 = puVar1[2];
  uVar2 = puVar1[3];
  *(undefined4 *)(spi_peripherals->touchscreen).channel_data = *puVar1;
  *(undefined4 *)((spi_peripherals->touchscreen).channel_data + 2) = uVar5;
  *(undefined4 *)((spi_peripherals->touchscreen).channel_data + 4) = uVar4;
  *(undefined4 *)((spi_peripherals->touchscreen).channel_data + 6) = uVar2;
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 0x10;
  (spi_peripherals->touchscreen).control = puVar3[0x10];
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 1;
  (spi_peripherals->touchscreen).read_counter = puVar3[1];
  puVar3 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar3 + 1;
  if (5 < version) {
    (spi_peripherals->power_management).state = puVar3[1];
    puVar3 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar3 + 1;
    (spi_peripherals->power_management).index = puVar3[1];
    puVar3 = savestate_file->buffer_ptr;
    puVar1 = (undefined4 *)(puVar3 + 1);
    savestate_file->buffer_ptr = (u8 *)puVar1;
    uVar2 = *(undefined4 *)(puVar3 + 5);
    *(undefined4 *)(spi_peripherals->power_management).registers = *puVar1;
    *(undefined4 *)((spi_peripherals->power_management).registers + 4) = uVar2;
    savestate_file->buffer_ptr = savestate_file->buffer_ptr + 8;
  }
  return;
}


