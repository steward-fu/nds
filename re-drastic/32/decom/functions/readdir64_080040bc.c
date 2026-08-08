/*
 * Ghidra decompilation
 *
 * Function : readdir64
 * Address  : 080040bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = readdir64(__dirp);
  return pdVar1;
}


