/*
 * Ghidra decompilation
 *
 * Function : write
 * Address  : 08004740
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}


