/*
 * Ghidra decompilation
 *
 * Function : compare_file_info
 * Address  : 0809a790
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable a:file_info_struct * *[r0:4] conflicts with parameter, skipped.
   Local variable b:file_info_struct * *[r1:4] conflicts with parameter, skipped. */

int compare_file_info(void *_a,void *_b)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  iVar1 = strcmp(*(char **)(*_a + 0x14),*(char **)(*_b + 0x14));
  return iVar1;
}


