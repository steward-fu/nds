/*
 * Ghidra decompilation
 *
 * Function : Init
 * Address  : 080e9518
 * Program  : drastic
 */


/* DWARF original prototype: void Init(DataHash * this, HASH_TYPE Type, uint MaxThreads) */

void __thiscall DataHash::Init(DataHash *this,HASH_TYPE Type,uint MaxThreads)

{
  uint in_r3;
  
  if (Type == HASH_RAR14) {
    in_r3 = 0;
  }
  this->HashType = Type;
  if (Type == HASH_RAR14) {
    this->CurCRC32 = in_r3;
  }
  else if (Type == HASH_CRC32) {
    this->CurCRC32 = 0xffffffff;
  }
  else if (Type == HASH_BLAKE2) {
    blake2sp_init(&this->blake2ctx);
  }
  if (7 < MaxThreads) {
    MaxThreads = 8;
  }
  this->MaxThreads = MaxThreads;
  return;
}


