/*
 * Ghidra decompilation
 *
 * Function : SzFile_Init
 * Address  : 080ca10c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SzFile_Init(CSzFileItem *p)

{
  p->HasStream = '\x01';
  p->IsDir = '\0';
  p->IsAnti = '\0';
  p->CrcDefined = '\0';
  p->MTimeDefined = '\0';
  return;
}


