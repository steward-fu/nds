/*
 * Ghidra decompilation
 *
 * Function : lua_stringtonumber
 * Address  : 001f1920
 * Program  : drastic64
 */


void lua_stringtonumber(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = luaO_str2num(param_2,*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  }
  return;
}


