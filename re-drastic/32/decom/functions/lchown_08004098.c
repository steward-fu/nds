/*
 * Ghidra decompilation
 *
 * Function : lchown
 * Address  : 08004098
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lchown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = lchown(__file,__owner,__group);
  return iVar1;
}


