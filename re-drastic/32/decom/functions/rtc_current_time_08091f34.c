/*
 * Ghidra decompilation
 *
 * Function : rtc_current_time
 * Address  : 08091f34
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

time_t rtc_current_time(rtc_struct *rtc)

{
  int iVar1;
  time_t tVar2;
  system_struct *psVar3;
  
  psVar3 = rtc->system;
  if ((psVar3->config).rtc_system_time == 0) {
    iVar1 = __aeabi_uldivmod(*(undefined4 *)&psVar3->frame_number,
                             *(undefined4 *)((int)&psVar3->frame_number + 4),0x3c,0);
    return rtc->base_time + iVar1;
  }
  tVar2 = time((time_t *)0x0);
  return tVar2;
}


