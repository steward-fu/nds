/*
 * Ghidra decompilation
 *
 * Function : FUN_080b5470
 * Address  : 080b5470
 * Program  : drastic16
 */


void FUN_080b5470(undefined4 param_1,int *param_2)

{
  time_t tVar1;
  tm local_34;
  
  local_34.tm_sec = param_2[5];
  local_34.tm_min = param_2[4];
  local_34.tm_hour = param_2[3];
  local_34.tm_mday = param_2[2];
  local_34.tm_mon = param_2[1] + -1;
  local_34.tm_year = *param_2 + -0x76c;
  local_34.tm_isdst = -1;
  tVar1 = mktime(&local_34);
  FUN_080b5284(param_1,tVar1);
  return;
}


