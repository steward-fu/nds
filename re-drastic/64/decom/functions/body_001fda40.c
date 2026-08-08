/*
 * Ghidra decompilation
 *
 * Function : body
 * Address  : 001fda40
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void body(long param_1,undefined4 *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined2 local_58;
  undefined local_56;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined local_14;
  long local_8;
  short *psVar5;
  
  plVar12 = *(long **)(param_1 + 0x30);
  lVar14 = *plVar12;
  local_8 = ___stack_chk_guard;
  iVar11 = *(int *)(lVar14 + 0x20);
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  if (iVar11 <= *(int *)(plVar12 + 6)) {
    lVar8 = luaM_growaux_(uVar15,*(undefined8 *)(lVar14 + 0x40),lVar14 + 0x20,8,0x3ffff,"functions")
    ;
    *(long *)(lVar14 + 0x40) = lVar8;
    if (iVar11 < *(int *)(lVar14 + 0x20)) {
      memset((void *)(lVar8 + (long)iVar11 * 8),0,
             ((ulong)(uint)((*(int *)(lVar14 + 0x20) + -1) - iVar11) + 1) * 8);
    }
  }
  local_50 = luaF_newproto(uVar15);
  iVar11 = *(int *)(plVar12 + 6);
  lVar8 = *(long *)(lVar14 + 0x40);
  *(int *)(plVar12 + 6) = iVar11 + 1;
  *(long *)(lVar8 + (long)iVar11 * 8) = local_50;
  if (((*(byte *)(lVar14 + 9) >> 2 & 1) != 0) && ((*(byte *)(local_50 + 9) & 3) != 0)) {
    luaC_barrier_(uVar15,lVar14,local_50);
  }
  lVar14 = *(long *)(param_1 + 0x58);
  local_68 = 0;
  local_48 = *(undefined8 *)(param_1 + 0x30);
  *(int *)(local_50 + 0x28) = param_4;
  local_18 = 0;
  local_14 = 0;
  uStack_28 = 0xffffffff;
  local_30 = 0;
  local_1c = *(undefined4 *)(lVar14 + 8);
  *(long **)(param_1 + 0x30) = &local_50;
  local_20 = 0;
  uVar15 = *(undefined8 *)(param_1 + 0x60);
  *(undefined *)(local_50 + 0xc) = 2;
  local_38 = &local_68;
  uStack_5c = *(undefined4 *)(lVar14 + 0x18);
  local_60 = *(undefined4 *)(lVar14 + 0x28);
  *(undefined8 *)(local_50 + 0x68) = uVar15;
  local_58 = 0;
  local_56 = 0;
  local_40 = param_1;
  if (*(int *)(param_1 + 0x10) != 0x28) {
                    /* WARNING: Subroutine does not return */
    error_expected(param_1,0x28);
  }
  luaX_next();
  if (param_3 == 0) {
    plVar12 = *(long **)(param_1 + 0x30);
    lVar14 = *plVar12;
  }
  else {
    uVar15 = luaX_newstring(param_1,&DAT_0022a020,4);
    new_localvar(param_1,uVar15);
    plVar12 = *(long **)(param_1 + 0x30);
    bVar1 = *(char *)((long)plVar12 + 0x3a) + 1;
    *(byte *)((long)plVar12 + 0x3a) = bVar1;
    lVar14 = *plVar12;
    *(undefined4 *)
     (*(long *)(lVar14 + 0x50) +
      (long)*(short *)(**(long **)(plVar12[2] + 0x58) +
                      (long)(int)((bVar1 - 1) + *(int *)((long)plVar12 + 0x34)) * 2) * 0x10 + 8) =
         *(undefined4 *)(plVar12 + 4);
  }
  *(undefined *)(lVar14 + 0xb) = 0;
  iVar11 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0x29) {
    while (iVar2 != 0x119) {
      if (iVar2 != 0x124) {
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(param_1,"<name> or \'...\' expected");
      }
      uVar15 = *(undefined8 *)(param_1 + 0x18);
      luaX_next(param_1);
      new_localvar(param_1,uVar15);
      iVar11 = iVar11 + 1;
      if ((*(char *)(lVar14 + 0xb) != '\0') || (*(int *)(param_1 + 0x10) != 0x2c)) {
        plVar7 = *(long **)(param_1 + 0x30);
        bVar1 = (char)iVar11 + *(char *)((long)plVar7 + 0x3a);
        *(byte *)((long)plVar7 + 0x3a) = bVar1;
        goto LAB_001fdbc0;
      }
      luaX_next(param_1);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    luaX_next(param_1);
    *(undefined *)(lVar14 + 0xb) = 1;
    plVar7 = *(long **)(param_1 + 0x30);
    bVar1 = (char)iVar11 + *(char *)((long)plVar7 + 0x3a);
    *(byte *)((long)plVar7 + 0x3a) = bVar1;
    if (iVar11 != 0) {
LAB_001fdbc0:
      lVar13 = (long)*(int *)((long)plVar7 + 0x34) - (long)iVar11;
      lVar8 = **(long **)(plVar7[2] + 0x58);
      uVar3 = *(undefined4 *)(plVar7 + 4);
      lVar9 = *(long *)(*plVar7 + 0x50);
      psVar4 = (short *)(lVar8 + (lVar13 + (ulong)bVar1) * 2);
      do {
        psVar5 = psVar4 + 1;
        *(undefined4 *)(lVar9 + (long)*psVar4 * 0x10 + 8) = uVar3;
        psVar4 = psVar5;
      } while (psVar5 != (short *)(lVar8 + 2 + ((ulong)(iVar11 - 1) + (ulong)bVar1 + lVar13) * 2));
    }
  }
  *(undefined *)(lVar14 + 10) = *(undefined *)((long)plVar12 + 0x3a);
  luaK_reserveregs(plVar12);
  if (*(int *)(param_1 + 0x10) != 0x29) {
                    /* WARNING: Subroutine does not return */
    error_expected(param_1,0x29);
  }
  luaX_next(param_1);
  while( true ) {
    iVar11 = *(int *)(param_1 + 0x10);
    if ((iVar11 - 0x104U < 0x1e) && ((1L << ((ulong)(iVar11 - 0x104U) & 0x3f) & 0x20020007U) != 0))
    goto LAB_001fdc80;
    if (iVar11 == 0x112) break;
    statement(param_1);
  }
  statement(param_1);
  iVar11 = *(int *)(param_1 + 0x10);
LAB_001fdc80:
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(local_50 + 0x2c) = iVar2;
  if (iVar11 == 0x106) {
    luaX_next(param_1);
    lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar3 = luaK_codeABx(lVar14,0x2c,0,*(int *)(lVar14 + 0x30) + -1);
    *param_2 = 0xc;
    param_2[1] = uVar3;
    *(undefined8 *)(param_2 + 2) = 0xffffffffffffffff;
    luaK_exp2nextreg(lVar14,param_2);
    close_func_isra_0(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
    if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_8 - ___stack_chk_guard,0);
    }
    return;
  }
  if (iVar2 == param_4) {
                    /* WARNING: Subroutine does not return */
    error_expected(param_1,0x106);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  uVar15 = luaX_token2str(param_1,0x106);
  uVar6 = luaX_token2str(param_1,0x109);
  uVar15 = luaO_pushfstring(uVar10,"%s expected (to close %s at line %d)",uVar15,uVar6,param_4);
                    /* WARNING: Subroutine does not return */
  luaX_syntaxerror(param_1,uVar15);
}


