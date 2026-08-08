/*
 * Ghidra decompilation
 *
 * Function : ReadError
 * Address  : 0010e3b0
 * Program  : drastic64
 */


/* ErrorHandler::ReadError(wchar_t const*) */

void ErrorHandler::ReadError(wchar_t *param_1)

{
                    /* WARNING: Subroutine does not return */
  Throw((ErrorHandler *)param_1,2);
}


