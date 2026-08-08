/*
 * Ghidra decompilation
 *
 * Function : FUN_080b7308
 * Address  : 080b7308
 * Program  : drastic16
 */


void FUN_080b7308(void)

{
  DAT_081cd0ab = 1;
  FUN_080a6080(&DAT_080edf90);
  DAT_081d198c = DAT_081d198c + 1;
  if (1 < DAT_081d198c) {
                    /* WARNING: Subroutine does not return */
    exit(0xff);
  }
  return;
}


