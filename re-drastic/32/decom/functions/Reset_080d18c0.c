/*
 * Ghidra decompilation
 *
 * Function : Reset
 * Address  : 080d18c0
 * Program  : drastic
 */


/* DWARF original prototype: void Reset(StringList * this) */

void __thiscall StringList::Reset(StringList *this)

{
  wchar_t *__ptr;
  
  __ptr = (this->StringData).Buffer;
  this->CurPos = 0;
  if (__ptr != (wchar_t *)0x0) {
    free(__ptr);
    (this->StringData).Buffer = (wchar_t *)0x0;
  }
  (this->StringData).BufSize = 0;
  (this->StringData).AllocSize = 0;
  this->StringsCount = 0;
  this->SavePosNumber = 0;
  return;
}


