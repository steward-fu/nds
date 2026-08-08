/*
 * Ghidra decompilation
 *
 * Function : fgetbits
 * Address  : 0810c018
 * Program  : drastic
 */


/* DWARF original prototype: uint fgetbits(BitInput * this) */

uint __thiscall BitInput::fgetbits(BitInput *this)

{
  byte *pbVar1;
  
  pbVar1 = this->InBuf + this->InAddr;
  return ((uint)pbVar1[2] | (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8) >>
         (8U - this->InBit & 0xff) & 0xffff;
}


