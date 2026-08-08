/*
 * Ghidra decompilation
 *
 * Function : FUN_08009808
 * Address  : 08009808
 * Program  : drastic16
 */


void FUN_08009808(int param_1,void *param_2,size_t param_3,undefined4 param_4)

{
  size_t __pgoff;
  
  __pgoff = __aeabi_uidiv(param_4,*(undefined4 *)(param_1 + 0xfc800));
  remap_file_pages(param_2,param_3,0,__pgoff,0);
  return;
}


