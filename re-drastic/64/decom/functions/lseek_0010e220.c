/*
 * Ghidra decompilation
 *
 * Function : lseek
 * Address  : 0010e220
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = lseek(__fd,__offset,__whence);
  return _Var1;
}


