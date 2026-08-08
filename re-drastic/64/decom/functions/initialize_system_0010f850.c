/*
 * Ghidra decompilation
 *
 * Function : initialize_system
 * Address  : 0010f850
 * Program  : drastic64
 */


void initialize_system(long param_1)

{
  int iVar1;
  char *pcVar2;
  
  initialize_lua();
  platform_initialize(param_1);
  pcVar2 = getcwd((char *)(param_1 + 0x8a780),0x400);
  if (pcVar2 == (char *)0x0) {
    puts("getcwd for root path failed.");
  }
  __strcpy_chk(param_1 + 0x8ab80,(char *)(param_1 + 0x8a780),0x400);
  initialize_system_directories(param_1);
  config_default(param_1 + 0x855a8);
  load_directory_config_file(param_1,"drastic.cf2");
  load_config_file(param_1,"drastic.cfg",0);
  initialize_cpu(param_1 + 0x15c7d50,param_1,1,param_1 + 0x25ce340);
  initialize_cpu(param_1 + 0x25ce340,param_1,0,param_1 + 0x15c7d50);
  initialize_translation_cache(param_1 + 0x8c000);
  initialize_input(param_1 + 0x5550,param_1);
  iVar1 = initialize_memory(param_1 + 0x35d4930,param_1);
  if (-1 < iVar1) {
    initialize_video(param_1 + 0x36d1ec0,param_1 + 0x35d4930);
    initialize_spu(param_1 + 0x1587000,param_1);
    initialize_gamecard(param_1 + 800,param_1);
    initialize_spi_peripherals(param_1 + 0x30d0,param_1);
    initialize_rtc(param_1 + 0x5528,param_1);
    initialize_event_list(param_1 + 0x18,param_1);
    *(undefined2 *)(nds_system + param_1 + 0x362e9a8) = 0x2001;
    *(undefined4 *)(param_1 + 0x8a368) = 0;
    *(undefined *)(param_1 + 0x8af80) = 0;
    *(undefined *)(param_1 + 0x8b380) = 0;
    *(undefined4 *)(param_1 + 0x8a378) = 0;
    return;
  }
  menu_bios_warning(param_1);
  puts("FATAL: Could not load system files.");
                    /* WARNING: Subroutine does not return */
  quit(param_1);
}


