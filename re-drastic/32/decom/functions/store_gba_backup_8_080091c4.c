/*
 * Ghidra decompilation
 *
 * Function : store_gba_backup_8
 * Address  : 080091c4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_gba_backup_8(memory_struct *memory,u32 address,u8 value)

{
  gba_backup_store(&memory->gamecard->gba_gamepak,address,value);
  return;
}


