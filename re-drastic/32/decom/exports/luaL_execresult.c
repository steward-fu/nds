/*
 * Ghidra decompilation
 *
 * Function : luaL_execresult
 * Address  : 081253ac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaL_execresult(lua_State *L,int stat)

{
  uint *puVar1;
  int en;
  uint uVar2;
  char *s;
  
  if (stat == -1) {
    puVar1 = (uint *)__errno_location();
    stat = *puVar1;
    lua_pushnil(L);
    s = strerror(stat);
  }
  else {
    uVar2 = stat & 0x7f;
    if (uVar2 == 0) {
      stat = (uint)(stat << 0x10) >> 0x18;
      if (stat == 0) {
        lua_pushboolean(L,1);
        s = "exit";
        goto LAB_081253fc;
      }
      s = "exit";
    }
    else {
      s = "exit";
      if (0 < (int)((uVar2 + 1) * 0x1000000) >> 0x19) {
        stat = uVar2;
        s = "signal";
      }
    }
    lua_pushnil(L);
  }
LAB_081253fc:
  lua_pushstring(L,s);
  lua_pushinteger(L,stat);
  return 3;
}


