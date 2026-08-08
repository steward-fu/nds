/*
 * Ghidra decompilation
 *
 * Function : input_log_close
 * Address  : 00189000
 * Program  : drastic64
 */


FILE * input_log_close(long param_1)

{
  uint uVar1;
  FILE *__stream;
  
  __stream = (FILE *)(param_1 + 0x80000);
  if ((*(char *)(param_1 + 0x80050) == '\x01') &&
     (__stream = *(FILE **)(param_1 + 0x80048), __stream != (FILE *)0x0)) {
    uVar1 = fclose(__stream);
    return (FILE *)(ulong)uVar1;
  }
  return __stream;
}


