/*
 * Ghidra decompilation
 *
 * Function : RARSetProcessDataProc
 * Address  : 080d01a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable Data:DataSet *[r0:4] conflicts with parameter, skipped. */

void RARSetProcessDataProc(void *hArcData,PROCESSDATAPROC ProcessDataProc)

{
  *(PROCESSDATAPROC *)((int)hArcData + 0x125b8) = ProcessDataProc;
  return;
}


