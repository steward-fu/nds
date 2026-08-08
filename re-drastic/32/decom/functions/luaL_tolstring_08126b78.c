/*
 * Ghidra decompilation
 *
 * Function : luaL_tolstring
 * Address  : 08126b78
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * luaL_tolstring(lua_State *L,int idx,size_t *len)

{
  int iVar1;
  int iVar2;
  int tt;
  lua_Integer lVar3;
  char *pcVar4;
  void *pvVar5;
  lua_Number lVar6;
  
  iVar1 = lua_absindex(L,idx);
  iVar2 = lua_getmetatable(L,iVar1);
  if (iVar2 != 0) {
    lua_pushstring(L,"__tostring");
    iVar2 = lua_rawget(L,-2);
    if (iVar2 != 0) {
      lua_rotate(L,-2,-1);
      lua_settop(L,-2);
      lua_pushvalue(L,iVar1);
      lua_callk(L,1,1,0,(lua_KFunction)0x0);
      goto LAB_08126c44;
    }
    lua_settop(L,-3);
  }
  iVar1 = lua_type(L,idx);
  switch(iVar1) {
  case 0:
    lua_pushlstring(L,"nil",3);
    break;
  case 1:
    iVar1 = lua_toboolean(L,idx);
    pcVar4 = "true";
    if (iVar1 == 0) {
      pcVar4 = "false";
    }
    lua_pushstring(L,pcVar4);
    break;
  default:
    iVar1 = lua_type(L,idx);
    pcVar4 = lua_typename(L,iVar1);
    pvVar5 = lua_topointer(L,idx);
    lua_pushfstring(L,"%s: %p",pcVar4,pvVar5);
    break;
  case 3:
    iVar1 = lua_isinteger(L,idx);
    if (iVar1 == 0) {
      lVar6 = lua_tonumberx(L,idx,(int *)0x0);
      lua_pushfstring(L,"%f",SUB84((double)lVar6,0),(int)((ulonglong)(double)lVar6 >> 0x20));
    }
    else {
      lVar3 = lua_tointegerx(L,idx,(int *)0x0);
      lua_pushfstring(L,"%I",lVar3);
    }
    break;
  case 4:
    lua_pushvalue(L,idx);
  }
LAB_08126c44:
  pcVar4 = lua_tolstring(L,-1,len);
  return pcVar4;
}


