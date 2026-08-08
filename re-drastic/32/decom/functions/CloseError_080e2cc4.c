/*
 * Ghidra decompilation
 *
 * Function : CloseError
 * Address  : 080e2cc4
 * Program  : drastic
 */


/* ErrorHandler::CloseError(wchar_t const*) */

void ErrorHandler::CloseError(wchar_t *param_1)

{
                    /* WARNING: Subroutine does not return */
  Throw((ErrorHandler *)param_1,RARX_FATAL);
}


