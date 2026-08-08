/*
 * Ghidra decompilation
 *
 * Function : step_debug_arm_metadata
 * Address  : 00185fc0
 * Program  : drastic64
 */


void step_debug_arm_metadata(undefined4 *param_1,long param_2)

{
  if ((*(char *)(param_2 + 0x2249) == '\x04') && (*(long *)(param_2 + 0x2228) != 1)) {
    *(long *)(param_2 + 0x2220) = *(long *)(param_2 + 0x2220) + 1;
    *(long *)(param_2 + 0x2228) = *(long *)(param_2 + 0x2228) + -1;
    return;
  }
  _metadata_ptr = param_1;
  step_debug(param_2 + 0x2118,*param_1,*(undefined4 *)(param_2 + 0x2318));
  return;
}


