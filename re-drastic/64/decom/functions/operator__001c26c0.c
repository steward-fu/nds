/*
 * Ghidra decompilation
 *
 * Function : operator=
 * Address  : 001c26c0
 * Program  : drastic64
 */


/* RarTime::TEMPNAMEPLACEHOLDERVALUE(long) */

void __thiscall RarTime::operator=(RarTime *this,long param_1)

{
  *(long *)this = param_1 * 10000000 + 0x19db1ded53e8000;
  return;
}


