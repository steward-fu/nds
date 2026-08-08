/*
 * Ghidra decompilation
 *
 * Function : strncpyz
 * Address  : 080d2620
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * strncpyz(char *dest,char *src,size_t maxlen)

{
  if (maxlen != 0) {
    strncpy(dest,src,maxlen - 1);
    dest[maxlen - 1] = '\0';
  }
  return dest;
}


