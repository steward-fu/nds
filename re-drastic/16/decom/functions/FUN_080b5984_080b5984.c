/*
 * Ghidra decompilation
 *
 * Function : FUN_080b5984
 * Address  : 080b5984
 * Program  : drastic16
 */


void FUN_080b5984(uint *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = 0;
  local_18 = 0;
  for (local_1c = 0; *(int *)(param_2 + local_1c * 4) != 0; local_1c = local_1c + 1) {
    uVar2 = *(uint *)(param_2 + local_1c * 4);
    iVar3 = FUN_080a0128(uVar2);
    if (iVar3 == 0) {
      uVar1 = FUN_080a00a0(uVar2 & 0xff);
      switch(uVar1) {
      case 0x44:
        local_14 = local_14 + local_18 * 0x15180;
        break;
      case 0x48:
        local_14 = local_14 + local_18 * 0xe10;
        break;
      case 0x4d:
        local_14 = local_14 + local_18 * 0x3c;
        break;
      case 0x53:
        local_14 = local_14 + local_18;
      }
      local_18 = 0;
    }
    else {
      local_18 = local_18 * 10 + uVar2 + -0x30;
    }
  }
  FUN_080b5b88(param_1);
  uVar4 = FUN_080b5504(param_1);
  uVar2 = (uint)((ulonglong)local_14 * 10000000);
  iVar3 = (int)((ulonglong)local_14 * 10000000 >> 0x20);
  FUN_080b5530(param_1,iVar3,*param_1 - uVar2,param_1[1] - (iVar3 + (uint)(*param_1 < uVar2)),
               param_2,param_1,uVar4);
  return;
}


