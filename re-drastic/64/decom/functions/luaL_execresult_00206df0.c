/*
 * Ghidra decompilation
 *
 * Function : luaL_execresult
 * Address  : 00206df0
 * Program  : drastic64
 */


undefined8 luaL_execresult(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  int __errnum;
  int *piVar2;
  char *pcVar3;
  ulong uVar4;
  
  if ((uint)param_2 == 0xffffffff) {
    piVar2 = __errno_location();
    __errnum = *piVar2;
    lua_pushnil(param_1);
    pcVar3 = strerror(__errnum);
    lua_pushstring(param_1,pcVar3);
    lua_pushinteger(param_1,__errnum);
    return 3;
  }
  uVar1 = (uint)param_2 & 0x7f;
  uVar4 = (ulong)uVar1;
  if ((param_2 & 0x7f) == 0) {
    uVar4 = (param_2 & 0xffffffff) >> 8 & 0xff;
    if ((int)uVar4 == 0) {
      pcVar3 = "exit";
      lua_pushboolean(param_1,1);
      goto LAB_00206e38;
    }
LAB_00206e84:
    pcVar3 = "exit";
  }
  else {
    pcVar3 = "signal";
    if ((int)((long)((ulong)(uVar1 + 1) << 0x38) >> 0x39) < 1) {
      uVar4 = param_2 & 0xffffffff;
      goto LAB_00206e84;
    }
  }
  lua_pushnil(param_1);
LAB_00206e38:
  lua_pushstring(param_1,pcVar3);
  lua_pushinteger(param_1,uVar4);
  return 3;
}


