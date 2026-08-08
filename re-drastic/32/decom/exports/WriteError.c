/*
 * Ghidra decompilation
 *
 * Function : WriteError
 * Address  : 080e2ca4
 * Program  : drastic
 */


/* DWARF original prototype: void WriteError(ErrorHandler * this, wchar * ArcName, wchar * FileName)
    */

void __thiscall ErrorHandler::WriteError(ErrorHandler *this,wchar *ArcName,wchar *FileName)

{
                    /* WARNING: Subroutine does not return */
  Throw(this,RARX_WRITE);
}


