/*
 * Ghidra decompilation
 *
 * Function : load_directory_config_file
 * Address  : 08097b98
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 load_directory_config_file(system_struct *system,char *file_name)

{
  int iVar1;
  FILE *__stream;
  FILE *config_file;
  int iVar2;
  char *__path;
  s32 sVar3;
  config_header_struct config_header;
  char path [1024];
  
  iVar1 = __stack_chk_guard;
  __sprintf_chk(path,1,0x400,"%s%cconfig%c%s",system->user_root_path,0x2f,0x2f,file_name);
  __printf_chk(1,"Loading directory config file %s\n",path);
  __stream = fopen(path,"rb");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"Directory config file %s does not exist.\n",path);
    sVar3 = -1;
    goto LAB_08097ce4;
  }
  fread(&config_header,4,1,__stream);
  fread(&config_header.version,4,1,__stream);
  fread(config_header.reserved,8,1,__stream);
  iVar2 = strncmp(config_header.magic_string,"DSC2",4);
  if ((iVar2 == 0) && (config_header.version < 3)) {
    __path = (system->config).rom_directory;
    fread(__path,0x400,1,__stream);
    if (1 < config_header.version) {
      fread(&(system->config).file_list_display_type,4,1,__stream);
    }
    iVar2 = chdir(__path);
    sVar3 = 0;
    if (iVar2 < 0) goto invalid;
  }
  else {
invalid:
    sVar3 = -1;
    puts("ERROR: Directory config file could not be loaded.");
  }
  fclose(__stream);
LAB_08097ce4:
  if (iVar1 == __stack_chk_guard) {
    return sVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


