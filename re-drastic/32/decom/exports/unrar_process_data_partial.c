/*
 * Ghidra decompilation
 *
 * Function : unrar_process_data_partial
 * Address  : 080c6cac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int unrar_process_data_partial(u8 *data,int size)

{
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  u32 frame_end;
  int iVar4;
  u32 frame_start;
  u32 bytes_to_process;
  uint __n;
  u8 *puVar5;
  
  uVar1 = unrar_userdata.start_offset;
  uVar2 = unrar_userdata.bytes_remaining;
  uVar3 = size + unrar_userdata.bytes_processed;
  if (unrar_userdata.start_offset <= uVar3) {
    iVar4 = unrar_userdata.start_offset - unrar_userdata.bytes_processed;
    __n = uVar3 - unrar_userdata.start_offset;
    if (unrar_userdata.bytes_remaining <= uVar3 - unrar_userdata.start_offset) {
      __n = unrar_userdata.bytes_remaining;
    }
    puVar5 = unrar_userdata.buffer_pos + __n;
    unrar_userdata.bytes_processed = uVar3;
    memcpy(unrar_userdata.buffer_pos,data + iVar4,__n);
    unrar_userdata.bytes_remaining = uVar2 - __n;
    unrar_userdata.start_offset = uVar1 + __n;
    unrar_userdata.buffer_pos = puVar5;
    uVar3 = unrar_userdata.bytes_processed;
  }
  unrar_userdata.bytes_processed = uVar3;
  uVar2 = unrar_userdata.bytes_remaining;
  if (unrar_userdata.bytes_remaining != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


