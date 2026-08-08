/*
 * Ghidra decompilation
 *
 * Function : initialize_system_directory
 * Address  : 080070ec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_system_directory(system_struct *system,char *path)

{
  int iVar1;
  int iVar2;
  stat stat_buffer;
  char path_name [1024];
  
  iVar1 = __stack_chk_guard;
  __snprintf_chk(path_name,0x400,1,0x400,"%s%c%s",system->root_path,0x2f,path);
  __printf_chk(1,"Checking directory %s: ",path_name);
  iVar2 = __xstat(3,path_name,(stat *)&stat_buffer);
  if (iVar2 == 0) {
    puts("It\'s there.");
  }
  else {
    puts("Doesn\'t exist, creating.");
    mkdir(path_name,0x1ed);
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


