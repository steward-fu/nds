/*
 * Ghidra decompilation
 *
 * Function : _ZN10StringList5ResetEv
 * Address  : 001b4000
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StringList::Reset() */

void StringList::Reset(void)

{
  void **in_x0;
  
  in_x0[4] = (void *)0x0;
  if (*in_x0 != (void *)0x0) {
    free(*in_x0);
    *in_x0 = (void *)0x0;
  }
  in_x0[1] = (void *)0x0;
  in_x0[2] = (void *)0x0;
  *(undefined4 *)(in_x0 + 5) = 0;
  in_x0[0x16] = (void *)0x0;
  return;
}


