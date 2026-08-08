/*
 * Ghidra decompilation
 *
 * Function : unarchive_get_progress
 * Address  : 001a5a10
 * Program  : drastic64
 */


ulong unarchive_get_progress(void)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (g_current_unpack_size != 0) {
    uVar1 = 0;
    if (g_current_unpack_size != 0) {
      uVar1 = (ulong)(g_current_unpack_done * 100) / g_current_unpack_size;
    }
  }
  return uVar1;
}


