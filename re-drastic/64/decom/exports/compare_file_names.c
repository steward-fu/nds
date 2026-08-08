/*
 * Ghidra decompilation
 *
 * Function : compare_file_names
 * Address  : 00179720
 * Program  : drastic64
 */


int compare_file_names(char **param_1,char **param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  
  __s1 = param_1[1];
  __s2 = param_2[1];
  if (__s1 == (char *)0x0 && __s2 != (char *)0x0) {
    return -1;
  }
  if (__s2 == (char *)0x0 && __s1 != (char *)0x0) {
    return 1;
  }
  if (__s1 == (char *)0x0) {
    __s1 = *param_1;
  }
  if (__s2 == (char *)0x0) {
    iVar1 = strcasecmp(__s1,*param_2);
    return iVar1;
  }
  iVar1 = strcasecmp(__s1,__s2);
  return iVar1;
}


