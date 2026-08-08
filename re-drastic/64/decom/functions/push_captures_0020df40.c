/*
 * Ghidra decompilation
 *
 * Function : push_captures
 * Address  : 0020df40
 * Program  : drastic64
 */


int push_captures(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (param_2 == 0 || iVar3 != 0) {
    luaL_checkstack(*(undefined8 *)(param_1 + 0x20),iVar3,"too many captures");
    if (iVar3 < 1) {
      return iVar3;
    }
  }
  else {
    iVar3 = 1;
    luaL_checkstack(*(undefined8 *)(param_1 + 0x20),1,"too many captures");
  }
  puVar6 = (undefined8 *)(param_1 + 0x30);
  iVar5 = 0;
  do {
    while( true ) {
      iVar1 = iVar5 + 1;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      if (iVar5 < *(int *)(param_1 + 0x28)) break;
      if (iVar5 == 0) {
        lua_pushlstring(uVar2,param_2,param_3 - param_2);
      }
      else {
        luaL_error(uVar2,"invalid capture index %%%d",iVar1);
      }
LAB_0020dfc4:
      puVar6 = puVar6 + 2;
      iVar5 = iVar1;
      if (iVar3 <= iVar1) {
        return iVar3;
      }
    }
    lVar7 = puVar6[1];
    if (lVar7 == -1) {
      luaL_error(uVar2,"unfinished capture");
      uVar4 = *puVar6;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar4 = *puVar6;
      if (lVar7 == -2) {
        lua_pushinteger(uVar2,((int)uVar4 - (int)*(undefined8 *)(param_1 + 8)) + 1);
        goto LAB_0020dfc4;
      }
    }
    lua_pushlstring(uVar2,uVar4,lVar7);
    puVar6 = puVar6 + 2;
    iVar5 = iVar1;
    if (iVar3 <= iVar1) {
      return iVar3;
    }
  } while( true );
}


