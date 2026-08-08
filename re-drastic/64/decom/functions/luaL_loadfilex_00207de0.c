/*
 * Ghidra decompilation
 *
 * Function : luaL_loadfilex
 * Address  : 00207de0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 luaL_loadfilex(undefined8 param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  long lVar7;
  undefined uVar8;
  int local_201c;
  int local_2018 [2];
  FILE *local_2010;
  undefined auStack_2008 [8192];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = lua_gettop(param_1,0);
  iVar1 = iVar1 + 1;
  if (param_2 == (char *)0x0) {
    lua_pushlstring(param_1,"=stdin",6);
    local_2010 = _stdin;
  }
  else {
    lua_pushfstring(param_1,&DAT_0022a798,param_2);
    local_2010 = fopen64(param_2,"r");
    if (local_2010 == (FILE *)0x0) {
      piVar5 = __errno_location();
      uVar3 = 7;
      pcVar6 = strerror(*piVar5);
      lVar7 = lua_tolstring(param_1,iVar1,0);
      lua_pushfstring(param_1,"cannot %s %s: %s",&DAT_0022a7a0,lVar7 + 1,pcVar6);
      lua_rotate(param_1,iVar1,0xffffffff);
      lua_settop(param_1,0xfffffffe);
      goto LAB_00207f58;
    }
  }
  iVar2 = skipcomment(local_2018,&local_201c);
  if (iVar2 == 0) {
    if (local_201c == 0x1b) goto LAB_00207fb4;
LAB_00207e7c:
    if (local_201c != -1) {
LAB_00207e84:
      uVar8 = (undefined)local_201c;
      goto LAB_00207e88;
    }
LAB_00207e9c:
    uVar4 = lua_tolstring(param_1,0xffffffff,0);
    uVar3 = lua_load(param_1,getF,local_2018,uVar4,param_3);
    iVar2 = ferror(local_2010);
    if (param_2 != (char *)0x0) {
LAB_00207edc:
      fclose(local_2010);
    }
    if (iVar2 != 0) {
      lua_settop(param_1,iVar1);
      uVar3 = 7;
      piVar5 = __errno_location();
      pcVar6 = strerror(*piVar5);
      lVar7 = lua_tolstring(param_1,iVar1,0);
      lua_pushfstring(param_1,"cannot %s %s: %s",&DAT_0022a7c8,lVar7 + 1,pcVar6);
    }
  }
  else {
    iVar2 = local_2018[0] + 1;
    auStack_2008[local_2018[0]] = 10;
    local_2018[0] = iVar2;
    if (local_201c != 0x1b) goto LAB_00207e7c;
LAB_00207fb4:
    uVar8 = (undefined)local_201c;
    if (param_2 == (char *)0x0) {
LAB_00207e88:
      auStack_2008[local_2018[0]] = uVar8;
      local_2018[0] = local_2018[0] + 1;
      goto LAB_00207e9c;
    }
    local_2010 = freopen64(param_2,"rb",local_2010);
    if (local_2010 != (FILE *)0x0) {
      skipcomment(local_2018,&local_201c);
      if (local_201c != -1) goto LAB_00207e84;
      uVar4 = lua_tolstring(param_1,0xffffffff,0);
      uVar3 = lua_load(param_1,getF,local_2018,uVar4,param_3);
      iVar2 = ferror(local_2010);
      goto LAB_00207edc;
    }
    piVar5 = __errno_location();
    uVar3 = 7;
    pcVar6 = strerror(*piVar5);
    lVar7 = lua_tolstring(param_1,iVar1,0);
    lua_pushfstring(param_1,"cannot %s %s: %s","reopen",lVar7 + 1,pcVar6);
  }
  lua_rotate(param_1,iVar1,0xffffffff);
  lua_settop(param_1,0xfffffffe);
LAB_00207f58:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return uVar3;
}


