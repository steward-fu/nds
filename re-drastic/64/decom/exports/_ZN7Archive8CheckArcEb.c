/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive8CheckArcEb
 * Address  : 001bb430
 * Program  : drastic64
 */


/* Archive::CheckArc(bool) */

void __thiscall Archive::CheckArc(Archive *this,bool param_1)

{
  char cVar1;
  
  cVar1 = IsArchive(this,param_1);
  if (cVar1 != '\0') {
    return;
  }
  ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
  return;
}


