/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack14ReadLastTablesEv
 * Address  : 080f8a3c
 * Program  : drastic
 */


/* DWARF original prototype: void ReadLastTables(Unpack * this) */

void __thiscall Unpack::ReadLastTables(Unpack *this)

{
  uint uVar1;
  
  if (this->ReadTop <= (this->Inp).InAddr + 4) {
    return;
  }
  if (this->UnpAudioBlock == 0) {
    uVar1 = DecodeNumber(this,&this->Inp,&(this->BlockTables).LD);
    if (uVar1 == 0x10d) {
LAB_080f8ab4:
      ReadTables20(this);
      return;
    }
  }
  else {
    uVar1 = DecodeNumber(this,&this->Inp,this->MD + this->UnpCurChannel);
    if (uVar1 == 0x100) goto LAB_080f8ab4;
  }
  return;
}


