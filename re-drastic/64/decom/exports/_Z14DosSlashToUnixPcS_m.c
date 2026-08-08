/*
 * Ghidra decompilation
 *
 * Function : _Z14DosSlashToUnixPcS_m
 * Address  : 001b6c80
 * Program  : drastic64
 */


/* DosSlashToUnix(char*, char*, unsigned long) */

char * DosSlashToUnix(char *param_1,char *param_2,ulong param_3)

{
  size_t sVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  if (param_2 != (char *)0x0 && param_2 != param_1) {
    sVar1 = strlen(param_1);
    if (sVar1 < param_3) {
      memcpy(param_2,param_1,sVar1 + 1);
      cVar2 = *param_1;
      goto joined_r0x001b6d18;
    }
    *param_2 = '\0';
    return param_2;
  }
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    if (param_2 != (char *)0x0) {
      return param_2;
    }
  }
  else {
    if (param_2 != (char *)0x0) {
      do {
        while (cVar2 != '\\') {
          cVar2 = pcVar3[1];
          pcVar3 = pcVar3 + 1;
          if (cVar2 == '\0') {
            return param_2;
          }
        }
        param_2[(long)pcVar3 - (long)param_1] = '/';
        pcVar3 = pcVar3 + 1;
        cVar2 = *pcVar3;
joined_r0x001b6d18:
      } while (cVar2 != '\0');
      return param_2;
    }
    do {
      while (cVar2 == '\\') {
        *pcVar3 = '/';
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
        if (cVar2 == '\0') {
          return param_1;
        }
      }
      pcVar3 = pcVar3 + 1;
      cVar2 = *pcVar3;
    } while (cVar2 != '\0');
  }
  return param_1;
}


