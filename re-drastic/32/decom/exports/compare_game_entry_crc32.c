/*
 * Ghidra decompilation
 *
 * Function : compare_game_entry_crc32
 * Address  : 08093440
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable a:game_database_entry_struct * *[r0:4] conflicts with parameter, skipped.
   Local variable b:game_database_entry_struct * *[r1:4] conflicts with parameter, skipped. */

int compare_game_entry_crc32(void *_a,void *_b)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if (*(uint *)(*_a + 0x18) == *(uint *)(*_b + 0x18)) {
    iVar1 = 0;
  }
  else if (*(uint *)(*_b + 0x18) < *(uint *)(*_a + 0x18)) {
    iVar1 = 1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


