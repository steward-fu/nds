/*
 * Ghidra decompilation
 *
 * Function : compare_cheat_entry_game_code
 * Address  : 001802e0
 * Program  : drastic64
 */


undefined4 compare_cheat_entry_game_code(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_2 < *param_1) {
    uVar1 = 1;
  }
  if (*param_1 == *param_2) {
    uVar1 = 0;
  }
  return uVar1;
}


