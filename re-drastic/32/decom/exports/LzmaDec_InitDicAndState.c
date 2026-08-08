/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_InitDicAndState
 * Address  : 080cddec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void LzmaDec_InitDicAndState(CLzmaDec *p,Bool initDic,Bool initState)

{
  p->remainLen = 0;
  p->needFlush = 1;
  p->tempBufSize = 0;
  if (initDic != 0) {
    p->processedPos = 0;
    p->checkDicSize = 0;
    p->needInitState = 1;
  }
  if (initState != 0) {
    p->needInitState = (uint)(initState != 0);
  }
  return;
}


