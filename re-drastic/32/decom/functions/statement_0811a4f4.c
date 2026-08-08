/*
 * Ghidra decompilation
 *
 * Function : statement
 * Address  : 0811a4f4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void statement(LexState *ls)

{
  byte bVar1;
  Labeldesc *pLVar2;
  int repeat_init;
  char *pcVar3;
  int whileinit;
  Labeldesc *pLVar4;
  int idx;
  char *pcVar5;
  char *msg;
  Upvaldesc *up;
  int iVar6;
  Vardesc *pVVar7;
  int first;
  int ismethod;
  lua_State *L;
  Instruction *pIVar8;
  anon_union_4_4_e6d17769_for_u aVar9;
  FuncState *fs_8;
  uint uVar10;
  FuncState *pFVar11;
  FuncState *fs_13;
  byte bVar12;
  ushort uVar13;
  int iVar14;
  TString *pTVar15;
  uint uVar16;
  int iVar17;
  int i;
  int base;
  int line_1;
  LexState *ls_00;
  lua_State *L_00;
  TString *varname;
  FuncState *pFVar18;
  FuncState *fs;
  TString *ts;
  FuncState *fs_4;
  FuncState *fs_5;
  TString *pTVar19;
  TString *ts_4;
  int i_1;
  FuncState *fs_11;
  FuncState *fs_16;
  FuncState *fs_2;
  int nret;
  FuncState *fs_18;
  FuncState *fs_3;
  TString *varname_1;
  FuncState *fs_1;
  TString *ts_3;
  int reg;
  Dyndata *pDVar20;
  TString *ts_5;
  TString *ts_6;
  int reg_1;
  TString *ts_7;
  int extra;
  FuncState *fs_9;
  FuncState *fs_10;
  int nexps;
  int l;
  FuncState *fs_7;
  int n;
  FuncState *fs_15;
  FuncState *fs_12;
  FuncState *fs_14;
  TString *ts_2;
  FuncState *fs_6;
  TString *ts_1;
  FuncState *fs_17;
  int base_1;
  int iVar21;
  int line;
  Proto *pPVar22;
  int iVar23;
  FuncState *fs_19;
  Labeldesc *pLVar24;
  LocVar *pLVar25;
  int iVar26;
  bool bVar27;
  FuncState *local_74;
  int escapelist;
  BlockCnt bl1;
  undefined local_50 [8];
  int local_48;
  int reg_2;
  LHS_assign v;
  
  iVar6 = __stack_chk_guard;
  ismethod = (int)ls->L;
  pFVar18 = ls->fs;
  iVar21 = ls->linenumber;
  uVar13 = *(short *)(ismethod + 0x6a) + 1;
  *(ushort *)(ismethod + 0x6a) = uVar13;
  if ((char *)0xc8 < (char *)(uint)uVar13) {
                    /* WARNING: Subroutine does not return */
    checklimit(pFVar18,200,0x8146118,(char *)(uint)uVar13);
  }
  iVar14 = (ls->t).token;
  if (iVar14 == 0x10a) {
LAB_0811aea4:
    iVar21 = luaK_jump(pFVar18);
    gotostat(ls,iVar21);
    goto LAB_0811a5d0;
  }
  if (iVar14 < 0x10b) {
    if (iVar14 == 0x103) {
      luaX_next(ls);
      pFVar18 = ls->fs;
      uVar10 = (uint)v.v.t >> 0x10;
      pDVar20 = pFVar18->ls->dyd;
      v.v.u = (anon_union_4_4_e6d17769_for_u)(pDVar20->gt).n;
      v.v.k = (pDVar20->label).n;
      v.v.t._0_2_ = CONCAT11(0,pFVar18->nactvar);
      v.v.t = CONCAT22((short)uVar10,(ushort)v.v.t) & 0xff00ffff;
      v.prev = (LHS_assign *)pFVar18->bl;
      pFVar18->bl = (BlockCnt *)&v;
      do {
        iVar14 = (ls->t).token;
        uVar10 = iVar14 - 0x104;
        if (uVar10 < 0x1e) {
          if ((1 << (uVar10 & 0xff) & 0x20020007U) != 0) goto LAB_0811ae58;
          if (iVar14 == 0x112) goto LAB_0811b2f4;
        }
        statement(ls);
      } while( true );
    }
    if (iVar14 < 0x104) {
      if (iVar14 == 0x3b) goto LAB_0811a78c;
      if (iVar14 == 0x102) goto LAB_0811aea4;
    }
    else {
      if (iVar14 == 0x108) {
        bl1.isloop = '\x01';
        bl1.nactvar = pFVar18->nactvar;
        pDVar20 = pFVar18->ls->dyd;
        bl1.firstgoto = (pDVar20->gt).n;
        bl1.firstlabel = (pDVar20->label).n;
        bl1.upval = '\0';
        bl1.previous = pFVar18->bl;
        pFVar18->bl = &bl1;
        luaX_next(ls);
        if ((ls->t).token != 0x124) goto LAB_0811b85c;
        pTVar19 = (ls->t).seminfo.ts;
        luaX_next(ls);
        iVar14 = (ls->t).token;
        if (iVar14 == 0x3d) {
          pFVar11 = ls->fs;
          bVar12 = pFVar11->freereg;
          pTVar15 = luaX_newstring(ls,"(for index)",0xb);
          new_localvar(ls,pTVar15);
          pTVar15 = luaX_newstring(ls,"(for limit)",0xb);
          new_localvar(ls,pTVar15);
          pTVar15 = luaX_newstring(ls,"(for step)",10);
          new_localvar(ls,pTVar15);
          new_localvar(ls,pTVar19);
          if ((ls->t).token != 0x3d) {
            iVar14 = 0x3d;
            goto LAB_0811b680;
          }
          luaX_next(ls);
          subexpr(ls,(expdesc *)&v,0);
          luaK_exp2nextreg(ls->fs,(expdesc *)&v);
          if ((ls->t).token != 0x2c) {
                    /* WARNING: Subroutine does not return */
            error_expected(ls,0x2c);
          }
          luaX_next(ls);
          subexpr(ls,(expdesc *)&v,0);
          luaK_exp2nextreg(ls->fs,(expdesc *)&v);
          if ((ls->t).token == 0x2c) {
            luaX_next(ls);
            subexpr(ls,(expdesc *)&v,0);
            luaK_exp2nextreg(ls->fs,(expdesc *)&v);
          }
          else {
            bVar1 = pFVar11->freereg;
            iVar14 = luaK_intK(pFVar11,1);
            luaK_codek(pFVar11,(uint)bVar1,iVar14);
            luaK_reserveregs(pFVar11,1);
          }
          forbody(ls,(uint)bVar12,iVar21,1,1);
        }
        else {
          if ((iVar14 != 0x10c) && (iVar14 != 0x2c)) {
                    /* WARNING: Subroutine does not return */
            luaX_syntaxerror(ls,"\'=\' or \'in\' expected");
          }
          pFVar11 = ls->fs;
          iVar14 = 4;
          bVar12 = pFVar11->freereg;
          pTVar15 = luaX_newstring(ls,"(for generator)",0xf);
          new_localvar(ls,pTVar15);
          pTVar15 = luaX_newstring(ls,"(for state)",0xb);
          new_localvar(ls,pTVar15);
          pTVar15 = luaX_newstring(ls,"(for control)",0xd);
          new_localvar(ls,pTVar15);
          new_localvar(ls,pTVar19);
          iVar26 = (ls->t).token;
          while (iVar26 == 0x2c) {
            luaX_next(ls);
            if ((ls->t).token != 0x124) goto LAB_0811b85c;
            pTVar19 = (ls->t).seminfo.ts;
            iVar14 = iVar14 + 1;
            luaX_next(ls);
            new_localvar(ls,pTVar19);
            iVar26 = (ls->t).token;
          }
          if (iVar26 != 0x10c) {
                    /* WARNING: Subroutine does not return */
            error_expected(ls,0x10c);
          }
          luaX_next(ls);
          iVar26 = ls->linenumber;
          subexpr(ls,(expdesc *)&v,0);
          if ((ls->t).token == 0x2c) {
            iVar17 = 1;
            do {
              iVar17 = iVar17 + 1;
              luaX_next(ls);
              luaK_exp2nextreg(ls->fs,(expdesc *)&v);
              subexpr(ls,(expdesc *)&v,0);
            } while ((ls->t).token == 0x2c);
            local_74 = ls->fs;
            fs_13 = (FuncState *)((int)&v.prev[-1].v.k + 3);
            if (fs_13 < (FuncState *)0x2) {
              iVar17 = 4 - iVar17;
              if (iVar17 < 0) {
                luaK_setreturns(local_74,(expdesc *)&v,0);
              }
              else {
                luaK_setreturns(local_74,(expdesc *)&v,iVar17);
                if (iVar17 == 2) goto LAB_0811b798;
              }
            }
            else {
              iVar17 = 3 - iVar17;
              if (v.prev != (LHS_assign *)0x0) {
LAB_0811b7cc:
                luaK_exp2nextreg(local_74,(expdesc *)&v);
              }
              if (0 < iVar17) goto LAB_0811b1a8;
            }
          }
          else {
            local_74 = ls->fs;
            if ((undefined *)((int)&v.prev[-1].v.k + 3U) < (undefined *)0x2) {
              iVar17 = 3;
              luaK_setreturns(local_74,(expdesc *)&v,3);
LAB_0811b798:
              luaK_reserveregs(local_74,iVar17 + -1);
            }
            else {
              iVar17 = 2;
              if (v.prev != (LHS_assign *)0x0) goto LAB_0811b7cc;
LAB_0811b1a8:
              bVar1 = local_74->freereg;
              luaK_reserveregs(local_74,iVar17);
              luaK_nil(local_74,(uint)bVar1,iVar17);
            }
          }
          luaK_checkstack(pFVar11,3);
          forbody(ls,(uint)bVar12,iVar26,iVar14 + -3,0);
        }
        if ((ls->t).token != 0x106) {
          if (iVar21 == ls->linenumber) goto LAB_0811b00c;
          L_00 = ls->L;
          pcVar5 = luaX_token2str(ls,0x106);
          iVar6 = 0x108;
          goto LAB_0811a870;
        }
        luaX_next(ls);
        leaveblock(pFVar18);
        goto LAB_0811a5d0;
      }
      if (iVar14 == 0x109) {
        luaX_next(ls);
        if ((ls->t).token != 0x124) goto LAB_0811b85c;
        pTVar19 = (ls->t).seminfo.ts;
        luaX_next(ls);
        pFVar18 = ls->fs;
        if (pFVar18 == (FuncState *)0x0) {
LAB_0811a738:
          singlevaraux(pFVar18,ls->envn,(expdesc *)local_50,1);
          v.v.k = luaK_stringK(ls->fs,pTVar19);
          v.prev = (LHS_assign *)0x4;
          v.v.u.info = -1;
          v.v.t = -1;
          luaK_indexed(pFVar18,(expdesc *)local_50,(expdesc *)&v);
        }
        else {
          uVar10 = (uint)pFVar18->nactvar;
          aVar9.info = uVar10 - 1;
          if (uVar10 == 0) {
            pPVar22 = pFVar18->f;
LAB_0811a6dc:
            if (pFVar18->nups == 0) {
LAB_0811a718:
              iVar14 = singlevaraux(pFVar18->prev,pTVar19,(expdesc *)local_50,0);
              if (iVar14 == 0) goto LAB_0811a738;
              idx = newupvalue(pFVar18,pTVar19,(expdesc *)local_50,(expdesc *)(local_50 + 4));
            }
            else {
              idx = 0;
              pTVar15 = pPVar22->upvalues->name;
              while (pTVar19 != pTVar15) {
                idx = idx + 1;
                if (idx == (uint)pFVar18->nups) goto LAB_0811a718;
                pTVar15 = pPVar22->upvalues[idx].name;
              }
            }
            local_50._0_4_ = (BlockCnt *)0x9;
            local_48 = -1;
            reg_2 = -1;
            local_50._4_4_ = idx;
          }
          else {
            pPVar22 = pFVar18->f;
            pVVar7 = (pFVar18->ls->dyd->actvar).arr;
            if (pTVar19 != pPVar22->locvars[pVVar7[aVar9.info + pFVar18->firstlocal].idx].varname) {
              pVVar7 = pVVar7 + uVar10 + pFVar18->firstlocal + -1;
              do {
                bVar27 = aVar9.info == 0;
                aVar9.info = aVar9.info + -1;
                if (bVar27) goto LAB_0811a6dc;
                pVVar7 = pVVar7 + -1;
              } while (pPVar22->locvars[pVVar7->idx].varname != pTVar19);
            }
            local_50._0_4_ = (BlockCnt *)0x8;
            local_48 = -1;
            reg_2 = -1;
            local_50._4_4_ = aVar9;
          }
        }
        iVar14 = (ls->t).token;
        while (iVar14 == 0x2e) {
          pFVar18 = ls->fs;
          luaK_exp2anyregup(pFVar18,(expdesc *)local_50);
          luaX_next(ls);
          if ((ls->t).token != 0x124) goto LAB_0811b85c;
          pTVar19 = (ls->t).seminfo.ts;
          luaX_next(ls);
          v.v.k = luaK_stringK(ls->fs,pTVar19);
          v.prev = (LHS_assign *)0x4;
          v.v.u.info = -1;
          v.v.t = -1;
          luaK_indexed(pFVar18,(expdesc *)local_50,(expdesc *)&v);
          iVar14 = (ls->t).token;
        }
        if (iVar14 == 0x3a) {
          pFVar18 = ls->fs;
          luaK_exp2anyregup(pFVar18,(expdesc *)local_50);
          luaX_next(ls);
          if ((ls->t).token != 0x124) {
LAB_0811b85c:
                    /* WARNING: Subroutine does not return */
            error_expected(ls,0x124);
          }
          pTVar19 = (ls->t).seminfo.ts;
          luaX_next(ls);
          v.v.k = luaK_stringK(ls->fs,pTVar19);
          v.prev = (LHS_assign *)0x4;
          v.v.u.info = -1;
          v.v.t = -1;
          luaK_indexed(pFVar18,(expdesc *)local_50,(expdesc *)&v);
          iVar14 = 1;
        }
        else {
          iVar14 = 0;
        }
        body(ls,(expdesc *)&v,iVar14,iVar21);
        luaK_storevar(ls->fs,(expdesc *)local_50,(expdesc *)&v);
        luaK_fixline(ls->fs,iVar21);
        goto LAB_0811a5d0;
      }
    }
LAB_0811a588:
    suffixedexp(ls,&v.v);
    iVar21 = (ls->t).token;
    if (iVar21 == 0x2c || iVar21 == 0x3d) {
      v.prev = (LHS_assign *)0x0;
      assignment(ls,&v,1);
    }
    else {
      if (v.v.k != VCALL) {
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(ls,"syntax error");
      }
      pIVar8 = pFVar18->f->code;
      pIVar8[v.v.u.info] = pIVar8[v.v.u.info] & 0xff803fff | 0x4000;
    }
    goto LAB_0811a5d0;
  }
  if (iVar14 == 0x111) {
    iVar26 = luaK_getlabel(pFVar18);
    bl1.isloop = '\x01';
    bl1.nactvar = pFVar18->nactvar;
    local_50._0_4_ = &bl1;
    pDVar20 = pFVar18->ls->dyd;
    bl1.firstgoto = (pDVar20->gt).n;
    bl1.firstlabel = (pDVar20->label).n;
    bl1.upval = '\0';
    bl1.previous = pFVar18->bl;
    pFVar18->bl = (BlockCnt *)local_50;
    local_50._4_4_ = bl1.firstlabel;
    local_48 = bl1.firstgoto;
    luaX_next(ls);
    do {
      iVar17 = (ls->t).token;
      if (iVar17 - 0x104U < 0x1e) {
        if ((1 << (iVar17 - 0x104U & 0xff) & 0x20020007U) != 0) goto LAB_0811a840;
        if (iVar17 == 0x112) goto LAB_0811b30c;
      }
      statement(ls);
    } while( true );
  }
  if (iVar14 < 0x112) {
    if (iVar14 != 0x10b) {
      if (iVar14 == 0x10d) {
        luaX_next(ls);
        iVar21 = (ls->t).token;
        if (iVar21 == 0x109) {
          luaX_next(ls);
          pFVar18 = ls->fs;
          if ((ls->t).token == 0x124) {
            pTVar19 = (ls->t).seminfo.ts;
            luaX_next(ls);
            new_localvar(ls,pTVar19);
            pFVar11 = ls->fs;
            bVar12 = pFVar11->nactvar + 1;
            pFVar11->nactvar = bVar12;
            iVar21 = ls->linenumber;
            pFVar11->f->locvars
            [(pFVar11->ls->dyd->actvar).arr[(uint)bVar12 + pFVar11->firstlocal + -1].idx].startpc =
                 pFVar11->pc;
            body(ls,(expdesc *)&v,0,iVar21);
            pFVar18->f->locvars[(pFVar18->ls->dyd->actvar).arr[v.v.k + pFVar18->firstlocal].idx].
            startpc = pFVar18->pc;
            goto LAB_0811a5d0;
          }
        }
        else if (iVar21 == 0x124) {
          iVar21 = 0;
          do {
            pTVar19 = (ls->t).seminfo.ts;
            iVar21 = iVar21 + 1;
            luaX_next(ls);
            new_localvar(ls,pTVar19);
            iVar14 = (ls->t).token;
            if (iVar14 != 0x2c) {
              if (iVar14 != 0x3d) {
                fs_7 = ls->fs;
                v.prev = (LHS_assign *)0x0;
                extra = iVar21;
                goto LAB_0811aa9c;
              }
              luaX_next(ls);
              iVar14 = 1;
              subexpr(ls,(expdesc *)&v,0);
              iVar26 = (ls->t).token;
              while (iVar26 == 0x2c) {
                iVar14 = iVar14 + 1;
                luaX_next(ls);
                luaK_exp2nextreg(ls->fs,(expdesc *)&v);
                subexpr(ls,(expdesc *)&v,0);
                iVar26 = (ls->t).token;
              }
              extra = iVar21 - iVar14;
              fs_7 = ls->fs;
              if ((undefined *)((int)&v.prev[-1].v.k + 3U) < (undefined *)0x2) {
                iVar14 = extra + 1;
                if (iVar14 < 0) {
                  luaK_setreturns(fs_7,(expdesc *)&v,0);
                }
                else {
                  luaK_setreturns(fs_7,(expdesc *)&v,iVar14);
                  if (1 < iVar14) {
                    luaK_reserveregs(fs_7,extra);
                  }
                }
              }
              else {
                if (v.prev != (LHS_assign *)0x0) {
                  luaK_exp2nextreg(fs_7,(expdesc *)&v);
                }
                if (0 < extra) {
LAB_0811aa9c:
                  bVar12 = fs_7->freereg;
                  luaK_reserveregs(fs_7,extra);
                  luaK_nil(fs_7,(uint)bVar12,extra);
                }
              }
              pFVar18 = ls->fs;
              iVar14 = pFVar18->pc;
              uVar10 = (uint)pFVar18->nactvar + iVar21;
              iVar26 = pFVar18->firstlocal;
              uVar16 = uVar10 & 0xff;
              pFVar18->nactvar = (lu_byte)uVar10;
              pLVar25 = pFVar18->f->locvars;
              pVVar7 = (pFVar18->ls->dyd->actvar).arr;
              while( true ) {
                iVar17 = uVar16 - iVar21;
                iVar21 = iVar21 + -1;
                pLVar25[pVVar7[iVar17 + iVar26].idx].startpc = iVar14;
                if (iVar21 == 0) break;
                uVar16 = (uint)pFVar18->nactvar;
              }
              goto LAB_0811a5d0;
            }
            luaX_next(ls);
          } while ((ls->t).token == 0x124);
        }
        goto LAB_0811b85c;
      }
      goto LAB_0811a588;
    }
    escapelist = -1;
    test_then_block(ls,&escapelist);
    iVar14 = (ls->t).token;
    while (iVar14 == 0x105) {
      test_then_block(ls,&escapelist);
      iVar14 = (ls->t).token;
    }
    if (iVar14 == 0x104) {
      luaX_next(ls);
      pFVar11 = ls->fs;
      uVar10 = (uint)v.v.t >> 0x10;
      pDVar20 = pFVar11->ls->dyd;
      v.v.u = (anon_union_4_4_e6d17769_for_u)(pDVar20->gt).n;
      v.v.k = (pDVar20->label).n;
      v.v.t._0_2_ = CONCAT11(0,pFVar11->nactvar);
      v.v.t = CONCAT22((short)uVar10,(ushort)v.v.t) & 0xff00ffff;
      v.prev = (LHS_assign *)pFVar11->bl;
      pFVar11->bl = (BlockCnt *)&v;
      do {
        iVar14 = (ls->t).token;
        uVar10 = iVar14 - 0x104;
        if (uVar10 < 0x1e) {
          if ((1 << (uVar10 & 0xff) & 0x20020007U) != 0) goto LAB_0811b3b8;
          if (iVar14 == 0x112) goto LAB_0811b670;
        }
        statement(ls);
      } while( true );
    }
    goto LAB_0811af04;
  }
  if (iVar14 == 0x116) {
    luaX_next(ls);
    iVar26 = luaK_getlabel(pFVar18);
    subexpr(ls,(expdesc *)&v,0);
    if (v.prev == (LHS_assign *)0x1) {
      v.prev = (LHS_assign *)0x3;
    }
    luaK_goiftrue(ls->fs,(expdesc *)&v);
    iVar17 = v.v.t;
    reg_2 = CONCAT13(reg_2._3_1_,0x10000);
    iVar14 = 0x103;
    iVar23 = (ls->t).token;
    pDVar20 = pFVar18->ls->dyd;
    local_48 = (pDVar20->gt).n;
    local_50._4_4_ = (pDVar20->label).n;
    local_50._0_4_ = pFVar18->bl;
    pFVar18->bl = (BlockCnt *)local_50;
    if (iVar23 == 0x103) {
      luaX_next(ls);
      pFVar11 = ls->fs;
      uVar10 = (uint)v.v.t >> 0x18;
      pDVar20 = pFVar11->ls->dyd;
      v.v.u = (anon_union_4_4_e6d17769_for_u)(pDVar20->gt).n;
      v.v.k = (pDVar20->label).n;
      v.v.t._0_2_ = CONCAT11(0,pFVar11->nactvar);
      v.prev = (LHS_assign *)pFVar11->bl;
      pFVar11->bl = (BlockCnt *)&v;
      do {
        iVar14 = (ls->t).token;
        uVar10 = iVar14 - 0x104;
        if (uVar10 < 0x1e) {
          if ((1 << (uVar10 & 0xff) & 0x20020007U) != 0) goto LAB_0811a9b4;
          if (iVar14 == 0x112) goto LAB_0811b300;
        }
        statement(ls);
      } while( true );
    }
    goto LAB_0811b680;
  }
  if (iVar14 == 0x120) {
    luaX_next(ls);
    if ((ls->t).token == 0x124) {
      pTVar19 = (TString *)(ls->t).seminfo.i;
      luaX_next(ls);
      pFVar18 = ls->fs;
      pDVar20 = ls->dyd;
      pLVar4 = (pDVar20->label).arr;
      iVar26 = (pDVar20->label).n;
      iVar14 = pFVar18->bl->firstlabel;
      if (iVar14 < iVar26) {
        pLVar24 = pLVar4 + iVar14;
        if (pTVar19 != pLVar4[iVar14].name) {
          pLVar2 = pLVar4 + iVar14 + 1;
          do {
            pLVar24 = pLVar2;
            iVar14 = iVar14 + 1;
            if (iVar26 == iVar14) goto LAB_0811ac40;
            pLVar2 = pLVar24 + 1;
          } while (pTVar19 != pLVar4[iVar14].name);
        }
        pcVar5 = luaO_pushfstring(pFVar18->ls->L,"label \'%s\' already defined on line %d",
                                  &pTVar19[1].tt,pLVar24->line);
        ls_00 = pFVar18->ls;
        (ls_00->t).token = 0;
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(ls_00,pcVar5);
      }
LAB_0811ac40:
      if ((ls->t).token != 0x120) {
                    /* WARNING: Subroutine does not return */
        error_expected(ls,0x120);
      }
      luaX_next(ls);
      iVar14 = (pDVar20->label).n;
      iVar26 = pFVar18->pc;
      if (iVar14 < (pDVar20->label).size) {
        pLVar4 = (pDVar20->label).arr;
      }
      else {
        pLVar4 = (Labeldesc *)
                 luaM_growaux_(ls->L,(pDVar20->label).arr,&(pDVar20->label).size,0x10,0x7fff,
                               "labels/gotos");
        (pDVar20->label).arr = pLVar4;
      }
      pLVar4[iVar14].name = pTVar19;
      pFVar11 = ls->fs;
      pLVar4[iVar14].line = iVar21;
      pLVar4[iVar14].nactvar = pFVar11->nactvar;
      iVar21 = (ls->t).token;
      pLVar4 = (pDVar20->label).arr + iVar14;
      pLVar4->pc = iVar26;
      (pDVar20->label).n = iVar14 + 1;
      if (iVar21 == 0x3b || iVar21 == 0x120) {
        do {
          statement(ls);
          iVar21 = (ls->t).token;
        } while (iVar21 == 0x120 || iVar21 == 0x3b);
        pLVar4 = (pDVar20->label).arr + iVar14;
      }
      if ((0x103 < iVar21) && ((iVar21 < 0x107 || (iVar21 == 0x121)))) {
        pLVar4->nactvar = pFVar18->bl->nactvar;
        pLVar4 = (pDVar20->label).arr + iVar14;
      }
      pDVar20 = ls->dyd;
      iVar21 = (pDVar20->gt).n;
      i_1 = ls->fs->bl->firstgoto;
      while (i_1 < iVar21) {
        if ((pDVar20->gt).arr[i_1].name == pLVar4->name) {
          closegoto(ls,i_1,(Labeldesc *)pLVar4->pc,(Labeldesc *)(uint)pLVar4->nactvar);
          iVar21 = (pDVar20->gt).n;
        }
        else {
          i_1 = i_1 + 1;
        }
      }
      goto LAB_0811a5d0;
    }
    goto LAB_0811b85c;
  }
  if (iVar14 != 0x112) goto LAB_0811a588;
  luaX_next(ls);
  iVar21 = (ls->t).token;
  pFVar18 = ls->fs;
  uVar10 = iVar21 - 0x104;
  if (uVar10 < 0x1e) {
    if ((1 << (uVar10 & 0xff) & 0x20020007U) == 0) goto LAB_0811ab48;
LAB_0811b020:
    nret = 0;
    uVar10 = 0;
  }
  else {
    if (iVar21 == 0x3b) goto LAB_0811b020;
LAB_0811ab48:
    subexpr(ls,(expdesc *)&v,0);
    if ((ls->t).token == 0x2c) {
      nret = 1;
      do {
        nret = nret + 1;
        luaX_next(ls);
        luaK_exp2nextreg(ls->fs,(expdesc *)&v);
        subexpr(ls,(expdesc *)&v,0);
      } while ((ls->t).token == 0x2c);
      if ((undefined *)((int)&v.prev[-1].v.k + 3U) < (undefined *)0x2) {
LAB_0811b7f8:
        luaK_setreturns(pFVar18,(expdesc *)&v,-1);
        if (v.prev == (LHS_assign *)0xd && nret == 1) {
          pIVar8 = pFVar18->f->code;
          pIVar8[v.v.k] = pIVar8[v.v.k] & 0xffffffc0 | 0x25;
        }
        uVar10 = (uint)pFVar18->nactvar;
        nret = -1;
      }
      else {
        luaK_exp2nextreg(pFVar18,(expdesc *)&v);
        uVar10 = (uint)pFVar18->nactvar;
      }
    }
    else {
      if ((undefined *)((int)&v.prev[-1].v.k + 3U) < (undefined *)0x2) {
        nret = 1;
        goto LAB_0811b7f8;
      }
      uVar10 = luaK_exp2anyreg(pFVar18,(expdesc *)&v);
      nret = 1;
    }
  }
  luaK_ret(pFVar18,uVar10,nret);
  if ((ls->t).token != 0x3b) goto LAB_0811a5d0;
  goto LAB_0811a78c;
