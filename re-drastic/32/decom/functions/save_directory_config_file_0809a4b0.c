/*
 * Ghidra decompilation
 *
 * Function : save_directory_config_file
 * Address  : 0809a4b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 save_directory_config_file(system_struct *system,char *file_name)

{
  int iVar1;
  undefined4 *__ptr;
  u8 *config_file_buffer;
  FILE *__s;
  undefined4 local_42c;
  undefined4 uStack_428;
  char path [1024];
  
  iVar1 = __stack_chk_guard;
  __sprintf_chk(path,1,0x400,"%s%cconfig%c%s",system->user_root_path,0x2f,0x2f,file_name);
  __ptr = (undefined4 *)malloc(0x4000);
  __printf_chk(1,"Saving directory config to file named %s\n",path);
  __s = fopen(path,"wb");
  __ptr[1] = 2;
  *__ptr = 0x32435344;
  __ptr[2] = local_42c;
  __ptr[3] = uStack_428;
  memcpy(__ptr + 4,(system->config).rom_directory,0x400);
  __ptr[0x104] = (system->config).file_list_display_type;
  fwrite(__ptr,0x414,1,__s);
  fclose(__s);
  free(__ptr);
  if (iVar1 == __stack_chk_guard) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


