/*
 * Ghidra decompilation
 *
 * Function : FUN_080097b4
 * Address  : 080097b4
 * Program  : drastic16
 */


void FUN_080097b4(int param_1,int param_2,size_t param_3,undefined4 param_4)

{
  size_t __pgoff;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xfc80c);
  __pgoff = __aeabi_uidiv(param_4,*(undefined4 *)(param_1 + 0xfc800));
  remap_file_pages((void *)(param_2 + iVar1),param_3,0,__pgoff,0);
  return;
}


