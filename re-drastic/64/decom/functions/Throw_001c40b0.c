/*
 * Ghidra decompilation
 *
 * Function : Throw
 * Address  : 001c40b0
 * Program  : drastic64
 */


/* ErrorHandler::Throw(RAR_EXIT) */

void __thiscall ErrorHandler::Throw(ErrorHandler *this,RAR_EXIT param_1)

{
  if ((param_1 == 0xff) && (this[8] == (ErrorHandler)0x0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  Throw(this,param_1);
}


