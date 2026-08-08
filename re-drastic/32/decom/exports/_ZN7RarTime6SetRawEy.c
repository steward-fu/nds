/*
 * Ghidra decompilation
 *
 * Function : _ZN7RarTime6SetRawEy
 * Address  : 080e1838
 * Program  : drastic
 */


/* DWARF original prototype: void SetRaw(RarTime * this, uint64 RawTime) */

void __thiscall RarTime::SetRaw(RarTime *this,uint64 RawTime)

{
  undefined4 in_r2;
  undefined4 in_r3;
  
  *(undefined4 *)&this->itime = in_r2;
  *(undefined4 *)((int)&this->itime + 4) = in_r3;
  return;
}


