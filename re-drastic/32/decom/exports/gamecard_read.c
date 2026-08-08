/*
 * Ghidra decompilation
 *
 * Function : gamecard_read
 * Address  : 08090f8c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 gamecard_read(gamecard_struct *gamecard)

{
  u8 uVar1;
  u32 uVar2;
  u32 uVar3;
  ssize_t sVar4;
  u8 *puVar5;
  u8 *io_region;
  uint uVar6;
  system_struct *psVar7;
  u32 read_value;
  int local_14;
  
  uVar2 = gamecard->receive_length;
  local_14 = __stack_chk_guard;
  uVar3 = uVar2;
  if (uVar2 != 0) {
    uVar1 = gamecard->receive_type;
    if (uVar1 == '\x02') {
      read_value = *(u32 *)(gamecard->nds_file->data + gamecard->receive_address);
      gamecard->receive_address = gamecard->receive_address + 4;
    }
    else if (uVar1 == '\x06') {
      read_value = backup_nand_read(&gamecard->backup);
      uVar2 = gamecard->receive_length;
    }
    else if (uVar1 == '\x04') {
      sVar4 = read(gamecard->dldi_file_fd,&read_value,4);
      if (sVar4 < 0) {
        puts("ERROR: DLDI read failed");
      }
      uVar2 = gamecard->receive_length;
    }
    else {
      read_value = gamecard->read_value;
    }
    gamecard->receive_length = uVar2 - 1;
    uVar3 = read_value;
    if (uVar2 - 1 == 0) {
      *(uint *)(gamecard->io_region + 0x1a4) = *(uint *)(gamecard->io_region + 0x1a4) & 0x7fffffff;
      if ((gamecard->receive_type != '\a') && (gamecard->nand_mode == '\0')) {
        *(uint *)(gamecard->io_region + 0x1a4) = *(uint *)(gamecard->io_region + 0x1a4) & 0xff7fffff
        ;
      }
      if ((*(uint *)(gamecard->io_region + 0x1a0) & 0x4000) != 0) {
        puVar5 = (gamecard->system->cpu_arm9).io_region;
        uVar6 = *(uint *)(puVar5 + 0x214);
        *(uint *)(puVar5 + 0x214) = uVar6 | 0x80000;
        psVar7 = gamecard->system;
        if (((psVar7->cpu_arm9).state & 6) == 0) {
          uVar2 = (uVar6 | 0x80000) & -*(int *)(puVar5 + 0x208) & *(uint *)(puVar5 + 0x210);
          (psVar7->cpu_arm9).active_interrupts = uVar2;
        }
        else {
          uVar2 = (psVar7->cpu_arm9).active_interrupts;
        }
        if (uVar2 != 0) {
          (psVar7->cpu_arm9).alert_flags = (psVar7->cpu_arm9).alert_flags | 2;
        }
      }
    }
  }
  if (local_14 == __stack_chk_guard) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


