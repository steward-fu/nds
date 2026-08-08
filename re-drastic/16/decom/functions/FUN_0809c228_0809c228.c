/*
 * Ghidra decompilation
 *
 * Function : FUN_0809c228
 * Address  : 0809c228
 * Program  : drastic16
 */


void FUN_0809c228(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  undefined local_15;
  undefined local_14;
  
  if (0x28 < param_2) {
    param_1 = 4;
  }
  if (0x28 < param_2) {
    return;
  }
  if (param_2 == 0x28) {
    local_17 = 0xff;
    local_16 = local_17;
    local_15 = local_17;
    local_14 = local_17;
  }
  else {
    iVar1 = (param_2 & 1 | 2) << ((param_2 >> 1) + 0xb & 0xff);
    local_17 = (undefined)iVar1;
    local_16 = (char)((uint)iVar1 >> 8);
    local_15 = (char)((uint)iVar1 >> 0x10);
    local_14 = (char)((uint)iVar1 >> 0x18);
  }
  local_18 = 4;
  FUN_0809be44(param_1,&local_18,5,param_3);
  return;
}


