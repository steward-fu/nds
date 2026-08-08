/*
 * Ghidra decompilation
 *
 * Function : _ZN5RarVM8ReadDataER8BitInput
 * Address  : 0810b0d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

uint RarVM::ReadData(BitInput *Inp)

{
  uint uVar1;
  uint Data;
  uint uVar2;
  uint uVar3;
  
  uVar1 = BitInput::fgetbits(Inp);
  uVar3 = uVar1 & 0xc000;
  if (uVar3 == 0x4000) {
    if ((uVar1 & 0x3c00) == 0) {
      uVar1 = uVar1 >> 2 | 0xffffff00;
      BitInput::faddbits(Inp,0xe);
    }
    else {
      uVar1 = (uVar1 << 0x12) >> 0x18;
      BitInput::faddbits(Inp,10);
    }
  }
  else if (uVar3 == 0x8000) {
    BitInput::faddbits(Inp,2);
    uVar1 = BitInput::fgetbits(Inp);
    BitInput::faddbits(Inp,0x10);
  }
  else if (uVar3 == 0) {
    BitInput::faddbits(Inp,6);
    uVar1 = (uVar1 << 0x12) >> 0x1c;
  }
  else {
    BitInput::faddbits(Inp,2);
    uVar2 = BitInput::fgetbits(Inp);
    BitInput::faddbits(Inp,0x10);
    uVar1 = BitInput::fgetbits(Inp);
    uVar1 = uVar2 << 0x10 | uVar1;
    BitInput::faddbits(Inp,0x10);
  }
  return uVar1;
}


