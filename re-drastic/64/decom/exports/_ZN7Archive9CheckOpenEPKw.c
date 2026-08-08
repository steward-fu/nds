/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive9CheckOpenEPKw
 * Address  : 001bb460
 * Program  : drastic64
 */


/* Archive::CheckOpen(wchar_t const*) */

void __thiscall Archive::CheckOpen(Archive *this,wchar_t *param_1)

{
  char cVar1;
  
  File::TOpen((File *)this,param_1);
  cVar1 = IsArchive(this,false);
  if (cVar1 != '\0') {
    return;
  }
  ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
  return;
}


