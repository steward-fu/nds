/*
 * Ghidra decompilation
 *
 * Function : _ZN9QuickOpen4TellEPx
 * Address  : 08108ce0
 * Program  : drastic
 */


/* DWARF original prototype: bool Tell(QuickOpen * this, int64 * Pos) */

bool __thiscall QuickOpen::Tell(QuickOpen *this,int64 *Pos)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = this->Loaded;
  if (bVar1 != false) {
    uVar2 = *(undefined4 *)((int)&this->SeekPos + 4);
    *(undefined4 *)Pos = *(undefined4 *)&this->SeekPos;
    *(undefined4 *)((int)Pos + 4) = uVar2;
  }
  return bVar1;
}


