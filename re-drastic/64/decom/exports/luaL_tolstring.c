/*
 * Ghidra decompilation
 *
 * Function : luaL_tolstring
 * Address  : 00208420
 * Program  : drastic64
 */


void luaL_tolstring(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  
  uVar6 = param_2 & 0xffffffff;
  iVar2 = luaL_callmeta(param_1,param_2,"__tostring");
  if (iVar2 == 0) {
    iVar2 = lua_type(param_1,uVar6);
    if (iVar2 == 3) {
      iVar2 = lua_isinteger(param_1,uVar6);
      if (iVar2 == 0) {
        fVar7 = (float)lua_tonumberx(param_1,uVar6,0);
        lua_pushfstring((double)fVar7,param_1,&DAT_0022a818);
      }
      else {
        uVar3 = lua_tointegerx(param_1);
        lua_pushfstring(param_1,&DAT_0022a810,uVar3);
      }
    }
    else {
      if (iVar2 < 4) {
        if (iVar2 == 0) {
          lua_pushlstring(param_1,&DAT_0022a298,3);
          goto LAB_0020844c;
        }
        if (iVar2 == 1) {
          iVar2 = lua_toboolean(param_1,uVar6);
          pcVar1 = "true";
          if (iVar2 == 0) {
            pcVar1 = "false";
          }
          lua_pushstring(param_1,pcVar1);
          goto LAB_0020844c;
        }
      }
      else if (iVar2 == 4) {
        lua_pushvalue(param_1,uVar6);
        goto LAB_0020844c;
      }
      uVar3 = lua_type(param_1,uVar6);
      uVar4 = lua_typename(param_1,uVar3);
      uVar5 = lua_topointer(param_1,uVar6);
      lua_pushfstring(param_1,"%s: %p",uVar4,uVar5);
    }
  }
LAB_0020844c:
  lua_tolstring(param_1,0xffffffff,param_3);
  return;
}


