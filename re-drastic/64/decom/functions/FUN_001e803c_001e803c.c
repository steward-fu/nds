/*
 * Ghidra decompilation
 *
 * Function : FUN_001e803c
 * Address  : 001e803c
 * Program  : drastic64
 */


void FUN_001e803c(long param_1)

{
  void *__ptr;
  
  RAROptions::Init();
  *(undefined4 *)(param_1 + 0x125f4) = 0;
  *(undefined4 *)(param_1 + 0x14634) = 0;
  *(undefined2 *)(param_1 + 0x125e8) = 0;
  *(undefined4 *)(param_1 + 0x125ec) = 0;
  *(undefined *)(param_1 + 0x125f0) = 0;
  StringList::Reset();
  StringList::Reset();
  StringList::Reset();
  StringList::Reset();
  StringList::Reset();
  __ptr = *(void **)(param_1 + 0xc278);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    *(void **)(param_1 + 0xc278) = (void *)0x0;
  }
  *(undefined8 *)(param_1 + 0xc280) = 0;
  *(undefined8 *)(param_1 + 0xc288) = 0;
  return;
}


