/*
 * Ghidra decompilation
 *
 * Function : GetCRC32
 * Address  : 080e969c
 * Program  : drastic
 */


/* DWARF original prototype: uint GetCRC32(DataHash * this) */

uint __thiscall DataHash::GetCRC32(DataHash *this)

{
  uint uVar1;
  
  if (this->HashType == HASH_CRC32) {
    uVar1 = ~this->CurCRC32;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


