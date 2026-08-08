/*
 * Ghidra decompilation
 *
 * Function : FUN_001cc08c
 * Address  : 001cc08c
 * Program  : drastic64
 */


bool FUN_001cc08c(ulong *param_1,int param_2)

{
  void *pvVar1;
  ulong __size;
  
  if ((int)*param_1 != param_2 * 0x100000) {
    if (*param_1 != 0) {
      *param_1 = 0;
      free((void *)param_1[0x16]);
    }
    __size = (ulong)(((uint)(param_2 << 0x14) / 0xc) * 0x14 + 0x28);
    pvVar1 = malloc(__size);
    param_1[0x16] = (ulong)pvVar1;
    if (pvVar1 == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    else {
      *param_1 = (ulong)(uint)(param_2 << 0x14);
      param_1[0x41] = (long)pvVar1 + (__size - 0x14);
    }
    return pvVar1 != (void *)0x0;
  }
  return true;
}


