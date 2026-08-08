/*
 * Ghidra decompilation
 *
 * Function : PoolThread
 * Address  : 0810353c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * ThreadPool::PoolThread(void *Param)

{
  PoolThreadLoop((ThreadPool *)Param);
  return (void *)0x0;
}


