/*
 * Ghidra decompilation
 *
 * Function : strncatz
 * Address  : 080d26a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * strncatz(char *dest,char *src,size_t maxlen)

{
  size_t sVar1;
  size_t Length;
  
  sVar1 = strlen(dest);
  if (sVar1 + 1 < maxlen) {
    strncat(dest,src,(maxlen - 1) - sVar1);
  }
  return dest;
}


