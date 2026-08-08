/*
 * Ghidra decompilation
 *
 * Function : lseek
 * Address  : 08004578
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = lseek(__fd,__offset,__whence);
  return _Var1;
}


