/*
 * Ghidra decompilation
 *
 * Function : initialize_gamecard
 * Address  : 001709a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_gamecard(long param_1,long param_2)

{
  undefined auStack_428 [1056];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __sprintf_chk(auStack_428,1,0x420,"%s%cgame_database.xml",param_2 + 0x8a780,0x2f);
  initialize_game_database(param_1,auStack_428);
  __sprintf_chk(auStack_428,1,0x420,"%s%cusrcheat.dat",param_2 + 0x8ab80,0x2f);
  load_cheat_directory(param_1 + 0x28,auStack_428);
  *(undefined *)(param_1 + 0x8e9) = 0xff;
  *(undefined2 *)(param_1 + 0x8f8) = 0xf00f;
  *(long *)(param_1 + 0x900) = param_2 + 0x855a8;
  *(long *)(param_1 + 0x918) = param_2;
  *(undefined8 *)(param_1 + 0x920) = 0;
  *(long *)(param_1 + 0x928) = param_2 + 0x35ef9a0;
  *(undefined4 *)(param_1 + 0x93c) = 0xffffffff;
  *(long *)(param_1 + 0x948) = param_2 + 0x36d1bc8;
  *(long *)(param_1 + 0x950) = param_2 + 0x36d1c78;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