LAB_0811b30c:
  statement(ls);
  iVar17 = (ls->t).token;
LAB_0811a840:
  iVar14 = 0x115;
  if (iVar17 == 0x115) {
    luaX_next(ls);
    subexpr(ls,(expdesc *)&v,0);
    if (v.prev == (LHS_assign *)0x1) {
      v.prev = (LHS_assign *)0x3;
    }
    luaK_goiftrue(ls->fs,(expdesc *)&v);
    iVar21 = v.v.t;
    if (reg_2._1_1_ != '\0') {
      luaK_patchclose(pFVar18,v.v.t,reg_2 & 0xff);
    }
    leaveblock(pFVar18);
    luaK_patchlist(pFVar18,iVar21,iVar26);
    leaveblock(pFVar18);
    goto LAB_0811a5d0;
  }
  if (iVar21 == ls->linenumber) {
LAB_0811b680:
                    /* WARNING: Subroutine does not return */
    error_expected(ls,iVar14);
  }
  L_00 = ls->L;
  pcVar5 = luaX_token2str(ls,0x115);
  iVar6 = 0x111;
  goto LAB_0811a870;
LAB_0811b670:
  statement(ls);
LAB_0811b3b8:
  leaveblock(pFVar11);
  iVar14 = (ls->t).token;
