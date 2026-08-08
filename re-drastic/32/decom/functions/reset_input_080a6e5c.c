/*
 * Ghidra decompilation
 *
 * Function : reset_input
 * Address  : 080a6e5c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_input(input_struct *input)

{
  int iVar1;
  int iVar2;
  system_struct *system;
  stat file_info;
  char input_log_path [1024];
  
  iVar1 = __stack_chk_guard;
  __sprintf_chk(input_log_path,1,0x400,"%s%cinput_record%c%s.ir",input->system->root_path,0x2f,0x2f,
                input->system->gamecard_name);
  iVar2 = __xstat(3,input_log_path,(stat *)&file_info);
  if (iVar2 == 0) {
    input_log_playback(input,input_log_path);
  }
  input->capture_ptr = input->capture_buffer;
  input->button_status = 0;
  input->touch_x = 0;
  input->touch_y = 0;
  input->touch_status = '\0';
  input->touch_pressure = '\0';
  platform_initialize_input();
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


