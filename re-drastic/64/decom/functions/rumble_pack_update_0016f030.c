/*
 * Ghidra decompilation
 *
 * Function : rumble_pack_update
 * Address  : 0016f030
 * Program  : drastic64
 */


undefined8 rumble_pack_update(long param_1)

{
  if (*(char *)(param_1 + 9) != '\0') {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + -1;
    return 1;
  }
  return 0;
}


