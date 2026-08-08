/*
 * Ghidra decompilation
 *
 * Function : DestroyThreadPool
 * Address  : 001e79a0
 * Program  : drastic64
 */


/* DestroyThreadPool(ThreadPool*) */

void DestroyThreadPool(ThreadPool *param_1)

{
  ThreadPool *pTVar1;
  
  pTVar1 = GlobalPool;
  if (param_1 == (ThreadPool *)0x0) {
    return;
  }
  if (((GlobalPool == param_1) && (GlobalPoolUseCount != 0)) &&
     (GlobalPoolUseCount = GlobalPoolUseCount + -1, GlobalPoolUseCount == 0)) {
    ThreadPool::~ThreadPool(param_1);
    operator_delete(pTVar1,0x418);
    return;
  }
  return;
}


