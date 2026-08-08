/*
 * Ghidra decompilation
 *
 * Function : FUN_001e17ec
 * Address  : 001e17ec
 * Program  : drastic64
 */


void FUN_001e17ec(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  void **ppvVar3;
  long lVar4;
  
  Unpack::InitFilters30();
  if (*(void **)(param_1 + 0x4b90) != (void *)0x0) {
    free(*(void **)(param_1 + 0x4b90));
  }
  DestroyThreadPool(*(ThreadPool **)(param_1 + 0x20));
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x38));
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + -8) * 0x4af8;
    lVar4 = lVar2 + lVar1;
    if (lVar2 != lVar4) {
      lVar2 = lVar4 + -0x4af8;
      __ptr = *(void **)(lVar4 + -0x18);
      if (__ptr == (void *)0x0) goto LAB_001e1880;
      while( true ) {
        free(__ptr);
        BitInput::~BitInput((BitInput *)(lVar2 + 8));
        lVar1 = lVar2;
        if (lVar2 == *(long *)(param_1 + 0x28)) break;
        while( true ) {
          lVar2 = lVar1 + -0x4af8;
          __ptr = *(void **)(lVar1 + -0x18);
          lVar4 = lVar1;
          if (__ptr != (void *)0x0) break;
LAB_001e1880:
          BitInput::~BitInput((BitInput *)(lVar2 + 8));
          lVar1 = lVar2;
          if (*(long *)(param_1 + 0x28) == lVar2) goto LAB_001e1894;
        }
      }
LAB_001e1894:
      lVar1 = *(long *)(lVar4 + -0x4b00) * 0x4af8;
    }
    operator_delete__((void *)(lVar2 + -8),lVar1 + 8);
  }
  if (*(void **)(param_1 + 0xe950) != (void *)0x0) {
    free(*(void **)(param_1 + 0xe950));
  }
  if (*(void **)(param_1 + 0xe930) != (void *)0x0) {
    free(*(void **)(param_1 + 0xe930));
  }
  if (*(void **)(param_1 + 0xe910) != (void *)0x0) {
    free(*(void **)(param_1 + 0xe910));
  }
  BitInput::~BitInput((BitInput *)(param_1 + 0xe8f8));
  RarVM::~RarVM((RarVM *)(param_1 + 0xe8b0));
  if (*(long *)(param_1 + 0xe4d8) != 0) {
    free(*(void **)(param_1 + 0xe588));
  }
  ppvVar3 = (void **)(param_1 + 0x4b98);
  do {
    if (*ppvVar3 != (void *)0x0) {
      free(*ppvVar3);
    }
    ppvVar3 = ppvVar3 + 1;
  } while (ppvVar3 != (void **)(param_1 + 0x4c98));
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    free(*(void **)(param_1 + 0x80));
  }
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    free(*(void **)(param_1 + 0x60));
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    free(*(void **)(param_1 + 0x40));
  }
  BitInput::~BitInput((BitInput *)(param_1 + 8));
  return;
}


