/*
 * Ghidra decompilation
 *
 * Function : load_gba_backup_8
 * Address  : 080091b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 load_gba_backup_8(memory_struct *memory,u32 address)

{
  u8 uVar1;
  
  uVar1 = gba_backup_load(&memory->gamecard->gba_gamepak,address);
  return uVar1;
}


