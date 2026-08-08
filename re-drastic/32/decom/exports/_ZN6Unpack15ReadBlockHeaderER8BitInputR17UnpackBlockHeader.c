/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack15ReadBlockHeaderER8BitInputR17UnpackBlockHeader
 * Address  : 080f5a00
 * Program  : drastic
 */


/* DWARF original prototype: bool ReadBlockHeader(Unpack * this, BitInput * Inp, UnpackBlockHeader *
   Header) */

bool __thiscall Unpack::ReadBlockHeader(Unpack *this,BitInput *Inp,UnpackBlockHeader *Header)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte BlockFlags;
  uint uVar9;
  uint ByteCount;
  uint uVar10;
  int BlockSize;
  uint I;
  uint uVar11;
  byte SavedCheckSum;
  
  bVar2 = Inp->ExternalBuffer;
  Header->HeaderSize = 0;
  if (((bVar2 != false) || (Inp->InAddr < this->ReadTop + -6)) || (bVar2 = UnpReadBuf(this), bVar2))
  {
    BitInput::faddbits(Inp,-Inp->InBit & 7);
    uVar3 = BitInput::fgetbits(Inp);
    uVar1 = uVar3 >> 8;
    uVar10 = uVar1 & 0xff;
    BitInput::faddbits(Inp,8);
    uVar7 = (uVar10 << 0x1b) >> 0x1e;
    uVar9 = uVar7 + 1;
    if (uVar9 != 4) {
      Header->BlockBitSize = (uVar1 & 7) + 1;
      BlockSize = 0;
      Header->HeaderSize = uVar7 + 3;
      uVar3 = BitInput::fgetbits(Inp);
      BitInput::faddbits(Inp,8);
      I = 0;
      do {
        uVar4 = BitInput::fgetbits(Inp);
        uVar11 = I + 1;
        BlockSize = BlockSize + ((uVar4 >> 8) << ((I & 0x1f) << 3));
        uVar7 = Inp->InBit + 8;
        iVar5 = Inp->InAddr + (uVar7 >> 3);
        Inp->InAddr = iVar5;
        Inp->InBit = uVar7 & 7;
        I = uVar11;
      } while (uVar11 < uVar9);
      Header->BlockSize = BlockSize;
      if ((uVar3 << 0x10) >> 0x18 ==
          ((uVar1 ^ 0x5a ^ BlockSize ^ BlockSize >> 8 ^ BlockSize >> 0x10) & 0xff)) {
        iVar8 = this->ReadBorder;
        iVar6 = BlockSize + iVar5 + -1;
        Header->BlockStart = iVar5;
        if (iVar8 < iVar6) {
          iVar6 = iVar8;
        }
        this->ReadBorder = iVar6;
        Header->LastBlockInFile = SUB41((uVar10 << 0x19) >> 0x1f,0);
        Header->TablePresent = SUB41(uVar10 >> 7,0);
        return true;
      }
    }
  }
  return false;
}


