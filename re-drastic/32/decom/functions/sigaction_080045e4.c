/*
 * Ghidra decompilation
 *
 * Function : sigaction
 * Address  : 080045e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = sigaction(__sig,__act,__oact);
  return iVar1;
}


