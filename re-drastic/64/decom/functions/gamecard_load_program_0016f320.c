/*
 * Ghidra decompilation
 *
 * Function : gamecard_load_program
 * Address  : 0016f320
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 gamecard_load_program(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  void *pvVar13;
  char *__s;
  long lVar14;
  long lVar15;
  void *__src;
  ulong uVar16;
  uint local_a84;
  char acStack_a38 [12];
  undefined local_a2c;
  char acStack_a28 [12];
  uint local_a1c;
  undefined2 local_a18;
  undefined local_a16;
  byte local_a14;
  undefined local_a0a;
  undefined local_a09;
  uint local_a08;
  undefined4 uStack_a04;
  uint local_a00;
  undefined4 uStack_9fc;
  uint local_9f8;
  undefined4 local_9f4;
  undefined4 uStack_9f0;
  undefined4 local_9ec;
  undefined4 local_9c8;
  ushort local_992;
  long local_988;
  char local_980;
  char acStack_97c [178];
  undefined2 local_8ca;
  undefined2 local_82a;
  undefined auStack_828 [2080];
  long local_8;
  
  lVar15 = *(long *)(param_1 + 0x918);
  lVar14 = *(long *)(nds_system + lVar15 + 0x30d8930);
  local_a84 = *(uint *)(lVar15 + 0x85a5c);
  __src = *(void **)(*(long *)(param_1 + 0x920) + 8);
  local_8 = ___stack_chk_guard;
  uVar3 = *(uint *)(*(long *)(param_1 + 0x920) + 0x10);
  memcpy(acStack_a28,__src,0x200);
  strncpy(acStack_a38,acStack_a28,0xc);
  uVar8 = local_a1c;
  uVar9 = 0x20000 << (ulong)(local_a14 & 0x1f);
  iVar11 = uVar9 - 1;
  local_a2c = 0;
  *(int *)(param_1 + 0x930) = iVar11;
  *(uint *)(param_1 + 0x938) = local_a1c;
  lVar1 = lVar15 + 0x35d4930;
  if (uVar9 < uVar3) {
    do {
      iVar7 = iVar11 * 2;
      iVar11 = iVar7 + 1;
    } while (iVar7 + 2U < uVar3);
    *(int *)(param_1 + 0x930) = iVar11;
  }
  if (*(int *)(lVar15 + 0x85a30) != 0) {
    *(int *)(param_1 + 0x930) = (1 << (ulong)(-(int)LZCOUNT(uVar3 + 1) & 0x1f)) + -1;
    __printf_chk(1,"Ignoring gamecard header mask: using game card mask of %x\n");
  }
  __printf_chk(1,"Gamecard title:  \'%s\'\n",acStack_a38);
  __printf_chk(1,"Game code:       %08x (%c%c%c%c)\n",uVar8,uVar8 & 0xff,uVar8 >> 8 & 0xff,
               uVar8 >> 0x10 & 0xff,uVar8 >> 0x18);
  __printf_chk(1,"Maker code:      %02x\n",local_a18);
  __printf_chk(1,"Unit code:       %01x\n",local_a16);
  __printf_chk(1,"Chip size:       %dKB\n",0x80 << (ulong)(local_a14 & 0x1f));
  __printf_chk(1,"ROM version:     %d\n",local_a0a);
  __printf_chk(1,"Autostart:       %d\n",local_a09);
  __printf_chk(1,"ROMCTRL          %08x\n",local_9c8);
  if (uVar8 == 0x23232323) {
    gamecard_initialize_homebrew(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x93c) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x940) = 0;
  uVar9 = game_database_generate_crc32_from_memory(acStack_a28,0x200);
  uVar16 = (ulong)local_a00;
  __printf_chk(1,"ARM9 ROM offset: %04x\n",local_a08);
  __printf_chk(1,"ARM9 entry PC:   %04x\n",uStack_a04);
  __printf_chk(1,"ARM9 RAM offset: %04x\n",uVar16);
  __printf_chk(1,"ARM9 size:       %04x\n",uStack_9fc);
  __printf_chk(1,"ARM7 ROM offset: %04x\n",local_9f8);
  __printf_chk(1,"ARM7 entry PC:   %04x\n",local_9f4);
  __printf_chk(1,"ARM7 RAM offset: %04x\n",uStack_9f0);
  __printf_chk(1,"ARM7 size:       %04x\n",local_9ec);
  memory_region_block_memory_load
            (*(undefined8 *)(*(long *)(nds_system + lVar15 + 0x31d43b8) + 0x1000000),lVar1,uVar16,
             (long)__src + (ulong)local_a08,uStack_9fc);
  memory_region_block_memory_load
            (*(undefined8 *)(*(long *)(nds_system + lVar15 + 0x31d43c0) + 0x1000000),lVar1,
             uStack_9f0,(long)__src + (ulong)local_9f8,local_9ec);
  *(undefined2 *)(polygon_sort_list_13776 + lVar14 + 0x151c8) = local_8ca;
  memcpy((void *)(lVar14 + 0x3ffe00),acStack_a28,0x170);
  *(undefined4 *)(nds_system + lVar15 + 0x10ce10c) = uStack_a04;
  *(undefined4 *)(nds_system + lVar15 + 0x20d46fc) = local_9f4;
  *(undefined *)(param_1 + 0x2da6) = 0;
  if ((local_a08 == 0x4000) && (local_a00 + 0xfe000000 < 0x1000000)) {
    lVar2 = lVar14 + (uVar16 & 0x3fffff);
    iVar11 = *(int *)(lVar14 + (ulong)(local_a00 & 0x3fffff));
    if (iVar11 == -0x18002101) {
      if (*(int *)(lVar2 + 4) != -0x18002101) {
        if (uVar8 == 0x45355659) goto LAB_0016f978;
        goto LAB_0016f948;
      }
    }
    else if (uVar8 == 0x45355659) {
      if ((iVar11 == 0x14a191a) && (*(int *)(lVar2 + 4) == -0x5a3b8f47)) goto LAB_0016f690;
LAB_0016f978:
      puts("Decrypting secure region.");
      if ((nds_system[lVar15 + 0x31d5e42] & 1) == 0) {
        gamecard_decrypt_secure_region(lVar2,local_a1c,lVar15 + 0x35e5980);
      }
      else {
        puts("Can\'t decrypt game, need original BIOS for this.");
        *(undefined *)(param_1 + 0x2da6) = 1;
      }
    }
    else {
LAB_0016f948:
      if (uVar8 == 0x50355659) {
        if ((iVar11 != -0x2f2b7499) || (*(int *)(lVar2 + 4) != 0x39392f23)) goto LAB_0016f978;
      }
      else if ((uVar8 != 0x4a355659 || iVar11 != 0x7829bc8d) || (*(int *)(lVar2 + 4) != -0x669710bc)
              ) goto LAB_0016f978;
    }
  }
LAB_0016f690:
  __snprintf_chk(auStack_828,0x820,1,0x820,"%s%cbackup%c%s.dsv",lVar15 + 0x8ab80,0x2f,0x2f,
                 lVar15 + 0x8b380);
  lVar14 = param_1 + 0x968;
  puVar12 = (undefined8 *)game_database_lookup_by_game_code(param_1,uVar8,acStack_a38);
  if (puVar12 == (undefined8 *)0x0) {
    puts("Couldn\'t find game entry by code + title, trying CRC32.");
    uVar10 = game_database_generate_crc32_from_memory
                       (__src,*(undefined4 *)(*(long *)(param_1 + 0x920) + 0x10));
    __printf_chk(1,"Got game CRC32 %x\n",uVar10);
    puVar12 = (undefined8 *)game_database_lookup_by_crc32(param_1,uVar10);
    if (puVar12 != (undefined8 *)0x0) goto LAB_0016f6ec;
    __s = "Couldn\'t find game in database. Using 512KB flash just to be safe.";
LAB_0016fa30:
    puts(__s);
    pvVar13 = malloc(0x80000);
    *(void **)(param_1 + 0x2d90) = pvVar13;
    initialize_backup(lVar14,1,pvVar13,0x80000,auStack_828);
    *(undefined4 *)(param_1 + 0x2d80) = 0x204013;
LAB_0016f770:
    load_custom_cheats(param_1 + 0x28,lVar15);
    iVar11 = *(int *)(param_1 + 0x45c);
  }
  else {
LAB_0016f6ec:
    uVar4 = *(uint *)(puVar12 + 4);
    __printf_chk(1,"Found game in database: titled %s. ",*puVar12);
    bVar5 = *(byte *)(puVar12 + 6);
    if (bVar5 != 2) {
      if (bVar5 < 3) {
        if (bVar5 == 0) {
          __s = "No save backup. Using 512KB flash just to be safe.";
          goto LAB_0016fa30;
        }
        uVar10 = *(undefined4 *)(puVar12 + 5);
        __printf_chk(1,"Flash backup: %x bytes, ID %08x\n",uVar4,uVar10);
        pvVar13 = malloc((ulong)uVar4);
        *(void **)(param_1 + 0x2d90) = pvVar13;
        initialize_backup(lVar14,1,pvVar13,uVar4,auStack_828);
        *(undefined4 *)(param_1 + 0x2d80) = uVar10;
      }
      else if (bVar5 == 3) {
        __printf_chk(1,"NAND backup: %x bytes\n",uVar4);
        *(undefined2 *)(param_1 + 0x2da7) = 0;
        *(uint *)(param_1 + 0x2d9c) = (uint)local_992 << 0x11;
        goto LAB_0016f8ac;
      }
      goto LAB_0016f770;
    }
    __printf_chk(1,"EEPROM backup: %x bytes\n",uVar4);
LAB_0016f8ac:
    pvVar13 = malloc((ulong)uVar4);
    *(void **)(param_1 + 0x2d90) = pvVar13;
    initialize_backup(lVar14,bVar5,pvVar13,uVar4,auStack_828);
    load_custom_cheats(param_1 + 0x28,lVar15);
    iVar11 = *(int *)(param_1 + 0x45c);
  }
  if (iVar11 != 0) {
    load_cheat_listing(param_1 + 0x28,uVar8,~uVar9);
  }
  lVar14 = *(long *)(nds_system + lVar15 + 0x30d8930);
  uVar9 = ((*(int *)(param_1 + 0x930) + 1U >> 0x14) - 1) * 0x100 | 0xc2;
  *(uint *)(param_1 + 0x958) = uVar9;
  *(uint *)(lVar14 + 0x3ff800) = uVar9;
  *(uint *)(polygon_sort_list_13776 + *(long *)(nds_system + lVar15 + 0x30d8930) + 0x151c4) = uVar9;
  *(uint *)(*(long *)(nds_system + lVar15 + 0x30d8930) + 0x3ffc00) = uVar9;
  *(undefined2 *)(polygon_sort_list_13776 + *(long *)(nds_system + lVar15 + 0x30d8930) + 0x151c8) =
       local_82a;
  if (local_a84 < 2) {
    iVar11 = gamecard_load_gba(param_1,lVar15 + 0x8b380);
    if (iVar11 == -1) {
      iVar11 = gamecard_load_gba(param_1,"slot2_gamepak");
      cVar6 = *(char *)(param_1 + 0x8e3);
      local_a84 = (uint)(iVar11 != -1);
    }
    else {
      cVar6 = *(char *)(param_1 + 0x8e3);
      local_a84 = 1;
    }
    if (((cVar6 != '\0') || (local_988 != 0x3131565f4d415253)) || (local_980 != '0'))
    goto LAB_0016f818;
    uVar9 = strncmp(acStack_97c,"PASS",4);
    if ((local_a84 | uVar9) == 0) goto LAB_0016fb08;
  }
  else {
    if ((*(char *)(param_1 + 0x8e3) == '\0') && (local_a84 == 2)) {
LAB_0016fb08:
      if (uVar3 < 0x2000001) {
        iVar11 = memory_setup_slot2_ram(lVar1);
        if (iVar11 == -1) {
          local_a84 = 0;
          puts("Couldn\'t setup slot 2 RAM.");
        }
        else {
          puts("Auto-loading game to slot 2 RAM.");
          local_a84 = 2;
          memcpy(*(void **)(nds_system + lVar15 + 0x31d4368),__src,(ulong)uVar3);
        }
      }
      else {
        local_a84 = 0;
      }
      goto LAB_0016f818;
    }
    if (local_a84 == 3) {
      memory_setup_slot2_rumble(lVar1);
      goto LAB_0016f818;
    }
  }
  if (local_a84 == 4) {
    memory_setup_slot2_motion(lVar1);
  }
  else if (local_a84 == 5) {
    memory_setup_slot2_motion_hb(lVar1);
  }
LAB_0016f818:
  *(uint *)(lVar15 + 0x85a5c) = local_a84;
  memory_copy_nintendo_logo(lVar1,__src);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return 0;
}


