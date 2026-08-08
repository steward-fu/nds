/*
 * Ghidra decompilation
 *
 * Function : initialize_system_directories
 * Address  : 080071b8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_system_directories(system_struct *system)

{
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
  return;
}


