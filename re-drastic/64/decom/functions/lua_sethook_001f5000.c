/*
 * Ghidra decompilation
 *
 * Function : lua_sethook
 * Address  : 001f5000
 * Program  : drastic64
 */


void lua_sethook(long param_1,long param_2,int param_3,undefined4 param_4)

{
  undefined uVar1;
  
  uVar1 = (undefined)param_3;
  if (param_2 == 0 || param_3 == 0) {
    uVar1 = 0;
    param_2 = 0;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x42) >> 1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  *(long *)(param_1 + 0xa8) = param_2;
  *(undefined *)(param_1 + 200) = uVar1;
  *(ulong *)(param_1 + 0xbc) = CONCAT44(param_4,param_4);
  return;
}


