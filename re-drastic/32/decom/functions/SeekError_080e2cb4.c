/*
 * Ghidra decompilation
 *
 * Function : SeekError
 * Address  : 080e2cb4
 * Program  : drastic
 */


/* DWARF original prototype: void SeekError(ErrorHandler * this, wchar * FileName) */

void __thiscall ErrorHandler::SeekError(ErrorHandler *this,wchar *FileName)

{
                    /* WARNING: Subroutine does not return */
  Throw(this,RARX_FATAL);
}


