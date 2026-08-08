/*
 * Ghidra decompilation
 *
 * Function : reset_rtc
 * Address  : 001719f0
 * Program  : drastic64
 */


void reset_rtc(long param_1,int param_2,time_t param_3)

{
  char *pcVar1;
  time_t tVar2;
  time_t local_8;
  
  *(undefined *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_8 = param_3;
  if (param_2 != 0) {
    pcVar1 = ctime(&local_8);
    __printf_chk(1,"Using custom RTC time: %s",pcVar1);
    *(time_t *)(param_1 + 8) = local_8;
    return;
  }
  tVar2 = time((time_t *)0x0);
  *(time_t *)(param_1 + 8) = tVar2;
  return;
}


