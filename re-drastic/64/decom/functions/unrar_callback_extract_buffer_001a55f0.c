/*
 * Ghidra decompilation
 *
 * Function : unrar_callback_extract_buffer
 * Address  : 001a55f0
 * Program  : drastic64
 */


undefined8 unrar_callback_extract_buffer(int param_1,void **param_2,void *param_3,size_t param_4)

{
  if (param_1 != 1) {
    return 0;
  }
  g_current_unpack_done = g_current_unpack_done + param_4;
  memcpy(*param_2,param_3,param_4);
  *param_2 = (void *)((long)*param_2 + param_4);
  return 1;
}


