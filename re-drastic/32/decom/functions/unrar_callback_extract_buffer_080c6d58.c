/*
 * Ghidra decompilation
 *
 * Function : unrar_callback_extract_buffer
 * Address  : 080c6d58
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int unrar_callback_extract_buffer(wchar_t msg,long buffer_pos,long rar_buffer,long bytes_processed)

{
  u8 **pos;
  bool bVar1;
  
  if (msg != L'\x01') {
    return 0;
  }
  bVar1 = CARRY4((uint)g_current_unpack_done,bytes_processed);
  g_current_unpack_done._0_4_ = (uint)g_current_unpack_done + bytes_processed;
  g_current_unpack_done._4_4_ =
       g_current_unpack_done._4_4_ + (bytes_processed >> 0x1f) + (uint)bVar1;
  memcpy(*(void **)buffer_pos,(void *)rar_buffer,bytes_processed);
  *(int *)buffer_pos = *(int *)buffer_pos + bytes_processed;
  return 1;
}


