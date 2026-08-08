/*
 * Ghidra decompilation
 *
 * Function : unzip_out_func
 * Address  : 080c6c14
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable zip_data:UnzipUserdata *[r0:4] conflicts with parameter, skipped. */

int unzip_out_func(void *userdata,u8 *output_buffer,wchar_t bytes_processed)

{
  uint uVar1;
  u32 frame_end;
  u32 bytes_to_process;
  uint uVar2;
  uint __n;
  int iVar3;
  u32 frame_start;
  
  uVar2 = *(uint *)((int)userdata + 0x10);
  iVar3 = *(int *)((int)userdata + 0x14);
  uVar1 = iVar3 + bytes_processed;
  *(uint *)((int)userdata + 0x14) = uVar1;
  if (uVar1 < uVar2) {
    return (uint)(*(int *)((int)userdata + 0xc) == 0);
  }
                    /* WARNING: Load size is inaccurate */
  __n = *(uint *)((int)userdata + 0xc);
  if (uVar1 - uVar2 < *(uint *)((int)userdata + 0xc)) {
    __n = uVar1 - uVar2;
  }
  memcpy(*userdata,output_buffer + (uVar2 - iVar3),__n);
                    /* WARNING: Load size is inaccurate */
  iVar3 = *(int *)((int)userdata + 0xc) - __n;
  *(uint *)userdata = *userdata + __n;
  *(int *)((int)userdata + 0xc) = iVar3;
  *(uint *)((int)userdata + 0x10) = *(int *)((int)userdata + 0x10) + __n;
  return (uint)(iVar3 == 0);
}


