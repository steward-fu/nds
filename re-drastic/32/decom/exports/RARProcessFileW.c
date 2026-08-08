/*
 * Ghidra decompilation
 *
 * Function : RARProcessFileW
 * Address  : 080d0dcc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int RARProcessFileW(void *hArcData,int Operation,wchar *DestPath,wchar *DestName)

{
  int iVar1;
  
  iVar1 = ProcessFile(hArcData,Operation,(char *)0x0,(char *)0x0,DestPath,DestName);
  return iVar1;
}


