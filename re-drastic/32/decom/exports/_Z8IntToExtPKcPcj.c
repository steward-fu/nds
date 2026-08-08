/*
 * Ghidra decompilation
 *
 * Function : _Z8IntToExtPKcPcj
 * Address  : 080d2088
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void IntToExt(char *Src,char *Dest,size_t DestSize)

{
  if (Dest == Src || DestSize == 0) {
    return;
  }
  strncpy(Dest,Src,DestSize - 1);
  Dest[DestSize - 1] = '\0';
  return;
}


