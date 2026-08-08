/*
 * Ghidra decompilation
 *
 * Function : opendir
 * Address  : 08002f98
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pDVar1 = (DIR *)(*(code *)(undefined *)0x0)();
  return pDVar1;
}


