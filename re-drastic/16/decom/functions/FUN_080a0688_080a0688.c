/*
 * Ghidra decompilation
 *
 * Function : FUN_080a0688
 * Address  : 080a0688
 * Program  : drastic16
 */


char * FUN_080a0688(char *param_1,char *param_2,uint param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if (sVar1 + 1 < param_3) {
    strncat(param_1,param_2,(param_3 - sVar1) - 1);
  }
  return param_1;
}


