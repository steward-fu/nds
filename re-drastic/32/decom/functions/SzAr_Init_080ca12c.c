/*
 * Ghidra decompilation
 *
 * Function : SzAr_Init
 * Address  : 080ca12c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SzAr_Init(CSzAr *p)

{
  p->PackSizes = (UInt64 *)0x0;
  p->PackCRCsDefined = (Byte *)0x0;
  p->PackCRCs = (UInt32 *)0x0;
  p->Folders = (CSzFolder *)0x0;
  p->Files = (CSzFileItem *)0x0;
  p->NumPackStreams = 0;
  p->NumFolders = 0;
  p->NumFiles = 0;
  return;
}


