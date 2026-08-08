/*
 * Ghidra decompilation
 *
 * Function : compare_game_entry_game_code
 * Address  : 00172a40
 * Program  : drastic64
 */


undefined4 compare_game_entry_game_code(long *param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(uint *)(*param_2 + 0x24) < *(uint *)(*param_1 + 0x24)) {
    uVar1 = 1;
  }
  if (*(uint *)(*param_1 + 0x24) == *(uint *)(*param_2 + 0x24)) {
    uVar1 = 0;
  }
  return uVar1;
}


