/*
 * Ghidra decompilation
 *
 * Function : searchpath
 * Address  : 08132588
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * searchpath(lua_State *L,char *name,char *path,char *sep,char *dirsep)

{
  char cVar1;
  int iVar2;
  char *l;
  char *filename;
  FILE *__stream;
  FILE *f;
  size_t len;
  char *pcVar3;
  luaL_Buffer msg;
  
  iVar2 = __stack_chk_guard;
  luaL_buffinit(L,&msg);
  if (*sep != '\0') {
    name = luaL_gsub(L,name,sep,dirsep);
  }
  do {
    cVar1 = *path;
    pcVar3 = path;
    while (cVar1 == ';') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    if (cVar1 == '\0') {
LAB_08132730:
      luaL_pushresult(&msg);
      pcVar3 = (char *)0x0;
      goto LAB_0813269c;
    }
    path = strchr(pcVar3,0x3b);
    if (path == (char *)0x0) {
      len = strlen(pcVar3);
      path = pcVar3 + len;
      lua_pushlstring(L,pcVar3,len);
      if (path == (char *)0x0) goto LAB_08132730;
    }
    else {
      lua_pushlstring(L,pcVar3,(int)path - (int)pcVar3);
    }
    pcVar3 = lua_tolstring(L,-1,(size_t *)0x0);
    pcVar3 = luaL_gsub(L,pcVar3,"?",name);
    lua_rotate(L,-2,-1);
    lua_settop(L,-2);
    __stream = fopen64(pcVar3,"r");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
LAB_0813269c:
      if (iVar2 == __stack_chk_guard) {
        return pcVar3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lua_pushfstring(L,"\n\tno file \'%s\'",pcVar3);
    lua_rotate(L,-2,-1);
    lua_settop(L,-2);
    luaL_addvalue(&msg);
  } while( true );
}


