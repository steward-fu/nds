/*
 * Ghidra decompilation
 *
 * Function : free_cheat_listing
 * Address  : 080a2068
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void free_cheat_listing(cheat_listing_struct *cheat_listing)

{
  free(cheat_listing->cheat_database_data);
  free(cheat_listing->cheats);
  free(cheat_listing->folders);
  return;
}


