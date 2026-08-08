/*
 * Ghidra decompilation
 *
 * Function : RestorePosition
 * Address  : 080d203c
 * Program  : drastic
 */


/* DWARF original prototype: void RestorePosition(StringList * this) */

void __thiscall StringList::RestorePosition(StringList *this)

{
  size_t sVar1;
  
  sVar1 = this->SavePosNumber;
  if (sVar1 != 0) {
    this->CurPos = this->SaveCurPos[sVar1 - 1];
    this->SavePosNumber = sVar1 - 1;
  }
  return;
}


