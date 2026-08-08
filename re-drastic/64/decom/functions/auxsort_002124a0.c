/*
 * Ghidra decompilation
 *
 * Function : auxsort
 * Address  : 002124a0
 * Program  : drastic64
 */


void auxsort(undefined8 param_1,code **param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_4 <= param_3) {
    return;
  }
  do {
    (**param_2)(param_1,1,param_3);
    (**param_2)(param_1,1,param_4);
    iVar2 = lua_type(param_1,2);
    if (iVar2 == 0) {
      iVar2 = lua_compare(param_1,0xffffffff,0xfffffffe,1);
      if (iVar2 != 0) goto LAB_00212570;
LAB_00212958:
      lua_settop(param_1,0xfffffffd);
    }
    else {
      lua_pushvalue(param_1,2);
      lua_pushvalue(param_1,0xfffffffe);
      lua_pushvalue(param_1,0xfffffffc);
      lua_callk(param_1,2,1,0,0);
      iVar2 = lua_toboolean(param_1,0xffffffff);
      lua_settop(param_1,0xfffffffe);
      if (iVar2 == 0) goto LAB_00212958;
LAB_00212570:
      (*param_2[1])(param_1,1,param_3);
      (*param_2[1])(param_1,1,param_4);
    }
    if (param_4 - param_3 == 1) {
      return;
    }
    iVar2 = (param_4 + param_3) / 2;
    (**param_2)(param_1,1,iVar2);
    (**param_2)(param_1,1,param_3);
    iVar3 = lua_type(param_1,2);
    if (iVar3 == 0) {
      iVar3 = lua_compare(param_1,0xfffffffe,0xffffffff,1);
      if (iVar3 != 0) goto LAB_00212644;
LAB_002129a8:
      lua_settop(param_1,0xfffffffe);
      (**param_2)(param_1,1,param_4);
      iVar3 = lua_type(param_1,2);
      if (iVar3 == 0) {
        iVar3 = lua_compare(param_1,0xffffffff,0xfffffffe,1);
      }
      else {
        lua_pushvalue(param_1,2);
        lua_pushvalue(param_1,0xfffffffe);
        lua_pushvalue(param_1,0xfffffffc);
        lua_callk(param_1,2,1,0,0);
        iVar3 = lua_toboolean(param_1,0xffffffff);
        lua_settop(param_1,0xfffffffe);
      }
      if (iVar3 == 0) {
        lua_settop(param_1,0xfffffffd);
      }
      else {
        (*param_2[1])(param_1,1,iVar2);
        (*param_2[1])(param_1,1,param_4);
      }
    }
    else {
      lua_pushvalue(param_1,2);
      lua_pushvalue(param_1,0xfffffffd);
      lua_pushvalue(param_1,0xfffffffd);
      lua_callk(param_1,2,1,0,0);
      iVar3 = lua_toboolean(param_1,0xffffffff);
      lua_settop(param_1,0xfffffffe);
      if (iVar3 == 0) goto LAB_002129a8;
LAB_00212644:
      (*param_2[1])(param_1,1,iVar2);
      (*param_2[1])(param_1,1,param_3);
    }
    if (param_4 - param_3 == 2) {
      return;
    }
    (**param_2)(param_1,1,iVar2);
    lua_pushvalue(param_1,0xffffffff);
    iVar3 = param_4 + -1;
    (**param_2)(param_1,1,iVar3);
    (*param_2[1])(param_1,1,iVar2);
    (*param_2[1])(param_1,1,iVar3);
    iVar5 = param_3;
    iVar2 = iVar3;
    while( true ) {
      while( true ) {
        iVar1 = iVar5 + 1;
        (**param_2)(param_1,1,iVar1);
        iVar4 = lua_type(param_1,2);
        if (iVar4 == 0) {
          iVar4 = lua_compare(param_1,0xffffffff,0xfffffffe,1);
        }
        else {
          lua_pushvalue(param_1,2);
          lua_pushvalue(param_1,0xfffffffe);
          lua_pushvalue(param_1,0xfffffffc);
          lua_callk(param_1,2,1,0,0);
          iVar4 = lua_toboolean(param_1,0xffffffff);
          lua_settop(param_1,0xfffffffe);
        }
        if (iVar4 == 0) break;
        if (param_4 <= iVar1) {
          luaL_error(param_1,"invalid order function for sorting");
        }
        lua_settop(param_1,0xfffffffe);
        iVar5 = iVar1;
      }
      while( true ) {
        iVar2 = iVar2 + -1;
        (**param_2)(param_1,1,iVar2);
        iVar4 = lua_type(param_1,2);
        if (iVar4 == 0) {
          iVar4 = lua_compare(param_1,0xfffffffd,0xffffffff,1);
        }
        else {
          lua_pushvalue(param_1,2);
          lua_pushvalue(param_1,0xfffffffc);
          lua_pushvalue(param_1,0xfffffffd);
          lua_callk(param_1,2,1,0,0);
          iVar4 = lua_toboolean(param_1,0xffffffff);
          lua_settop(param_1,0xfffffffe);
        }
        if (iVar4 == 0) break;
        if (iVar2 <= param_3) {
          luaL_error(param_1,"invalid order function for sorting");
        }
        lua_settop(param_1,0xfffffffe);
      }
      if (iVar2 < iVar1) break;
      (*param_2[1])(param_1,1,iVar1);
      (*param_2[1])(param_1,1,iVar2);
      iVar5 = iVar1;
    }
    lua_settop(param_1,0xfffffffc);
    (**param_2)(param_1,1,iVar3);
    (**param_2)(param_1,1,iVar1);
    (*param_2[1])(param_1,1,iVar3);
    (*param_2[1])(param_1,1,iVar1);
    iVar2 = iVar5 + 2;
    if (iVar1 - param_3 < param_4 - iVar1) {
      auxsort(param_1,param_2,param_3,iVar5);
      param_3 = iVar2;
      if (param_4 <= iVar2) {
        return;
      }
    }
    else {
      auxsort(param_1,param_2,iVar2,param_4);
      param_4 = iVar5;
      if (iVar5 <= param_3) {
        return;
      }
    }
  } while( true );
}


