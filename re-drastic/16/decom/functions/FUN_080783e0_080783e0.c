/*
 * Ghidra decompilation
 *
 * Function : FUN_080783e0
 * Address  : 080783e0
 * Program  : drastic16
 */


void FUN_080783e0(int param_1)

{
  if (*(char *)(param_1 + 0x8002c) != '\x01') {
    return;
  }
  if (*(FILE **)(param_1 + 0x80028) == (FILE *)0x0) {
    return;
  }
  fclose(*(FILE **)(param_1 + 0x80028));
  return;
}


