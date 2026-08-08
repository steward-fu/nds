/*
 * Ghidra decompilation
 *
 * Function : Swap20
 * Address  : 080de4d8
 * Program  : drastic
 */


/* DWARF original prototype: void Swap20(CryptData * this, byte * Ch1, byte * Ch2) */

void __thiscall CryptData::Swap20(CryptData *this,byte *Ch1,byte *Ch2)

{
  byte bVar1;
  byte Ch;
  
  bVar1 = *Ch1;
  *Ch1 = *Ch2;
  *Ch2 = bVar1;
  return;
}


