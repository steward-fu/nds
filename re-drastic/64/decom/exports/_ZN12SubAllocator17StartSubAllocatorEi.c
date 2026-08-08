/*
 * Ghidra decompilation
 *
 * Function : _ZN12SubAllocator17StartSubAllocatorEi
 * Address  : 001cc090
 * Program  : drastic64
 */


/* SubAllocator::StartSubAllocator(int) */

bool __thiscall SubAllocator::StartSubAllocator(SubAllocator *this,int param_1)

{
  void *pvVar1;
  ulong __size;
  
  if ((int)*(long *)this != param_1 * 0x100000) {
    if (*(long *)this != 0) {
      *(undefined8 *)this = 0;
      free(*(void **)(this + 0xb0));
    }
    __size = (ulong)(((uint)(param_1 << 0x14) / 0xc) * 0x14 + 0x28);
    pvVar1 = malloc(__size);
    *(void **)(this + 0xb0) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    else {
      *(ulong *)this = (ulong)(uint)(param_1 << 0x14);
      *(ulong *)(this + 0x208) = (long)pvVar1 + (__size - 0x14);
    }
    return pvVar1 != (void *)0x0;
  }
  return true;
}


