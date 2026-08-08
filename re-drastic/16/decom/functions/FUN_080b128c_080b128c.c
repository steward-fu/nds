/*
 * Ghidra decompilation
 *
 * Function : FUN_080b128c
 * Address  : 080b128c
 * Program  : drastic16
 */


void FUN_080b128c(int param_1,char *param_2,int param_3)

{
  int local_14;
  char *local_10;
  
  local_14 = param_3;
  local_10 = param_2;
  while (local_14 != 0) {
    *(char *)(param_1 + 0xffd) = *(char *)(param_1 + 0xffd) + *(char *)(param_1 + 0xffe);
    *(char *)(param_1 + 0xffc) = *(char *)(param_1 + 0xffc) + *(char *)(param_1 + 0xffd);
    *local_10 = *local_10 - *(char *)(param_1 + 0xffc);
    local_10 = local_10 + 1;
    local_14 = local_14 + -1;
  }
  return;
}


