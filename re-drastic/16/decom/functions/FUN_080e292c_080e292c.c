/*
 * Ghidra decompilation
 *
 * Function : FUN_080e292c
 * Address  : 080e292c
 * Program  : drastic16
 */


void FUN_080e292c(int param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  if (param_2 == '\0') {
    if ((param_3 < *(undefined4 **)(param_1 + 0x10)) ||
       ((undefined4 *)(*(int *)(param_1 + 0x10) + 0x40000) <= param_3)) {
      *param_3 = param_4;
    }
    else {
      *(char *)param_3 = (char)param_4;
      *(char *)((int)param_3 + 1) = (char)((uint)param_4 >> 8);
      *(char *)((int)param_3 + 2) = (char)((uint)param_4 >> 0x10);
      *(char *)((int)param_3 + 3) = (char)((uint)param_4 >> 0x18);
    }
  }
  else {
    *(char *)param_3 = (char)param_4;
  }
  return;
}


