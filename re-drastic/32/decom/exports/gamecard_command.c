/*
 * Ghidra decompilation
 *
 * Function : gamecard_command
 * Address  : 08090a3c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gamecard_command(gamecard_struct *gamecard,u32 command_value)

{
  byte bVar1;
  u32 seek_address_1;
  system_struct *psVar2;
  system_struct *system;
  int iVar3;
  uint uVar4;
  uint uVar5;
  u32 receive_address;
  int iVar6;
  u32 uVar7;
  u32 seek_address;
  dma_struct *dma;
  dma_struct *dma_00;
  u8 *puVar8;
  uint uVar9;
  u8 uVar10;
  uint uVar11;
  
  dma_00 = gamecard->dma_arm9;
  puVar8 = gamecard->io_region;
  uVar9 = command_value | 0x80800000;
  bVar1 = puVar8[0x1a8];
  if ((*(ushort *)(puVar8 + 0x204) & 0x800) == 0) {
    uVar10 = '\x05';
  }
  else {
    uVar10 = '\x02';
    dma_00 = gamecard->dma_arm7;
  }
  if (bVar1 == 0x94) {
    gamecard->read_value = 1;
    gamecard->receive_type = '\a';
    gamecard->receive_length = 1;
    goto LAB_08090af8;
  }
  if (bVar1 < 0x95) {
    if (bVar1 == 0x84) {
      uVar9 = command_value & 0x7fffffff | 0x800000;
      gamecard->nand_write_enable = '\0';
      goto LAB_08090af8;
    }
    if (0x84 < bVar1) {
      if (bVar1 == 0x8b) {
        uVar9 = command_value & 0x7fffffff | 0x800000;
        gamecard->nand_mode = '\0';
        goto LAB_08090af8;
      }
      if (bVar1 != 0x90) {
        if (bVar1 == 0x85) {
          uVar9 = command_value & 0x7fffffff | 0x800000;
          gamecard->nand_write_enable = '\x01';
        }
        goto LAB_08090af8;
      }
LAB_08090ca4:
      gamecard->receive_length = 1;
      gamecard->receive_type = '\x01';
      if (gamecard->dldi_file_fd < 0) {
        uVar7 = gamecard->chip_id;
      }
      else {
        uVar7 = 0xfc2;
      }
      gamecard->read_value = uVar7;
      goto LAB_08090af8;
    }
    if (bVar1 == 0x81) {
      if ((gamecard->backup).type != BACKUP_TYPE_NAND) goto LAB_08090af8;
      seek_address_1 =
           ((uint)puVar8[0x1aa] << 0x10 | (uint)puVar8[0x1a9] << 0x18 | (uint)puVar8[0x1ac] |
           (uint)puVar8[0x1ab] << 8) - gamecard->nand_base_address;
      if (seek_address_1 != gamecard->nand_seek_address) {
        gamecard->nand_seek_address = seek_address_1;
        backup_nand_set_position(&gamecard->backup,seek_address_1);
        gamecard->nand_mode = '\x01';
        puVar8 = gamecard->io_region;
      }
    }
    else if (bVar1 != 0x82) {
      if (bVar1 != 0) goto LAB_08090af8;
      goto LAB_08090e24;
    }
    uVar9 = command_value & 0x7fffffff | 0x800000;
  }
  else {
    if (bVar1 != 0xb7) {
      if (bVar1 < 0xb8) {
        if (bVar1 == 0xb0) {
          if (-1 < gamecard->dldi_file_fd) {
            gamecard->read_value = 500;
            gamecard->receive_length = 1;
            gamecard->receive_type = '\x01';
          }
          goto LAB_08090af8;
        }
        if (bVar1 != 0xb2) {
          if (bVar1 == 0x9f) {
            gamecard->receive_length = 0x800;
            gamecard->read_value = 0xffffffff;
            gamecard->receive_type = '\0';
          }
          goto LAB_08090af8;
        }
        if ((gamecard->backup).type != BACKUP_TYPE_NAND) goto LAB_08090af8;
        uVar9 = command_value & 0x7fffffff | 0x800000;
        uVar4 = (uint)puVar8[0x1aa] << 0x10 | (uint)puVar8[0x1a9] << 0x18 | (uint)puVar8[0x1ac] |
                (uint)puVar8[0x1ab] << 8;
        gamecard->nand_seek_address = uVar4;
        backup_nand_set_position(&gamecard->backup,uVar4 - gamecard->nand_base_address);
        gamecard->nand_mode = '\x01';
      }
      else {
        if (0xbc < bVar1) {
          if ((bVar1 == 0xd6) && ((gamecard->backup).type == BACKUP_TYPE_NAND)) {
            gamecard->read_value = 0x20202020;
            if (gamecard->nand_mode == '\0') {
              uVar7 = 0x70707070;
              gamecard->read_value = 0x60606060;
            }
            else {
              uVar7 = 0x30303030;
            }
            if (gamecard->nand_write_enable != '\0') {
              gamecard->read_value = uVar7;
            }
            gamecard->receive_type = '\a';
            gamecard->receive_length = 1;
          }
          goto LAB_08090af8;
        }
        if (bVar1 < 0xb9) goto LAB_08090ca4;
        if (gamecard->dldi_file_fd < 0) goto LAB_08090af8;
        lseek(gamecard->dldi_file_fd,
              (uint)puVar8[0x1aa] << 0x10 | (uint)puVar8[0x1a9] << 0x18 | (uint)puVar8[0x1ac] |
              (uint)puVar8[0x1ab] << 8,0);
        if (puVar8[0x1a8] == 0xba) {
          gamecard->receive_type = '\x04';
          puVar8 = gamecard->io_region;
          gamecard->receive_length = 0x80;
          goto LAB_08090af8;
        }
        gamecard->read_value = 0;
        gamecard->receive_type = '\x05';
        gamecard->receive_length = 1;
        if (puVar8[0x1a8] == 0xbb) {
          puVar8 = gamecard->io_region;
          gamecard->dldi_write_count = 0x80;
          goto LAB_08090af8;
        }
      }
      puVar8 = gamecard->io_region;
      goto LAB_08090af8;
    }
LAB_08090e24:
    uVar4 = (uint)puVar8[0x1aa] << 0x10 | (uint)puVar8[0x1a9] << 0x18 | (uint)puVar8[0x1ac] |
            (uint)puVar8[0x1ab] << 8;
    if (gamecard->nand_mode == '\0') {
      gamecard->receive_length = 0x80;
      uVar4 = uVar4 & gamecard->rom_read_mask;
      if (uVar4 < 0x8000) {
        uVar4 = (uVar4 & 0x1ff) + 0x8000;
      }
      gamecard->receive_address = uVar4;
      gamecard->receive_type = '\x02';
      if (gamecard->nds_file->size_trimmed <= uVar4) {
        gamecard->read_value = 0xff;
        gamecard->receive_type = '\x03';
      }
    }
    else {
      gamecard->receive_type = '\x06';
      gamecard->receive_length = 0x80;
      backup_nand_set_position(&gamecard->backup,uVar4 - gamecard->nand_base_address);
      puVar8 = gamecard->io_region;
    }
  }
LAB_08090af8:
  *(uint *)(puVar8 + 0x1a4) = uVar9;
  psVar2 = gamecard->system;
  if (psVar2->gamecard_delay == 0) {
    iVar3 = 0;
    iVar6 = 0;
  }
  else {
    uVar11 = (psVar2->cpu_arm9).cycles_remaining;
    uVar4 = *(uint *)&psVar2->global_cycles + psVar2->cycles_to_next_event;
    uVar5 = uVar4 - uVar11;
    uVar9 = (uint)psVar2->gamecard_delay * gamecard->receive_length * 0x28;
    iVar3 = uVar5 + uVar9;
    iVar6 = ((*(int *)((int)&psVar2->global_cycles + 4) +
             (uint)CARRY4(*(uint *)&psVar2->global_cycles,psVar2->cycles_to_next_event)) -
            (((int)uVar11 >> 0x1f) + (uint)(uVar4 < uVar11))) + (uint)CARRY4(uVar5,uVar9);
  }
  *(int *)&gamecard->dma_completion_timestamp = iVar3;
  *(int *)((int)&gamecard->dma_completion_timestamp + 4) = iVar6;
  if (((int)dma_00->channels[0].control < 0) && (uVar10 == dma_00->channels[0].start_type)) {
    dma_transfer_gamecard(dma_00,dma_00->channels,gamecard);
  }
  if (((int)dma_00->channels[1].control < 0) && (uVar10 == dma_00->channels[1].start_type)) {
    dma_transfer_gamecard(dma_00,dma_00->channels + 1,gamecard);
  }
  if (((int)dma_00->channels[2].control < 0) && (uVar10 == dma_00->channels[2].start_type)) {
    dma_transfer_gamecard(dma_00,dma_00->channels + 2,gamecard);
  }
  if (((int)dma_00->channels[3].control < 0) && (uVar10 == dma_00->channels[3].start_type)) {
    dma_transfer_gamecard(dma_00,dma_00->channels + 3,gamecard);
    return;
  }
  return;
}


