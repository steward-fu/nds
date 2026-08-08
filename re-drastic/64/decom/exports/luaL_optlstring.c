/*
 * Ghidra decompilation
 *
 * Function : luaL_optlstring
 * Address  : 002073b0
 * Program  : drastic64
 */


char * luaL_optlstring(undefined8 param_1,undefined4 param_2,char *param_3,size_t *param_4)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  iVar1 = lua_type();
  if (iVar1 < 1) {
    if (param_4 != (size_t *)0x0) {
      sVar2 = 0;
      if (param_3 != (char *)0x0) {
        sVar2 = strlen(param_3);
      }
      *param_4 = sVar2;
    }
  }
  else {
    param_3 = (char *)lua_tolstring(param_1,param_2,param_4);
    if (param_3 == (char *)0x0) {
      uVar3 = lua_typename(param_1,4);
      typeerror(param_1,param_2,uVar3);
    }
  }
  return param_3;
}


