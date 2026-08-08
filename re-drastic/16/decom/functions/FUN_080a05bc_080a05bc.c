/*
 * Ghidra decompilation
 *
 * Function : FUN_080a05bc
 * Address  : 080a05bc
 * Program  : drastic16
 */


char * FUN_080a05bc(char *param_1,char *param_2,int param_3)

{
  if (param_3 != 0) {
    strncpy(param_1,param_2,param_3 - 1);
    param_1[param_3 + -1] = '\0';
  }
  return param_1;
}


