/*
 * Ghidra decompilation
 *
 * Function : luaL_argerror
 * Address  : 00206b10
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaL_argerror(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_88 [8];
  undefined1 *local_80;
  char *local_78;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = lua_getstack(param_1,0,auStack_88);
  if (iVar1 == 0) {
    uVar2 = luaL_error(param_1,"bad argument #%d (%s)",param_2,param_3);
  }
  else {
    lua_getinfo(param_1,"n",auStack_88);
    iVar1 = strcmp(local_78,"method");
    if ((iVar1 == 0) && (param_2 = param_2 + -1, param_2 == 0)) {
      uVar2 = luaL_error(param_1,"calling \'%s\' on bad self (%s)",local_80,param_3);
    }
    else {
      if (local_80 == (undefined1 *)0x0) {
        iVar1 = pushglobalfuncname(param_1,auStack_88);
        if (iVar1 == 0) {
          local_80 = &DAT_002296a8;
        }
        else {
          local_80 = (undefined1 *)lua_tolstring(param_1,0xffffffff,0);
        }
      }
      uVar2 = luaL_error(param_1,"bad argument #%d to \'%s\' (%s)",param_2,local_80,param_3);
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,local_8 - ___stack_chk_guard,0);
}


