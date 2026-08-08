/*
 * Ghidra decompilation
 *
 * Function : FUN_080b7ac4
 * Address  : 080b7ac4
 * Program  : drastic16
 */


int FUN_080b7ac4(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined auStack_28 [16];
  uint local_18;
  uint local_14;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    iVar1 = 0;
  }
  else {
    local_38 = *(undefined4 *)(param_1 + 4);
    uStack_34 = *(undefined4 *)(param_1 + 8);
    uStack_30 = *(undefined4 *)(param_1 + 0xc);
    uStack_2c = *(undefined4 *)(param_1 + 0x10);
    local_18 = param_3 >> 4;
    local_48 = param_4;
    local_40 = param_2;
    for (local_14 = local_18; local_14 != 0; local_14 = local_14 - 1) {
      FUN_080b862c(param_1,local_40,auStack_28);
      FUN_080b9aec(auStack_28,auStack_28,&local_38);
      FUN_080b9c20(&local_38,local_40);
      FUN_080b9c20(local_48,auStack_28);
      local_40 = local_40 + 0x10;
      local_48 = local_48 + 0x10;
    }
    *(undefined4 *)(param_1 + 4) = local_38;
    *(undefined4 *)(param_1 + 8) = uStack_34;
    *(undefined4 *)(param_1 + 0xc) = uStack_30;
    *(undefined4 *)(param_1 + 0x10) = uStack_2c;
    iVar1 = local_18 << 4;
  }
  return iVar1;
}


