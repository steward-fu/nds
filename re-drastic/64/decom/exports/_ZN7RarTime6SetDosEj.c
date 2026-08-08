/*
 * Ghidra decompilation
 *
 * Function : _ZN7RarTime6SetDosEj
 * Address  : 001c2970
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RarTime::SetDos(unsigned int) */

void __thiscall RarTime::SetDos(RarTime *this,uint param_1)

{
  bool bVar1;
  time_t tVar2;
  tm local_40;
  long local_8;
  
  local_40.tm_mon = (param_1 >> 0x15 & 0xf) - 1;
  local_40.tm_year = (param_1 >> 0x19) + 0x50;
  local_40.tm_sec = (param_1 & 0x1f) << 1;
  local_40.tm_min = param_1 >> 5 & 0x3f;
  local_40.tm_hour = param_1 >> 0xb & 0x1f;
  local_40.tm_mday = param_1 >> 0x10 & 0x1f;
  local_8 = ___stack_chk_guard;
  local_40.tm_isdst = -1;
  tVar2 = mktime(&local_40);
  bVar1 = local_8 == ___stack_chk_guard;
  *(time_t *)this = tVar2 * 10000000 + 0x19db1ded53e8000;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


