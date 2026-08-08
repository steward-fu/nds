/*
 * Ghidra decompilation
 *
 * Function : Reset
 * Address  : 08102df8
 * Program  : drastic
 */


/* DWARF original prototype: void Reset(MainHeader * this) */

void __thiscall MainHeader::Reset(MainHeader *this)

{
  this->HighPosAV = 0;
  this->PosAV = 0;
  this->CommentInHeader = false;
  this->PackComment = false;
  this->Locator = false;
  this->QOpenOffset = 0;
  this->QOpenMaxSize = 0;
  this->RROffset = 0;
  this->RRMaxSize = 0;
  return;
}


