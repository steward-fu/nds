/*
 * Ghidra decompilation
 *
 * Function : luaL_traceback
 * Address  : 00206610
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaL_traceback(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined auStack_88 [8];
  undefined8 local_80;
  char *local_78;
  char *local_70;
  int local_60;
  undefined4 local_5c;
  char local_51;
  undefined auStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = lua_gettop(param_1,0);
  iVar2 = 1;
  iVar4 = 1;
  while (iVar6 = iVar2, iVar2 = lua_getstack(param_2,iVar6,auStack_88), iVar2 != 0) {
    iVar2 = iVar6 << 1;
    iVar4 = iVar6;
  }
  if (iVar4 < iVar6) {
    do {
      while( true ) {
        iVar2 = iVar6 + iVar4 >> 1;
        iVar3 = lua_getstack(param_2,iVar2,auStack_88);
        if (iVar3 != 0) break;
        iVar6 = iVar2;
        if (iVar2 <= iVar4) goto LAB_002066bc;
      }
      iVar4 = iVar2 + 1;
    } while (iVar4 < iVar6);
  }
LAB_002066bc:
  iVar4 = 0;
  if (0x17 < iVar6) {
    iVar4 = 0xc;
  }
  if (param_3 != 0) {
    lua_pushfstring(param_1,"%s\n",param_3);
  }
  lua_pushlstring(param_1,"stack traceback:",0x10);
  do {
    iVar2 = lua_getstack(param_2,param_4,auStack_88);
    while( true ) {
      if (iVar2 == 0) {
        iVar4 = lua_gettop(param_1);
        lua_concat(param_1,iVar4 - iVar1);
        if (local_8 - ___stack_chk_guard == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(local_8 - ___stack_chk_guard,0);
      }
      param_4 = param_4 + 1;
      if (iVar4 == param_4) break;
      lua_getinfo(param_2,&DAT_0022a5e8,auStack_88);
      lua_pushfstring(param_1,"\n\t%s:",auStack_50);
      if (0 < local_60) {
        lua_pushfstring(param_1,&DAT_0022a5f8);
      }
      lua_pushlstring(param_1,&DAT_0022a600,4);
      iVar2 = pushglobalfuncname(param_1,auStack_88);
      if (iVar2 == 0) {
        if (*local_78 == '\0') {
          if (*local_70 == 'm') {
            lua_pushlstring(param_1,"main chunk",10);
          }
          else if (*local_70 == 'C') {
            lua_pushlstring(param_1,&DAT_002296a8,1);
          }
          else {
            lua_pushfstring(param_1,"function <%s:%d>",auStack_50,local_5c);
          }
        }
        else {
          lua_pushfstring(param_1,"%s \'%s\'",local_78,local_80);
        }
      }
      else {
        uVar5 = lua_tolstring(param_1,0xffffffff,0);
        lua_pushfstring(param_1,"function \'%s\'",uVar5);
        lua_rotate(param_1,0xfffffffe,0xffffffff);
        lua_settop(param_1,0xfffffffe);
      }
      if (local_51 != '\0') {
        lua_pushlstring(param_1,"\n\t(...tail calls...)",0x14);
      }
      iVar2 = lua_gettop(param_1);
      lua_concat(param_1,iVar2 - iVar1);
      iVar2 = lua_getstack(param_2,param_4,auStack_88);
    }
    lua_pushlstring(param_1,"\n\t...",5);
    param_4 = iVar6 + -0xb;
  } while( true );
}


