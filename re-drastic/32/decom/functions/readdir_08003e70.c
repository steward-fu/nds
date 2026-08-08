/*
 * Ghidra decompilation
 *
 * Function : readdir
 * Address  : 08003e70
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = readdir(__dirp);
  return pdVar1;
}


