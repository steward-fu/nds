/*
 * Ghidra decompilation
 *
 * Function : readdir
 * Address  : 0010db20
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = readdir(__dirp);
  return pdVar1;
}


