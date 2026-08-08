/*
 * Ghidra decompilation
 *
 * Function : luaL_setfuncs
 * Address  : 08126d74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_setfuncs(lua_State *L,luaL_Reg *l,int nup)

{
  char **ppcVar1;
  int iVar2;
  luaL_Reg *plVar3;
  
  iVar2 = lua_checkstack(L,nup + 0x14);
  if (iVar2 == 0) {
    luaL_error(L,"stack overflow (%s)","too many upvalues");
  }
  if (l->name != (char *)0x0) {
    plVar3 = l + 1;
    do {
      if (0 < nup) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          lua_pushvalue(L,-nup);
        } while (nup != iVar2);
      }
      lua_pushcclosure(L,plVar3[-1].func,nup);
      lua_setfield(L,-2 - nup,plVar3[-1].name);
      ppcVar1 = &plVar3->name;
      plVar3 = plVar3 + 1;
    } while (*ppcVar1 != (char *)0x0);
  }
  lua_settop(L,~nup);
  return;
}


