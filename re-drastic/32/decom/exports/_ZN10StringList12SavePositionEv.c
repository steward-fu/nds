/*
 * Ghidra decompilation
 *
 * Function : _ZN10StringList12SavePositionEv
 * Address  : 080d2018
 * Program  : drastic
 */


/* DWARF original prototype: void SavePosition(StringList * this) */

void __thiscall StringList::SavePosition(StringList *this)

{
  uint uVar1;
  
  uVar1 = this->SavePosNumber;
  if (uVar1 < 0x10) {
    this->SaveCurPos[uVar1] = this->CurPos;
    this->SavePosNumber = uVar1 + 1;
  }
  return;
}


