/*
 * Ghidra decompilation
 *
 * Function : singlevar
 * Address  : 001fc4d0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void singlevar(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x10) != 0x124) {
                    /* WARNING: Subroutine does not return */
    error_expected(param_1,0x124,*(int *)(param_1 + 0x10),0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  luaX_next();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = singlevaraux(uVar2,uVar3,param_2,1);
  if (iVar1 == 0) {
    singlevaraux(uVar2,*(undefined8 *)(param_1 + 0x68),param_2,1);
    uStack_14 = luaK_stringK(*(undefined8 *)(param_1 + 0x30),uVar3);
    local_18 = 4;
    local_10 = 0xffffffffffffffff;
    luaK_indexed(uVar2,param_2,&local_18);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


