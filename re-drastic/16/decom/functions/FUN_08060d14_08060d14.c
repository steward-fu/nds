/*
 * Ghidra decompilation
 *
 * Function : FUN_08060d14
 * Address  : 08060d14
 * Program  : drastic16
 */


void FUN_08060d14(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 5) == '\0') {
    free((void *)param_1[1]);
    free(param_1);
    return;
  }
  munmap((void *)param_1[1],param_1[3]);
  close(*param_1);
  free(param_1);
  return;
}


