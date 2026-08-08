/*
 * Ghidra decompilation
 *
 * Function : rtc_load_savestate
 * Address  : 08092444
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void rtc_load_savestate(rtc_struct *rtc,mem_file_struct *savestate_file,u32 version)

{
  time_t tVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  u8 *puVar5;
  
  uVar4 = *(undefined4 *)((int)savestate_file->buffer_ptr + 4);
  *(undefined4 *)rtc->parameter_buffer = *(undefined4 *)savestate_file->buffer_ptr;
  *(undefined4 *)(rtc->parameter_buffer + 4) = uVar4;
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 8;
  rtc->state = puVar5[8];
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 1;
  rtc->command = puVar5[1];
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 1;
  rtc->status1 = puVar5[1];
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 1;
  rtc->status2 = puVar5[1];
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 1;
  rtc->last_output_bit = puVar5[1];
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 1;
  rtc->last_clock = puVar5[1];
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 1;
  rtc->shift_register = puVar5[1];
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 1;
  rtc->shift_register_position = puVar5[1];
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 1;
  rtc->parameter_buffer_position = puVar5[1];
  puVar5 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar5 + 1;
  if (version < 9) {
    tVar1 = time((time_t *)0x0);
    iVar2 = __aeabi_uldivmod(*(undefined4 *)&rtc->system->frame_number,
                             *(undefined4 *)((int)&rtc->system->frame_number + 4),0x3c,0);
    rtc->base_time = tVar1 - iVar2;
    return;
  }
  rtc->base_time = *(time_t *)(puVar5 + 1);
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 4;
  pcVar3 = ctime(&rtc->base_time);
  __printf_chk(1,"RTC: Loaded savestate time %s",pcVar3);
  return;
}


