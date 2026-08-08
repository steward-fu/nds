/*
 * Ghidra decompilation
 *
 * Function : select_restart
 * Address  : 001796a0
 * Program  : drastic64
 */


void select_restart(long *param_1)

{
  if (*(char *)(*param_1 + 0x8b380) != '\0') {
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
    *(undefined8 *)((long)param_1 + 0x44) = 0x100000001;
  }
  return;
}


