/*
 * Ghidra decompilation
 *
 * Function : luaL_checkoption
 * Address  : 08125688
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaL_checkoption(lua_State *L,int arg,char *def,char **lst)

{
  int iVar1;
  char *s;
  char *pcVar2;
  int iVar3;
  char *s_1;
  char *name;
  
  if (def == (char *)0x0) {
    name = lua_tolstring(L,arg,(size_t *)0x0);
  }
  else {
    iVar1 = lua_type(L,arg);
    name = def;
    if (iVar1 < 1) goto LAB_081256d0;
    name = lua_tolstring(L,arg,(size_t *)0x0);
  }
  if (name == (char *)0x0) {
    pcVar2 = lua_typename(L,4);
    typeerror(L,arg,pcVar2);
  }
LAB_081256d0:
  pcVar2 = *lst;
  if (pcVar2 != (char *)0x0) {
    iVar1 = 0;
    do {
      iVar3 = strcmp(pcVar2,name);
      if (iVar3 == 0) {
        return iVar1;
      }
      lst = lst + 1;
      pcVar2 = *lst;
      iVar1 = iVar1 + 1;
    } while (pcVar2 != (char *)0x0);
  }
  pcVar2 = lua_pushfstring(L,"invalid option \'%s\'",name);
  iVar1 = luaL_argerror(L,arg,pcVar2);
  return iVar1;
}


