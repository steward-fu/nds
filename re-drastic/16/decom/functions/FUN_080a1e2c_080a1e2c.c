/*
 * Ghidra decompilation
 *
 * Function : FUN_080a1e2c
 * Address  : 080a1e2c
 * Program  : drastic16
 */


char * FUN_080a1e2c(char *param_1,char *param_2,uint param_3)

{
  size_t sVar1;
  char *local_c;
  
  local_c = param_1;
  if ((param_2 != (char *)0x0) && (param_2 != param_1)) {
    sVar1 = strlen(param_1);
    if (param_3 <= sVar1) {
      *param_2 = '\0';
      return param_2;
    }
    strcpy(param_2,param_1);
  }
  for (; *local_c != '\0'; local_c = local_c + 1) {
    if (*local_c == '/') {
      if (param_2 == (char *)0x0) {
        *local_c = '\\';
      }
      else {
        param_2[(int)local_c - (int)param_1] = '\\';
      }
    }
  }
  if (param_2 == (char *)0x0) {
    param_2 = param_1;
  }
  return param_2;
}


