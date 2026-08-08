/*
 * Ghidra decompilation
 *
 * Function : luaL_setfuncs
 * Address  : 00208590
 * Program  : drastic64
 */


void luaL_setfuncs(undefined8 param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = lua_checkstack(param_1,param_3 + 0x14);
  if (iVar1 == 0) {
    luaL_error(param_1,"stack overflow (%s)","too many upvalues");
  }
  if (*param_2 != 0) {
    do {
      uVar2 = 0;
      if (0 < (int)param_3) {
        do {
          uVar2 = uVar2 + 1;
          lua_pushvalue(param_1,-param_3);
        } while (param_3 != uVar2);
      }
      lua_pushcclosure(param_1,param_2[1],param_3);
      lua_setfield(param_1,-2 - param_3,*param_2);
      param_2 = param_2 + 2;
    } while (*param_2 != 0);
  }
  lua_settop(param_1,~param_3);
  return;
}


