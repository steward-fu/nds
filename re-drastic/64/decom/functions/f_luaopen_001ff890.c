/*
 * Ghidra decompilation
 *
 * Function : f_luaopen
 * Address  : 001ff890
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void f_luaopen(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar5;
  long local_18;
  undefined4 local_10;
  long local_8;
  undefined4 *puVar4;
  
  local_8 = ___stack_chk_guard;
  lVar5 = *(long *)(param_1 + 0x18);
  lVar1 = luaM_realloc_(param_1,0,0,0x280);
  *(long *)(param_1 + 0x38) = lVar1;
  *(undefined4 *)(param_1 + 0xb8) = 0x28;
  puVar3 = (undefined4 *)(lVar1 + 8);
  do {
    puVar4 = puVar3 + 4;
    *puVar3 = 0;
    puVar3 = puVar4;
  } while (puVar4 != (undefined4 *)(lVar1 + 0x288));
  *(long *)(param_1 + 0x30) = lVar1 + 0x230;
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  *(long *)(param_1 + 0x60) = lVar1;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined *)(param_1 + 0xa2) = 0;
  *(undefined4 *)(lVar1 + 8) = 0;
  *(long *)(param_1 + 0x20) = param_1 + 0x60;
  *(long *)(param_1 + 0x68) = lVar1 + 0x150;
  uVar2 = luaH_new(param_1);
  *(undefined8 *)(lVar5 + 0x40) = uVar2;
  *(undefined4 *)(lVar5 + 0x48) = 0x45;
  luaH_resize(param_1,uVar2,2,0);
  local_10 = 0x48;
  local_18 = param_1;
  luaH_setint(param_1,uVar2,1,&local_18);
  local_18 = luaH_new(param_1);
  local_10 = 0x45;
  luaH_setint(param_1,uVar2,2,&local_18);
  luaS_resize(param_1,0x40);
  luaT_init(param_1);
  luaX_init(param_1);
  uVar2 = luaS_newlstr(param_1,"not enough memory",0x11);
  *(undefined8 *)(lVar5 + 0xf0) = uVar2;
  luaC_fix(param_1);
  *(undefined *)(lVar5 + 0x57) = 1;
  uVar2 = lua_version(0);
  *(undefined8 *)(lVar5 + 0xe8) = uVar2;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


