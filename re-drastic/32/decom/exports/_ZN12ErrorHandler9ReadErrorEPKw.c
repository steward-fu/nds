/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandler9ReadErrorEPKw
 * Address  : 080e2cd4
 * Program  : drastic
 */


/* ErrorHandler::ReadError(wchar_t const*) */

void ErrorHandler::ReadError(wchar_t *param_1)

{
                    /* WARNING: Subroutine does not return */
  Throw((ErrorHandler *)param_1,RARX_FATAL);
}


