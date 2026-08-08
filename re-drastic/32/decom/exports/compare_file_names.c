/*
 * Ghidra decompilation
 *
 * Function : compare_file_names
 * Address  : 0809a72c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable a:file_entry_struct *[r0:4] conflicts with parameter, skipped.
   Local variable b:file_entry_struct *[r1:4] conflicts with parameter, skipped. */

int compare_file_names(void *_a,void *_b)

{
  int iVar1;
  char *__s2;
  char *str_b;
  char *__s1;
  char *str_a;
  
  __s1 = *(char **)((int)_a + 4);
  __s2 = *(char **)((int)_b + 4);
  if (__s2 == (char *)0x0 || __s1 != (char *)0x0) {
    if (__s1 == (char *)0x0 || __s2 != (char *)0x0) {
                    /* WARNING: Load size is inaccurate */
      if (__s1 == (char *)0x0) {
        __s1 = *_a;
      }
                    /* WARNING: Load size is inaccurate */
      if (__s2 == (char *)0x0) {
        __s2 = *_b;
      }
      iVar1 = strcasecmp(__s1,__s2);
      return iVar1;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


