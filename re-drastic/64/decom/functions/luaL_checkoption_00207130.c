/*
 * Ghidra decompilation
 *
 * Function : luaL_checkoption
 * Address  : 00207130
 * Program  : drastic64
 */


ulong luaL_checkoption(undefined8 param_1,undefined4 param_2,char *param_3,char **param_4)

{
  int iVar1;
  char *__s1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_3 == (char *)0x0) {
    param_3 = (char *)lua_tolstring();
  }
  else {
    iVar1 = lua_type();
    if (iVar1 < 1) goto LAB_00207164;
    param_3 = (char *)lua_tolstring(param_1,param_2,0);
  }
  if (param_3 == (char *)0x0) {
    uVar2 = lua_typename(param_1,4);
    typeerror(param_1,param_2,uVar2);
  }
LAB_00207164:
  __s1 = *param_4;
  if (__s1 != (char *)0x0) {
    uVar3 = 0;
    do {
      iVar1 = strcmp(__s1,param_3);
      if (iVar1 == 0) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      __s1 = param_4[uVar3];
    } while (__s1 != (char *)0x0);
  }
  uVar2 = lua_pushfstring(param_1,"invalid option \'%s\'",param_3);
  uVar3 = luaL_argerror(param_1,param_2,uVar2);
  return uVar3;
}


