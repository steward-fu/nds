/*
 * Ghidra decompilation
 *
 * Function : RARSetCallback
 * Address  : 080d0194
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable Data:DataSet *[r0:4] conflicts with parameter, skipped. */

void RARSetCallback(void *hArcData,UNRARCALLBACK_conflict Callback,long UserData)

{
  *(long *)((int)hArcData + 0x125ac) = UserData;
  *(UNRARCALLBACK_conflict *)((int)hArcData + 0x125b0) = Callback;
  return;
}


