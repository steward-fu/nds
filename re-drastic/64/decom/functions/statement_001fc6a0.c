/*
 * Ghidra decompilation
 *
 * Function : statement
 * Address  : 001fc6a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void statement(long param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined uVar4;
  undefined uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  short *psVar16;
  byte bVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined4 uVar26;
  int iVar27;
  int local_48 [3];
  undefined4 local_3c;
  long local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28;
  undefined2 local_27;
  undefined8 local_20;
  undefined8 local_18;
  undefined local_10;
  undefined2 local_f;
  long local_8;
  short *psVar17;
  
  iVar8 = *(int *)(param_1 + 4);
  plVar20 = *(long **)(param_1 + 0x30);
  local_8 = ___stack_chk_guard;
  uVar1 = *(short *)(*(long *)(param_1 + 0x38) + 0xc6) + 1;
  *(ushort *)(*(long *)(param_1 + 0x38) + 0xc6) = uVar1;
  if (200 < uVar1) {
                    /* WARNING: Subroutine does not return */
    checklimit_part_0(plVar20,200,"C levels",&__stack_chk_guard,0);
  }
  iVar15 = *(int *)(param_1 + 0x10);
  if (iVar15 == 0x10b) {
    local_48[0] = -1;
    test_then_block(param_1,local_48);
    iVar15 = *(int *)(param_1 + 0x10);
    while (iVar15 == 0x105) {
      test_then_block(param_1,local_48);
      iVar15 = *(int *)(param_1 + 0x10);
    }
    if (iVar15 == 0x104) {
      luaX_next(param_1);
      lVar23 = *(long *)(param_1 + 0x30);
      local_10 = *(undefined *)(lVar23 + 0x3a);
      lVar21 = *(long *)(*(long *)(lVar23 + 0x10) + 0x58);
      local_f = 0;
      local_20 = *(long **)(lVar23 + 0x18);
      iVar15 = *(int *)(param_1 + 0x10);
      local_18 = CONCAT44(*(undefined4 *)(lVar21 + 0x18),*(undefined4 *)(lVar21 + 0x28));
      *(undefined8 **)(lVar23 + 0x18) = &local_20;
      while( true ) {
        if ((iVar15 - 0x104U < 0x1e) &&
           ((1L << ((ulong)(iVar15 - 0x104U) & 0x3f) & 0x20020007U) != 0)) goto LAB_001fd5d4;
        if (iVar15 == 0x112) break;
        statement(param_1);
        iVar15 = *(int *)(param_1 + 0x10);
      }
      statement(param_1);
LAB_001fd5d4:
      leaveblock(lVar23);
      iVar15 = *(int *)(param_1 + 0x10);
    }
    if (iVar15 == 0x106) {
      luaX_next(param_1);
      luaK_patchtohere(plVar20,local_48[0]);
      plVar20 = *(long **)(param_1 + 0x30);
      bVar18 = *(byte *)((long)plVar20 + 0x3a);
      goto LAB_001fcae8;
    }
    if (iVar8 != *(int *)(param_1 + 4)) {
      uVar22 = *(undefined8 *)(param_1 + 0x38);
      uVar13 = luaX_token2str(param_1,0x106);
      uVar14 = 0x10b;
      goto LAB_001fd010;
    }
    goto LAB_001fcc0c;
  }
  if (iVar15 < 0x10c) {
    if (iVar15 == 0x108) {
      local_10 = *(undefined *)((long)plVar20 + 0x3a);
      local_f = 0x100;
      local_20 = (long *)plVar20[3];
      local_18 = CONCAT44(*(undefined4 *)(*(long *)(plVar20[2] + 0x58) + 0x18),
                          *(undefined4 *)(*(long *)(plVar20[2] + 0x58) + 0x28));
      plVar20[3] = (long)&local_20;
      luaX_next();
      if (*(int *)(param_1 + 0x10) != 0x124) goto LAB_001fd94c;
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      luaX_next(param_1);
      iVar15 = *(int *)(param_1 + 0x10);
      if (iVar15 == 0x3d) {
        lVar21 = *(long *)(param_1 + 0x30);
        uVar4 = *(undefined *)(lVar21 + 0x3c);
        uVar14 = luaX_newstring(param_1,"(for index)",0xb);
        new_localvar(param_1,uVar14);
        uVar14 = luaX_newstring(param_1,"(for limit)",0xb);
        new_localvar(param_1,uVar14);
        uVar14 = luaX_newstring(param_1,"(for step)",10);
        new_localvar(param_1,uVar14);
        new_localvar(param_1,uVar13);
        if (*(int *)(param_1 + 0x10) != 0x3d) {
                    /* WARNING: Subroutine does not return */
          error_expected(param_1,0x3d);
        }
        luaX_next(param_1);
        subexpr(param_1,&local_38,0);
        luaK_exp2nextreg(*(undefined8 *)(param_1 + 0x30),&local_38);
        if (*(int *)(param_1 + 0x10) != 0x2c) {
                    /* WARNING: Subroutine does not return */
          error_expected(param_1,0x2c);
        }
        luaX_next();
        subexpr(param_1,&local_38,0);
        luaK_exp2nextreg(*(undefined8 *)(param_1 + 0x30),&local_38);
        if (*(int *)(param_1 + 0x10) == 0x2c) {
          luaX_next(param_1);
          subexpr(param_1,&local_38,0);
          luaK_exp2nextreg(*(undefined8 *)(param_1 + 0x30),&local_38);
        }
        else {
          uVar5 = *(undefined *)(lVar21 + 0x3c);
          uVar9 = luaK_intK(lVar21,1);
          luaK_codek(lVar21,uVar5,uVar9);
          luaK_reserveregs(lVar21,1);
        }
        forbody(param_1,uVar4,iVar8,1);
      }
      else {
        if ((iVar15 != 0x10c) && (iVar15 != 0x2c)) {
                    /* WARNING: Subroutine does not return */
          luaX_syntaxerror(param_1,"\'=\' or \'in\' expected");
        }
        lVar21 = *(long *)(param_1 + 0x30);
        uVar4 = *(undefined *)(lVar21 + 0x3c);
        uVar14 = luaX_newstring(param_1,"(for generator)",0xf);
        new_localvar(param_1,uVar14);
        uVar14 = luaX_newstring(param_1,"(for state)",0xb);
        new_localvar(param_1,uVar14);
        uVar14 = luaX_newstring(param_1,"(for control)",0xd);
        new_localvar(param_1,uVar14);
        new_localvar(param_1,uVar13);
        iVar15 = 4;
        iVar27 = *(int *)(param_1 + 0x10);
        while (iVar27 == 0x2c) {
          luaX_next(param_1);
          if (*(int *)(param_1 + 0x10) != 0x124) goto LAB_001fd94c;
          uVar13 = *(undefined8 *)(param_1 + 0x18);
          luaX_next(param_1);
          new_localvar(param_1,uVar13);
          iVar15 = iVar15 + 1;
          iVar27 = *(int *)(param_1 + 0x10);
        }
        if (iVar27 != 0x10c) {
                    /* WARNING: Subroutine does not return */
          error_expected(param_1,0x10c);
        }
        luaX_next();
        uVar9 = *(undefined4 *)(param_1 + 4);
        subexpr(param_1,&local_38,0);
        if (*(int *)(param_1 + 0x10) == 0x2c) {
          iVar27 = 1;
          do {
            luaX_next(param_1);
            iVar27 = iVar27 + 1;
            luaK_exp2nextreg(*(undefined8 *)(param_1 + 0x30),&local_38);
            subexpr(param_1,&local_38,0);
          } while (*(int *)(param_1 + 0x10) == 0x2c);
          lVar23 = *(long *)(param_1 + 0x30);
          if ((int)local_38 - 0xdU < 2) {
            iVar27 = 4 - iVar27;
            iVar3 = iVar27;
            if (iVar27 < 0) {
              iVar3 = 0;
            }
            luaK_setreturns(lVar23,&local_38);
            if (iVar27 == 2) {
              luaK_reserveregs(lVar23,iVar3 + -1);
            }
          }
          else {
            if ((int)local_38 != 0) {
              luaK_exp2nextreg(lVar23,&local_38);
            }
            if (iVar27 == 2) {
              uVar26 = 1;
              goto LAB_001fd29c;
            }
          }
        }
        else {
          lVar23 = *(long *)(param_1 + 0x30);
          if ((int)local_38 - 0xdU < 2) {
            luaK_setreturns(lVar23,&local_38,3);
            luaK_reserveregs(lVar23,2);
          }
          else {
            uVar26 = 2;
            if ((int)local_38 != 0) {
              luaK_exp2nextreg(lVar23,&local_38);
            }
LAB_001fd29c:
            uVar5 = *(undefined *)(lVar23 + 0x3c);
            luaK_reserveregs(lVar23,uVar26);
            luaK_nil(lVar23,uVar5,uVar26);
          }
        }
        luaK_checkstack(lVar21,3);
        forbody(param_1,uVar4,uVar9,iVar15 + -3,0);
      }
      if (*(int *)(param_1 + 0x10) != 0x106) {
        if (iVar8 != *(int *)(param_1 + 4)) {
          uVar22 = *(undefined8 *)(param_1 + 0x38);
          uVar13 = luaX_token2str(param_1,0x106);
          uVar14 = 0x108;
LAB_001fd010:
          uVar14 = luaX_token2str(param_1,uVar14);
          uVar13 = luaO_pushfstring(uVar22,"%s expected (to close %s at line %d)",uVar13,uVar14,
                                    iVar8);
                    /* WARNING: Subroutine does not return */
          luaX_syntaxerror(param_1,uVar13);
        }
LAB_001fcc0c:
                    /* WARNING: Subroutine does not return */
        error_expected(param_1,0x106);
      }
      luaX_next(param_1);
      leaveblock(plVar20);
LAB_001fc87c:
      plVar20 = *(long **)(param_1 + 0x30);
LAB_001fc880:
      bVar18 = *(byte *)((long)plVar20 + 0x3a);
      goto LAB_001fcae8;
    }
    if (iVar15 < 0x109) {
      if (iVar15 != 0x102) {
        if (iVar15 == 0x103) {
          luaX_next();
          lVar23 = *(long *)(param_1 + 0x30);
          local_10 = *(undefined *)(lVar23 + 0x3a);
          lVar21 = *(long *)(*(long *)(lVar23 + 0x10) + 0x58);
          local_f = 0;
          local_20 = *(long **)(lVar23 + 0x18);
          local_18 = CONCAT44(*(undefined4 *)(lVar21 + 0x18),*(undefined4 *)(lVar21 + 0x28));
          *(undefined8 **)(lVar23 + 0x18) = &local_20;
          while( true ) {
            uVar11 = *(int *)(param_1 + 0x10) - 0x104;
            if ((uVar11 < 0x1e) && ((1L << ((ulong)uVar11 & 0x3f) & 0x20020007U) != 0))
            goto LAB_001fcb68;
            if (*(int *)(param_1 + 0x10) == 0x112) break;
            statement(param_1);
          }
          statement(param_1);
LAB_001fcb68:
          leaveblock(lVar23);
          if (*(int *)(param_1 + 0x10) != 0x106) {
            if (iVar8 == *(int *)(param_1 + 4)) goto LAB_001fcc0c;
            uVar22 = *(undefined8 *)(param_1 + 0x38);
            uVar13 = luaX_token2str(param_1,0x106);
            uVar14 = 0x103;
            goto LAB_001fd010;
          }
          luaX_next(param_1);
          plVar20 = *(long **)(param_1 + 0x30);
          bVar18 = *(byte *)((long)plVar20 + 0x3a);
          goto LAB_001fcae8;
        }
        if (iVar15 != 0x3b) goto LAB_001fcd28;
        goto LAB_001fcadc;
      }
    }
    else if (iVar15 == 0x109) {
      luaX_next();
      singlevar(param_1,&local_38);
      iVar15 = *(int *)(param_1 + 0x10);
      if (iVar15 == 0x2e) {
        do {
          uVar13 = *(undefined8 *)(param_1 + 0x30);
          luaK_exp2anyregup(uVar13,&local_38);
          luaX_next(param_1);
          if (*(int *)(param_1 + 0x10) != 0x124) goto LAB_001fd94c;
          uVar14 = *(undefined8 *)(param_1 + 0x18);
          luaX_next(param_1);
          uVar9 = luaK_stringK(*(undefined8 *)(param_1 + 0x30),uVar14);
          local_20 = (long *)CONCAT44(uVar9,4);
          local_18 = 0xffffffffffffffff;
          luaK_indexed(uVar13,&local_38,&local_20);
          iVar15 = *(int *)(param_1 + 0x10);
        } while (iVar15 == 0x2e);
      }
      uVar13 = 0;
      if (iVar15 == 0x3a) {
        uVar13 = *(undefined8 *)(param_1 + 0x30);
        luaK_exp2anyregup(uVar13,&local_38,0);
        luaX_next(param_1);
        if (*(int *)(param_1 + 0x10) != 0x124) goto LAB_001fd94c;
        uVar14 = *(undefined8 *)(param_1 + 0x18);
        luaX_next(param_1);
        uVar9 = luaK_stringK(*(undefined8 *)(param_1 + 0x30),uVar14);
        local_20 = (long *)CONCAT44(uVar9,4);
        local_18 = 0xffffffffffffffff;
        luaK_indexed(uVar13,&local_38,&local_20);
        uVar13 = 1;
      }
      body(param_1,&local_20,uVar13,iVar8);
      luaK_storevar(*(undefined8 *)(param_1 + 0x30),&local_38,&local_20);
      luaK_fixline(*(undefined8 *)(param_1 + 0x30),iVar8);
      plVar20 = *(long **)(param_1 + 0x30);
      bVar18 = *(byte *)((long)plVar20 + 0x3a);
      goto LAB_001fcae8;
    }
    uVar9 = luaK_jump(plVar20);
    gotostat(param_1,uVar9);
    plVar20 = *(long **)(param_1 + 0x30);
    bVar18 = *(byte *)((long)plVar20 + 0x3a);
  }
  else {
    if (iVar15 == 0x112) {
      luaX_next();
      plVar20 = *(long **)(param_1 + 0x30);
      uVar11 = *(int *)(param_1 + 0x10) - 0x104;
      if (((uVar11 < 0x1e) && ((1L << ((ulong)uVar11 & 0x3f) & 0x20020007U) != 0)) ||
         (*(int *)(param_1 + 0x10) == 0x3b)) {
        iVar8 = 0;
        uVar11 = 0;
      }
      else {
        subexpr(param_1,&local_20,0);
        if (*(int *)(param_1 + 0x10) == 0x2c) {
          iVar8 = 1;
          do {
            luaX_next(param_1);
            iVar8 = iVar8 + 1;
            luaK_exp2nextreg(*(undefined8 *)(param_1 + 0x30),&local_20);
            subexpr(param_1,&local_20,0);
          } while (*(int *)(param_1 + 0x10) == 0x2c);
          if ((int)local_20 - 0xdU < 2) {
            luaK_setreturns(plVar20,&local_20,0xffffffff);
            goto LAB_001fd82c;
          }
          luaK_exp2nextreg(plVar20,&local_20);
          uVar11 = (uint)*(byte *)((long)plVar20 + 0x3a);
        }
        else if ((int)local_20 - 0xdU < 2) {
          luaK_setreturns(plVar20,&local_20,0xffffffff);
          if ((int)local_20 == 0xd) {
            *(uint *)(*(long *)(*plVar20 + 0x38) + (long)local_20._4_4_ * 4) =
                 *(uint *)(*(long *)(*plVar20 + 0x38) + (long)local_20._4_4_ * 4) & 0xffffffc0 |
                 0x25;
          }
LAB_001fd82c:
          uVar11 = (uint)*(byte *)((long)plVar20 + 0x3a);
          iVar8 = -1;
        }
        else {
          iVar8 = 1;
          uVar11 = luaK_exp2anyreg(plVar20,&local_20);
        }
      }
      luaK_ret(plVar20,uVar11,iVar8);
      if (*(int *)(param_1 + 0x10) == 0x3b) {
LAB_001fcadc:
        luaX_next(param_1);
      }
    }
    else {
      if (iVar15 < 0x113) {
        if (iVar15 == 0x10d) {
          luaX_next();
          iVar8 = *(int *)(param_1 + 0x10);
          if (iVar8 == 0x109) {
            luaX_next(param_1);
            plVar19 = *(long **)(param_1 + 0x30);
            if (*(int *)(param_1 + 0x10) == 0x124) {
              uVar13 = *(undefined8 *)(param_1 + 0x18);
              luaX_next(param_1);
              new_localvar(param_1,uVar13);
              plVar20 = *(long **)(param_1 + 0x30);
              bVar18 = *(char *)((long)plVar20 + 0x3a) + 1;
              *(byte *)((long)plVar20 + 0x3a) = bVar18;
              uVar9 = *(undefined4 *)(param_1 + 4);
              *(undefined4 *)
               (*(long *)(*plVar20 + 0x50) +
                (long)*(short *)(**(long **)(plVar20[2] + 0x58) +
                                (long)(int)((bVar18 - 1) + *(int *)((long)plVar20 + 0x34)) * 2) *
                0x10 + 8) = *(undefined4 *)(plVar20 + 4);
              body(param_1,&local_20,0,uVar9);
              plVar20 = *(long **)(param_1 + 0x30);
              *(undefined4 *)
               (*(long *)(*plVar19 + 0x50) +
                (long)*(short *)(**(long **)(plVar19[2] + 0x58) +
                                (long)(local_20._4_4_ + *(int *)((long)plVar19 + 0x34)) * 2) * 0x10
               + 8) = *(undefined4 *)(plVar19 + 4);
              bVar18 = *(byte *)((long)plVar20 + 0x3a);
              goto LAB_001fcae8;
            }
          }
          else {
            uVar11 = 0;
            while (iVar8 == 0x124) {
              uVar13 = *(undefined8 *)(param_1 + 0x18);
              luaX_next(param_1);
              new_localvar(param_1,uVar13);
              uVar2 = uVar11 + 1;
              if (*(int *)(param_1 + 0x10) != 0x2c) {
                if (*(int *)(param_1 + 0x10) != 0x3d) {
                  lVar21 = *(long *)(param_1 + 0x30);
                  local_20 = (long *)((ulong)local_20 & 0xffffffff00000000);
                  uVar6 = uVar2;
                  goto LAB_001fcf24;
                }
                luaX_next(param_1);
                subexpr(param_1,&local_20,0);
                uVar6 = uVar11;
                if (*(int *)(param_1 + 0x10) == 0x2c) {
                  iVar8 = 1;
                  do {
                    iVar15 = iVar8;
                    luaX_next(param_1);
                    luaK_exp2nextreg(*(undefined8 *)(param_1 + 0x30),&local_20);
                    subexpr(param_1,&local_20,0);
                    iVar8 = iVar15 + 1;
                  } while (*(int *)(param_1 + 0x10) == 0x2c);
                  uVar6 = uVar11 - iVar15;
                }
                lVar21 = *(long *)(param_1 + 0x30);
                if ((int)local_20 - 0xdU < 2) {
                  iVar8 = uVar6 + 1;
                  if (iVar8 < 0) {
                    iVar8 = 0;
                  }
                  luaK_setreturns(lVar21,&local_20,iVar8);
                  if (0 < (int)uVar6) {
                    luaK_reserveregs(lVar21,iVar8 + -1);
                  }
                }
                else {
                  if ((int)local_20 != 0) {
                    luaK_exp2nextreg(lVar21,&local_20);
                  }
                  if (0 < (int)uVar6) {
LAB_001fcf24:
                    uVar4 = *(undefined *)(lVar21 + 0x3c);
                    luaK_reserveregs(lVar21,uVar6);
                    luaK_nil(lVar21,uVar4,uVar6);
                  }
                }
                plVar20 = *(long **)(param_1 + 0x30);
                bVar18 = (char)uVar2 + *(char *)((long)plVar20 + 0x3a);
                *(byte *)((long)plVar20 + 0x3a) = bVar18;
                lVar21 = (long)*(int *)((long)plVar20 + 0x34) - (long)(int)uVar2;
                lVar23 = **(long **)(plVar20[2] + 0x58);
                uVar9 = *(undefined4 *)(plVar20 + 4);
                lVar24 = *(long *)(*plVar20 + 0x50);
                psVar16 = (short *)(lVar23 + (lVar21 + (ulong)bVar18) * 2);
                do {
                  psVar17 = psVar16 + 1;
                  *(undefined4 *)(lVar24 + (long)*psVar16 * 0x10 + 8) = uVar9;
                  psVar16 = psVar17;
                } while ((short *)(lVar23 + 2 + ((ulong)uVar11 + (ulong)bVar18 + lVar21) * 2) !=
                         psVar17);
                goto LAB_001fcae8;
              }
              luaX_next(param_1);
              uVar11 = uVar2;
              iVar8 = *(int *)(param_1 + 0x10);
            }
          }
LAB_001fd94c:
                    /* WARNING: Subroutine does not return */
          error_expected(param_1,0x124);
        }
        if (iVar15 == 0x111) {
          uVar9 = luaK_getlabel(plVar20);
          local_28 = *(undefined *)((long)plVar20 + 0x3a);
          local_20 = &local_38;
          local_2c = *(undefined4 *)(*(long *)(plVar20[2] + 0x58) + 0x18);
          local_30 = *(undefined4 *)(*(long *)(plVar20[2] + 0x58) + 0x28);
          local_27 = 0x100;
          local_38 = plVar20[3];
          local_18 = CONCAT44(local_2c,local_30);
          local_f = 0;
          plVar20[3] = (long)&local_20;
          local_10 = local_28;
          luaX_next(param_1);
          while( true ) {
            iVar15 = *(int *)(param_1 + 0x10);
            if ((iVar15 - 0x104U < 0x1e) &&
               ((1L << ((ulong)(iVar15 - 0x104U) & 0x3f) & 0x20020007U) != 0)) goto LAB_001fcd84;
            if (iVar15 == 0x112) break;
            statement(param_1);
          }
          statement(param_1);
          iVar15 = *(int *)(param_1 + 0x10);
LAB_001fcd84:
          if (iVar15 != 0x115) {
            if (iVar8 == *(int *)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
              error_expected(param_1,0x115);
            }
            uVar22 = *(undefined8 *)(param_1 + 0x38);
            uVar13 = luaX_token2str(param_1,0x115);
            uVar14 = 0x111;
            goto LAB_001fd010;
          }
          luaX_next(param_1);
          subexpr(param_1,local_48,0);
          if (local_48[0] == 1) {
            local_48[0] = 3;
          }
          luaK_goiftrue(*(undefined8 *)(param_1 + 0x30),local_48);
          if ((char)local_f != '\0') {
            luaK_patchclose(plVar20,local_3c,local_10);
          }
          leaveblock(plVar20);
          luaK_patchlist(plVar20,local_3c,uVar9);
          leaveblock(plVar20);
          plVar20 = *(long **)(param_1 + 0x30);
          bVar18 = *(byte *)((long)plVar20 + 0x3a);
          goto LAB_001fcae8;
        }
      }
      else {
        if (iVar15 == 0x116) {
          luaX_next();
          uVar9 = luaK_getlabel(plVar20);
          subexpr(param_1,&local_20,0);
          if ((int)local_20 == 1) {
            local_20 = (long *)CONCAT44(local_20._4_4_,3);
          }
          luaK_goiftrue(*(undefined8 *)(param_1 + 0x30),&local_20);
          uVar26 = local_18._4_4_;
          local_28 = *(undefined *)((long)plVar20 + 0x3a);
          iVar15 = *(int *)(param_1 + 0x10);
          local_2c = *(undefined4 *)(*(long *)(plVar20[2] + 0x58) + 0x18);
          local_30 = *(undefined4 *)(*(long *)(plVar20[2] + 0x58) + 0x28);
          local_27 = 0x100;
          local_38 = plVar20[3];
          plVar20[3] = (long)&local_38;
          if (iVar15 != 0x103) {
                    /* WARNING: Subroutine does not return */
            error_expected(param_1,0x103);
          }
          luaX_next();
          lVar23 = *(long *)(param_1 + 0x30);
          local_10 = *(undefined *)(lVar23 + 0x3a);
          lVar21 = *(long *)(*(long *)(lVar23 + 0x10) + 0x58);
          local_f = 0;
          local_20 = *(long **)(lVar23 + 0x18);
          local_18 = CONCAT44(*(undefined4 *)(lVar21 + 0x18),*(undefined4 *)(lVar21 + 0x28));
          *(undefined8 **)(lVar23 + 0x18) = &local_20;
          while( true ) {
            uVar11 = *(int *)(param_1 + 0x10) - 0x104;
            if ((uVar11 < 0x1e) && ((1L << ((ulong)uVar11 & 0x3f) & 0x20020007U) != 0))
            goto LAB_001fcfbc;
            if (*(int *)(param_1 + 0x10) == 0x112) break;
            statement(param_1);
          }
          statement(param_1);
LAB_001fcfbc:
          leaveblock(lVar23);
          uVar10 = luaK_jump(plVar20);
          luaK_patchlist(plVar20,uVar10,uVar9);
          if (*(int *)(param_1 + 0x10) != 0x106) {
            if (iVar8 == *(int *)(param_1 + 4)) goto LAB_001fcc0c;
            uVar22 = *(undefined8 *)(param_1 + 0x38);
            uVar13 = luaX_token2str(param_1,0x106);
            uVar14 = 0x116;
            goto LAB_001fd010;
          }
          luaX_next(param_1);
          leaveblock(plVar20);
          luaK_patchtohere(plVar20,uVar26);
          goto LAB_001fc87c;
        }
        if (iVar15 == 0x120) {
          luaX_next();
          if (*(int *)(param_1 + 0x10) != 0x124) goto LAB_001fd94c;
          lVar24 = *(long *)(param_1 + 0x18);
          luaX_next(param_1);
          lVar23 = *(long *)(param_1 + 0x30);
          lVar21 = *(long *)(param_1 + 0x58);
          iVar15 = *(int *)(*(long *)(lVar23 + 0x18) + 8);
          if (iVar15 < *(int *)(lVar21 + 0x28)) {
            plVar20 = (long *)(*(long *)(lVar21 + 0x20) + (long)iVar15 * 0x18);
            do {
              if (lVar24 == *plVar20) {
                uVar13 = luaO_pushfstring(*(undefined8 *)(*(long *)(lVar23 + 0x10) + 0x38),
                                          "label \'%s\' already defined on line %d",lVar24 + 0x20,
                                          *(undefined4 *)((long)plVar20 + 0xc));
                lVar21 = *(long *)(lVar23 + 0x10);
                *(undefined4 *)(lVar21 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
                luaX_syntaxerror(lVar21,uVar13);
              }
              plVar20 = plVar20 + 3;
            } while ((long *)(*(long *)(lVar21 + 0x20) + 0x18 +
                             ((ulong)(uint)((*(int *)(lVar21 + 0x28) + -1) - iVar15) + (long)iVar15)
                             * 0x18) != plVar20);
          }
          if (*(int *)(param_1 + 0x10) != 0x120) {
                    /* WARNING: Subroutine does not return */
            error_expected(param_1,0x120);
          }
          luaX_next();
          iVar15 = *(int *)(lVar21 + 0x28);
          uVar9 = *(undefined4 *)(lVar23 + 0x20);
          if (iVar15 < *(int *)(lVar21 + 0x2c)) {
            lVar12 = *(long *)(lVar21 + 0x20);
          }
          else {
            lVar12 = luaM_growaux_(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar21 + 0x20),
                                   lVar21 + 0x2c,0x18,0x7fff,"labels/gotos");
            *(long *)(lVar21 + 0x20) = lVar12;
          }
          lVar25 = (long)iVar15 * 0x18;
          plVar20 = *(long **)(param_1 + 0x30);
          plVar19 = (long *)(lVar12 + lVar25);
          *(long *)(lVar12 + lVar25) = lVar24;
          *(int *)((long)plVar19 + 0xc) = iVar8;
          *(undefined *)(plVar19 + 2) = *(undefined *)((long)plVar20 + 0x3a);
          iVar8 = *(int *)(param_1 + 0x10);
          *(undefined4 *)(plVar19 + 1) = uVar9;
          *(int *)(lVar21 + 0x28) = iVar15 + 1;
          if (iVar8 == 0x120 || iVar8 == 0x3b) {
            do {
              statement(param_1);
              iVar8 = *(int *)(param_1 + 0x10);
            } while (iVar8 == 0x3b || iVar8 == 0x120);
            plVar20 = *(long **)(param_1 + 0x30);
            plVar19 = (long *)(*(long *)(lVar21 + 0x20) + lVar25);
          }
          if (iVar8 < 0x107) {
            if (0x103 < iVar8) goto LAB_001fcb2c;
          }
          else if (iVar8 == 0x121) {
LAB_001fcb2c:
            *(undefined *)(plVar19 + 2) = *(undefined *)(*(long *)(lVar23 + 0x18) + 0x10);
          }
          lVar21 = *(long *)(param_1 + 0x58);
          iVar8 = *(int *)(plVar20[3] + 0xc);
          iVar15 = *(int *)(lVar21 + 0x18);
          if (iVar8 < iVar15) {
            do {
              while (*(long *)(*(long *)(lVar21 + 0x10) + (long)iVar8 * 0x18) != *plVar19) {
                iVar8 = iVar8 + 1;
                if (iVar15 <= iVar8) goto LAB_001fc87c;
              }
              closegoto_isra_0(param_1,iVar8,*(undefined4 *)(plVar19 + 1),
                               *(undefined *)(plVar19 + 2));
              iVar15 = *(int *)(lVar21 + 0x18);
            } while (iVar8 < iVar15);
            goto LAB_001fc87c;
          }
          goto LAB_001fc880;
        }
      }
LAB_001fcd28:
      suffixedexp(param_1,&local_18);
      if (*(int *)(param_1 + 0x10) == 0x3d || *(int *)(param_1 + 0x10) == 0x2c) {
        local_20 = (long *)0x0;
        assignment(param_1,&local_20,1);
      }
      else {
        if ((int)local_18 != 0xd) {
                    /* WARNING: Subroutine does not return */
          luaX_syntaxerror(param_1,"syntax error");
        }
        *(uint *)(*(long *)(*plVar20 + 0x38) + (long)local_18._4_4_ * 4) =
             *(uint *)(*(long *)(*plVar20 + 0x38) + (long)local_18._4_4_ * 4) & 0xff803fff | 0x4000;
      }
    }
    plVar20 = *(long **)(param_1 + 0x30);
    bVar18 = *(byte *)((long)plVar20 + 0x3a);
  }
LAB_001fcae8:
  *(byte *)((long)plVar20 + 0x3c) = bVar18;
  lVar21 = *(long *)(param_1 + 0x38);
  bVar7 = local_8 == ___stack_chk_guard;
  iVar8 = *(ushort *)(lVar21 + 0xc6) - 1;
  *(short *)(lVar21 + 0xc6) = (short)iVar8;
  if (bVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar8,lVar21,0);
}


