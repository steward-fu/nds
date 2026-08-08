/*
 * Ghidra decompilation
 *
 * Function : nds_file_close
 * Address  : 00175d00
 * Program  : drastic64
 */


void nds_file_close(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 7) == '\0') {
    free(*(void **)(param_1 + 2));
    free(param_1);
    return;
  }
  munmap(*(void **)(param_1 + 2),(ulong)(uint)param_1[5]);
  close(*param_1);
  free(param_1);
  return;
}


