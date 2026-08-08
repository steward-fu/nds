/*
 * Ghidra decompilation
 *
 * Function : load_state
 * Address  : 080951c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 load_state(system_struct *system,char *path,u16 *snapshot_top,u16 *snapshot_bottom,
              u32 snapshot_only)

{
  uint uVar1;
  int iVar2;
  u32 uVar3;
  u8 *puVar4;
  u8 *puVar5;
  u8 *__ptr;
  u8 *savestate_buffer;
  size_t sVar6;
  int iVar7;
  void *__ptr_00;
  u8 *compressed_savestate_buffer;
  s32 success;
  long __off;
  u32 _current_position;
  long lVar8;
  u32 _file_size;
  s32 error_code;
  u32 custom_bios_change;
  uint uVar9;
  audio_struct *audio;
  spu_struct *audio_00;
  s32 sVar10;
  uint uVar11;
  byte bVar12;
  u32 custom_bios_loaded;
  u32 compressed_length;
  u32 uncompressed_length;
  mem_file_struct _savestate_file;
  savestate_header_struct savestate_header;
  
  iVar2 = __stack_chk_guard;
  audio_00 = &system->spu;
  __ptr = (u8 *)malloc(0x680000);
  while (savestate_thread_data.busy != 0) {
    delay_us(1);
  }
  _savestate_file.buffer = __ptr;
  _savestate_file.buffer_ptr = __ptr;
  if (snapshot_only == 0) {
    __printf_chk(1,"Loading state %s\n",path);
    _savestate_file.memory_file = (u8 *)snapshot_only;
    _savestate_file._file = (FILE *)fopen(path,"rb");
    if (_savestate_file._file == (FILE *)0x0) {
      __printf_chk(1,"Error: savestate %s does not exist\n",path);
      audio_revert_pause_state(&audio_00->audio,0);
      goto LAB_080954bc;
    }
  }
  else {
    _savestate_file.memory_file = (u8 *)0x0;
    _savestate_file._file = (FILE *)fopen(path,"rb");
    if (_savestate_file._file == (FILE *)0x0) {
      __printf_chk(1,"Error: savestate %s does not exist\n",path);
LAB_080954bc:
      sVar10 = -1;
      free(__ptr);
      goto LAB_08095298;
    }
  }
  sVar6 = fread(__ptr,0x40,1,(FILE *)_savestate_file._file);
  if (sVar6 == 0) {
invalid:
    sVar10 = -1;
    puts(" ERROR: Savestate load failed.");
    fclose((FILE *)_savestate_file._file);
    free(__ptr);
    if (snapshot_only != 0) goto LAB_08095298;
  }
  else {
    savestate_header.magic_string._4_4_ = *(undefined4 *)(_savestate_file.buffer_ptr + 4);
    savestate_header.magic_string._8_4_ = *(undefined4 *)(_savestate_file.buffer_ptr + 8);
    savestate_header.magic_string._0_4_ = *(undefined4 *)_savestate_file.buffer_ptr;
    uVar11 = *(uint *)(_savestate_file.buffer_ptr + 0x24);
    savestate_header.magic_string._16_4_ = *(undefined4 *)(_savestate_file.buffer_ptr + 0x10);
    savestate_header.magic_string._20_4_ = *(undefined4 *)(_savestate_file.buffer_ptr + 0x14);
    savestate_header.magic_string._12_4_ = *(undefined4 *)(_savestate_file.buffer_ptr + 0xc);
    savestate_header.magic_string._28_4_ = *(undefined4 *)(_savestate_file.buffer_ptr + 0x1c);
    savestate_header.version = *(u32 *)(_savestate_file.buffer_ptr + 0x20);
    savestate_header.magic_string._24_4_ = *(undefined4 *)(_savestate_file.buffer_ptr + 0x18);
    savestate_header.snapshot_format = *(u32 *)(_savestate_file.buffer_ptr + 0x28);
    savestate_header.time_total_seconds = *(u32 *)(_savestate_file.buffer_ptr + 0x2c);
    savestate_header.crc32 = *(u32 *)(_savestate_file.buffer_ptr + 0x30);
    savestate_header.gamecard_code = *(u32 *)(_savestate_file.buffer_ptr + 0x34);
    savestate_header.drastic_version = *(u32 *)(_savestate_file.buffer_ptr + 0x38);
    savestate_header.reserved = *(u8 (*) [4])(_savestate_file.buffer_ptr + 0x3c);
    _savestate_file.buffer_ptr = _savestate_file.buffer_ptr + 0x40;
    savestate_header.extensions = uVar11;
    iVar7 = memcmp(&savestate_header,"DraStic-SaveState---------------",0x20);
    if (iVar7 != 0) goto invalid;
    sVar10 = 0;
    if (snapshot_only == 1 && (uVar11 & 2) == 0) {
LAB_080956b4:
      fclose((FILE *)_savestate_file._file);
      free(__ptr);
      goto LAB_08095298;
    }
    if ((uVar11 & 1) == 0) {
      __off = ftell((FILE *)_savestate_file._file);
      fseek((FILE *)_savestate_file._file,0,2);
      lVar8 = ftell((FILE *)_savestate_file._file);
      fseek((FILE *)_savestate_file._file,__off,0);
      sVar6 = fread(_savestate_file.buffer_ptr,lVar8 - __off,1,(FILE *)_savestate_file._file);
      puVar4 = _savestate_file.buffer;
      puVar5 = _savestate_file.buffer_ptr;
      if (sVar6 != 0) goto LAB_08095528;
      goto invalid;
    }
    if (snapshot_only == 0) {
      uncompressed_length = 0x680000;
    }
    else {
      uncompressed_length = 0x30000;
    }
    sVar6 = fread(&compressed_length,4,1,(FILE *)_savestate_file._file);
    uVar3 = compressed_length;
    if (sVar6 == 0) goto invalid;
    __ptr_00 = malloc(compressed_length);
    sVar6 = fread(__ptr_00,uVar3,1,(FILE *)_savestate_file._file);
    if (sVar6 == 0) {
      free(__ptr_00);
      goto invalid;
    }
    iVar7 = uncompress(__ptr,&uncompressed_length,__ptr_00,compressed_length);
    free(__ptr_00);
    puVar4 = __ptr;
    puVar5 = __ptr;
    if (iVar7 == 0) {
      if (snapshot_only == 0) {
        __printf_chk(1," Uncompressed savestate from %d to %d bytes.\n",compressed_length,
                     uncompressed_length);
      }
    }
    else if (iVar7 != -5 || snapshot_only != 1) goto invalid;
LAB_08095528:
    _savestate_file.buffer_ptr = puVar5;
    _savestate_file.buffer = puVar4;
    puVar4 = _savestate_file.buffer_ptr;
    if ((uVar11 & 2) != 0) {
      if (snapshot_top == (u16 *)0x0 || snapshot_bottom == (u16 *)0x0) {
        _savestate_file.buffer_ptr = _savestate_file.buffer_ptr + 0x30000;
      }
      else {
        memcpy(snapshot_top,_savestate_file.buffer_ptr,0x18000);
        memcpy(snapshot_bottom,puVar4 + 0x18000,0x18000);
        _savestate_file.buffer_ptr = puVar4 + 0x30000;
      }
    }
    if (snapshot_only != 0) goto LAB_080956b4;
    uVar1 = uVar11 >> 2;
    bVar12 = (system->memory).custom_bios_loaded;
    uVar9 = uVar1 & 3 ^ (uint)bVar12;
    __printf_chk(1,"custom BIOS in savestate: %x, current: %x, change: %x\n",uVar1 & 3,(uint)bVar12,
                 uVar9);
    if (uVar9 == 0) {
LAB_08095664:
      uVar3 = savestate_header.version;
      if ((uVar11 & 0x10) != 0) {
        backup_data_load_savestate
                  (&(system->gamecard).backup,&_savestate_file,savestate_header.version);
      }
      system_load_savestate(system,&_savestate_file,uVar3);
      fclose((FILE *)_savestate_file._file);
      free(__ptr);
      audio_revert_pause_state(&audio_00->audio,0);
      audio_sync_start(audio_00);
      audio_sync_end(audio_00);
      goto LAB_08095298;
    }
    if ((uVar9 & 2) == 0) {
LAB_080955f8:
      if ((uVar9 & 1) != 0) {
        if ((uVar1 & 1) == 0) {
          bVar12 = bVar12 & 0xfe;
          puts(" Switching from custom ARM7 BIOS to NDS ARM7 BIOS.");
          iVar7 = load_system_file(system,"nds_bios_arm7.bin",(system->memory).arm7_bios,0x4000);
        }
        else {
          bVar12 = bVar12 | 1;
          puts(" Switching from NDS ARM7 BIOS to custom ARM7 BIOS.");
          iVar7 = load_system_file(system,"drastic_bios_arm7.bin",(system->memory).arm7_bios,0x4000)
          ;
        }
        if (iVar7 < 0) {
          puts("Error: Couldn\'t switch ARM7 BIOS for savestate.");
          goto LAB_0809542c;
        }
      }
      fflush(stdout);
      (system->memory).custom_bios_loaded = bVar12;
      uVar11 = savestate_header.extensions;
      goto LAB_08095664;
    }
    if ((uVar1 & 2) == 0) {
      bVar12 = bVar12 & 0xfd;
      puts(" Switching from custom ARM9 BIOS to NDS ARM9 BIOS.");
      iVar7 = load_system_file(system,"nds_bios_arm9.bin",(system->memory).arm9_bios,0x1000);
    }
    else {
      bVar12 = bVar12 | 2;
      puts(" Switching from NDS ARM9 BIOS to custom ARM9 BIOS.");
      iVar7 = load_system_file(system,"drastic_bios_arm9.bin",(system->memory).arm9_bios,0x1000);
    }
    if (-1 < iVar7) {
      fflush(stdout);
      goto LAB_080955f8;
    }
    puts("Error: Couldn\'t switch ARM9 BIOS for savestate.");
LAB_0809542c:
    sVar10 = -2;
    puts(" ERROR: Savestate load failed.");
    fclose((FILE *)_savestate_file._file);
    free(__ptr);
  }
  audio_revert_pause_state(&audio_00->audio,0);
LAB_08095298:
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar10;
}


