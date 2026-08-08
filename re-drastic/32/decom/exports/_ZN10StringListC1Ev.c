/*
 * Ghidra decompilation
 *
 * Function : _ZN10StringListC1Ev
 * Address  : 080d189c
 * Program  : drastic
 */


/* DWARF original prototype: StringList * StringList(StringList * this) */

StringList * __thiscall StringList::StringList(StringList *this)

{
  (this->StringData).Buffer = (wchar_t *)0x0;
  (this->StringData).BufSize = 0;
  (this->StringData).AllocSize = 0;
  (this->StringData).MaxSize = 0;
  this->CurPos = 0;
  this->StringsCount = 0;
  this->SavePosNumber = 0;
  return this;
}


