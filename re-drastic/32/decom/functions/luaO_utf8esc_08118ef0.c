/*
 * Ghidra decompilation
 *
 * Function : luaO_utf8esc
 * Address  : 08118ef0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaO_utf8esc(char *buff,ulong x)

{
  byte bVar1;
  int n;
  uint mfb;
  byte *pbVar2;
  
  if (x < 0x80) {
    n = 1;
    buff[7] = (char)x;
  }
  else {
    pbVar2 = (byte *)(buff + 8);
    mfb = 0x3f;
    n = 1;
    do {
      bVar1 = (byte)x;
      mfb = mfb >> 1;
      x = x >> 6;
      n = n + 1;
      pbVar2 = pbVar2 + -1;
      *pbVar2 = bVar1 & 0x3f | 0x80;
    } while (mfb < x);
    buff[8 - n] = (byte)x | (byte)(~mfb << 1);
  }
  return n;
}


