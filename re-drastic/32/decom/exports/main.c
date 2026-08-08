/*
 * Ghidra decompilation
 *
 * Function : main
 * Address  : 08007ea4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  s32 sVar1;
  char *file_name;
  char *gamecard_path;
  
  __printf_chk(1,"Starting DraStic (version %s)\n\n","r2.5.0.4");
  nds_system.memory.memory_map_offset = 0;
  initialize_system(&nds_system);
  process_arguments(&nds_system,argc,argv);
  initialize_screen((uint)nds_system.color_depth);
  if (argc < 2) {
    menu(&nds_system,1);
  }
  else {
    file_name = argv[argc + 0x3fffffff];
    __printf_chk(1,"Loading gamecard file %s.\n",file_name);
    sVar1 = load_nds(&nds_system.gamecard,file_name);
    if (sVar1 != 0) {
      puts("Gamecard load failed.");
      return -1;
    }
    set_screen_menu_off();
    reset_system(&nds_system);
  }
  _setjmp((__jmp_buf_tag *)nds_system.reset_jmp);
  if (nds_system.use_recompiler == '\0') {
    cpu_next_action_arm7_to_event_update(&nds_system);
  }
  else {
    __printf_chk(1,"Calling recompiler event update handler (@ %p).\n",
                 nds_system.cpu_arm9.block_resume_ptr);
    recompiler_entry(&nds_system);
  }
  return 0;
}


