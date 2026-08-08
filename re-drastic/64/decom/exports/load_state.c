/*
 * Ghidra decompilation
 *
 * Function : load_state
 * Address  : 001746f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 load_state(long param_1,char *param_2,void *param_3,void *param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  undefined4 uVar9;
  long *__ptr;
  size_t sVar10;
  void *__ptr_00;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  undefined8 uVar14;
  uint local_7c;
  ulong local_78;
  FILE *local_70;
  undefined8 local_68;
  long *local_58;
  long *plStack_50;
  long lStack_48;
  long local_40;
  long local_38;
  long local_30;
  undefined4 local_28;
  uint local_24;
  long local_20;
  long local_18;
  long lStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __ptr = (long *)malloc(0x680000);
  lVar1 = param_1 + 0x1587000;
  while ((DAT_004ec27c != 0 && (delay_us(1), DAT_004ec27c != 0))) {
    delay_us(1);
  }
  local_58 = __ptr;
  plStack_50 = __ptr;
  if (param_5 == 0) {
    uVar9 = audio_pause(lVar1);
    __printf_chk(1,"Loading state %s\n",param_2);
    local_68 = 0;
    local_70 = fopen(param_2,"rb");
    if (local_70 == (FILE *)0x0) {
      __printf_chk(1,"Error: savestate %s does not exist\n",param_2);
      audio_revert_pause_state(lVar1,uVar9);
      goto LAB_00174b74;
    }
  }
  else {
    local_68 = 0;
    local_70 = fopen(param_2,"rb");
    if (local_70 == (FILE *)0x0) {
      __printf_chk(1,"Error: savestate %s does not exist\n",param_2);
LAB_00174b74:
      uVar14 = 0xffffffff;
      free(__ptr);
      goto LAB_0017484c;
    }
    uVar9 = 0;
  }
  sVar10 = fread(__ptr,0x40,1,local_70);
  if (sVar10 == 0) {
    puts("Error: Couldn\'t read savestate header");
LAB_00174818:
    puts(" ERROR: Savestate load failed.");
    uVar14 = 0xffffffff;
    fflush(_stdout);
    fclose(local_70);
    free(__ptr);
    if (param_5 != 0) goto LAB_0017484c;
  }
  else {
    lStack_48 = *plStack_50;
    local_40 = plStack_50[1];
    local_38 = plStack_50[2];
    local_30 = plStack_50[3];
    plVar6 = plStack_50 + 8;
    uVar4 = *(undefined4 *)(plStack_50 + 4);
    local_20 = plStack_50[5];
    uVar5 = *(uint *)((long)plStack_50 + 0x24);
    local_18 = plStack_50[6];
    lStack_10 = plStack_50[7];
    plStack_50 = plVar6;
    local_28 = uVar4;
    local_24 = uVar5;
    if ((((lStack_48 != 0x2d63697453617244) || (local_40 != 0x7461745365766153)) ||
        (local_38 != 0x2d2d2d2d2d2d2d65)) || (local_30 != 0x2d2d2d2d2d2d2d2d)) {
      puts("Error: DraStic magic string not in savestate file");
      goto LAB_00174818;
    }
    uVar14 = 0;
    if ((uVar5 & 2) == 0 && param_5 == 1) {
      fclose(local_70);
      free(__ptr);
      goto LAB_0017484c;
    }
    if ((uVar5 & 1) == 0) {
      uVar12 = ftell(local_70);
      fseek(local_70,0,2);
      lVar11 = ftell(local_70);
      fseek(local_70,uVar12 & 0xffffffff,0);
      sVar10 = fread(plStack_50,(ulong)(uint)((int)lVar11 - (int)uVar12),1,local_70);
      plVar6 = local_58;
      plVar7 = plStack_50;
      if (sVar10 != 0) goto LAB_001749a4;
      puts("Error: Savestate memory read failed.");
      goto LAB_00174818;
    }
    local_78 = 0x680000;
    if (param_5 != 0) {
      local_78 = 0x30000;
    }
    sVar10 = fread(&local_7c,4,1,local_70);
    if (sVar10 == 0) {
      puts("Error: Compressed length of savestate is zero");
      goto LAB_00174818;
    }
    uVar12 = (ulong)local_7c;
    __ptr_00 = malloc(uVar12);
    sVar10 = fread(__ptr_00,uVar12,1,local_70);
    if (sVar10 == 0) {
      free(__ptr_00);
      puts("Error: Savestate couldn\'t be read (compressed");
      goto LAB_00174818;
    }
    iVar8 = uncompress(__ptr,&local_78,__ptr_00,local_7c);
    free(__ptr_00);
    plVar6 = __ptr;
    plVar7 = __ptr;
    if (iVar8 == 0) {
      if (param_5 == 0) {
        __printf_chk(1," Uncompressed savestate from %d to %d bytes.\n",local_7c,
                     local_78 & 0xffffffff);
      }
    }
    else if (param_5 != 1 || iVar8 != -5) {
      __printf_chk(1,"Error: uncompress returned error code %d\n");
      goto LAB_00174818;
    }
LAB_001749a4:
    plStack_50 = plVar7;
    local_58 = plVar6;
    plVar6 = plStack_50;
    if ((uVar5 & 2) != 0) {
      if (param_3 == (void *)0x0 || param_4 == (void *)0x0) {
        plStack_50 = plStack_50 + 0x6000;
      }
      else {
        memcpy(param_3,plStack_50,0x18000);
        memcpy(param_4,plVar6 + 0x3000,0x18000);
        plStack_50 = plVar6 + 0x6000;
      }
    }
    if (param_5 != 0) {
      fclose(local_70);
      free(__ptr);
      goto LAB_0017484c;
    }
    uVar2 = uVar5 >> 2 & 3;
    bVar13 = nds_system[param_1 + 0x31d5e42];
    uVar3 = uVar2 ^ bVar13;
    __printf_chk(1,"custom BIOS in savestate: %x, current: %x, change: %x\n",uVar2,(uint)bVar13);
    if (uVar2 == bVar13) {
LAB_00174ab8:
      if ((uVar5 >> 4 & 1) != 0) {
        backup_data_load_savestate(param_1 + 0xc88,&local_70,uVar4);
      }
      system_load_savestate(param_1,&local_70,uVar4);
      fclose(local_70);
      free(__ptr);
    }
    else {
      if ((uVar3 >> 1 & 1) == 0) {
LAB_00174a68:
        if ((uVar3 & 1) != 0) {
          if ((uVar5 >> 2 & 1) == 0) {
            puts(" Switching from custom ARM7 BIOS to NDS ARM7 BIOS.");
            bVar13 = bVar13 & 0xfe;
            iVar8 = load_system_file(param_1,"nds_bios_arm7.bin",param_1 + 0x35e5950,0x4000);
          }
          else {
            bVar13 = bVar13 | 1;
            puts(" Switching from NDS ARM7 BIOS to custom ARM7 BIOS.");
            iVar8 = load_system_file(param_1,"drastic_bios_arm7.bin",param_1 + 0x35e5950,0x4000);
          }
          if (iVar8 < 0) {
            puts("Error: Couldn\'t switch ARM7 BIOS for savestate.");
            goto LAB_00174ba0;
          }
        }
        nds_system[param_1 + 0x31d5e42] = bVar13;
        goto LAB_00174ab8;
      }
      if ((uVar5 >> 3 & 1) == 0) {
        puts(" Switching from custom ARM9 BIOS to NDS ARM9 BIOS.");
        iVar8 = load_system_file(param_1,"nds_bios_arm9.bin",param_1 + 0x35e4950,0x1000);
        bVar13 = bVar13 & 0xfd;
      }
      else {
        puts(" Switching from NDS ARM9 BIOS to custom ARM9 BIOS.");
        iVar8 = load_system_file(param_1,"drastic_bios_arm9.bin",param_1 + 0x35e4950,0x1000);
        bVar13 = bVar13 | 2;
      }
      if (-1 < iVar8) goto LAB_00174a68;
      puts("Error: Couldn\'t switch ARM9 BIOS for savestate.");
LAB_00174ba0:
      puts(" ERROR: Savestate load failed.");
      uVar14 = 0xfffffffe;
      fflush(_stdout);
      fclose(local_70);
      free(__ptr);
    }
  }
  audio_revert_pause_state(lVar1,uVar9);
  nds_system[param_1 + 0x362e9a3] = 1;
LAB_0017484c:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return uVar14;
}


