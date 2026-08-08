/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandler10CloseErrorEPKw
 * Address  : 001c3e20
 * Program  : drastic64
 */


/* ErrorHandler::CloseError(wchar_t const*) */

void ErrorHandler::CloseError(wchar_t *param_1)

{
                    /* WARNING: Subroutine does not return */
  Throw((ErrorHandler *)param_1,2);
}


