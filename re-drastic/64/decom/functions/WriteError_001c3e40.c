/*
 * Ghidra decompilation
 *
 * Function : WriteError
 * Address  : 001c3e40
 * Program  : drastic64
 */


/* ErrorHandler::WriteError(wchar_t const*, wchar_t const*) */

void ErrorHandler::WriteError(wchar_t *param_1,wchar_t *param_2)

{
                    /* WARNING: Subroutine does not return */
  Throw((ErrorHandler *)param_1,5);
}


