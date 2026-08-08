/*
 * Ghidra decompilation
 *
 * Function : compare_file_info
 * Address  : 00179780
 * Program  : drastic64
 */


int compare_file_info(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(*param_1 + 0x18),*(char **)(*param_2 + 0x18));
  return iVar1;
}


