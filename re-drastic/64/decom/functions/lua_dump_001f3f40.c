/*
 * Ghidra decompilation
 *
 * Function : lua_dump
 * Address  : 001f3f40
 * Program  : drastic64
 */


undefined8 lua_dump(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) != 0x46) {
    return 1;
  }
  uVar1 = luaU_dump(param_1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x18),
                    param_2,param_3,param_4);
  return uVar1;
}


