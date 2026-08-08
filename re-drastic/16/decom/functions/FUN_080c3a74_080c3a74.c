/*
 * Ghidra decompilation
 *
 * Function : FUN_080c3a74
 * Address  : 080c3a74
 * Program  : drastic16
 */


int FUN_080c3a74(int param_1)

{
  if (*(int *)(param_1 + 0x2004) != 0) {
    closedir(*(DIR **)(param_1 + 0x2004));
  }
  return param_1;
}


