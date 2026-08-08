/*
 * Ghidra decompilation
 *
 * Function : _Z8strncpyzPcPKcm
 * Address  : 001b4d40
 * Program  : drastic64
 */


/* strncpyz(char*, char const*, unsigned long) */

char * strncpyz(char *param_1,char *param_2,ulong param_3)

{
  if (param_3 == 0) {
    return param_1;
  }
  strncpy(param_1,param_2,param_3 - 1);
  param_1[param_3 - 1] = '\0';
  return param_1;
}


