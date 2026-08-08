/*
 * Ghidra decompilation
 *
 * Function : FUN_080c296c
 * Address  : 080c296c
 * Program  : drastic16
 */


byte FUN_080c296c(undefined4 param_1,int param_2)

{
  bool local_9;
  
  if (*(int *)(param_2 + 0x10e98) == 3) {
    local_9 = *(char *)(param_2 + 0x8449) != '\0';
  }
  else if ((*(byte *)(param_2 + 0x8449) < 0xd) || (0x1d < *(byte *)(param_2 + 0x8449))) {
    local_9 = true;
  }
  else {
    local_9 = false;
  }
  if (*(char *)(param_2 + 0x844a) == '\0') {
    local_9 = false;
  }
  return local_9 ^ 1;
}


