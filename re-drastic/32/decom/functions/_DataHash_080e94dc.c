/*
 * Ghidra decompilation
 *
 * Function : ~DataHash
 * Address  : 080e94dc
 * Program  : drastic
 */


/* DWARF original prototype: void * ~DataHash(DataHash * this, int __in_chrg) */

void * __thiscall DataHash::~DataHash(DataHash *this,int __in_chrg)

{
  DestroyThreadPool(this->ThPool);
  cleandata(&this->blake2ctx,0xb54);
  cleandata(&this->CurCRC32,4);
  return this;
}


