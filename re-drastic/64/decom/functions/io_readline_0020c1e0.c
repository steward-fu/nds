/*
 * Ghidra decompilation
 *
 * Function : io_readline
 * Address  : 0020c1e0
 * Program  : drastic64
 */


ulong io_readline(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  
  puVar4 = (undefined8 *)lua_touserdata(param_1,0xfff0b9d7);
  iVar2 = lua_tointegerx(param_1,0xfff0b9d6,0);
  if (puVar4[1] == 0) {
    uVar9 = luaL_error(param_1,"file is already closed");
    return uVar9;
  }
  lua_settop(param_1,1);
  luaL_checkstack(param_1,iVar2,"too many arguments");
  if (0 < iVar2) {
    iVar8 = -0xf462c;
    do {
      iVar1 = iVar8 + -1;
      lua_pushvalue(param_1,iVar8);
      iVar8 = iVar1;
    } while (iVar1 != -0xf462c - iVar2);
  }
  uVar3 = g_read(param_1,*puVar4,2);
  uVar9 = (ulong)uVar3;
  iVar2 = lua_toboolean(param_1,-uVar3);
  if (iVar2 == 0) {
    if (1 < (int)uVar3) {
      uVar5 = lua_tolstring(param_1,1 - uVar3,0);
      uVar9 = luaL_error(param_1,"%s",uVar5);
      return uVar9;
    }
    uVar3 = lua_toboolean(param_1,0xfff0b9d5);
    uVar9 = (ulong)uVar3;
    if (uVar3 != 0) {
      lua_settop(param_1,0);
      lua_pushvalue(param_1,0xfff0b9d7);
      lVar6 = luaL_checkudata(param_1,1,"FILE*");
      uVar9 = 0;
      pcVar7 = *(code **)(lVar6 + 8);
      *(undefined8 *)(lVar6 + 8) = 0;
      (*pcVar7)(param_1);
    }
  }
  return uVar9;
}


