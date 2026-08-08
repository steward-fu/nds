/*
 * Ghidra decompilation
 *
 * Function : gamecard_database_entry_for_file
 * Address  : 0016fc80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gamecard_database_entry_for_file(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined auStack_21c [4];
  char acStack_218 [12];
  undefined local_20c;
  char acStack_208 [12];
  undefined4 local_1fc;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = nds_file_read_to_memory_partial(param_2,auStack_21c,acStack_208,0x20,0);
  uVar2 = 0;
  if (-1 < iVar1) {
    pcVar3 = strncpy(acStack_218,acStack_208,0xc);
    local_20c = 0;
    uVar2 = game_database_lookup_by_game_code(param_1,local_1fc,pcVar3);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,local_8 - ___stack_chk_guard,0);
}


