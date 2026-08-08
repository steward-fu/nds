/*
 * Ghidra decompilation
 *
 * Function : _Z16CreateThreadPoolv
 * Address  : 001e77b0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CreateThreadPool() */

ThreadPool * CreateThreadPool(void)

{
  int iVar1;
  ThreadPool *this;
  
  iVar1 = GlobalPoolUseCount;
  GlobalPoolUseCount = GlobalPoolUseCount + 1;
  if (iVar1 != 0) {
    return GlobalPool;
  }
  this = (ThreadPool *)operator_new(0x418);
                    /* try { // try from 001e77f8 to 001e77fb has its CatchHandler @ 001e7814 */
  ThreadPool::ThreadPool(this,0x20);
  GlobalPool = this;
  return this;
}


