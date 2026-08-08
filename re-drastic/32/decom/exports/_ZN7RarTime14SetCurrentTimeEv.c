/*
 * Ghidra decompilation
 *
 * Function : _ZN7RarTime14SetCurrentTimeEv
 * Address  : 080e1e70
 * Program  : drastic
 */


/* DWARF original prototype: void SetCurrentTime(RarTime * this) */

void __thiscall RarTime::SetCurrentTime(RarTime *this)

{
  bool bVar1;
  time_t st;
  int local_14;
  
  local_14 = __stack_chk_guard;
  time(&st);
  bVar1 = local_14 == __stack_chk_guard;
  this->itime = (longlong)st * 10000000 + 0x19db1ded53e8000;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


