/*
 * Ghidra decompilation
 *
 * Function : luaL_traceback
 * Address  : 08124b38
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_traceback(lua_State *L,lua_State *L1,char *msg,int level)

{
  int iVar1;
  int iVar2;
  int top;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int level_00;
  int iVar6;
  int mark;
  int m;
  lua_Debug ar;
  
  iVar1 = __stack_chk_guard;
  iVar2 = lua_gettop(L);
  iVar3 = 1;
  iVar6 = 1;
  while (level_00 = iVar3, iVar3 = lua_getstack(L1,level_00,&ar), iVar3 != 0) {
    iVar3 = level_00 << 1;
    iVar6 = level_00;
  }
  iVar3 = level_00;
  if (iVar6 < level_00) {
    do {
      level_00 = (iVar3 + iVar6) / 2;
      iVar4 = lua_getstack(L1,level_00,&ar);
      if (iVar4 != 0) {
        iVar6 = level_00 + 1;
        level_00 = iVar3;
      }
      iVar3 = level_00;
    } while (iVar6 < level_00);
  }
  if (level_00 < 0x18) {
    mark = 0;
  }
  else {
    mark = 0xc;
  }
  if (msg != (char *)0x0) {
    lua_pushfstring(L,"%s\n",msg);
  }
  lua_pushlstring(L,"stack traceback:",0x10);
  while( true ) {
    iVar6 = lua_getstack(L1,level,&ar);
    if (iVar6 == 0) break;
    if (mark == level + 1) {
      lua_pushlstring(L,"\n\t...",5);
      level = level_00 + -0xb;
    }
    else {
      lua_getinfo(L1,"Slnt",&ar);
      lua_pushfstring(L,"\n\t%s:",ar.short_src);
      if (0 < ar.currentline) {
        lua_pushfstring(L,"%d:");
      }
      lua_pushlstring(L," in ",4);
      iVar6 = pushglobalfuncname(L,&ar);
      if (iVar6 == 0) {
        if (*ar.namewhat == '\0') {
          if (*ar.what == 'm') {
            lua_pushlstring(L,"main chunk",10);
          }
          else if (*ar.what == 'C') {
            lua_pushlstring(L,"?",1);
          }
          else {
            lua_pushfstring(L,"function <%s:%d>",ar.short_src,ar.linedefined);
          }
        }
        else {
          lua_pushfstring(L,"%s \'%s\'",ar.namewhat,ar.name);
        }
      }
      else {
        pcVar5 = lua_tolstring(L,-1,(size_t *)0x0);
        lua_pushfstring(L,"function \'%s\'",pcVar5);
        lua_rotate(L,-2,-1);
        lua_settop(L,-2);
      }
      if (ar.istailcall != '\0') {
        lua_pushlstring(L,"\n\t(...tail calls...)",0x14);
      }
      iVar6 = lua_gettop(L);
      lua_concat(L,iVar6 - iVar2);
      level = level + 1;
    }
  }
  iVar6 = lua_gettop(L);
  lua_concat(L,iVar6 - iVar2);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


