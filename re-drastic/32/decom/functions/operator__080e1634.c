/*
 * Ghidra decompilation
 *
 * Function : operator=
 * Address  : 080e1634
 * Program  : drastic
 */


/* DWARF original prototype: RarTime * operator=(RarTime * this, time_t ut) */

RarTime * __thiscall RarTime::operator=(RarTime *this,time_t ut)

{
  this->itime = (longlong)ut * 10000000 + 0x19db1ded53e8000;
  return this;
}


