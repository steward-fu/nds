/*
 * Ghidra decompilation
 *
 * Function : loadfunc
 * Address  : 00213ec0
 * Program  : drastic64
 */


void loadfunc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char *__s;
  char *pcVar2;
  undefined8 uVar3;
  
  __s = (char *)luaL_gsub(param_1,param_3,".",&DAT_0022b9b8);
  pcVar2 = strchr(__s,0x2d);
  if (pcVar2 != (char *)0x0) {
    uVar3 = lua_pushlstring(param_1,__s,(long)pcVar2 - (long)__s);
    uVar3 = lua_pushfstring(param_1,"luaopen_%s",uVar3);
    iVar1 = lookforfunc(param_1,param_2,uVar3);
    if (iVar1 != 2) {
      return;
    }
    __s = pcVar2 + 1;
  }
  uVar3 = lua_pushfstring(param_1,"luaopen_%s",__s);
  lookforfunc(param_1,param_2,uVar3);
  return;
}


