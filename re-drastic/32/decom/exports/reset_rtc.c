/*
 * Ghidra decompilation
 *
 * Function : reset_rtc
 * Address  : 080923b8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_rtc(rtc_struct *rtc,u32 use_custom_time,time_t custom_time)

{
  time_t tVar1;
  char *pcVar2;
  time_t local_c;
  
  rtc->state = '\0';
  rtc->status1 = '\x02';
  rtc->status2 = '\0';
  rtc->last_output_bit = '\0';
  rtc->last_clock = '\0';
  rtc->shift_register = '\0';
  rtc->shift_register_position = '\0';
  local_c = custom_time;
  if (use_custom_time == 0) {
    tVar1 = time((time_t *)0x0);
    rtc->base_time = tVar1;
    return;
  }
  pcVar2 = ctime(&local_c);
  __printf_chk(1,"Using custom RTC time: %s",pcVar2);
  rtc->base_time = local_c;
  return;
}


