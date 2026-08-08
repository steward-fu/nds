/*
 * Ghidra decompilation
 *
 * Function : SzFolder_Init
 * Address  : 080c9e6c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SzFolder_Init(CSzFolder *p)

{
  p->Coders = (CSzCoderInfo *)0x0;
  p->BindPairs = (CSzBindPair *)0x0;
  p->PackStreams = (UInt32 *)0x0;
  p->UnpackSizes = (UInt64 *)0x0;
  p->NumCoders = 0;
  p->NumBindPairs = 0;
  p->NumPackStreams = 0;
  p->UnpackCRCDefined = 0;
  p->UnpackCRC = 0;
  p->NumUnpackStreams = 0;
  return;
}


