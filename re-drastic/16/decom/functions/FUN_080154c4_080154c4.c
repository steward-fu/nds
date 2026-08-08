/*
 * Ghidra decompilation
 *
 * Function : FUN_080154c4
 * Address  : 080154c4
 * Program  : drastic16
 */


void FUN_080154c4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(int *)(param_1 + 0x20) < 0) && (*(byte *)(param_1 + 0x24) == param_2)) {
    FUN_080167d8(param_1,param_1 + 8);
  }
  if ((*(int *)(param_1 + 0x40) < 0) && (*(byte *)(param_1 + 0x44) == param_2)) {
    FUN_080167d8(param_1,param_1 + 0x28);
  }
  if ((*(int *)(param_1 + 0x60) < 0) && (*(byte *)(param_1 + 100) == param_2)) {
    FUN_080167d8(param_1,param_1 + 0x48);
  }
  if (-1 < *(int *)(param_1 + 0x80)) {
    return;
  }
  if (*(byte *)(param_1 + 0x84) != param_2) {
    return;
  }
  FUN_080167d8(param_1,param_1 + 0x68,param_3,param_4);
  return;
}


