/*
 * Ghidra decompilation
 *
 * Function : sigaltstack
 * Address  : 08004044
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaltstack(sigaltstack *__ss,sigaltstack *__oss)

{
  int iVar1;
  
  iVar1 = sigaltstack(__ss,__oss);
  return iVar1;
}


