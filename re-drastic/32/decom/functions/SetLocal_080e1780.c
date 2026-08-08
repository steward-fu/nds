/*
 * Ghidra decompilation
 *
 * Function : SetLocal
 * Address  : 080e1780
 * Program  : drastic
 */


/* DWARF original prototype: void SetLocal(RarTime * this, RarLocalTime * lt) */

void __thiscall RarTime::SetLocal(RarTime *this,RarLocalTime *lt)

{
  int iVar1;
  time_t tVar2;
  bool bVar3;
  tm t;
  
  iVar1 = __stack_chk_guard;
  t.tm_mday = lt->Day;
  t.tm_hour = lt->Hour;
  t.tm_mon = lt->Month - 1;
  t.tm_year = lt->Year - 0x76c;
  t.tm_isdst = -1;
  t.tm_min = lt->Minute;
  t.tm_sec = lt->Second;
  tVar2 = mktime((tm *)&t);
  bVar3 = iVar1 == __stack_chk_guard;
  this->itime = (longlong)tVar2 * 10000000 + 0x19db1ded53e8000;
  if (bVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


