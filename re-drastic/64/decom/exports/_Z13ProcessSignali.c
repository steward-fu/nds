/*
 * Ghidra decompilation
 *
 * Function : _Z13ProcessSignali
 * Address  : 001c3d80
 * Program  : drastic64
 */


/* ProcessSignal(int) */

void ProcessSignal(int param_1)

{
  ProcessSignal(int)::BreakCount = ProcessSignal(int)::BreakCount + 1;
  DAT_004f446b = 1;
  if (ProcessSignal(int)::BreakCount < 2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(0xff);
}


