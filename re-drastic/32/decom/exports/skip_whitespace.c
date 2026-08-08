/*
 * Ghidra decompilation
 *
 * Function : skip_whitespace
 * Address  : 080a4e80
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * skip_whitespace(char *str)

{
  byte bVar1;
  ushort **ppuVar2;
  byte *pbVar3;
  
  ppuVar2 = __ctype_b_loc();
  do {
    pbVar3 = (byte *)str;
    bVar1 = *str;
    str = (char *)((byte *)str + 1);
  } while (((*ppuVar2)[bVar1] & 0x2000) != 0);
  return (char *)pbVar3;
}


