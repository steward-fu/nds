/*
 * Ghidra decompilation
 *
 * Function : FUN_080b3508
 * Address  : 080b3508
 * Program  : drastic16
 */


void FUN_080b3508(int *param_1,undefined4 param_2)

{
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined auStack_18 [4];
  uint local_14;
  
  if (*param_1 == 2) {
    FUN_080b3d1c(param_1[1],auStack_18);
    FUN_080b2af4(param_2,0x20,auStack_18,4,&local_38);
    param_1[1] = 0;
    for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
      param_1[1] = param_1[1] ^ (uint)*(byte *)((int)&local_38 + local_14) << ((local_14 & 3) << 3);
    }
  }
  if (*param_1 == 3) {
    FUN_080b2af4(param_2,0x20,param_1 + 1,0x20,&local_38);
    param_1[1] = local_38;
    param_1[2] = iStack_34;
    param_1[3] = iStack_30;
    param_1[4] = iStack_2c;
    param_1[5] = local_28;
    param_1[6] = iStack_24;
    param_1[7] = iStack_20;
    param_1[8] = iStack_1c;
  }
  return;
}


