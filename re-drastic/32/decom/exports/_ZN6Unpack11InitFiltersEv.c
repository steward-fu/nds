/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack11InitFiltersEv
 * Address  : 080f5c08
 * Program  : drastic
 */


/* DWARF original prototype: void InitFilters(Unpack * this) */

void __thiscall Unpack::InitFilters(Unpack *this)

{
  UnpackFilter *__ptr;
  
  __ptr = (this->Filters).Buffer;
  if (__ptr != (UnpackFilter *)0x0) {
    free(__ptr);
    (this->Filters).Buffer = (UnpackFilter *)0x0;
  }
  (this->Filters).BufSize = 0;
  (this->Filters).AllocSize = 0;
  return;
}


