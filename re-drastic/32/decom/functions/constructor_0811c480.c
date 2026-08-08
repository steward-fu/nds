/*
 * Ghidra decompilation
 *
 * Function : constructor
 * Address  : 0811c480
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void constructor(LexState *ls,expdesc *t)

{
  int iVar1;
  int iVar2;
  int pc;
  FuncState *fs_00;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  Proto *pPVar6;
  uint uVar7;
  uint uVar8;
  Instruction *pIVar9;
  lua_State *L;
  FuncState *fs_01;
  FuncState *fs;
  int iVar10;
  bool bVar11;
  ConsControl cc;
  
  iVar1 = __stack_chk_guard;
  fs_01 = ls->fs;
  iVar10 = ls->linenumber;
  iVar2 = luaK_codeABC(fs_01,OP_NEWTABLE,0,0,0);
  (t->u).info = iVar2;
  fs_00 = ls->fs;
  t->k = VRELOCABLE;
  t->t = -1;
  t->f = -1;
  cc.v.k = VVOID;
  cc.v.u.info = 0;
  cc.v.t = -1;
  cc.v.f = -1;
  cc.nh = 0;
  cc.na = 0;
  cc.tostore = 0;
  cc.t = t;
  luaK_exp2nextreg(fs_00,t);
  if ((ls->t).token != 0x7b) {
                    /* WARNING: Subroutine does not return */
    error_expected(ls,0x7b);
  }
  luaX_next(ls);
LAB_0811c530:
  iVar5 = (ls->t).token;
  if (iVar5 != 0x7d) {
    do {
      if (cc.v.k == VVOID) {
LAB_0811c540:
        if (iVar5 == 0x5b) goto LAB_0811c5d4;
LAB_0811c548:
        if ((iVar5 == 0x124) && (iVar5 = luaX_lookahead(ls), iVar5 == 0x3d)) goto LAB_0811c5d4;
        subexpr(ls,&cc.v,0);
        iVar5 = (ls->t).token;
        cc.na = cc.na + 1;
        cc.tostore = cc.tostore + 1;
      }
      else {
        luaK_exp2nextreg(fs_01,&cc.v);
        cc.v.k = VVOID;
        if (cc.tostore == 0x32) {
          luaK_setlist(fs_01,((cc.t)->u).info,cc.na,0x32);
          iVar5 = (ls->t).token;
          cc.tostore = 0;
          goto LAB_0811c540;
        }
        iVar5 = (ls->t).token;
        if (iVar5 != 0x5b) goto LAB_0811c548;
LAB_0811c5d4:
        recfield(ls,(ConsControl *)&cc.t,(ConsControl *)&cc.nh);
        iVar5 = (ls->t).token;
      }
      if (iVar5 != 0x2c) goto LAB_0811c5f0;
      luaX_next(ls);
      iVar5 = (ls->t).token;
      if (iVar5 == 0x7d) break;
    } while( true );
  }
  goto LAB_0811c624;
LAB_0811c5f0:
  if (iVar5 != 0x3b) {
    if (iVar5 != 0x7d) {
      if (iVar10 != ls->linenumber) {
        L = ls->L;
        pcVar3 = luaX_token2str(ls,0x7d);
        pcVar4 = luaX_token2str(ls,0x7b);
        pcVar3 = luaO_pushfstring(L,"%s expected (to close %s at line %d)",pcVar3,pcVar4,iVar10);
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(ls,pcVar3);
      }
                    /* WARNING: Subroutine does not return */
      error_expected(ls,0x7d);
    }
LAB_0811c624:
    luaX_next(ls);
    if (cc.tostore != 0) {
      if (cc.v.k + ~VRELOCABLE < 2) {
        luaK_setreturns(fs_01,&cc.v,-1);
        luaK_setlist(fs_01,((cc.t)->u).info,cc.na,-1);
        cc.na = cc.na + -1;
      }
      else {
        if (cc.v.k != VVOID) {
          luaK_exp2nextreg(fs_01,&cc.v);
        }
        luaK_setlist(fs_01,((cc.t)->u).info,cc.na,cc.tostore);
      }
    }
    pIVar9 = fs_01->f->code;
    uVar7 = pIVar9[iVar2];
    iVar10 = luaO_int2fb(cc.na);
    pPVar6 = fs_01->f;
    pIVar9[iVar2] = uVar7 & 0x7fffff | iVar10 << 0x17;
    pIVar9 = pPVar6->code;
    uVar8 = pIVar9[iVar2];
    uVar7 = luaO_int2fb(cc.nh);
    bVar11 = iVar1 == __stack_chk_guard;
    pIVar9[iVar2] = (uVar7 & 0x1ff) << 0xe | uVar8 & 0xff803fff;
    if (bVar11) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  luaX_next(ls);
  goto LAB_0811c530;
}


