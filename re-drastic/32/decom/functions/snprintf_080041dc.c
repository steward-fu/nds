/*
 * Ghidra decompilation
 *
 * Function : snprintf
 * Address  : 080041dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}


