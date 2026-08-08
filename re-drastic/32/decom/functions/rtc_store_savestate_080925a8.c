/*
 * Ghidra decompilation
 *
 * Function : rtc_store_savestate
 * Address  : 080925a8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void rtc_store_savestate(rtc_struct *rtc,mem_file_struct *savestate_file,u32 version)

{
  undefined4 *puVar1;
  time_t tVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  u8 *puVar6;
  
  puVar1 = (undefined4 *)savestate_file->buffer_ptr;
  uVar5 = *(undefined4 *)(rtc->parameter_buffer + 4);
  *puVar1 = *(undefined4 *)rtc->parameter_buffer;
  puVar1[1] = uVar5;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 8;
  puVar6[8] = rtc->state;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 1;
  puVar6[1] = rtc->command;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 1;
  puVar6[1] = rtc->status1;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 1;
  puVar6[1] = rtc->status2;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 1;
  puVar6[1] = rtc->last_output_bit;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 1;
  puVar6[1] = rtc->last_clock;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 1;
  puVar6[1] = rtc->shift_register;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 1;
  puVar6[1] = rtc->shift_register_position;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 1;
  puVar6[1] = rtc->parameter_buffer_position;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 1;
  if (version < 9) {
    tVar2 = time((time_t *)0x0);
    iVar3 = __aeabi_uldivmod(*(undefined4 *)&rtc->system->frame_number,
                             *(undefined4 *)((int)&rtc->system->frame_number + 4),0x3c,0);
    rtc->base_time = tVar2 - iVar3;
    return;
  }
  *(time_t *)(puVar6 + 1) = rtc->base_time;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 4;
  pcVar4 = ctime(&rtc->base_time);
  __printf_chk(1,"RTC: Loaded savestate time %s",pcVar4);
  return;
}