LAB_0811af04:
  if (iVar14 != 0x106) {
    if (iVar21 == ls->linenumber) {
LAB_0811b00c:
                    /* WARNING: Subroutine does not return */
      error_expected(ls,0x106);
    }
    L_00 = ls->L;
    pcVar5 = luaX_token2str(ls,0x106);
    iVar6 = 0x10b;
LAB_0811a870:
    pcVar3 = luaX_token2str(ls,iVar6);
    pcVar5 = luaO_pushfstring(L_00,"%s expected (to close %s at line %d)",pcVar5,pcVar3,iVar21);
                    /* WARNING: Subroutine does not return */
    luaX_syntaxerror(ls,pcVar5);
  }
  luaX_next(ls);
  luaK_patchtohere(pFVar18,escapelist);
  goto LAB_0811a5d0;
LAB_0811b300:
  statement(ls);
LAB_0811a9b4:
  leaveblock(pFVar11);
  iVar14 = luaK_jump(pFVar18);
  luaK_patchlist(pFVar18,iVar14,iVar26);
  if ((ls->t).token != 0x106) {
    if (iVar21 != ls->linenumber) {
      L_00 = ls->L;
      pcVar5 = luaX_token2str(ls,0x106);
      iVar6 = 0x116;
      goto LAB_0811a870;
    }
    goto LAB_0811b00c;
  }
  luaX_next(ls);
  leaveblock(pFVar18);
  luaK_patchtohere(pFVar18,iVar17);
  goto LAB_0811a5d0;
LAB_0811b2f4:
  statement(ls);
LAB_0811ae58:
  leaveblock(pFVar18);
  if ((ls->t).token != 0x106) {
    if (iVar21 == ls->linenumber) goto LAB_0811b00c;
    L_00 = ls->L;
    pcVar5 = luaX_token2str(ls,0x106);
    iVar6 = 0x103;
    goto LAB_0811a870;
  }
LAB_0811a78c:
  luaX_next(ls);
LAB_0811a5d0:
  bVar27 = iVar6 == __stack_chk_guard;
  ls->fs->freereg = ls->fs->nactvar;
  ls->L->nCcalls = ls->L->nCcalls - 1;
  if (bVar27) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


