/*
 * Ghidra decompilation
 *
 * Function : Exit
 * Address  : 001c3fe0
 * Program  : drastic64
 */


/* ErrorHandler::Exit(RAR_EXIT) */

void __thiscall ErrorHandler::Exit(ErrorHandler *this,RAR_EXIT param_1)

{
  if ((param_1 == 0xff) && (this[8] == (ErrorHandler)0x0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  Throw(this,param_1);
}


