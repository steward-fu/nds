/*
 * Ghidra decompilation
 *
 * Function : unrar_callback_extract_file
 * Address  : 080c6dd0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int unrar_callback_extract_file(wchar_t msg,long file_handle,long rar_buffer,long bytes_processed)

{
  bool bVar1;
  
  if (msg != L'\x01') {
    return 0;
  }
  bVar1 = CARRY4((uint)g_current_unpack_done,bytes_processed);
  g_current_unpack_done._0_4_ = (uint)g_current_unpack_done + bytes_processed;
  g_current_unpack_done._4_4_ =
       g_current_unpack_done._4_4_ + (bytes_processed >> 0x1f) + (uint)bVar1;
  fwrite((void *)rar_buffer,1,bytes_processed,(FILE *)file_handle);
  return 1;
}


