/*
 * Ghidra decompilation
 *
 * Function : rtc_current_time
 * Address  : 001715c0
 * Program  : drastic64
 */


long rtc_current_time(ulong **param_1)

{
  long lVar1;
  
  if (*(int *)(*param_1 + 0x10b4e) == 0) {
    return (long)param_1[1] + **param_1 / 0x3c;
  }
  lVar1 = time((time_t *)0x0);
  return lVar1;
}


