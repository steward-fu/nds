/*
 * Ghidra decompilation
 *
 * Function : lchown
 * Address  : 0010daa0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lchown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = lchown(__file,__owner,__group);
  return iVar1;
}


