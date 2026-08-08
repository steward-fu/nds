/*
 * Ghidra decompilation
 *
 * Function : unrar_callback_extract_file
 * Address  : 001a5660
 * Program  : drastic64
 */


undefined8 unrar_callback_extract_file(int param_1,FILE *param_2,void *param_3,size_t param_4)

{
  if (param_1 != 1) {
    return 0;
  }
  g_current_unpack_done = g_current_unpack_done + param_4;
  fwrite(param_3,1,param_4,param_2);
  return 1;
}


