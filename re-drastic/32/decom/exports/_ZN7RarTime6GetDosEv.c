/*
 * Ghidra decompilation
 *
 * Function : _ZN7RarTime6GetDosEv
 * Address  : 080e1840
 * Program  : drastic
 */


/* DWARF original prototype: uint GetDos(RarTime * this) */

uint __thiscall RarTime::GetDos(RarTime *this)

{
  tm *ptVar1;
  tm *t;
  time_t ut;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  ut = __aeabi_uldivmod(*(uint *)&this->itime + 0x2ac18000,
                        *(int *)((int)&this->itime + 4) + -0x19db1df +
                        (uint)(0xd53e7fff < *(uint *)&this->itime),10000000,0);
  ptVar1 = localtime(&ut);
  if (local_1c == __stack_chk_guard) {
    return ptVar1->tm_min << 5 | (uint)ptVar1->tm_sec >> 1 | ptVar1->tm_hour << 0xb |
           ptVar1->tm_mday << 0x10 | (ptVar1->tm_mon + 1) * 0x200000 |
           (ptVar1->tm_year + -0x50) * 0x2000000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


