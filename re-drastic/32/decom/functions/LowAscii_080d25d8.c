/*
 * Ghidra decompilation
 *
 * Function : LowAscii
 * Address  : 080d25d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool LowAscii(wchar *Str)

{
  wchar wVar1;
  
  wVar1 = *Str;
  while( true ) {
    if (wVar1 == 0) {
      return true;
    }
    if (0x5f < wVar1 - 0x20) break;
    Str = Str + 1;
    wVar1 = *Str;
  }
  return false;
}


