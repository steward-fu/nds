/*
 * Ghidra decompilation
 *
 * Function : setpath
 * Address  : 08132940
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void setpath(lua_State *L,char *fieldname,char *envname1,char *envname2,char *def)

{
  char *pcVar1;
  char *path;
  int iVar2;
  int b;
  
  pcVar1 = getenv(envname1);
  if ((pcVar1 != (char *)0x0) || (pcVar1 = getenv(envname2), pcVar1 != (char *)0x0)) {
    lua_getfield(L,-0xf4628,"LUA_NOENV");
    iVar2 = lua_toboolean(L,-1);
    lua_settop(L,-2);
    if (iVar2 == 0) {
      pcVar1 = luaL_gsub(L,pcVar1,";;",";\x01;");
      luaL_gsub(L,pcVar1,"\x01",def);
      lua_rotate(L,-2,-1);
      lua_settop(L,-2);
      goto LAB_081329b8;
    }
  }
  lua_pushstring(L,def);
LAB_081329b8:
  lua_setfield(L,-2,fieldname);
  return;
}


