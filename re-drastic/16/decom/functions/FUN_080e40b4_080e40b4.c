/*
 * Ghidra decompilation
 *
 * Function : FUN_080e40b4
 * Address  : 080e40b4
 * Program  : drastic16
 */


void FUN_080e40b4(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint __n;
  uint local_1c;
  void *local_18;
  
  local_1c = param_3;
  local_18 = param_2;
  while (local_1c != 0) {
    iVar1 = *(int *)(param_1 + 0x100);
    __n = 0x80 - iVar1;
    if (__n < local_1c) {
      memcpy((void *)(*(int *)(param_1 + 0xf0) + iVar1),local_18,__n);
      *(uint *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + __n;
      FUN_080e32f0(param_1,0x40);
      FUN_080e3490(param_1,*(undefined4 *)(param_1 + 0xf0));
      memcpy(*(void **)(param_1 + 0xf0),(void *)(*(int *)(param_1 + 0xf0) + 0x40),0x40);
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -0x40;
      local_18 = (void *)((int)local_18 + __n);
      local_1c = local_1c - __n;
    }
    else {
      memcpy((void *)(*(int *)(param_1 + 0xf0) + iVar1),local_18,local_1c);
      *(uint *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + local_1c;
      local_18 = (void *)((int)local_18 + local_1c);
      local_1c = 0;
    }
  }
  return;
}


