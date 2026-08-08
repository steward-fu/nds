/*
 * Ghidra decompilation
 *
 * Function : _ZN8BitInput8faddbitsEj
 * Address  : 0810bffc
 * Program  : drastic
 */


/* DWARF original prototype: void faddbits(BitInput * this, uint Bits) */

void __thiscall BitInput::faddbits(BitInput *this,uint Bits)

{
  uint uVar1;
  
  uVar1 = Bits + this->InBit;
  this->InAddr = this->InAddr + (uVar1 >> 3);
  this->InBit = uVar1 & 7;
  return;
}


