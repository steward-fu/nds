/*
 * Ghidra decompilation
 *
 * Function : searchpath
 * Address  : 00213ab0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * searchpath(undefined8 param_1,undefined8 param_2,char *param_3,char *param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  FILE *__stream;
  size_t sVar3;
  char *pcVar4;
  undefined auStack_1028 [4128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  luaL_buffinit(param_1,auStack_1028);
  if (*param_4 != '\0') {
    param_2 = luaL_gsub(param_1,param_2,param_4,param_5);
  }
  while( true ) {
    cVar1 = *param_3;
    pcVar4 = param_3;
    while (cVar1 == ';') {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    if (cVar1 == '\0') break;
    param_3 = strchr(pcVar4,0x3b);
    sVar3 = (long)param_3 - (long)pcVar4;
    if (param_3 == (char *)0x0) {
      sVar3 = strlen(pcVar4);
      param_3 = pcVar4 + sVar3;
    }
    lua_pushlstring(param_1,pcVar4,sVar3);
    uVar2 = lua_tolstring(param_1,0xffffffff,0);
    pcVar4 = (char *)luaL_gsub(param_1,uVar2,&DAT_002296a8,param_2);
    lua_rotate(param_1,0xfffffffe,0xffffffff);
    lua_settop(param_1,0xfffffffe);
    __stream = fopen64(pcVar4,"r");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
LAB_00213bbc:
      if (local_8 - ___stack_chk_guard == 0) {
        return pcVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_8 - ___stack_chk_guard,0);
    }
    lua_pushfstring(param_1,"\n\tno file \'%s\'",pcVar4);
    lua_rotate(param_1,0xfffffffe,0xffffffff);
    lua_settop(param_1,0xfffffffe);
    luaL_addvalue(auStack_1028);
  }
  pcVar4 = (char *)0x0;
  luaL_pushresult(auStack_1028);
  goto LAB_00213bbc;
}


