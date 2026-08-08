/*
 * Ghidra decompilation
 *
 * Function : spi_peripherals_store_savestate
 * Address  : 08091e10
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void spi_peripherals_store_savestate
               (spi_peripherals_struct *spi_peripherals,mem_file_struct *savestate_file,u32 version)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  u8 *puVar4;
  undefined4 uVar5;
  
  *(u16 *)savestate_file->buffer_ptr = spi_peripherals->control;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 2;
  backup_store_savestate(&spi_peripherals->flash_firmware,savestate_file,version);
  puVar2 = (undefined4 *)savestate_file->buffer_ptr;
  uVar5 = *(undefined4 *)((spi_peripherals->touchscreen).channel_data + 2);
  uVar1 = *(undefined4 *)((spi_peripherals->touchscreen).channel_data + 4);
  uVar3 = *(undefined4 *)((spi_peripherals->touchscreen).channel_data + 6);
  *puVar2 = *(undefined4 *)(spi_peripherals->touchscreen).channel_data;
  puVar2[1] = uVar5;
  puVar2[2] = uVar1;
  puVar2[3] = uVar3;
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 0x10;
  puVar4[0x10] = (spi_peripherals->touchscreen).control;
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 1;
  puVar4[1] = (spi_peripherals->touchscreen).read_counter;
  puVar4 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar4 + 1;
  if (5 < version) {
    puVar4[1] = (spi_peripherals->power_management).state;
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 1;
    puVar4[1] = (spi_peripherals->power_management).index;
    puVar4 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar4 + 1;
    uVar1 = *(undefined4 *)((spi_peripherals->power_management).registers + 4);
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(spi_peripherals->power_management).registers;
    *(undefined4 *)(puVar4 + 5) = uVar1;
    savestate_file->buffer_ptr = savestate_file->buffer_ptr + 8;
  }
  return;
}


