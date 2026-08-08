/*
 * Ghidra decompilation
 *
 * Function : suffixedexp
 * Address  : 001feaa0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void suffixedexp(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x10) == 0x28) {
    luaX_next();
    subexpr(param_1,param_2,0);
    if (*(int *)(param_1 + 0x10) != 0x29) {
      if (iVar1 == *(int *)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
        error_expected(param_1,0x29);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar3 = luaX_token2str(param_1,0x29);
      uVar4 = luaX_token2str(param_1,0x28);
      uVar3 = luaO_pushfstring(uVar5,"%s expected (to close %s at line %d)",uVar3,uVar4,iVar1);
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(param_1,uVar3);
    }
    luaX_next(param_1);
    luaK_dischargevars(*(undefined8 *)(param_1 + 0x30),param_2);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0x124) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(param_1,"unexpected symbol");
    }
    singlevar();
  }
LAB_001feb04:
  do {
    iVar2 = *(int *)(param_1 + 0x10);
    while (iVar2 != 0x3a) {
      if (0x3a < iVar2) {
        if (iVar2 == 0x5b) {
          luaK_exp2anyregup(uVar3,param_2);
          luaX_next(param_1);
          subexpr(param_1,&local_18,0);
          luaK_exp2val(*(undefined8 *)(param_1 + 0x30),&local_18);
          if (*(int *)(param_1 + 0x10) != 0x5d) {
                    /* WARNING: Subroutine does not return */
            error_expected(param_1,0x5d);
          }
          luaX_next();
          luaK_indexed(uVar3,param_2,&local_18);
        }
        else {
          if ((iVar2 < 0x5b) || ((iVar2 != 0x7b && (iVar2 != 0x125)))) goto LAB_001feb24;
LAB_001fec3c:
          luaK_exp2nextreg(uVar3,param_2);
          funcargs(param_1,param_2,iVar1);
        }
        goto LAB_001feb04;
      }
      if (iVar2 == 0x28) goto LAB_001fec3c;
      if (iVar2 != 0x2e) {
LAB_001feb24:
        if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
        }
        return;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      luaK_exp2anyregup(uVar4,param_2);
      luaX_next(param_1);
      if (*(int *)(param_1 + 0x10) != 0x124) goto LAB_001fed58;
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      luaX_next(param_1);
      uStack_14 = luaK_stringK(*(undefined8 *)(param_1 + 0x30),uVar5);
      local_18 = 4;
      local_10 = 0xffffffffffffffff;
      luaK_indexed(uVar4,param_2,&local_18);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    luaX_next(param_1);
    if (*(int *)(param_1 + 0x10) != 0x124) {
LAB_001fed58:
                    /* WARNING: Subroutine does not return */
      error_expected(param_1,0x124);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    luaX_next(param_1);
    uStack_14 = luaK_stringK(*(undefined8 *)(param_1 + 0x30),uVar4);
    local_18 = 4;
    local_10 = 0xffffffffffffffff;
    luaK_self(uVar3,param_2,&local_18);
    funcargs(param_1,param_2,iVar1);
  } while( true );
}


