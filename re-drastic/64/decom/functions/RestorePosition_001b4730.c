/*
 * Ghidra decompilation
 *
 * Function : RestorePosition
 * Address  : 001b4730
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StringList::RestorePosition() */

void StringList::RestorePosition(void)

{
  long in_x0;
  long lVar1;
  
  lVar1 = *(long *)(in_x0 + 0xb0);
  if (lVar1 != 0) {
    *(long *)(in_x0 + 0xb0) = lVar1 + -1;
    *(undefined8 *)(in_x0 + 0x20) = *(undefined8 *)(in_x0 + (lVar1 + 5) * 8);
  }
  return;
}


