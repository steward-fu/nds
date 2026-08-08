/*
 * Ghidra decompilation
 *
 * Function : spi_data_write
 * Address  : 08091a38
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 spi_data_write(spi_peripherals_struct *spi_peripherals,u8 value)

{
  ushort uVar1;
  u8 uVar2;
  s16 sVar3;
  system_struct *psVar4;
  byte bVar5;
  uint uVar6;
  u32 channel;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  uVar1 = spi_peripherals->control;
  uVar2 = '\0';
  if ((uVar1 & 0x8000) != 0) {
    uVar6 = ((uint)uVar1 << 0x16) >> 0x1e;
    if (uVar6 == 1) {
      uVar2 = backup_transfer(&spi_peripherals->flash_firmware,(uint)value);
      if ((uVar1 & 0x800) == 0) {
        backup_deselect(&spi_peripherals->flash_firmware);
      }
    }
    else if (uVar6 == 0) {
      if ((spi_peripherals->power_management).state == '\0') {
        (spi_peripherals->power_management).state = '\x01';
        (spi_peripherals->power_management).index = value;
        uVar2 = '\0';
      }
      else {
        bVar5 = (spi_peripherals->power_management).index;
        uVar6 = bVar5 & 0x7f;
        bVar5 = bVar5 >> 7 ^ 1;
        uVar2 = (spi_peripherals->power_management).registers[uVar6];
        if (uVar6 == 1) {
          bVar5 = 0;
        }
        if (bVar5 != 0) {
          (spi_peripherals->power_management).registers[uVar6] = value;
        }
        (spi_peripherals->power_management).state = '\0';
      }
      if ((uVar1 & 0x800) == 0) {
        (spi_peripherals->power_management).state = '\0';
      }
    }
    else if (uVar6 == 2) {
      bVar5 = (spi_peripherals->touchscreen).control;
      uVar2 = (spi_peripherals->touchscreen).read_counter;
      uVar6 = ((uint)bVar5 << 0x19) >> 0x1d;
      if (uVar6 == 6) {
        psVar4 = spi_peripherals->system;
        if ((psVar4->spu).audio.enable_capture == '\0') {
          (spi_peripherals->touchscreen).channel_data[6] = 0;
          uVar6 = 0;
        }
        else if (psVar4->microphone_status == '\x01') {
          uVar6 = 0;
        }
        else if (psVar4->microphone_status == '\x02') {
          sVar3 = spu_get_microphone_sample(&psVar4->spu,CONCAT44(unaff_r5,unaff_r4));
          uVar6 = sVar3 + 0x8000 >> 4;
        }
        else {
          uVar6 = 0;
          psVar4->microphone_status = '\x01';
        }
      }
      else {
        uVar6 = (uint)(spi_peripherals->touchscreen).channel_data[uVar6];
      }
      if (uVar2 == '\x01') {
        if ((bVar5 & 8) != 0) {
          uVar6 = uVar6 & 0xfffffff0;
        }
        (spi_peripherals->touchscreen).read_counter = '\x02';
        uVar2 = (u8)((uVar6 & 0x1f) << 3);
      }
      else if (uVar2 == '\0') {
        uVar2 = (u8)((uVar6 << 0x13) >> 0x18);
        (spi_peripherals->touchscreen).read_counter = '\x01';
      }
      else if (uVar2 == '\x02') {
        uVar2 = '\0';
      }
      else {
        uVar2 = (u8)uVar6;
      }
      if ((value & 0x80) != 0) {
        (spi_peripherals->touchscreen).control = value;
        (spi_peripherals->touchscreen).read_counter = '\0';
      }
      if ((uVar1 & 0x800) == 0) {
        (spi_peripherals->touchscreen).read_counter = '\0';
      }
    }
    else {
      uVar2 = '\0';
    }
  }
  return uVar2;
}


