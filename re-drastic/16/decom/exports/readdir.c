/*
 * Ghidra decompilation
 *
 * Function : readdir
 * Address  : 08002d88
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pdVar1 = (dirent *)(*(code *)(undefined *)0x0)();
  return pdVar1;
}


