/*
 * Ghidra decompilation
 *
 * Function : FUN_0805d104
 * Address  : 0805d104
 * Program  : drastic16
 */


void FUN_0805d104(int param_1,int param_2,time_t param_3)

{
  time_t tVar1;
  char *pcVar2;
  time_t local_c;
  
  *(undefined *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0x12) = 2;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x16) = 0;
  *(undefined *)(param_1 + 0x17) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  local_c = param_3;
  if (param_2 == 0) {
    tVar1 = time((time_t *)0x0);
    *(time_t *)(param_1 + 4) = tVar1;
    return;
  }
  pcVar2 = ctime(&local_c);
  printf("Using custom RTC time: %s",pcVar2);
  *(time_t *)(param_1 + 4) = local_c;
  return;
}


