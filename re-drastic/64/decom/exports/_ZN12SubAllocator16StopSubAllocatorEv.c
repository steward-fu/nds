/*
 * Ghidra decompilation
 *
 * Function : _ZN12SubAllocator16StopSubAllocatorEv
 * Address  : 001cc070
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SubAllocator::StopSubAllocator() */

void SubAllocator::StopSubAllocator(void)

{
  long *in_x0;
  
  if (*in_x0 == 0) {
    return;
  }
  *in_x0 = 0;
  free((void *)in_x0[0x16]);
  return;
}


