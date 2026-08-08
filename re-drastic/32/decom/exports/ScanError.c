/*
 * Ghidra decompilation
 *
 * Function : ScanError
 * Address  : 08108a7c
 * Program  : drastic
 */


/* DWARF original prototype: void ScanError(ScanTree * this, bool * Error) */

void __thiscall ScanTree::ScanError(ScanTree *this,bool *Error)

{
  bool bVar1;
  
  if (*Error == false) {
    return;
  }
  if (this->Cmd != (CommandData *)0x0) {
    bVar1 = CommandData::ExclCheck(this->Cmd,this->CurMask,false,true,true);
    if (bVar1) {
      *Error = false;
    }
    return;
  }
  return;
}


