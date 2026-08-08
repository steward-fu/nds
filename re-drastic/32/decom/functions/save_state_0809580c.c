/*
 * Ghidra decompilation
 *
 * Function : save_state
 * Address  : 0809580c
 * Program  : drastic
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

s32 save_state(system_struct *system,char *directory,char *file_name,u16 *snapshot_top,
              u16 *snapshot_bottom)

{
  int iVar1;
  undefined8 *__ptr;
  u8 *savestate_buffer;
  undefined4 uVar2;
  s32 sVar3;
  u32 uVar4;
  uint uVar5;
  uint uVar6;
  u8 *puVar7;
  uint uVar8;
  mem_file_struct _savestate_file;
  savestate_header_struct savestate_header;
  char path [1152];
  
  iVar1 = __stack_chk_guard;
  __ptr = (undefined8 *)malloc(0x680000);
  __sprintf_chk(path,1,0x480,"%s%c%s",directory,0x2f,"_savestate_temp.dss");
  __printf_chk(1,"Saving state to %s.\n",path);
  _savestate_file._file = (FILE *)fopen(path,"wb");
  _savestate_file.buffer = (u8 *)__ptr;
  _savestate_file.buffer_ptr = (u8 *)__ptr;
  if (_savestate_file._file == (FILE *)0x0) {
    __printf_chk(1,"Error: could not open %s.\n",path);
    free(__ptr);
    sVar3 = -1;
  }
  else {
    uVar8 = (system->config).compress_savestates;
    if (uVar8 != 0) {
      uVar8 = 1;
    }
    if (((system->config).savestate_snapshot != 0) &&
       (snapshot_top != (u16 *)0x0 && snapshot_bottom != (u16 *)0x0)) {
      uVar8 = uVar8 | 2;
    }
    if (((system->config).backup_in_savestates != 0) &&
       ((system->gamecard).backup.address_mask < 0x80000)) {
      uVar8 = uVar8 | 0x10;
    }
    uVar5 = uVar8 | (uint)(system->memory).custom_bios_loaded << 2;
    uVar6 = uVar5 | 0x20;
    uVar2 = __aeabi_uldivmod(*(undefined4 *)&system->frame_number,
                             *(undefined4 *)((int)&system->frame_number + 4),0x3c,0);
    uVar4 = (system->gamecard).game_code;
    _savestate_file.buffer_ptr = (u8 *)(__ptr + 8);
    *__ptr = 0x2d63697453617244;
    __ptr[1] = 0x7461745365766153;
    __ptr[2] = 0x2d2d2d2d2d2d2d65;
    __ptr[3] = 0x2d2d2d2d2d2d2d2d;
    *(undefined4 *)(__ptr + 4) = 0xd;
    *(uint *)((int)__ptr + 0x24) = uVar6;
    *(undefined4 *)(__ptr + 5) = 0;
    *(undefined4 *)((int)__ptr + 0x2c) = uVar2;
    *(u32 *)(__ptr + 6) = savestate_header.crc32;
    *(u32 *)((int)__ptr + 0x34) = uVar4;
    *(undefined4 *)(__ptr + 7) = 0x2050004;
    *(undefined4 *)((int)__ptr + 0x3c) = 0;
    if ((uVar8 & 2) != 0) {
      memcpy(_savestate_file.buffer_ptr,snapshot_top,0x18000);
      puVar7 = _savestate_file.buffer_ptr + 0x30000;
      memcpy(_savestate_file.buffer_ptr + 0x18000,snapshot_bottom,0x18000);
      _savestate_file.buffer_ptr = puVar7;
    }
    if ((uVar5 & 0x10) != 0) {
      backup_data_store_savestate(&(system->gamecard).backup,&_savestate_file,0xd);
    }
    system_store_savestate(system,&_savestate_file,0xd);
    if (savestate_thread_data.busy != 0) {
      puts("Can\'t savestate, busy saving old one, waiting..");
      while (savestate_thread_data.busy != 0) {
        delay_us(1);
      }
    }
    savestate_thread_data.file.memory_file = _savestate_file.memory_file;
    savestate_thread_data.file._file = _savestate_file._file;
    savestate_thread_data.busy = 1;
    savestate_thread_data.file.memory_file_size = _savestate_file.memory_file_size;
    savestate_thread_data.file.buffer = _savestate_file.buffer;
    savestate_thread_data.file.buffer_ptr = _savestate_file.buffer_ptr;
    savestate_thread_data.buffer = (u8 *)__ptr;
    savestate_thread_data.extensions = uVar6;
    strncpy(savestate_thread_data.directory,directory,0x400);
    strncpy(savestate_thread_data.file_name,file_name,0x400);
    pthread_create(&savestate_thread_data.thread,(pthread_attr_t *)0x0,save_state_thread_function,
                   &savestate_thread_data);
    sVar3 = 0;
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar3;
}


