/*
 * Ghidra decompilation
 *
 * Function : str_char
 * Address  : 0020dab0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 str_char(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined auStack_1028 [4128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = lua_gettop(param_1,&__stack_chk_guard,0);
  lVar2 = luaL_buffinitsize(param_1,auStack_1028,(long)iVar1);
  if (0 < iVar1) {
    uVar4 = 1;
    do {
      while( true ) {
        uVar3 = luaL_checkinteger(param_1,uVar4 & 0xffffffff);
        if ((uVar3 & 0xffffff00) == 0) break;
        luaL_argerror(param_1,uVar4 & 0xffffffff,"value out of range");
        *(char *)(lVar2 + -1 + uVar4) = (char)uVar3;
        uVar4 = uVar4 + 1;
        if (iVar1 < (int)uVar4) goto LAB_0020db68;
      }
      *(char *)(lVar2 + -1 + uVar4) = (char)uVar3;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 <= iVar1);
  }
LAB_0020db68:
  luaL_pushresultsize(auStack_1028,(long)iVar1);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return 1;
}


