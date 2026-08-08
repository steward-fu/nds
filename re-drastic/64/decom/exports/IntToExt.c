/*
 * Ghidra decompilation
 *
 * Function : IntToExt
 * Address  : 001b4790
 * Program  : drastic64
 */


/* IntToExt(char const*, char*, unsigned long) */

void IntToExt(char *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  
  if (param_3 == 0 || param_2 == param_1) {
    return;
  }
  pcVar1 = strncpy(param_2,param_1,param_3 - 1);
  pcVar1[param_3 - 1] = '\0';
  return;
}


