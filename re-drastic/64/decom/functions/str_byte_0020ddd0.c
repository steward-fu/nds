/*
 * Ghidra decompilation
 *
 * Function : str_byte
 * Address  : 0020ddd0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int str_byte(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  ulong local_10;
  long local_8;
  undefined *puVar8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = luaL_checklstring(param_1,1,&local_10,0);
  iVar1 = luaL_optinteger(param_1,2,1);
  if (iVar1 < 0) {
    lVar5 = (long)iVar1;
    iVar2 = iVar1 + (int)local_10;
    iVar1 = 0;
    if ((ulong)-lVar5 <= local_10) {
      iVar1 = iVar2 + 1;
    }
  }
  iVar2 = luaL_optinteger(param_1,3,iVar1);
  iVar6 = (int)local_10;
  if (iVar2 < 0) {
    iVar3 = 0;
    if (local_10 < (ulong)-(long)iVar2) goto LAB_0020de68;
    iVar2 = iVar2 + iVar6 + 1;
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  if (iVar6 < iVar2) {
    iVar2 = iVar6;
  }
  if (iVar2 < iVar1) {
    iVar3 = 0;
  }
  else {
    iVar3 = (iVar2 - iVar1) + 1;
    if (iVar2 < iVar1 + iVar3) {
      luaL_checkstack(param_1,iVar3,"string slice too long");
      puVar8 = (undefined *)(lVar4 + (long)iVar1 + -1);
      do {
        puVar7 = puVar8 + 1;
        lua_pushinteger(param_1,*puVar8);
        puVar8 = puVar7;
      } while ((undefined *)(lVar4 + iVar1 + (long)(iVar2 - iVar1)) != puVar7);
    }
    else {
      iVar3 = luaL_error(param_1,"string slice too long");
    }
  }
LAB_0020de68:
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


