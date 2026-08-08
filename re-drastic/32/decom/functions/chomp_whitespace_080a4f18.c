/*
 * Ghidra decompilation
 *
 * Function : chomp_whitespace
 * Address  : 080a4f18
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void chomp_whitespace(char *str)

{
  size_t sVar1;
  ushort **ppuVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  sVar1 = strlen(str);
  if (-1 < (int)(sVar1 - 1)) {
    ppuVar2 = __ctype_b_loc();
    pbVar4 = (byte *)(str + (sVar1 - 1));
    do {
      if (((*ppuVar2)[*pbVar4] & 0x2000) == 0) {
        return;
      }
      pbVar3 = pbVar4 + -1;
      *pbVar4 = 0;
      pbVar4 = pbVar3;
    } while (-1 < (int)pbVar3 - (int)str);
  }
  return;
}


