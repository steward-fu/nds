/*
 * Ghidra decompilation
 *
 * Function : ReadTables
 * Address  : 080f5b80
 * Program  : drastic
 */


/* DWARF original prototype: bool ReadTables(Unpack * this, BitInput * Inp, UnpackBlockHeader *
   Header, UnpackBlockTables * Tables) */

bool __thiscall
Unpack::ReadTables(Unpack *this,BitInput *Inp,UnpackBlockHeader *Header,UnpackBlockTables *Tables)

{
  bool bVar1;
  UnpackBlockTables *Tables_00;
  
  if (Header->TablePresent == false) {
    return true;
  }
  Tables_00 = (UnpackBlockTables *)(uint)Inp->ExternalBuffer;
  if (((Tables_00 == (UnpackBlockTables *)0x0) &&
      (Tables_00 = (UnpackBlockTables *)(this->ReadTop + -0x18), (int)Tables_00 <= Inp->InAddr)) &&
     (bVar1 = UnpReadBuf(this), !bVar1)) {
    return bVar1;
  }
  bVar1 = ReadTables(this,Inp,(UnpackBlockHeader *)Tables,Tables_00);
  return bVar1;
}


