/*
 * Ghidra decompilation
 *
 * Function : FUN_080e18cc
 * Address  : 080e18cc
 * Program  : drastic16
 */


void FUN_080e18cc(int param_1,uint param_2,void *param_3,uint param_4)

{
  if ((param_2 < 0x40000) && ((void *)(*(int *)(param_1 + 0x10) + param_2) != param_3)) {
    if (0x40000 - param_2 < param_4) {
      param_4 = 0x40000 - param_2;
    }
    memmove((void *)(*(int *)(param_1 + 0x10) + param_2),param_3,param_4);
  }
  return;
}


