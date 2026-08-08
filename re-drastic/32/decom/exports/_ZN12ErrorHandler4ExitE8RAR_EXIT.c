/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandler4ExitE8RAR_EXIT
 * Address  : 080e2ce4
 * Program  : drastic
 */


/* ErrorHandler::Exit(RAR_EXIT) */

void __thiscall ErrorHandler::Exit(ErrorHandler *this,RAR_EXIT param_1)

{
  if ((param_1 == RARX_USERBREAK) && (this->EnableBreak == false)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  Throw(this,param_1);
}


