/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead8GetCRC15Eb
 * Address  : 080e12c8
 * Program  : drastic
 */


/* DWARF original prototype: uint GetCRC15(RawRead * this, bool ProcessedOnly) */

uint __thiscall RawRead::GetCRC15(RawRead *this,bool ProcessedOnly)

{
  uint uVar1;
  uint HeaderCRC;
  size_t sVar2;
  
  sVar2 = this->DataSize;
  if (2 < sVar2) {
    if (ProcessedOnly) {
      sVar2 = this->ReadPos;
    }
    uVar1 = CRC32(0xffffffff,(this->Data).Buffer + 2,sVar2 - 2);
    HeaderCRC = ~uVar1;
    return HeaderCRC & 0xffff;
  }
  return 0;
}


