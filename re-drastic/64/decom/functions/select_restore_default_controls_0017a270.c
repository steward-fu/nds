/*
 * Ghidra decompilation
 *
 * Function : select_restore_default_controls
 * Address  : 0017a270
 * Program  : drastic64
 */


void select_restore_default_controls(long param_1)

{
  platform_set_default_controls(*(long *)(param_1 + 8) + 0xccc,*(long *)(param_1 + 8) + 0xd1e);
  return;
}


