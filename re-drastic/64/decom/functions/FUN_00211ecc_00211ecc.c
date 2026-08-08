/*
 * Ghidra decompilation
 *
 * Function : FUN_00211ecc
 * Address  : 00211ecc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211ecc(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  code *pcStack_18;
  code *pcStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  checktab_isra_0_constprop_0(param_1,&pcStack_18,&pcStack_10,&__stack_chk_guard,0);
  iVar2 = luaL_len(param_1,1);
  iVar2 = iVar2 + 1;
  iVar3 = lua_gettop(param_1);
  iVar5 = iVar2;
  if (iVar3 != 2) {
    if (iVar3 != 3) {
      uVar4 = luaL_error(param_1,"wrong number of arguments to \'insert\'");
      goto LAB_00211fac;
    }
    iVar3 = luaL_checkinteger(param_1,2);
    bVar1 = false;
    if (iVar3 >= 1) {
      bVar1 = iVar2 - iVar3 < 0;
    }
    if (bVar1 != (iVar3 < 1 || SBORROW4(iVar2,iVar3))) {
      luaL_argerror(param_1,2,"position out of bounds");
    }
    iVar5 = iVar3;
    if (iVar3 < iVar2) {
      do {
        iVar5 = iVar2 + -1;
        (*pcStack_18)(param_1,1,iVar5);
        (*pcStack_10)(param_1,1,iVar2);
        iVar2 = iVar5;
      } while (iVar5 != iVar3);
    }
  }
  (*pcStack_10)(param_1,1,iVar5);
  uVar4 = 0;
LAB_00211fac:
  if (lStack_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4,lStack_8 - ___stack_chk_guard,0);
  }
  return;
}


