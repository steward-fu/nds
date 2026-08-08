/*
 * Ghidra decompilation
 *
 * Function : _FINI_0
 * Address  : 08004bbc
 * Program  : drastic16
 */


void _FINI_0(void)

{
  if (DAT_081030c8 != '\0') {
    return;
  }
  FUN_08004b44();
  DAT_081030c8 = 1;
  return;
}


