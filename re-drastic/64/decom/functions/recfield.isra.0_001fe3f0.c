/*
 * Ghidra decompilation
 *
 * Function : recfield.isra.0
 * Address  : 001fe3f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recfield_isra_0(long param_1,long *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined auStack_18 [16];
  long local_8;
  
  lVar5 = *(long *)(param_1 + 0x30);
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined *)(lVar5 + 0x3c);
  if (*(int *)(param_1 + 0x10) == 0x124) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    luaX_next();
    uStack_24 = luaK_stringK(*(undefined8 *)(param_1 + 0x30),uVar6);
    local_28 = 4;
    local_20 = 0xffffffffffffffff;
  }
  else {
    luaX_next();
    subexpr(param_1,&local_28,0);
    luaK_exp2val(*(undefined8 *)(param_1 + 0x30),&local_28);
    if (*(int *)(param_1 + 0x10) != 0x5d) {
                    /* WARNING: Subroutine does not return */
      error_expected(param_1,0x5d);
    }
    luaX_next();
  }
  *param_3 = *param_3 + 1;
  if (*(int *)(param_1 + 0x10) == 0x3d) {
    luaX_next();
    uVar3 = luaK_exp2RK(lVar5,&local_28);
    subexpr(param_1,auStack_18,0);
    uVar1 = *(undefined4 *)(*param_2 + 4);
    uVar4 = luaK_exp2RK(lVar5,auStack_18);
    luaK_codeABC(lVar5,10,uVar1,uVar3,uVar4);
    *(undefined *)(lVar5 + 0x3c) = uVar2;
    if (local_8 - ___stack_chk_guard == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
                    /* WARNING: Subroutine does not return */
  error_expected(param_1,0x3d);
}


