/*
 * Ghidra decompilation
 *
 * Function : Init
 * Address  : 001e8040
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CommandData::Init() */

void CommandData::Init(void)

{
  long in_x0;
  void *__ptr;
  
  RAROptions::Init();
  *(undefined4 *)(in_x0 + 0x125f4) = 0;
  *(undefined4 *)(in_x0 + 0x14634) = 0;
  *(undefined2 *)(in_x0 + 0x125e8) = 0;
  *(undefined4 *)(in_x0 + 0x125ec) = 0;
  *(undefined *)(in_x0 + 0x125f0) = 0;
  StringList::Reset();
  StringList::Reset();
  StringList::Reset();
  StringList::Reset();
  StringList::Reset();
  __ptr = *(void **)(in_x0 + 0xc278);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    *(void **)(in_x0 + 0xc278) = (void *)0x0;
  }
  *(undefined8 *)(in_x0 + 0xc280) = 0;
  *(undefined8 *)(in_x0 + 0xc288) = 0;
  return;
}


