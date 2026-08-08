/*
 * Ghidra decompilation
 *
 * Function : auxsort
 * Address  : 08130f5c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void auxsort(lua_State *L,TabA *ta,int l,int u)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int res_3;
  int res_2;
  int res;
  int res_1;
  int res_4;
  int i;
  int iVar4;
  int iVar5;
  int j;
  int local_30;
  
  local_30 = u;
  if (l < u) {
    do {
      (*ta->geti)(L,1,l);
      (*ta->geti)(L,1,local_30);
      iVar1 = lua_type(L,2);
      if (iVar1 == 0) {
        iVar1 = lua_compare(L,-1,-2,1);
      }
      else {
        lua_pushvalue(L,2);
        lua_pushvalue(L,-2);
        lua_pushvalue(L,-4);
        lua_callk(L,2,1,0,(lua_KFunction)0x0);
        iVar1 = lua_toboolean(L,-1);
        lua_settop(L,-2);
      }
      if (iVar1 == 0) {
        lua_settop(L,-3);
      }
      else {
        (*ta->seti)(L,1,l);
        (*ta->seti)(L,1,local_30);
      }
      if (local_30 - l == 1) {
        return;
      }
      iVar1 = (local_30 + l) / 2;
      (*ta->geti)(L,1,iVar1);
      (*ta->geti)(L,1,l);
      iVar2 = lua_type(L,2);
      if (iVar2 == 0) {
        iVar2 = lua_compare(L,-2,-1,1);
      }
      else {
        lua_pushvalue(L,2);
        lua_pushvalue(L,-3);
        lua_pushvalue(L,-3);
        lua_callk(L,2,1,0,(lua_KFunction)0x0);
        iVar2 = lua_toboolean(L,-1);
        lua_settop(L,-2);
      }
      if (iVar2 == 0) {
        lua_settop(L,-2);
        (*ta->geti)(L,1,local_30);
        iVar2 = lua_type(L,2);
        if (iVar2 == 0) {
          iVar2 = lua_compare(L,-1,-2,1);
        }
        else {
          lua_pushvalue(L,2);
          lua_pushvalue(L,-2);
          lua_pushvalue(L,-4);
          lua_callk(L,2,1,0,(lua_KFunction)0x0);
          iVar2 = lua_toboolean(L,-1);
          lua_settop(L,-2);
        }
        if (iVar2 == 0) {
          lua_settop(L,-3);
        }
        else {
          (*ta->seti)(L,1,iVar1);
          (*ta->seti)(L,1,local_30);
        }
      }
      else {
        (*ta->seti)(L,1,iVar1);
        (*ta->seti)(L,1,l);
      }
      if (local_30 - l == 2) {
        return;
      }
      iVar5 = local_30 + -1;
      (*ta->geti)(L,1,iVar1);
      lua_pushvalue(L,-1);
      (*ta->geti)(L,1,iVar5);
      (*ta->seti)(L,1,iVar1);
      (*ta->seti)(L,1,iVar5);
      iVar1 = iVar5;
      iVar2 = l;
      while( true ) {
        while( true ) {
          iVar4 = iVar2 + 1;
          (*ta->geti)(L,1,iVar4);
          iVar3 = lua_type(L,2);
          if (iVar3 == 0) {
            iVar3 = lua_compare(L,-1,-2,1);
          }
          else {
            lua_pushvalue(L,2);
            lua_pushvalue(L,-2);
            lua_pushvalue(L,-4);
            lua_callk(L,2,1,0,(lua_KFunction)0x0);
            iVar3 = lua_toboolean(L,-1);
            lua_settop(L,-2);
          }
          if (iVar3 == 0) break;
          if (local_30 <= iVar4) {
            luaL_error(L,"invalid order function for sorting");
          }
          lua_settop(L,-2);
          iVar2 = iVar4;
        }
        while( true ) {
          iVar1 = iVar1 + -1;
          (*ta->geti)(L,1,iVar1);
          iVar3 = lua_type(L,2);
          if (iVar3 == 0) {
            iVar3 = lua_compare(L,-3,-1,1);
          }
          else {
            lua_pushvalue(L,2);
            lua_pushvalue(L,-4);
            lua_pushvalue(L,-3);
            lua_callk(L,2,1,0,(lua_KFunction)0x0);
            iVar3 = lua_toboolean(L,-1);
            lua_settop(L,-2);
          }
          if (iVar3 == 0) break;
          if (iVar1 <= l) {
            luaL_error(L,"invalid order function for sorting");
          }
          lua_settop(L,-2);
        }
        if (iVar1 < iVar4) break;
        (*ta->seti)(L,1,iVar4);
        (*ta->seti)(L,1,iVar1);
        iVar2 = iVar4;
      }
      lua_settop(L,-4);
      (*ta->geti)(L,1,iVar5);
      (*ta->geti)(L,1,iVar4);
      (*ta->seti)(L,1,iVar5);
      (*ta->seti)(L,1,iVar4);
      if (iVar4 - l < local_30 - iVar4) {
        iVar1 = l;
        iVar5 = iVar2;
        l = iVar2 + 2;
      }
      else {
        iVar1 = iVar2 + 2;
        iVar5 = local_30;
        local_30 = iVar2;
      }
      auxsort(L,ta,iVar1,iVar5);
    } while (l < local_30);
  }
  return;
}


