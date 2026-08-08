/*
 * Ghidra decompilation
 *
 * Function : compare_game_entry_crc32
 * Address  : 00172a10
 * Program  : drastic64
 */


undefined4 compare_game_entry_crc32(long *param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(uint *)(*param_2 + 0x1c) < *(uint *)(*param_1 + 0x1c)) {
    uVar1 = 1;
  }
  if (*(uint *)(*param_1 + 0x1c) == *(uint *)(*param_2 + 0x1c)) {
    uVar1 = 0;
  }
  return uVar1;
}


