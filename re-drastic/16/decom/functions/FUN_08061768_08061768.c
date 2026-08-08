/*
 * Ghidra decompilation
 *
 * Function : FUN_08061768
 * Address  : 08061768
 * Program  : drastic16
 */


int FUN_08061768(char **param_1,char **param_2)

{
  int iVar1;
  
  if (**param_2 == '.') {
    return 1;
  }
  if (**param_1 != '.') {
    iVar1 = strcasecmp(*param_1,*param_2);
    return iVar1;
  }
  return -1;
}


