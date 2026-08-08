/*
 * Ghidra decompilation
 *
 * Function : FUN_080b537c
 * Address  : 080b537c
 * Program  : drastic16
 */


void FUN_080b537c(undefined4 param_1,int *param_2)

{
  tm *ptVar1;
  time_t local_10 [2];
  
  local_10[0] = FUN_080b530c(param_1);
  ptVar1 = localtime(local_10);
  *param_2 = ptVar1->tm_year + 0x76c;
  param_2[1] = ptVar1->tm_mon + 1;
  param_2[2] = ptVar1->tm_mday;
  param_2[3] = ptVar1->tm_hour;
  param_2[4] = ptVar1->tm_min;
  param_2[5] = ptVar1->tm_sec;
  param_2[6] = 0;
  param_2[7] = ptVar1->tm_wday;
  param_2[8] = ptVar1->tm_yday;
  return;
}


