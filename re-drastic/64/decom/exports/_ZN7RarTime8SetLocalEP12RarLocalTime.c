/*
 * Ghidra decompilation
 *
 * Function : _ZN7RarTime8SetLocalEP12RarLocalTime
 * Address  : 001c27f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RarTime::SetLocal(RarLocalTime*) */

void __thiscall RarTime::SetLocal(RarTime *this,RarLocalTime *param_1)

{
  bool bVar1;
  time_t tVar2;
  undefined8 uVar3;
  tm local_40;
  long local_8;
  
  uVar3 = NEON_rev64(*(undefined8 *)param_1,4);
  local_40._8_8_ = NEON_rev64(*(undefined8 *)(param_1 + 8),4);
  local_40._0_8_ = NEON_rev64(*(undefined8 *)(param_1 + 0x10),4);
  local_40.tm_mon = (int)uVar3 + -1;
  local_40.tm_year = (int)((ulong)uVar3 >> 0x20) + -0x76c;
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


