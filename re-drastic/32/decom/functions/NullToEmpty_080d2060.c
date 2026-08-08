/*
 * Ghidra decompilation
 *
 * Function : NullToEmpty
 * Address  : 080d2060
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * NullToEmpty(char *Str)

{
  if (Str == (char *)0x0) {
    Str = "";
  }
  return Str;
}


