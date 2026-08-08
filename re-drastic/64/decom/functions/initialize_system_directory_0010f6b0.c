/*
 * Ghidra decompilation
 *
 * Function : initialize_system_directory
 * Address  : 0010f6b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_system_directory(long param_1,undefined8 param_2)

{
  char *__filename;
  int iVar1;
  undefined auStack_4a8 [1184];
  long local_8;
  
  __filename = auStack_4a8 + 0x80;
  local_8 = ___stack_chk_guard;
  __snprintf_chk(__filename,0x420,1,0x420,"%s%c%s",param_1 + 0x8a780,0x2f,param_2);
  __printf_chk(1,"Checking directory %s: ",__filename);
  iVar1 = __xstat(0,__filename,(stat *)auStack_4a8);
  if (iVar1 == 0) {
    puts("It\'s there.");
  }
  else {
    puts("Doesn\'t exist, creating.");
    mkdir(__filename,0x1ed);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


