/*
 * Ghidra decompilation
 *
 * Function : read
 * Address  : 0010d800
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}


