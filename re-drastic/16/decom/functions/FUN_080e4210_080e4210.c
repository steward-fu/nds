/*
 * Ghidra decompilation
 *
 * Function : FUN_080e4210
 * Address  : 080e4210
 * Program  : drastic16
 */


void FUN_080e4210(int param_1,int param_2)

{
  int local_c;
  
  if (0x40 < *(uint *)(param_1 + 0x100)) {
    FUN_080e32f0(param_1,0x40);
    FUN_080e3490(param_1,*(undefined4 *)(param_1 + 0xf0));
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -0x40;
    memcpy(*(void **)(param_1 + 0xf0),(void *)(*(int *)(param_1 + 0xf0) + 0x40),
           *(size_t *)(param_1 + 0x100));
  }
  FUN_080e32f0(param_1,*(undefined4 *)(param_1 + 0x100));
  FUN_080e32b0(param_1);
  memset((void *)(*(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0x100)),0,
         0x80 - *(int *)(param_1 + 0x100));
  FUN_080e3490(param_1,*(undefined4 *)(param_1 + 0xf0));
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    FUN_080b3d1c(*(undefined4 *)(*(int *)(param_1 + 0xf4) + local_c * 4),param_2 + local_c * 4);
  }
  return;
}


