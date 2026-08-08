/*
 * Ghidra decompilation
 *
 * Function : RARProcessFile
 * Address  : 080d0dac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int RARProcessFile(void *hArcData,int Operation,char *DestPath,char *DestName)

{
  int iVar1;
  
  iVar1 = ProcessFile(hArcData,Operation,DestPath,DestName,(wchar *)0x0,(wchar *)0x0);
  return iVar1;
}


