/*
 * Ghidra decompilation
 *
 * Function : CreateThreadPool
 * Address  : 08103220
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

ThreadPool * CreateThreadPool(void)

{
  ThreadPool *this;
  bool bVar1;
  
  bVar1 = GlobalPoolUseCount == 0;
  GlobalPoolUseCount = GlobalPoolUseCount + 1;
  if (bVar1) {
    this = (ThreadPool *)operator_new(0x248);
    ThreadPool::ThreadPool(this,0x20);
    GlobalPool = this;
  }
  return GlobalPool;
}


