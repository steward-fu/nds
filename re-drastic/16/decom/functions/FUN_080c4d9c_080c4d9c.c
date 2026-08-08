/*
 * Ghidra decompilation
 *
 * Function : FUN_080c4d9c
 * Address  : 080c4d9c
 * Program  : drastic16
 */


void FUN_080c4d9c(int param_1,undefined4 param_2)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  *(undefined *)(param_1 + 0xa6c) = 1;
  *(undefined4 *)(param_1 + 0x660) = param_2;
  FUN_080c4a20(param_1);
  *(undefined *)(param_1 + 0x86c) = 0;
  *(undefined *)(param_1 + 0x86d) = 2;
  memset((void *)(param_1 + 0x86e),4,9);
  memset((void *)(param_1 + 0x877),6,0xf5);
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    *(char *)(param_1 + local_c + 0x76c) = (char)local_c;
  }
  local_14 = local_c;
  local_18 = 1;
  local_10 = 1;
  for (; local_c < 0x100; local_c = local_c + 1) {
    *(char *)(param_1 + local_c + 0x76c) = (char)local_14;
    local_10 = local_10 + -1;
    if (local_10 == 0) {
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
      local_10 = local_18;
    }
  }
  memset((void *)(param_1 + 0x96c),0,0x40);
  memset((void *)(param_1 + 0x9ac),8,0xc0);
  *(undefined *)(param_1 + 0x642) = 7;
  return;
}


