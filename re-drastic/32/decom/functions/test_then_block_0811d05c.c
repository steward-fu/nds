/*
 * Ghidra decompilation
 *
 * Function : test_then_block
 * Address  : 0811d05c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void test_then_block(LexState *ls,int *escapelist)

{
  int iVar1;
  int jf;
  Dyndata *pDVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FuncState *fs;
  FuncState *fs_00;
  BlockCnt bl;
  expdesc v;
  
  iVar1 = __stack_chk_guard;
  fs_00 = ls->fs;
  luaX_next(ls);
  subexpr(ls,&v,0);
  if ((ls->t).token != 0x113) {
                    /* WARNING: Subroutine does not return */
    error_expected(ls,0x113);
  }
  luaX_next(ls);
  if (((ls->t).token & 0xfffffff7U) == 0x102) {
    luaK_goiffalse(ls->fs,&v);
    bl.nactvar = fs_00->nactvar;
    bl.isloop = '\0';
    bl.upval = '\0';
    bl.previous = fs_00->bl;
    pDVar2 = fs_00->ls->dyd;
    bl.firstlabel = (pDVar2->label).n;
    bl.firstgoto = (pDVar2->gt).n;
    fs_00->bl = &bl;
    gotostat(ls,v.t);
    iVar4 = (ls->t).token;
    if (iVar4 == 0x3b || iVar4 == 0x120) {
      do {
        statement(ls);
        iVar4 = (ls->t).token;
      } while (iVar4 == 0x120 || iVar4 == 0x3b);
    }
    if ((0x103 < iVar4) && ((iVar4 < 0x107 || (iVar4 == 0x121)))) {
      leaveblock(fs_00);
      goto LAB_0811d220;
    }
    iVar4 = luaK_jump(fs_00);
  }
  else {
    luaK_goiftrue(ls->fs,&v);
    bl.nactvar = fs_00->nactvar;
    bl.isloop = '\0';
    bl.upval = '\0';
    bl.previous = fs_00->bl;
    pDVar2 = fs_00->ls->dyd;
    bl.firstlabel = (pDVar2->label).n;
    bl.firstgoto = (pDVar2->gt).n;
    fs_00->bl = &bl;
    iVar4 = v.f;
  }
  do {
    iVar3 = (ls->t).token;
    uVar5 = iVar3 - 0x104;
    if (uVar5 < 0x1e) {
      if ((1 << (uVar5 & 0xff) & 0x20020007U) != 0) goto LAB_0811d1fc;
      if (iVar3 == 0x112) break;
    }
    statement(ls);
  } while( true );
  statement(ls);
LAB_0811d1fc:
  leaveblock(fs_00);
  if ((ls->t).token - 0x104U < 2) {
    iVar3 = luaK_jump(fs_00);
    luaK_concat(fs_00,escapelist,iVar3);
  }
  luaK_patchtohere(fs_00,iVar4);
LAB_0811d220:
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


