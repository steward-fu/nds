/*
 * Ghidra decompilation
 *
 * Function : select_load_state
 * Address  : 0017a1d0
 * Program  : drastic64
 */


void select_load_state(long *param_1)

{
  if (*(char *)(*param_1 + 0x8b380) == '\0') {
    return;
  }
  load_state_index(*param_1,*(undefined4 *)(param_1[1] + 0x458),0,0,0);
  *(undefined4 *)(param_1 + 9) = 1;
  return;
}


