/*
 * Ghidra decompilation
 *
 * Function : select_save_state
 * Address  : 0017a230
 * Program  : drastic64
 */


void select_save_state(long *param_1)

{
  if (*(char *)(*param_1 + 0x8b380) == '\0') {
    return;
  }
  save_state_index(*param_1,*(undefined4 *)(param_1[1] + 0x458),param_1[5],param_1[6]);
  return;
}


