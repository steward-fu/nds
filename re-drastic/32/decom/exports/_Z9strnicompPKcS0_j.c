/*
 * Ghidra decompilation
 *
 * Function : _Z9strnicompPKcS0_j
 * Address  : 080d2150
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int strnicomp(char *s1,char *s2,size_t n)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (n == 0) {
    return 0;
  }
  pbVar4 = (byte *)s1;
  while( true ) {
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    iVar2 = toupper((uint)bVar1);
    iVar3 = toupper((uint)(byte)*s2);
    if (iVar2 != iVar3) {
      if (s2 <= pbVar4) {
        return 1;
      }
      return -1;
    }
    if (bVar1 == 0) break;
    pbVar4 = pbVar5;
    s2 = (char *)((byte *)s2 + 1);
    if ((byte *)(s1 + n) == pbVar5) {
      return 0;
    }
  }
  return 0;
}


