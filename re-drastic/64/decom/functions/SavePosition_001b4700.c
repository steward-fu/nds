/*
 * Ghidra decompilation
 *
 * Function : SavePosition
 * Address  : 001b4700
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StringList::SavePosition() */

void StringList::SavePosition(void)

{
  long in_x0;
  ulong uVar1;
  
  uVar1 = *(ulong *)(in_x0 + 0xb0);
  if (uVar1 < 0x10) {
    *(undefined8 *)(in_x0 + (uVar1 + 6) * 8) = *(undefined8 *)(in_x0 + 0x20);
    *(ulong *)(in_x0 + 0xb0) = uVar1 + 1;
  }
  return;
}


