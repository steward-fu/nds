/*
 * Ghidra decompilation
 *
 * Function : strncatz
 * Address  : 001b4dd0
 * Program  : drastic64
 */


/* strncatz(char*, char const*, unsigned long) */

char * strncatz(char *param_1,char *param_2,ulong param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if (param_3 <= sVar1 + 1) {
    return param_1;
  }
  strncat(param_1,param_2,(param_3 - 1) - sVar1);
  return param_1;
}


