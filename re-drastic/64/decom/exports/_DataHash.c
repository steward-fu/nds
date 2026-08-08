/*
 * Ghidra decompilation
 *
 * Function : ~DataHash
 * Address  : 001c8c60
 * Program  : drastic64
 */


/* DataHash::~DataHash() */

void __thiscall DataHash::~DataHash(DataHash *this)

{
  DestroyThreadPool(*(ThreadPool **)(this + 0xc40));
  cleandata(this + 8,0xc38);
  cleandata(this + 4,4);
  return;
}


