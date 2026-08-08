/*
 * Ghidra decompilation
 *
 * Function : luaB_print
 * Address  : 00209160
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaB_print(undefined8 param_1)

{
  int iVar1;
  void *__ptr;
  undefined8 uVar2;
  int iVar3;
  size_t local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = lua_gettop(param_1,&__stack_chk_guard,0);
  lua_getglobal(param_1,"tostring");
  if (0 < iVar1) {
    iVar3 = 1;
    do {
      while( true ) {
        lua_pushvalue(param_1,0xffffffff);
        lua_pushvalue(param_1,iVar3);
        lua_callk(param_1,1,1,0,0);
        __ptr = (void *)lua_tolstring(param_1,0xffffffff,&local_10);
        if (__ptr == (void *)0x0) {
          uVar2 = luaL_error(param_1,"\'tostring\' must return a string to \'print\'");
          goto LAB_00209290;
        }
        if (iVar3 != 1) break;
        fwrite(__ptr,1,local_10,_stdout);
        lua_settop(param_1,0xfffffffe);
        if (iVar1 == 1) goto LAB_00209268;
        iVar3 = 2;
      }
      fwrite(&DAT_0022a968,1,1,_stdout);
      iVar3 = iVar3 + 1;
      fwrite(__ptr,1,local_10,_stdout);
      lua_settop(param_1,0xfffffffe);
    } while (iVar3 <= iVar1);
  }
LAB_00209268:
  fwrite("\n",1,1,_stdout);
  fflush(_stdout);
  uVar2 = 0;
LAB_00209290:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,local_8 - ___stack_chk_guard,0);
  }
  return;
}


