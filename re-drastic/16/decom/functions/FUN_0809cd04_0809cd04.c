/*
 * Ghidra decompilation
 *
 * Function : FUN_0809cd04
 * Address  : 0809cd04
 * Program  : drastic16
 */


int FUN_0809cd04(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,byte param_5
                ,undefined4 param_6,int *param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined local_b8;
  undefined local_b7;
  undefined local_b6;
  undefined local_b5;
  undefined local_b4;
  undefined auStack_ac [16];
  undefined4 local_9c;
  int local_98;
  undefined4 local_88;
  undefined4 local_84;
  
  uVar3 = *param_2;
  uVar2 = (uint)param_5;
  uVar4 = *param_4;
  *param_4 = 0;
  iVar1 = param_1;
  if (0x28 < uVar2) {
    iVar1 = 4;
  }
  *param_2 = 0;
  local_9c = 0;
  *param_7 = 0;
  if (uVar2 < 0x29) {
    if (uVar2 == 0x28) {
      local_b6 = 0xff;
      local_b7 = 0xff;
      local_b5 = local_b6;
      local_b4 = local_b6;
    }
    else {
      iVar1 = (uVar2 & 1 | 2) << (param_5 >> 1) + 0xb;
      local_b6 = (undefined)((uint)iVar1 >> 8);
      local_b7 = (undefined)iVar1;
      local_b5 = (char)((uint)iVar1 >> 0x10);
      local_b4 = (char)((uint)iVar1 >> 0x18);
    }
    local_b8 = 4;
    local_98 = param_1;
    local_84 = uVar3;
    iVar1 = FUN_0809bd28(auStack_ac,&local_b8,5,param_8);
    if (iVar1 == 0) {
      *param_4 = uVar4;
      iVar1 = FUN_0809c2cc(auStack_ac,uVar3,param_3,param_4,param_6,param_7);
      *param_2 = local_88;
      if ((iVar1 == 0) && (*param_7 == 3)) {
        iVar1 = 6;
      }
      FUN_0809bc1c(auStack_ac,param_8);
      return iVar1;
    }
  }
  return iVar1;
}


