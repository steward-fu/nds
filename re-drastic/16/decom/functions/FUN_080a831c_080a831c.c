/*
 * Ghidra decompilation
 *
 * Function : FUN_080a831c
 * Address  : 080a831c
 * Program  : drastic16
 */


int FUN_080a831c(int param_1,int param_2)

{
  int local_10;
  
  local_10 = param_2;
  if (*(char *)(param_1 + 0x10ea4) != '\0') {
    param_2 = param_2 + (-param_2 & 0xfU);
    if (*(int *)(param_1 + 0x10e98) == 3) {
      local_10 = param_2 + 0x10;
    }
    else {
      local_10 = param_2 + 8;
    }
  }
  return local_10;
}


