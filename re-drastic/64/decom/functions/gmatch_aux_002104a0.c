/*
 * Ghidra decompilation
 *
 * Function : gmatch_aux
 * Address  : 002104a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gmatch_aux(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long local_248;
  long lStack_240;
  undefined4 local_238 [2];
  long local_230;
  ulong local_228;
  long local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = lua_tolstring(param_1,0xfff0b9d7,&local_248,0);
  lVar3 = lua_tolstring(param_1,0xfff0b9d6,&lStack_240);
  local_228 = lVar2 + local_248;
  local_220 = lVar3 + lStack_240;
  local_238[0] = 200;
  local_230 = lVar2;
  uStack_218 = param_1;
  iVar1 = lua_tointegerx(param_1,0xfff0b9d5,0);
  uVar6 = lVar2 + iVar1;
  if (uVar6 <= local_228) {
    do {
      local_210 = 0;
      uVar4 = match(local_238,uVar6,lVar3);
      if (uVar4 != 0) {
        iVar1 = (int)uVar4 - (int)lVar2;
        if (uVar4 == uVar6) {
          iVar1 = iVar1 + 1;
        }
        lua_pushinteger(param_1,iVar1);
        lua_copy(param_1,0xffffffff,0xfff0b9d5);
        lua_settop(param_1,0xfffffffe);
        uVar5 = push_captures(local_238,uVar6,uVar4);
        goto LAB_002105c0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= local_228);
  }
  uVar5 = 0;
LAB_002105c0:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5,local_8 - ___stack_chk_guard,0);
}


