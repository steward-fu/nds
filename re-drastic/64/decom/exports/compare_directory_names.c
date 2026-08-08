/*
 * Ghidra decompilation
 *
 * Function : compare_directory_names
 * Address  : 001796e0
 * Program  : drastic64
 */


int compare_directory_names(char **param_1,char **param_2)

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


