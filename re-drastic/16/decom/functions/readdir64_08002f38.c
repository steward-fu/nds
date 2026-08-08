/*
 * Ghidra decompilation
 *
 * Function : readdir64
 * Address  : 08002f38
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pdVar1 = (dirent64 *)(*(code *)(undefined *)0x0)();
  return pdVar1;
}


