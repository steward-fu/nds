/*
 * Ghidra decompilation
 *
 * Function : gamecard_write
 * Address  : 08091144
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gamecard_write(gamecard_struct *gamecard,u32 value)

{
  ssize_t sVar1;
  u8 *puVar2;
  u8 *io_region;
  uint uVar3;
  u32 uVar4;
  system_struct *psVar5;
  u32 local_c;
  
  local_c = value;
  if ((gamecard->nand_mode != '\0') && (gamecard->nand_write_enable != '\0')) {
    backup_nand_write(&gamecard->backup,value);
    return;
  }
  if (gamecard->dldi_write_count != 0) {
    sVar1 = write(gamecard->dldi_file_fd,&local_c,4);
    if (sVar1 < 0) {
      puts("ERROR: DLDI write failed");
    }
    uVar4 = gamecard->dldi_write_count - 1;
    gamecard->dldi_write_count = uVar4;
    if ((uVar4 == 0) &&
       (*(uint *)(gamecard->io_region + 0x1a4) = *(uint *)(gamecard->io_region + 0x1a4) & 0x7f7fffff
       , (*(uint *)(gamecard->io_region + 0x1a0) & 0x4000) != 0)) {
      puVar2 = (gamecard->system->cpu_arm9).io_region;
      uVar3 = *(uint *)(puVar2 + 0x214);
      *(uint *)(puVar2 + 0x214) = uVar3 | 0x80000;
      psVar5 = gamecard->system;
      if (((psVar5->cpu_arm9).state & 6) == 0) {
        uVar4 = (uVar3 | 0x80000) & -*(int *)(puVar2 + 0x208) & *(uint *)(puVar2 + 0x210);
        (psVar5->cpu_arm9).active_interrupts = uVar4;
      }
      else {
        uVar4 = (psVar5->cpu_arm9).active_interrupts;
      }
      if (uVar4 != 0) {
        (psVar5->cpu_arm9).alert_flags = (psVar5->cpu_arm9).alert_flags | 2;
      }
    }
  }
  return;
}


