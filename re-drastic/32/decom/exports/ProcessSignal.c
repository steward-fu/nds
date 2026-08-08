/*
 * Ghidra decompilation
 *
 * Function : ProcessSignal
 * Address  : 080e2a80
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void ProcessSignal(int SigType)

{
  ErrHandler.UserBreak = true;
  ProcessSignal::BreakCount = ProcessSignal::BreakCount + 1;
  if (ProcessSignal::BreakCount < 2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(0xff);
}


