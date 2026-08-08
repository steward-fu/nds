/*
 * Ghidra decompilation
 *
 * Function : WOpen
 * Address  : 001b7a70
 * Program  : drastic64
 */


/* File::WOpen(wchar_t const*) */

uint __thiscall File::WOpen(File *this,wchar_t *param_1)

{
  uint uVar1;
  
  uVar1 = Open(this,param_1,0);
  if ((uVar1 & 0xff) == 0) {
    ErrorHandler::OpenErrorMsg(&ErrHandler);
  }
  return uVar1;
}


