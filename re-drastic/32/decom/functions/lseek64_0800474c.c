/*
 * Ghidra decompilation
 *
 * Function : lseek64
 * Address  : 0800474c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  __off64_t _Var1;
  
  _Var1 = lseek64(__fd,__offset,__whence);
  return _Var1;
}


