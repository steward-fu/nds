/*
 * Ghidra decompilation
 *
 * Function : _ZN7RarTime6SetDosEj
 * Address  : 080e18f8
 * Program  : drastic
 */


/* DWARF original prototype: void SetDos(RarTime * this, uint DosTime) */

void __thiscall RarTime::SetDos(RarTime *this,uint DosTime)

{
  int iVar1;
  time_t tVar2;
  bool bVar3;
  tm t;
  
  iVar1 = __stack_chk_guard;
  t.tm_sec = (DosTime & 0x1f) << 1;
  t.tm_year = (DosTime >> 0x19) + 0x50;
  t.tm_mon = ((DosTime << 7) >> 0x1c) - 1;
  t.tm_min = (DosTime << 0x15) >> 0x1a;
  t.tm_hour = (DosTime << 0x10) >> 0x1b;
  t.tm_mday = (DosTime << 0xb) >> 0x1b;
  t.tm_isdst = -1;
  tVar2 = mktime((tm *)&t);
  bVar3 = iVar1 == __stack_chk_guard;
  this->itime = (longlong)tVar2 * 10000000 + 0x19db1ded53e8000;
  if (bVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


