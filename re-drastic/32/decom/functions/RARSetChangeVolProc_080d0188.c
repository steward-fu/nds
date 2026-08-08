/*
 * Ghidra decompilation
 *
 * Function : RARSetChangeVolProc
 * Address  : 080d0188
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable Data:DataSet *[r0:4] conflicts with parameter, skipped. */

void RARSetChangeVolProc(void *hArcData,CHANGEVOLPROC ChangeVolProc)

{
  *(CHANGEVOLPROC *)((int)hArcData + 0x125b4) = ChangeVolProc;
  return;
}


