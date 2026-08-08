/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_Init
 * Address  : 080cde24
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void LzmaDec_Init(CLzmaDec *p)

{
  p->dicPos = 0;
  p->processedPos = 0;
  p->checkDicSize = 0;
  p->remainLen = 0;
  p->needFlush = 1;
  p->needInitState = 1;
  p->tempBufSize = 0;
  return;
}


