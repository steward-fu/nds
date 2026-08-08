/*
 * Ghidra decompilation
 *
 * Function : touchscreen_transfer
 * Address  : 08091848
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 touchscreen_transfer(touchscreen_struct *touchscreen,system_struct *system,u8 value)

{
  byte bVar1;
  u8 uVar2;
  u8 uVar3;
  s16 sVar4;
  uint uVar5;
  u32 channel;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  bVar1 = touchscreen->control;
  uVar2 = touchscreen->read_counter;
  uVar5 = ((uint)bVar1 << 0x19) >> 0x1d;
  if (uVar5 == 6) {
    if ((system->spu).audio.enable_capture == '\0') {
      touchscreen->channel_data[6] = 0;
      uVar5 = 0;
    }
    else if (system->microphone_status == '\x01') {
      uVar5 = 0;
    }
    else if (system->microphone_status == '\x02') {
      sVar4 = spu_get_microphone_sample(&system->spu,CONCAT44(unaff_r5,unaff_r4));
      uVar5 = sVar4 + 0x8000 >> 4;
    }
    else {
      uVar5 = 0;
      system->microphone_status = '\x01';
    }
  }
  else {
    uVar5 = (uint)touchscreen->channel_data[uVar5];
  }
  if (uVar2 == '\x01') {
    if ((bVar1 & 8) != 0) {
      uVar5 = uVar5 & 0xfffffff0;
    }
    touchscreen->read_counter = '\x02';
    uVar3 = (u8)(uVar5 << 3);
  }
  else if (uVar2 == '\0') {
    uVar3 = (u8)((uVar5 << 0x13) >> 0x18);
    touchscreen->read_counter = '\x01';
  }
  else {
    if (uVar2 != '\x02') {
      uVar5 = uVar5 & 0xff;
    }
    uVar3 = (u8)uVar5;
    if (uVar2 == '\x02') {
      uVar3 = '\0';
    }
  }
  if ((value & 0x80) != 0) {
    touchscreen->control = value;
    touchscreen->read_counter = '\0';
  }
  return uVar3;
}


