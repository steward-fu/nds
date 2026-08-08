/*
 * Ghidra decompilation
 *
 * Function : _Z14DosSlashToUnixPcS_j
 * Address  : 080d4a8c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * DosSlashToUnix(char *SrcName,char *DestName,size_t MaxLength)

{
  size_t sVar1;
  char *pcVar2;
  char cVar3;
  char *s;
  
  if (DestName != (char *)0x0 && DestName != SrcName) {
    sVar1 = strlen(SrcName);
    if (MaxLength <= sVar1) {
      *DestName = '\0';
      return DestName;
    }
    memcpy(DestName,SrcName,sVar1 + 1);
  }
  cVar3 = *SrcName;
  if (cVar3 == '\0') {
    DestName = DestName;
    if (DestName == (char *)0x0) {
      DestName = SrcName;
    }
  }
  else {
    pcVar2 = SrcName;
    if (DestName == (char *)0x0) {
      do {
        if (cVar3 == '\\') {
          *pcVar2 = '/';
        }
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
        DestName = SrcName;
      } while (cVar3 != '\0');
    }
    else {
      do {
        if (cVar3 == '\\') {
          DestName[(int)pcVar2 - (int)SrcName] = '/';
        }
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
      } while (cVar3 != '\0');
    }
  }
  return DestName;
}


