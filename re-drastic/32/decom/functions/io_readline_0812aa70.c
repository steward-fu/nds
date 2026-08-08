/*
 * Ghidra decompilation
 *
 * Function : io_readline
 * Address  : 0812aa70
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_readline(lua_State *L)

{
  FILE **ppFVar1;
  LStream *p;
  lua_Integer space;
  int n;
  char *pcVar2;
  void *pvVar3;
  LStream *p_1;
  int iVar4;
  code *pcVar5;
  int iVar6;
  lua_CFunction cf;
  
  ppFVar1 = (FILE **)lua_touserdata(L,-0xf4629);
  space = lua_tointegerx(L,-0xf462a,(int *)0x0);
  if (ppFVar1[1] == (FILE *)0x0) {
    iVar6 = luaL_error(L,"file is already closed");
  }
  else {
    lua_settop(L,1);
    luaL_checkstack(L,space,"too many arguments");
    if (0 < space) {
      iVar6 = 1;
      do {
        iVar4 = -0xf462b - iVar6;
        iVar6 = iVar6 + 1;
        lua_pushvalue(L,iVar4);
      } while (iVar6 <= space);
    }
    iVar6 = g_read(L,*ppFVar1,2);
    iVar4 = lua_toboolean(L,-iVar6);
    if (iVar4 == 0) {
      if (iVar6 < 2) {
        iVar6 = lua_toboolean(L,-0xf462b);
        if (iVar6 != 0) {
          lua_settop(L,0);
          lua_pushvalue(L,-0xf4629);
          pvVar3 = luaL_checkudata(L,1,"FILE*");
          pcVar5 = *(code **)((int)pvVar3 + 4);
          *(undefined4 *)((int)pvVar3 + 4) = 0;
          (*pcVar5)(L);
          iVar6 = 0;
        }
      }
      else {
        pcVar2 = lua_tolstring(L,1 - iVar6,(size_t *)0x0);
        iVar6 = luaL_error(L,"%s",pcVar2);
      }
    }
  }
  return iVar6;
}


