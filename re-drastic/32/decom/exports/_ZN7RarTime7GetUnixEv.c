/*
 * Ghidra decompilation
 *
 * Function : _ZN7RarTime7GetUnixEv
 * Address  : 080e1658
 * Program  : drastic
 */


/* DWARF original prototype: time_t GetUnix(RarTime * this) */

time_t __thiscall RarTime::GetUnix(RarTime *this)

{
  time_t tVar1;
  
  tVar1 = __aeabi_uldivmod(*(uint *)&this->itime + 0x2ac18000,
                           *(int *)((int)&this->itime + 4) + -0x19db1df +
                           (uint)(0xd53e7fff < *(uint *)&this->itime),10000000,0);
  return tVar1;
}


