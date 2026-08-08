/*
 * Ghidra decompilation
 *
 * Function : initialize_gamecard
 * Address  : 080913a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_gamecard(gamecard_struct *gamecard,system_struct *system)

{
  int iVar1;
  int iVar2;
  char path [1024];
  
  iVar1 = __stack_chk_guard;
  __sprintf_chk(path,1,0x400,"%s%cgame_database.xml",system->root_path,0x2f);
  initialize_game_database(&gamecard->game_database,path);
  __sprintf_chk(path,1,0x400,"%s%cusrcheat.dat",system->user_root_path,0x2f);
  load_cheat_directory(&gamecard->cheat_directory,path);
  iVar2 = __stack_chk_guard;
  gamecard->system = system;
  gamecard->nds_file = (nds_file_struct *)0x0;
  gamecard->io_region = (system->memory).arm9_io_registers;
  gamecard->dldi_file_fd = -1;
  gamecard->dma_arm9 = &(system->memory).dma_arm9;
  gamecard->dma_arm7 = &(system->memory).dma_arm7;
  if (iVar1 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


