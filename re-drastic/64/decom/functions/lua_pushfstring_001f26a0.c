/*
 * Ghidra decompilation
 *
 * Function : lua_pushfstring
 * Address  : 001f26a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lua_pushfstring(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  lVar1 = ___stack_chk_guard;
  local_30 = param_3;
  uStack_28 = param_4;
  local_20 = param_5;
  uStack_18 = param_6;
  local_10 = param_7;
  uStack_8 = param_8;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    luaC_step();
  }
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined *)register0x00000008;
  puStack_f8 = (undefined *)register0x00000008;
  uVar2 = luaO_pushvfstring(param_1,param_2,&local_100);
  if (lVar1 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,lVar1 - ___stack_chk_guard,0);
}


