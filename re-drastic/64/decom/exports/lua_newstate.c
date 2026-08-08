/*
 * Ghidra decompilation
 *
 * Function : lua_newstate
 * Address  : 001ffb00
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long lua_newstate(code *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_2c;
  long local_28;
  undefined4 *local_20;
  undefined8 *local_18;
  code *pcStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = (*param_1)(param_2,0,8,0x2d8);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar3 + 8;
    *(undefined *)(lVar3 + 300) = 1;
    *(long *)(lVar3 + 0x20) = lVar3 + 0xd8;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(long *)(lVar3 + 0x58) = lVar5;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined2 *)(lVar3 + 0x10) = 0x108;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined *)(lVar3 + 0x12) = 0;
    *(undefined8 *)(lVar3 + 0xb0) = 0;
    *(undefined8 *)(lVar3 + 0xb8) = 0;
    *(undefined8 *)(lVar3 + 0xc0) = 0;
    *(undefined8 *)(lVar3 + 200) = 0x100000000;
    *(undefined2 *)(lVar3 + 0xd0) = 0x100;
    *(code **)(lVar3 + 0xd8) = param_1;
    *(undefined8 *)(lVar3 + 0xe0) = param_2;
    *(long *)(lVar3 + 0x1b8) = lVar5;
    uVar4 = time((time_t *)0x0);
    local_20 = &local_2c;
    local_2c = (undefined4)uVar4;
    local_18 = &luaO_nilobject_;
    pcStack_10 = lua_newstate;
    local_28 = lVar5;
    uVar1 = luaS_hash(&local_28,0x20,uVar4 & 0xffffffff);
    *(undefined8 *)(lVar3 + 0xe8) = 0x2d8;
    *(undefined8 *)(lVar3 + 0xf0) = 0;
    *(undefined8 *)(lVar3 + 0x100) = 0;
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined8 *)(lVar3 + 0x110) = 0;
    *(undefined4 *)(lVar3 + 0x120) = 0;
    *(undefined4 *)(lVar3 + 0x128) = uVar1;
    *(undefined *)(lVar3 + 0x12d) = 7;
    *(undefined2 *)(lVar3 + 0x12e) = 0;
    *(undefined8 *)(lVar3 + 0x138) = 0;
    *(undefined8 *)(lVar3 + 0x130) = 0;
    *(undefined8 *)(lVar3 + 0x148) = 0;
    *(undefined8 *)(lVar3 + 0x140) = 0;
    *(undefined8 *)(lVar3 + 0x158) = 0;
    *(undefined8 *)(lVar3 + 0x150) = 0;
    *(undefined8 *)(lVar3 + 0x168) = 0;
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined8 *)(lVar3 + 0x178) = 0;
    *(undefined8 *)(lVar3 + 0x170) = 0;
    *(undefined8 *)(lVar3 + 0x188) = 0;
    *(undefined8 *)(lVar3 + 0x180) = 0;
    *(undefined8 *)(lVar3 + 0x198) = 0;
    *(undefined8 *)(lVar3 + 0x1a0) = 0xc800000000;
    *(undefined4 *)(lVar3 + 0x1a8) = 200;
    *(undefined8 *)(lVar3 + 0x1b0) = 0;
    *(undefined8 *)(lVar3 + 0x1c0) = 0;
    *(undefined8 *)(lVar3 + 0x290) = 0;
    *(undefined8 *)(lVar3 + 0x298) = 0;
    *(undefined8 *)(lVar3 + 0x2a0) = 0;
    *(undefined8 *)(lVar3 + 0x2a8) = 0;
    *(undefined8 *)(lVar3 + 0x2b0) = 0;
    *(undefined8 *)(lVar3 + 0x2b8) = 0;
    *(undefined8 *)(lVar3 + 0x2c0) = 0;
    *(undefined8 *)(lVar3 + 0x2c8) = 0;
    *(undefined8 *)(lVar3 + 0x2d0) = 0;
    iVar2 = luaD_rawrunprotected(lVar5,f_luaopen,0);
    if (iVar2 != 0) {
      close_state(lVar5);
      lVar5 = 0;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return lVar5;
}


