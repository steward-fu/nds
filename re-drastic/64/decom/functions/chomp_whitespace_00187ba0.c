/*
 * Ghidra decompilation
 *
 * Function : chomp_whitespace
 * Address  : 00187ba0
 * Program  : drastic64
 */


void chomp_whitespace(char *param_1)

{
  int iVar1;
  size_t sVar2;
  ushort **ppuVar3;
  long lVar4;
  
  sVar2 = strlen(param_1);
  iVar1 = (int)sVar2 + -1;
  if (-1 < iVar1) {
    ppuVar3 = __ctype_b_loc();
    lVar4 = (long)iVar1;
    do {
      if (((*ppuVar3)[(byte)param_1[lVar4]] >> 0xd & 1) == 0) {
        return;
      }
      param_1[lVar4] = '\0';
      lVar4 = lVar4 + -1;
    } while (-1 < (int)lVar4);
  }
  return;
}


