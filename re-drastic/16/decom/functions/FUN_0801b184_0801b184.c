/*
 * Ghidra decompilation
 *
 * Function : FUN_0801b184
 * Address  : 0801b184
 * Program  : drastic16
 */


void FUN_0801b184(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20fc);
  if (param_2 != iVar1) {
    if (param_2 == 1) {
      memmove((void *)(param_1 + 0x20c0),(void *)(param_1 + 0x234c),0x1c);
    }
    else {
      *(undefined8 *)(param_1 + (iVar1 + 0x411) * 8) = *(undefined8 *)(param_1 + 0x2360);
    }
    if (iVar1 == 1) {
      if ((undefined8 *)(param_1 + 0x234cU) < (undefined8 *)(param_1 + 0x20d0U) &&
          (undefined8 *)(param_1 + 0x20c0U) < (undefined8 *)(param_1 + 0x235cU)) {
        *(undefined4 *)(param_1 + 0x234c) = *(undefined4 *)(param_1 + 0x20c0);
        *(undefined4 *)(param_1 + 0x2350) = *(undefined4 *)(param_1 + 0x20c4);
        *(undefined4 *)(param_1 + 0x2354) = *(undefined4 *)(param_1 + 0x20c8);
        *(undefined4 *)(param_1 + 0x2358) = *(undefined4 *)(param_1 + 0x20cc);
        *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
        *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
        *(undefined4 *)(param_1 + 0x2364) = *(undefined4 *)(param_1 + 0x20d8);
      }
      else {
        *(undefined8 *)(param_1 + 0x234cU) = *(undefined8 *)(param_1 + 0x20c0U);
        *(undefined8 *)(param_1 + 0x2354) = *(undefined8 *)(param_1 + 0x20c8);
        *(undefined4 *)(param_1 + 0x235c) = *(undefined4 *)(param_1 + 0x20d0);
        *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + 0x20d4);
        *(undefined4 *)(param_1 + 0x2364) = *(undefined4 *)(param_1 + 0x20d8);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2360) = *(undefined4 *)(param_1 + (param_2 + 0x411) * 8);
      *(undefined4 *)(param_1 + 0x2364) = *(undefined4 *)(param_1 + (param_2 + 0x411) * 8 + 4);
    }
    *(int *)(param_1 + 0x20fc) = param_2;
    return;
  }
  return;
}


