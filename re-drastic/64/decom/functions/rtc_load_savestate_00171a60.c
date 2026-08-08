/*
 * Ghidra decompilation
 *
 * Function : rtc_load_savestate
 * Address  : 00171a60
 * Program  : drastic64
 */


void rtc_load_savestate(ulong **param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  time_t tVar4;
  
  param_1[2] = **(ulong ***)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 8;
  *(undefined *)(param_1 + 3) = *(undefined *)(lVar2 + 8);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)((long)param_1 + 0x19) = *(undefined *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)((long)param_1 + 0x1a) = *(undefined *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)((long)param_1 + 0x1b) = *(undefined *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)((long)param_1 + 0x1c) = *(undefined *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)((long)param_1 + 0x1d) = *(undefined *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)((long)param_1 + 0x1e) = *(undefined *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)((long)param_1 + 0x1f) = *(undefined *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  *(undefined *)(param_1 + 4) = *(undefined *)(lVar2 + 1);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 1;
  if (8 < param_3) {
    uVar1 = *(uint *)(lVar2 + 1);
    *(long *)(param_2 + 0x20) = lVar2 + 5;
    param_1[1] = (ulong *)(ulong)uVar1;
    pcVar3 = ctime((time_t *)(param_1 + 1));
    __printf_chk(1,"RTC: Loaded savestate time %s",pcVar3);
    return;
  }
  tVar4 = time((time_t *)0x0);
  param_1[1] = (ulong *)(tVar4 - **param_1 / 0x3c);
  return;
}


