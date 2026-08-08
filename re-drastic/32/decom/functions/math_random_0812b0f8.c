/*
 * Ghidra decompilation
 *
 * Function : math_random
 * Address  : 0812b0f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_random(lua_State *L)

{
  long lVar1;
  int iVar2;
  lua_Integer low;
  int iVar3;
  lua_Integer up;
  double dVar4;
  
  lVar1 = random();
  dVar4 = (double)FixedToFP(CONCAT44(lVar1,lVar1),0x20,0x40,0x1f,0,0);
  iVar2 = lua_gettop(L);
  if (iVar2 == 1) {
    iVar3 = luaL_checkinteger(L,1);
    iVar2 = 1;
    if (0 < iVar3) goto LAB_0812b1c0;
LAB_0812b208:
    luaL_argerror(L,1,"interval is empty");
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 0) {
        lua_pushnumber(L,(float)dVar4);
        return 1;
      }
      iVar2 = luaL_error(L,"wrong number of arguments");
      return iVar2;
    }
    iVar2 = luaL_checkinteger(L,1);
    iVar3 = luaL_checkinteger(L,2);
    if (iVar3 < iVar2) goto LAB_0812b208;
  }
  if ((iVar2 < 0) && (iVar2 + 0x7fffffff < iVar3)) {
    luaL_argerror(L,1,"interval too large");
  }
LAB_0812b1c0:
  lua_pushinteger(L,(int)(longlong)(((double)(longlong)(iVar3 - iVar2) + 1.0) * dVar4) + iVar2);
  return 1;
}


