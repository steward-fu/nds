/*
 * Ghidra decompilation
 *
 * Function : compare_cheat_entry_game_code
 * Address  : 080a11f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable a:cheat_directory_entry_struct *[r0:4] conflicts with parameter, skipped.
   Local variable b:cheat_directory_entry_struct *[r1:4] conflicts with parameter, skipped. */

int compare_cheat_entry_game_code(void *_a,void *_b)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if (*_a == *_b) {
    iVar1 = 0;
  }
  else if (*_b < *_a) {
    iVar1 = 1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


