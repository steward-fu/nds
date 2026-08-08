/*
 * Ghidra decompilation
 *
 * Function : Result
 * Address  : 080e9648
 * Program  : drastic
 */


/* DWARF original prototype: void Result(DataHash * this, HashValue * Result) */

void __thiscall DataHash::Result(DataHash *this,HashValue *Result)

{
  HASH_TYPE HVar1;
  
  HVar1 = this->HashType;
  Result->Type = HVar1;
  if (HVar1 == HASH_RAR14) {
    (Result->field_1).CRC32 = this->CurCRC32;
    HVar1 = this->HashType;
  }
  if (HVar1 == HASH_CRC32) {
    (Result->field_1).CRC32 = ~this->CurCRC32;
    HVar1 = this->HashType;
  }
  if (HVar1 == HASH_BLAKE2) {
    DataHash::Result(this,Result);
    return;
  }
  return;
}


