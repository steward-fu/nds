/*
 * Ghidra decompilation
 *
 * Function : unzip_in_func
 * Address  : 080c6d3c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar_t unzip_in_func(void *userdata,u8 **input_buffer)

{
  UnzipUserdata *zip_data;
  int __fd;
  wchar_t wVar1;
  
  __fd = *(int *)((int)userdata + 8);
  *input_buffer = *(u8 **)((int)userdata + 4);
  wVar1 = read(__fd,*(void **)((int)userdata + 4),0x200);
  return wVar1;
}


