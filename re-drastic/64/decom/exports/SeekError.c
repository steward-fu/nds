/*
 * Ghidra decompilation
 *
 * Function : SeekError
 * Address  : 0010e3c0
 * Program  : drastic64
 */


/* ErrorHandler::SeekError(wchar_t const*) */

void ErrorHandler::SeekError(wchar_t *param_1)

{
                    /* WARNING: Subroutine does not return */
  Throw((ErrorHandler *)param_1,2);
}


