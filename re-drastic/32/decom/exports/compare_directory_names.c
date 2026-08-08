/*
 * Ghidra decompilation
 *
 * Function : compare_directory_names
 * Address  : 0809a6f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int compare_directory_names(void *_a,void *_b)

{
  char **a;
  int iVar1;
  char *b;
  
                    /* WARNING: Load size is inaccurate */
  if (**_b == '.') {
    iVar1 = 1;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    if (**_a != '.') {
      iVar1 = strcasecmp(*_a,*_b);
      return iVar1;
    }
    iVar1 = -1;
  }
  return iVar1;
}


