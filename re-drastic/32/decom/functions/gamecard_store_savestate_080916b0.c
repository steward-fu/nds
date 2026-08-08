/*
 * Ghidra decompilation
 *
 * Function : gamecard_store_savestate
 * Address  : 080916b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gamecard_store_savestate(gamecard_struct *gamecard,mem_file_struct *savestate_file,u32 version)

{
  u8 *puVar1;
  undefined4 uVar2;
  
  *(u32 *)savestate_file->buffer_ptr = gamecard->receive_address;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 4;
  *(u32 *)(puVar1 + 4) = gamecard->receive_length;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 4;
  *(u32 *)(puVar1 + 4) = gamecard->read_value;
  puVar1 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar1 + 4;
  if (version < 4) {
    gamecard->dma_completion_timestamp = 0;
  }
  else {
    uVar2 = *(undefined4 *)((int)&gamecard->dma_completion_timestamp + 4);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)&gamecard->dma_completion_timestamp;
    *(undefined4 *)(puVar1 + 8) = uVar2;
    puVar1 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar1 + 8;
    if (version != 4) {
      puVar1[8] = gamecard->irq_scheduled;
      puVar1 = savestate_file->buffer_ptr;
      savestate_file->buffer_ptr = puVar1 + 1;
      if (7 < version) {
        *(u32 *)(puVar1 + 1) = gamecard->nand_base_address;
        puVar1 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar1 + 4;
        *(u32 *)(puVar1 + 4) = gamecard->nand_seek_address;
        puVar1 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar1 + 4;
        puVar1[4] = gamecard->nand_mode;
        puVar1 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar1 + 1;
        puVar1[1] = gamecard->nand_write_enable;
        puVar1 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar1 + 1;
        if (9 < version) {
          *(u32 *)(puVar1 + 1) = gamecard->chip_id;
          puVar1 = savestate_file->buffer_ptr;
          savestate_file->buffer_ptr = puVar1 + 4;
          if (0xb < version) {
            *(u32 *)(puVar1 + 4) = (gamecard->gba_gamepak).flash_bank;
            puVar1 = savestate_file->buffer_ptr;
            savestate_file->buffer_ptr = puVar1 + 4;
            puVar1[4] = (gamecard->gba_gamepak).flash_mode;
            puVar1 = savestate_file->buffer_ptr;
            savestate_file->buffer_ptr = puVar1 + 1;
            puVar1[1] = (gamecard->gba_gamepak).flash_command_position;
            savestate_file->buffer_ptr = savestate_file->buffer_ptr + 1;
          }
        }
      }
      goto LAB_08091720;
    }
  }
  gamecard->irq_scheduled = '\0';
LAB_08091720:
  backup_store_savestate(&gamecard->backup,savestate_file,version);
  return;
}


