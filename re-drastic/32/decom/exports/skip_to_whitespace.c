/*
 * Ghidra decompilation
 *
 * Function : skip_to_whitespace
 * Address  : 080a4ebc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * skip_to_whitespace(char *str)

{
  ushort **ppuVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  ppuVar1 = __ctype_b_loc();
  do {
    pbVar2 = (byte *)str;
    uVar3 = (uint)(byte)*str;
    uVar4 = (uint)(uVar3 != 0x3e && uVar3 != 0x2f);
    if (uVar3 == 0) {
      uVar4 = 0;
    }
    str = (char *)((byte *)str + 1);
  } while ((uVar4 & ((*ppuVar1)[uVar3] ^ 0x2000) >> 0xd) != 0);
  return (char *)pbVar2;
}


