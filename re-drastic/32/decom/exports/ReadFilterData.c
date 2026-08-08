/*
 * Ghidra decompilation
 *
 * Function : ReadFilterData
 * Address  : 080f167c
 * Program  : drastic
 */


/* DWARF original prototype: uint ReadFilterData(Unpack * this, BitInput * Inp) */

uint __thiscall Unpack::ReadFilterData(Unpack *this,BitInput *Inp)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint Data;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  uVar1 = BitInput::fgetbits(Inp);
  uVar3 = Inp->InBit + 2;
  Inp->InAddr = Inp->InAddr + (uVar3 >> 3);
  Inp->InBit = uVar3 & 7;
  do {
    uVar2 = BitInput::fgetbits(Inp);
    uVar5 = uVar5 + ((uVar2 >> 8) << (uVar4 & 0xff));
    uVar4 = uVar4 + 8;
    uVar3 = Inp->InBit + 8;
    Inp->InAddr = Inp->InAddr + (uVar3 >> 3);
    Inp->InBit = uVar3 & 7;
  } while (uVar4 != ((uVar1 >> 0xe) + 1) * 8);
  return uVar5;
}


