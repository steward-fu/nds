/*
 * Ghidra decompilation
 *
 * Function : unzip_in_func
 * Address  : 001a55c0
 * Program  : drastic64
 */


void unzip_in_func(long param_1,void **param_2)

{
  int __fd;
  void *__buf;
  
  __fd = *(int *)(param_1 + 0x10);
  __buf = *(void **)(param_1 + 8);
  *param_2 = __buf;
  read(__fd,__buf,0x200);
  return;
}


