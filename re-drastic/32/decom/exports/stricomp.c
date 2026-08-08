/*
 * Ghidra decompilation
 *
 * Function : stricomp
 * Address  : 080d20d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int stricomp(char *s1,char *s2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  do {
    bVar1 = *s1;
    iVar2 = toupper((uint)bVar1);
    iVar3 = toupper((uint)(byte)*s2);
    if (iVar2 != iVar3) {
      if (s2 <= s1) {
        return 1;
      }
      return -1;
    }
    s2 = (char *)((byte *)s2 + 1);
    s1 = (char *)((byte *)s1 + 1);
  } while (bVar1 != 0);
  return 0;
}


