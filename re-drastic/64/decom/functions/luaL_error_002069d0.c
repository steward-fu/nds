/*
 * Ghidra decompilation
 *
 * Function : luaL_error
 * Address  : 002069d0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaL_error(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  int iVar1;
  undefined8 uVar2;
  undefined *local_180;
  undefined *puStack_178;
  undefined8 *local_170;
  undefined8 uStack_168;
  undefined *puVar3;
  undefined *puVar4;
  undefined auStack_138 [40];
  int local_110;
  undefined auStack_100 [72];
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_b8 = ___stack_chk_guard;
  puVar3 = (undefined *)register0x00000008;
  puVar4 = (undefined *)register0x00000008;
  local_b0 = param_1;
  local_a0 = param_2;
  local_90 = param_3;
  local_80 = param_4;
  local_70 = param_5;
  local_60 = param_6;
  local_50 = param_7;
  local_40 = param_8;
  local_30 = param_11;
  uStack_28 = param_12;
  local_20 = param_13;
  uStack_18 = param_14;
  local_10 = param_15;
  uStack_8 = param_16;
  iVar1 = lua_getstack(param_9,1,auStack_138);
  if (iVar1 != 0) {
    lua_getinfo(param_9,&DAT_0022a660,auStack_138);
    if (0 < local_110) {
      lua_pushfstring(param_9,"%s:%d: ",auStack_100);
      local_180 = puVar3;
      puStack_178 = puVar4;
      goto LAB_00206a8c;
    }
  }
  lua_pushlstring(param_9,"",0);
  local_180 = puVar3;
  puStack_178 = puVar4;
LAB_00206a8c:
  uStack_168 = 0xffffff80ffffffd0;
  local_170 = &local_30;
  lua_pushvfstring(param_9,param_10,&local_180);
  lua_concat(param_9,2);
  uVar2 = lua_error(param_9);
  if (local_b8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,local_b8 - ___stack_chk_guard,0);
}


