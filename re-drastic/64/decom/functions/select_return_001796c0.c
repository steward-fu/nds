/*
 * Ghidra decompilation
 *
 * Function : select_return
 * Address  : 001796c0
 * Program  : drastic64
 */


void select_return(long *param_1)

{
  if (*(char *)(*param_1 + 0x8b380) != '\0') {
    *(undefined4 *)(param_1 + 9) = 1;
  }
  return;
}


