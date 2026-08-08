/*
 * Ghidra decompilation
 *
 * Function : test_then_block
 * Address  : 001ff110
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_then_block(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined local_10;
  undefined2 local_f;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = *(long *)(param_1 + 0x30);
  luaX_next(param_1,0);
  subexpr(param_1,auStack_30,0);
  if (*(int *)(param_1 + 0x10) != 0x113) {
                    /* WARNING: Subroutine does not return */
    error_expected(param_1,0x113);
  }
  luaX_next();
  if ((*(uint *)(param_1 + 0x10) & 0xfffffff7) == 0x102) {
    luaK_goiffalse(*(undefined8 *)(param_1 + 0x30),auStack_30);
    local_10 = *(undefined *)(lVar5 + 0x3a);
    local_20 = *(undefined8 *)(lVar5 + 0x18);
    local_f = 0;
    lVar4 = *(long *)(*(long *)(lVar5 + 0x10) + 0x58);
    uStack_14 = *(undefined4 *)(lVar4 + 0x18);
    local_18 = *(undefined4 *)(lVar4 + 0x28);
    *(undefined8 **)(lVar5 + 0x18) = &local_20;
    gotostat(param_1,local_28);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0x120 || iVar1 == 0x3b) {
      do {
        statement(param_1);
        iVar1 = *(int *)(param_1 + 0x10);
      } while (iVar1 == 0x3b || iVar1 == 0x120);
    }
    if (iVar1 < 0x107) {
      if (0x103 < iVar1) {
LAB_001ff2fc:
        leaveblock(lVar5);
        goto LAB_001ff2c4;
      }
    }
    else if (iVar1 == 0x121) goto LAB_001ff2fc;
    uVar2 = luaK_jump(lVar5);
  }
  else {
    luaK_goiftrue();
    local_10 = *(undefined *)(lVar5 + 0x3a);
    local_20 = *(undefined8 *)(lVar5 + 0x18);
    local_f = 0;
    lVar4 = *(long *)(*(long *)(lVar5 + 0x10) + 0x58);
    uStack_14 = *(undefined4 *)(lVar4 + 0x18);
    local_18 = *(undefined4 *)(lVar4 + 0x28);
    *(undefined8 **)(lVar5 + 0x18) = &local_20;
    uVar2 = local_24;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  while( true ) {
    if ((iVar1 - 0x104U < 0x1e) && ((1L << ((ulong)(iVar1 - 0x104U) & 0x3f) & 0x20020007U) != 0))
    goto LAB_001ff2a0;
    if (iVar1 == 0x112) break;
    statement(param_1);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  statement(param_1);
LAB_001ff2a0:
  leaveblock(lVar5);
  if (*(int *)(param_1 + 0x10) - 0x104U < 2) {
    uVar3 = luaK_jump(lVar5);
    luaK_concat(lVar5,param_2,uVar3);
  }
  luaK_patchtohere(lVar5,uVar2);
LAB_001ff2c4:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


