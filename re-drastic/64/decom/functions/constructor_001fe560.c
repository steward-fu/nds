/*
 * Ghidra decompilation
 *
 * Function : constructor
 * Address  : 001fe560
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void constructor(long param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong local_30;
  undefined8 uStack_28;
  undefined4 *local_20;
  undefined4 local_18;
  int iStack_14;
  int local_10;
  long local_8;
  
  plVar11 = *(long **)(param_1 + 0x30);
  local_8 = ___stack_chk_guard;
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = luaK_codeABC(plVar11,0xb,0,0,0);
  lVar9 = (long)iVar3;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *param_2 = 0xc;
  param_2[1] = iVar3;
  *(undefined8 *)(param_2 + 2) = 0xffffffffffffffff;
  local_30 = 0;
  uStack_28 = 0xffffffffffffffff;
  local_18 = 0;
  iStack_14 = 0;
  local_10 = 0;
  local_20 = param_2;
  luaK_exp2nextreg(uVar6,param_2);
  if (*(int *)(param_1 + 0x10) != 0x7b) {
                    /* WARNING: Subroutine does not return */
    error_expected(param_1,0x7b);
  }
  luaX_next(param_1);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0x7d) {
    do {
      if ((int)local_30 != 0) {
        luaK_exp2nextreg(plVar11,&local_30);
        local_30 = local_30 & 0xffffffff00000000;
        if (local_10 == 0x32) {
          luaK_setlist(plVar11,local_20[1],iStack_14);
          iVar3 = *(int *)(param_1 + 0x10);
          local_10 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x10);
        }
      }
      if ((iVar3 == 0x5b) || ((iVar3 == 0x124 && (iVar3 = luaX_lookahead(param_1), iVar3 == 0x3d))))
      {
        recfield_isra_0(param_1,&local_20,&local_18);
        iVar3 = *(int *)(param_1 + 0x10);
      }
      else {
        subexpr(param_1,&local_30,0);
        iVar3 = *(int *)(param_1 + 0x10);
        iStack_14 = iStack_14 + 1;
        local_10 = local_10 + 1;
      }
      if ((iVar3 != 0x2c) && (iVar3 != 0x3b)) {
        if (iVar3 != 0x7d) {
          if (iVar4 != *(int *)(param_1 + 4)) {
            uVar10 = *(undefined8 *)(param_1 + 0x38);
            uVar6 = luaX_token2str(param_1,0x7d);
            uVar7 = luaX_token2str(param_1,0x7b);
            uVar6 = luaO_pushfstring(uVar10,"%s expected (to close %s at line %d)",uVar6,uVar7,iVar4
                                    );
                    /* WARNING: Subroutine does not return */
            luaX_syntaxerror(param_1,uVar6);
          }
                    /* WARNING: Subroutine does not return */
          error_expected(param_1,0x7d);
        }
        break;
      }
      luaX_next(param_1);
      iVar3 = *(int *)(param_1 + 0x10);
    } while (iVar3 != 0x7d);
  }
  luaX_next(param_1);
  if (local_10 != 0) {
    if ((int)local_30 - 0xdU < 2) {
      luaK_setreturns(plVar11,&local_30,0xffffffff);
      luaK_setlist(plVar11,local_20[1],iStack_14,0xffffffff);
      iStack_14 = iStack_14 + -1;
    }
    else {
      if ((int)local_30 != 0) {
        luaK_exp2nextreg(plVar11,&local_30);
      }
      luaK_setlist(plVar11,local_20[1],iStack_14,local_10);
    }
  }
  uVar1 = *(uint *)(*(long *)(*plVar11 + 0x38) + lVar9 * 4);
  iVar4 = luaO_int2fb(iStack_14);
  *(uint *)(*(long *)(*plVar11 + 0x38) + lVar9 * 4) = uVar1 & 0x7fffff | iVar4 << 0x17;
  uVar5 = luaO_int2fb(local_18);
  lVar8 = *(long *)(*plVar11 + 0x38);
  lVar2 = local_8 - ___stack_chk_guard;
  *(uint *)(lVar8 + lVar9 * 4) = iVar4 << 0x17 | uVar1 & 0x3fff | (uVar5 & 0x1ff) << 0xe;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar8,lVar2,0);
}


