/*
 * Ghidra decompilation
 *
 * Function : initialize_system_directories
 * Address  : 0010f780
 * Program  : drastic64
 */


void initialize_system_directories(undefined8 param_1)

{
  initialize_system_directory(param_1,"backup");
  initialize_system_directory(param_1,"savestates");
  initialize_system_directory(param_1,"config");
  initialize_system_directory(param_1,"profiles");
  initialize_system_directory(param_1,"unzip_cache");
  initialize_system_directory(param_1,"system");
  initialize_system_directory(param_1,"input_record");
  initialize_system_directory(param_1,"cheats");
  initialize_system_directory(param_1,"slot2");
  initialize_system_directory(param_1,"microphone");
  initialize_system_directory(param_1,"scripts");
  return;
}


