/*
 * Ghidra decompilation
 *
 * Function : _Z8LowAsciiPKc
 * Address  : 080d2594
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool LowAscii(char *Str)

{
  byte bVar1;
  
  bVar1 = *Str;
  while( true ) {
    if (bVar1 == 0) {
      return true;
    }
    if (0x5f < bVar1 - 0x20) break;
    Str = (char *)((byte *)Str + 1);
    bVar1 = *Str;
  }
  return false;
}


