/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack14ReadEndOfBlockEv
 * Address  : 080fafbc
 * Program  : drastic
 */


/* DWARF original prototype: bool ReadEndOfBlock(Unpack * this) */

bool __thiscall Unpack::ReadEndOfBlock(Unpack *this)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar3 = (this->Inp).InBit;
  iVar5 = (this->Inp).InAddr;
  pbVar4 = (this->Inp).InBuf + iVar5;
  uVar1 = ((uint)pbVar4[2] | (uint)*pbVar4 << 0x10 | (uint)pbVar4[1] << 8) >> (8U - iVar3 & 0xff);
  if ((uVar1 & 0x8000) != 0) {
    (this->Inp).InAddr = iVar5 + (iVar3 + 1U >> 3);
    (this->Inp).InBit = iVar3 + 1U & 7;
    this->TablesRead = false;
    bVar2 = ReadTables30(this);
    return bVar2;
  }
  (this->Inp).InAddr = iVar5 + (iVar3 + 2U >> 3);
  (this->Inp).InBit = iVar3 + 2U & 7;
  this->TablesRead = SUB41(((uVar1 ^ 0x4000) << 0x11) >> 0x1f,0);
  return false;
}


