/*
 * Ghidra decompilation
 *
 * Function : luaL_gsub
 * Address  : 00208890
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaL_gsub(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  size_t __n;
  void *pvVar2;
  char *pcVar3;
  undefined *__dest;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong __n_00;
  undefined *local_1030;
  ulong local_1028;
  ulong uStack_1020;
  undefined8 local_1018;
  undefined auStack_1010 [4104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  sVar1 = strlen(param_3);
  uStack_1020 = 0;
  local_1028 = 0x1000;
  local_1030 = auStack_1010;
  local_1018 = param_1;
  do {
    uVar5 = uStack_1020;
    pcVar3 = strstr(param_2,param_3);
    uVar4 = local_1018;
    if (pcVar3 == (char *)0x0) {
      sVar1 = strlen(param_2);
      pvVar2 = (void *)luaL_prepbuffsize(&local_1030,sVar1);
      memcpy(pvVar2,param_2,sVar1);
      uVar4 = local_1018;
      uStack_1020 = sVar1 + uStack_1020;
      lua_pushlstring(local_1018,local_1030);
      if (local_1030 != auStack_1010) {
        lua_rotate(uVar4,0xfffffffe,0xffffffff);
        lua_settop(uVar4,0xfffffffe);
      }
      uVar4 = lua_tolstring(param_1,0xffffffff,0);
      if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar4,local_8 - ___stack_chk_guard,0);
      }
      return;
    }
    __n_00 = (long)pcVar3 - (long)param_2;
    __dest = local_1030;
    uVar6 = local_1028;
    if (local_1028 - uVar5 < __n_00) {
      uVar6 = local_1028 * 2;
      if (uVar6 - uVar5 < __n_00) {
        uVar6 = __n_00 + uVar5;
        if (CARRY8(__n_00,uVar5)) {
LAB_00208a14:
          luaL_error(local_1018,"buffer too large");
        }
      }
      else if (uVar6 < uVar5) goto LAB_00208a14;
      __dest = (undefined *)lua_newuserdata(uVar4,uVar6);
      memcpy(__dest,local_1030,uStack_1020);
      uVar5 = uStack_1020;
      if (local_1030 != auStack_1010) {
        lua_rotate(uVar4,0xfffffffe,0xffffffff);
        lua_settop(uVar4,0xfffffffe);
        uVar5 = uStack_1020;
      }
    }
    local_1028 = uVar6;
    local_1030 = __dest;
    memcpy(local_1030 + uVar5,param_2,__n_00);
    uStack_1020 = uStack_1020 + __n_00;
    param_2 = pcVar3 + sVar1;
    __n = strlen(param_4);
    pvVar2 = (void *)luaL_prepbuffsize(&local_1030,__n);
    memcpy(pvVar2,param_4,__n);
    uStack_1020 = __n + uStack_1020;
  } while( true );
}


