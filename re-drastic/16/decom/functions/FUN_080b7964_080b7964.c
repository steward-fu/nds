/*
 * Ghidra decompilation
 *
 * Function : FUN_080b7964
 * Address  : 080b7964
 * Program  : drastic16
 */


void FUN_080b7964(undefined4 *param_1,char param_2,int param_3,int param_4,int param_5)

{
  undefined auStack_34 [32];
  int local_14;
  uint local_10;
  uint local_c;
  
  if (param_4 == 0xc0) {
    local_c = 0x18;
    *param_1 = 0xc;
  }
  else if (param_4 == 0x100) {
    local_c = 0x20;
    *param_1 = 0xe;
  }
  else if (param_4 == 0x80) {
    local_c = 0x10;
    *param_1 = 10;
  }
  for (local_10 = 0; local_10 < local_c; local_10 = local_10 + 1) {
    auStack_34[(local_10 & 3) + (local_10 & 0xfffffffc)] = *(undefined *)(param_3 + local_10);
  }
  for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
    *(undefined *)((int)param_1 + local_14 + 4) = *(undefined *)(param_5 + local_14);
  }
  FUN_080b7bf0(param_1,auStack_34);
  if (param_2 != '\x01') {
    FUN_080b8458(param_1);
  }
  return;
}


