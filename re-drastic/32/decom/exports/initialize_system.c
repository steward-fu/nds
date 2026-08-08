/*
 * Ghidra decompilation
 *
 * Function : initialize_system
 * Address  : 0800726c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_system(system_struct *system)

{
  char *pcVar1;
  s32 sVar2;
  
  initialize_lua(system);
  platform_initialize(system);
  pcVar1 = getcwd(system->root_path,0x400);
  if (pcVar1 == (char *)0x0) {
    puts("getcwd for root path failed.");
  }
  __strcpy_chk(system->user_root_path,system->root_path,0x400);
  initialize_system_directory(system,"backup");
  initialize_system_directory(system,"savestates");
  initialize_system_directory(system,"config");
  initialize_system_directory(system,"profiles");
  initialize_system_directory(system,"unzip_cache");
  initialize_system_directory(system,"system");
  initialize_system_directory(system,"input_record");
  initialize_system_directory(system,"cheats");
  initialize_system_directory(system,"slot2");
  initialize_system_directory(system,"scripts");
  config_default(&system->config);
  load_directory_config_file(system,"drastic.cf2");
  load_config_file(system,"drastic.cfg",0);
  initialize_cpu(&system->cpu_arm9,system,ARM_CPU_TYPE_v5,&system->cpu_arm7);
  initialize_cpu(&system->cpu_arm7,system,ARM_CPU_TYPE_v4,&system->cpu_arm9);
  initialize_translation_cache(&system->translation_cache);
  initialize_input(&system->input,system);
  sVar2 = initialize_memory(&system->memory,system);
  if (-1 < sVar2) {
    initialize_video(&system->video,&system->memory);
    initialize_spu(&system->spu,system);
    initialize_gamecard(&system->gamecard,system);
    initialize_spi_peripherals(&system->spi_peripherals,system);
    initialize_rtc(&system->rtc,system);
    initialize_event_list(&system->event_list,system);
    system->use_recompiler = '\x01';
    system->color_depth = ' ';
    (system->benchmark).phases_active = 0;
    system->gamecard_filename[0] = '\0';
    system->gamecard_name[0] = '\0';
    (system->benchmark).active = 0;
    return;
  }
  menu_bios_warning(system);
  puts("FATAL: Could not load system files.");
                    /* WARNING: Subroutine does not return */
  quit(system);
}


