/*
 * Ghidra decompilation
 *
 * Function : funcargs
 * Address  : 001fe870
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void funcargs(long param_1,undefined4 *param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x30);
  if (iVar1 == 0x7b) {
    constructor(param_1,&local_18,param_3,0x7b,0);
  }
  else {
    if (iVar1 == 0x125) {
      uStack_14 = luaK_stringK(lVar7,*(undefined8 *)(param_1 + 0x18));
      local_18 = 4;
      local_10 = 0xffffffffffffffff;
      luaX_next(param_1);
      iVar1 = param_2[1];
      goto joined_r0x001fe9b0;
    }
    if (iVar1 != 0x28) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(param_1,"function arguments expected");
    }
    luaX_next();
    if (*(int *)(param_1 + 0x10) == 0x29) {
      local_18 = 0;
    }
    else {
      while (subexpr(param_1,&local_18,0), *(int *)(param_1 + 0x10) == 0x2c) {
        luaX_next(param_1);
        luaK_exp2nextreg(*(undefined8 *)(param_1 + 0x30),&local_18);
      }
      luaK_setreturns(lVar7,&local_18,0xffffffff);
      if (*(int *)(param_1 + 0x10) != 0x29) {
        if ((int)param_3 == *(int *)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
          error_expected(param_1,0x29);
        }
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        uVar3 = luaX_token2str(param_1,0x29);
        uVar4 = luaX_token2str(param_1,0x28);
        uVar3 = luaO_pushfstring(uVar6,"%s expected (to close %s at line %d)",uVar3,uVar4,
                                 param_3 & 0xffffffff);
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(param_1,uVar3);
      }
    }
    luaX_next(param_1);
  }
  iVar1 = param_2[1];
joined_r0x001fe9b0:
  if (local_18 - 0xdU < 2) {
    iVar5 = 0;
  }
  else {
    if (local_18 != 0) {
      luaK_exp2nextreg(lVar7,&local_18);
    }
    iVar5 = (uint)*(byte *)(lVar7 + 0x3c) - iVar1;
  }
  uVar2 = luaK_codeABC(lVar7,0x24,iVar1,iVar5,2);
  *param_2 = 0xd;
  param_2[1] = uVar2;
  *(undefined8 *)(param_2 + 2) = 0xffffffffffffffff;
  luaK_fixline(lVar7,param_3 & 0xffffffff);
  *(char *)(lVar7 + 0x3c) = (char)iVar1 + '\x01';
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


