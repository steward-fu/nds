/*
 * Ghidra decompilation
 *
 * Function : _ZN5RarVM17SetLowEndianValueEPjj
 * Address  : 0810ab30
 * Program  : drastic
 */


/* DWARF original prototype: void SetLowEndianValue(RarVM * this, uint * Addr, uint Value) */

void __thiscall RarVM::SetLowEndianValue(RarVM *this,uint *Addr,uint Value)

{
  *(char *)Addr = (char)Value;
  *(char *)((int)Addr + 1) = (char)(Value >> 8);
  *(char *)((int)Addr + 2) = (char)(Value >> 0x10);
  *(char *)((int)Addr + 3) = (char)(Value >> 0x18);
  return;
}


