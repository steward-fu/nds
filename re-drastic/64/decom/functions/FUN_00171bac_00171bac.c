/*
 * Ghidra decompilation
 *
 * Function : FUN_00171bac
 * Address  : 00171bac
 * Program  : drastic64
 */


void FUN_00171bac(ulong **param_1,long param_2,uint param_3)

{
  long lVar1;
  char *pcVar2;
  time_t tVar3;
  ulong *puVar4;
  
  puVar4 = param_1[1];
  **(ulong ***)(param_2 + 0x20) = param_1[2];
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 8;
  *(undefined *)(lVar1 + 8) = *(undefined *)(param_1 + 3);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(lVar1 + 1) = *(undefined *)((long)param_1 + 0x19);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(lVar1 + 1) = *(undefined *)((long)param_1 + 0x1a);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(lVar1 + 1) = *(undefined *)((long)param_1 + 0x1b);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(lVar1 + 1) = *(undefined *)((long)param_1 + 0x1c);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(lVar1 + 1) = *(undefined *)((long)param_1 + 0x1d);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(lVar1 + 1) = *(undefined *)((long)param_1 + 0x1e);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(lVar1 + 1) = *(undefined *)((long)param_1 + 0x1f);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(lVar1 + 1) = *(undefined *)(param_1 + 4);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  if (8 < param_3) {
    *(int *)(lVar1 + 1) = (int)puVar4;
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 4;
    param_1[1] = (ulong *)((ulong)puVar4 & 0xffffffff);
    pcVar2 = ctime((time_t *)(param_1 + 1));
    __printf_chk(1,"RTC: Loaded savestate time %s",pcVar2);
    return;
  }
  tVar3 = time((time_t *)0x0);
  param_1[1] = (ulong *)(tVar3 - **param_1 / 0x3c);
  return;
}


