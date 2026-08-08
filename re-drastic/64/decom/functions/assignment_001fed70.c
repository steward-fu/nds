/*
 * Ghidra decompilation
 *
 * Function : assignment
 * Address  : 001fed70
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void assignment(long param_1,long **param_2,undefined8 param_3)

{
  int iVar1;
  undefined uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  long **pplVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long **local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (2 < *(int *)(param_2 + 1) - 8U) {
                    /* WARNING: Subroutine does not return */
    luaX_syntaxerror(param_1,"syntax error",param_3,*(int *)(param_2 + 1) - 8U,0);
  }
  iVar6 = (int)param_3;
  if (*(int *)(param_1 + 0x10) == 0x2c) {
    luaX_next();
    local_20 = param_2;
    suffixedexp(param_1,&local_18);
    lVar12 = *(long *)(param_1 + 0x30);
    if ((uint)local_18 != 10) {
      bVar3 = *(byte *)(lVar12 + 0x3c);
      bVar5 = false;
      pplVar7 = param_2;
      if ((uint)local_18 == 8) {
        do {
          if (*(int *)(pplVar7 + 1) == 10) {
            if ((*(char *)((long)pplVar7 + 0xf) == '\b') &&
               (*(byte *)((long)pplVar7 + 0xe) == local_18._4_4_)) {
              *(byte *)((long)pplVar7 + 0xe) = bVar3;
              bVar5 = true;
            }
            if ((int)*(short *)((long)pplVar7 + 0xc) == local_18._4_4_) {
              bVar5 = true;
              *(ushort *)((long)pplVar7 + 0xc) = (ushort)bVar3;
            }
          }
          pplVar7 = (long **)*pplVar7;
        } while (pplVar7 != (long **)0x0);
        uVar9 = 0;
        if (bVar5) goto LAB_001ff07c;
      }
      else {
        do {
          if (((*(int *)(pplVar7 + 1) == 10) && ((uint)local_18 == *(byte *)((long)pplVar7 + 0xf)))
             && (local_18._4_4_ == *(byte *)((long)pplVar7 + 0xe))) {
            bVar5 = true;
            *(byte *)((long)pplVar7 + 0xe) = bVar3;
            *(undefined *)((long)pplVar7 + 0xf) = 8;
          }
          pplVar7 = (long **)*pplVar7;
        } while (pplVar7 != (long **)0x0);
        if (bVar5) {
          uVar9 = 5;
LAB_001ff07c:
          luaK_codeABC(lVar12,uVar9,bVar3,local_18._4_4_,0);
          luaK_reserveregs(lVar12,1);
          lVar12 = *(long *)(param_1 + 0x30);
        }
      }
    }
    if (200 < (int)((uint)*(ushort *)(*(long *)(param_1 + 0x38) + 0xc6) + iVar6)) {
                    /* WARNING: Subroutine does not return */
      checklimit_part_0(lVar12,200,"C levels");
    }
    assignment(param_1,&local_20,iVar6 + 1);
    lVar12 = *(long *)(param_1 + 0x30);
    uVar8 = (uint)*(byte *)(lVar12 + 0x3c);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0x3d) {
                    /* WARNING: Subroutine does not return */
      error_expected(param_1,0x3d);
    }
    luaX_next();
    subexpr(param_1,&local_20,0);
    iVar10 = 1;
    iVar11 = 1;
    if (*(int *)(param_1 + 0x10) == 0x2c) {
      do {
        luaX_next(param_1);
        iVar10 = iVar11 + 1;
        luaK_exp2nextreg(*(undefined8 *)(param_1 + 0x30),&local_20);
        subexpr(param_1,&local_20,0);
        iVar11 = iVar10;
      } while (*(int *)(param_1 + 0x10) == 0x2c);
      lVar12 = *(long *)(param_1 + 0x30);
      if (iVar6 == iVar10) goto LAB_001fef00;
    }
    else {
      lVar12 = *(long *)(param_1 + 0x30);
      if (iVar6 == 1) {
LAB_001fef00:
        luaK_setoneret(lVar12,&local_20);
        luaK_storevar(*(undefined8 *)(param_1 + 0x30),param_2 + 1,&local_20);
        goto LAB_001fee90;
      }
    }
    iVar11 = iVar6 - iVar10;
    if ((int)local_20 - 0xdU < 2) {
      iVar1 = iVar11 + 1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      luaK_setreturns(lVar12,&local_20,iVar1);
      if (0 < iVar11) {
        luaK_reserveregs(lVar12,iVar1 + -1);
      }
    }
    else {
      if ((int)local_20 != 0) {
        luaK_exp2nextreg(lVar12,&local_20);
      }
      if (0 < iVar11) {
        uVar2 = *(undefined *)(lVar12 + 0x3c);
        luaK_reserveregs(lVar12,iVar11);
        luaK_nil(lVar12,uVar2,iVar11);
      }
    }
    lVar12 = *(long *)(param_1 + 0x30);
    uVar8 = (uint)*(byte *)(lVar12 + 0x3c);
    if (iVar6 < iVar10) {
      uVar4 = ((uint)*(byte *)(lVar12 + 0x3c) + iVar6) - iVar10;
      uVar8 = uVar4 & 0xff;
      *(char *)(lVar12 + 0x3c) = (char)uVar4;
    }
  }
  local_20 = (long **)CONCAT44(uVar8 - 1,7);
  local_18 = 0xffffffffffffffff;
  luaK_storevar(lVar12,param_2 + 1,&local_20);
LAB_001fee90:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


