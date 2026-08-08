/*
 * Ghidra decompilation
 *
 * Function : gamecard_load_savestate
 * Address  : 080914d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gamecard_load_savestate(gamecard_struct *gamecard,mem_file_struct *savestate_file,u32 version)

{
  u8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  gamecard->receive_address = *(u32 *)savestate_file->buffer_ptr;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 4;
  gamecard->receive_length = *(u32 *)(puVar1 + 4);
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 4;
  gamecard->read_value = *(u32 *)(puVar1 + 4);
  puVar1 = savestate_file->buffer_ptr;
  puVar2 = (undefined4 *)(puVar1 + 4);
  savestate_file->buffer_ptr = (u8 *)puVar2;
  if (version < 4) {
    gamecard->dma_completion_timestamp = 0;
LAB_08091540:
    gamecard->irq_scheduled = '\0';
  }
  else {
    uVar3 = *(undefined4 *)(puVar1 + 8);
    *(undefined4 *)&gamecard->dma_completion_timestamp = *puVar2;
    *(undefined4 *)((int)&gamecard->dma_completion_timestamp + 4) = uVar3;
    puVar1 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar1 + 8;
    if (version == 4) goto LAB_08091540;
    gamecard->irq_scheduled = puVar1[8];
    puVar1 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar1 + 1;
    if (7 < version) {
      gamecard->nand_base_address = *(u32 *)(puVar1 + 1);
      puVar1 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar1 + 4;
      gamecard->nand_seek_address = *(u32 *)(puVar1 + 4);
      puVar1 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar1 + 4;
      gamecard->nand_mode = puVar1[4];
      puVar1 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar1 + 1;
      gamecard->nand_write_enable = puVar1[1];
      puVar1 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar1 + 1;
      if (9 < version) {
        gamecard->chip_id = *(u32 *)(puVar1 + 1);
        puVar1 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar1 + 4;
        if (0xb < version) {
          (gamecard->gba_gamepak).flash_bank = *(u32 *)(puVar1 + 4);
          puVar1 = savestate_file->buffer_ptr;
          savestate_file->buffer_ptr = puVar1 + 4;
          (gamecard->gba_gamepak).flash_mode = puVar1[4];
          puVar1 = savestate_file->buffer_ptr;
          savestate_file->buffer_ptr = puVar1 + 1;
          (gamecard->gba_gamepak).flash_command_position = puVar1[1];
          savestate_file->buffer_ptr = savestate_file->buffer_ptr + 1;
        }
        backup_load_savestate(&gamecard->backup,savestate_file,version);
        return;
      }
      backup_load_savestate(&gamecard->backup,savestate_file,version);
      goto LAB_08091568;
    }
  }
  backup_load_savestate(&gamecard->backup,savestate_file,version);
  if (9 < version) {
    return;
  }
LAB_08091568:
  gamecard->chip_id = 0;
  return;
}


