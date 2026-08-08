/*
 * Ghidra decompilation
 *
 * Function : initialize_input
 * Address  : 080a6ca4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_input(input_struct *input,system_struct *system)

{
  input->system = system;
  input->log_file = (FILE *)0x0;
  input->log_mode = '\0';
  platform_initialize_input();
  return;
}


