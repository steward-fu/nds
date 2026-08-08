/*
 * Ghidra decompilation
 *
 * Function : Wait
 * Address  : 080dd750
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void Wait(void)

{
  if (!ErrHandler.UserBreak) {
    return;
  }
  ErrorHandler::Exit(&ErrHandler,RARX_USERBREAK);
  return;
}


