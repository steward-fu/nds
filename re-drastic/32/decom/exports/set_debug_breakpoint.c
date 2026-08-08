/*
 * Ghidra decompilation
 *
 * Function : set_debug_breakpoint
 * Address  : 08006bc0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void set_debug_breakpoint
               (system_struct *system,debug_struct *debug,debug_mode_enum debug_mode,
               char *breakpoint_string)

{
  ulonglong uVar1;
  
  set_debug_mode(debug,debug_mode);
  if (breakpoint_string != (char *)0x0) {
    uVar1 = strtoull(breakpoint_string,(char **)0x0,0x10);
    debug->breakpoint = uVar1;
  }
  return;
}


