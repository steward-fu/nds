/*
 * Ghidra decompilation
 *
 * Function : ReadFilter
 * Address  : 080f1928
 * Program  : drastic
 */


/* DWARF original prototype: bool ReadFilter(Unpack * this, BitInput * Inp, UnpackFilter * Filter)
    */

bool __thiscall Unpack::ReadFilter(Unpack *this,BitInput *Inp,UnpackFilter *Filter)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint Data;
  uint Data_1;
  
  if (((Inp->ExternalBuffer != false) || (Inp->InAddr < this->ReadTop + -0xf)) ||
     (bVar1 = UnpReadBuf(this), bVar1)) {
    uVar5 = 0;
    uVar2 = BitInput::fgetbits(Inp);
    Data = 0;
    uVar4 = Inp->InBit + 2;
    Inp->InAddr = Inp->InAddr + (uVar4 >> 3);
    Inp->InBit = uVar4 & 7;
    do {
      uVar3 = BitInput::fgetbits(Inp);
      Data = Data + ((uVar3 >> 8) << (uVar5 & 0xff));
      uVar5 = uVar5 + 8;
      uVar4 = Inp->InBit + 8;
      Inp->InAddr = Inp->InAddr + (uVar4 >> 3);
      Inp->InBit = uVar4 & 7;
    } while (uVar5 != ((uVar2 >> 0xe) + 1) * 8);
    Filter->BlockStart = Data;
    uVar5 = 0;
    uVar2 = BitInput::fgetbits(Inp);
    Data_1 = 0;
    uVar4 = Inp->InBit + 2;
    Inp->InAddr = Inp->InAddr + (uVar4 >> 3);
    Inp->InBit = uVar4 & 7;
    do {
      uVar3 = BitInput::fgetbits(Inp);
      Data_1 = Data_1 + ((uVar3 >> 8) << (uVar5 & 0xff));
      uVar5 = uVar5 + 8;
      uVar4 = Inp->InBit + 8;
      Inp->InAddr = Inp->InAddr + (uVar4 >> 3);
      Inp->InBit = uVar4 & 7;
    } while (uVar5 != ((uVar2 >> 0xe) + 1) * 8);
    Filter->BlockLength = Data_1;
    uVar2 = BitInput::fgetbits(Inp);
    Filter->Type = (byte)(uVar2 >> 0xd);
    BitInput::faddbits(Inp,3);
    if ((Filter->Type & 0xfb) == 0) {
      uVar2 = BitInput::fgetbits(Inp);
      Filter->Channels = (char)(uVar2 >> 0xb) + '\x01';
      BitInput::faddbits(Inp,5);
      if (Filter->Type != '\x05') {
        return true;
      }
    }
    else if (Filter->Type != 5) {
      return true;
    }
    Filter->Channels = '\x03';
    uVar2 = BitInput::fgetbits(Inp);
    Filter->Width = uVar2 + 1;
    BitInput::faddbits(Inp,0x10);
    uVar2 = BitInput::fgetbits(Inp);
    Filter->PosR = (byte)(uVar2 >> 0xe);
    BitInput::faddbits(Inp,2);
    bVar1 = true;
  }
  return bVar1;
}


