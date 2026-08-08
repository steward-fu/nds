/*
 * Ghidra decompilation
 *
 * Function : GetCRC50
 * Address  : 080e1314
 * Program  : drastic
 */


/* DWARF original prototype: uint GetCRC50(RawRead * this) */

uint __thiscall RawRead::GetCRC50(RawRead *this)

{
  uint uVar1;
  
  if (this->DataSize < 5) {
    return 0xffffffff;
  }
  uVar1 = CRC32(0xffffffff,(this->Data).Buffer + 4,this->DataSize - 4);
  return ~uVar1;
}


