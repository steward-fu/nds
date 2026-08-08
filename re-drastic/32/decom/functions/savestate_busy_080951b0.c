/*
 * Ghidra decompilation
 *
 * Function : savestate_busy
 * Address  : 080951b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 savestate_busy(void)

{
  return savestate_thread_data.busy;
}


