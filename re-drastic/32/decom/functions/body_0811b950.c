/*
 * Ghidra decompilation
 *
 * Function : body
 * Address  : 0811b950
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void body(LexState *ls,expdesc *e,int ismethod,int line)

{
  int iVar1;
  Proto *clp;
  LocVar *pLVar2;
  char *pcVar3;
  char *pcVar4;
  Proto **f_1;
  Vardesc *pVVar5;
  byte bVar6;
  FuncState *pFVar7;
  FuncState *fs_3;
  Dyndata *pDVar8;
  FuncState *fs_1;
  uint uVar9;
  int iVar10;
  int iVar11;
  Proto **ppPVar12;
  int oldsize;
  FuncState *fs_4;
  Proto *pPVar13;
  Proto *f;
  Proto *f_2;
  FuncState *pFVar14;
  FuncState *fs;
  FuncState *fs_2;
  lua_State *plVar15;
  lua_State *L;
  int iVar16;
  TString *ts;
  TString *pTVar17;
  int iVar18;
  BlockCnt bl;
  FuncState new_fs;
  
  iVar1 = __stack_chk_guard;
  pFVar14 = ls->fs;
  plVar15 = ls->L;
  pPVar13 = pFVar14->f;
  iVar16 = pFVar14->np;
  iVar11 = pPVar13->sizep;
  if (iVar16 < iVar11) {
    ppPVar12 = pPVar13->p;
  }
  else {
    ppPVar12 = (Proto **)luaM_growaux_(plVar15,pPVar13->p,&pPVar13->sizep,4,0x3ffff,"functions");
    iVar16 = pPVar13->sizep;
    pPVar13->p = ppPVar12;
    if (iVar11 < iVar16) {
      iVar18 = iVar11 << 2;
      while( true ) {
        iVar11 = iVar11 + 1;
        *(undefined4 *)((int)ppPVar12 + iVar18) = 0;
        iVar18 = iVar18 + 4;
        if (iVar11 == iVar16) break;
        ppPVar12 = pPVar13->p;
      }
      ppPVar12 = pPVar13->p;
      iVar16 = pFVar14->np;
    }
    else {
      iVar16 = pFVar14->np;
    }
  }
  pFVar14->np = iVar16 + 1;
  new_fs.f = luaF_newproto(plVar15);
  ppPVar12[iVar16] = new_fs.f;
  if (((pPVar13->marked & 4) != 0) && (((new_fs.f)->marked & 3) != 0)) {
    luaC_barrier_(plVar15,(GCObject *)pPVar13,(GCObject *)new_fs.f);
  }
  pDVar8 = ls->dyd;
  (new_fs.f)->linedefined = line;
  new_fs.nactvar = '\0';
  new_fs.nups = '\0';
  new_fs.freereg = '\0';
  new_fs.firstlocal = (pDVar8->actvar).n;
  new_fs.pc = 0;
  new_fs.lasttarget = 0;
  new_fs.jpc = -1;
  pTVar17 = ls->source;
  new_fs.nk = 0;
  new_fs.np = 0;
  new_fs.prev = ls->fs;
  ls->fs = &new_fs;
  new_fs.nlocvars = 0;
  (new_fs.f)->maxstacksize = '\x02';
  iVar11 = (ls->t).token;
  bl.nactvar = '\0';
  new_fs.bl = &bl;
  bl.previous = (BlockCnt *)0x0;
  bl.upval = '\0';
  bl.firstgoto = (ls->dyd->gt).n;
  bl.firstlabel = (ls->dyd->label).n;
  (new_fs.f)->source = pTVar17;
  bl.isloop = '\0';
  new_fs.ls = ls;
  if (iVar11 != 0x28) {
                    /* WARNING: Subroutine does not return */
    error_expected(ls,0x28);
  }
  luaX_next(ls);
  if (ismethod != 0) {
    pTVar17 = luaX_newstring(ls,"self",4);
    new_localvar(ls,pTVar17);
    pFVar14 = ls->fs;
    bVar6 = pFVar14->nactvar + 1;
    pFVar14->nactvar = bVar6;
    pFVar14->f->locvars[(pFVar14->ls->dyd->actvar).arr[(uint)bVar6 + pFVar14->firstlocal + -1].idx].
    startpc = pFVar14->pc;
  }
  pFVar14 = ls->fs;
  iVar11 = 0;
  pPVar13 = pFVar14->f;
  pPVar13->is_vararg = '\0';
  iVar16 = (ls->t).token;
  if (iVar16 != 0x29) {
    while (iVar16 != 0x119) {
      if (iVar16 != 0x124) {
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(ls,"<name> or \'...\' expected");
      }
      pTVar17 = (ls->t).seminfo.ts;
      iVar11 = iVar11 + 1;
      luaX_next(ls);
      new_localvar(ls,pTVar17);
      if ((pPVar13->is_vararg != '\0') || ((ls->t).token != 0x2c)) {
        pFVar7 = ls->fs;
        uVar9 = (uint)pFVar7->nactvar + iVar11;
        pFVar7->nactvar = (lu_byte)uVar9;
        goto LAB_0811bb94;
      }
      luaX_next(ls);
      iVar16 = (ls->t).token;
    }
    luaX_next(ls);
    pPVar13->is_vararg = '\x01';
    pFVar7 = ls->fs;
    uVar9 = (uint)pFVar7->nactvar + iVar11;
    pFVar7->nactvar = (lu_byte)uVar9;
    if (iVar11 != 0) {
LAB_0811bb94:
      uVar9 = uVar9 & 0xff;
      iVar18 = pFVar7->pc;
      iVar16 = pFVar7->firstlocal;
      pLVar2 = pFVar7->f->locvars;
      pVVar5 = (pFVar7->ls->dyd->actvar).arr;
      while( true ) {
        iVar10 = uVar9 - iVar11;
        iVar11 = iVar11 + -1;
        pLVar2[pVVar5[iVar10 + iVar16].idx].startpc = iVar18;
        if (iVar11 == 0) break;
        uVar9 = (uint)pFVar7->nactvar;
      }
    }
  }
  pPVar13->numparams = pFVar14->nactvar;
  luaK_reserveregs(pFVar14,(uint)pFVar14->nactvar);
  if ((ls->t).token != 0x29) {
                    /* WARNING: Subroutine does not return */
    error_expected(ls,0x29);
  }
  luaX_next(ls);
  do {
    iVar11 = (ls->t).token;
    if (iVar11 - 0x104U < 0x1e) {
      if ((1 << (iVar11 - 0x104U & 0xff) & 0x20020007U) != 0) goto LAB_0811bc40;
      if (iVar11 == 0x112) {
        statement(ls);
        iVar11 = (ls->t).token;
LAB_0811bc40:
        iVar16 = ls->linenumber;
        (new_fs.f)->lastlinedefined = iVar16;
        if (iVar11 == 0x106) {
          luaX_next(ls);
          pFVar14 = ls->fs->prev;
          iVar11 = luaK_codeABx(pFVar14,OP_CLOSURE,0,pFVar14->np - 1);
          e->k = VRELOCABLE;
          (e->u).info = iVar11;
          e->t = -1;
          e->f = -1;
          luaK_exp2nextreg(pFVar14,e);
          close_func((LexState *)&ls->fs,(LexState *)ls->L);
          if (iVar1 == __stack_chk_guard) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        if (line != iVar16) {
          plVar15 = ls->L;
          pcVar3 = luaX_token2str(ls,0x106);
          pcVar4 = luaX_token2str(ls,0x109);
          pcVar3 = luaO_pushfstring(plVar15,"%s expected (to close %s at line %d)",pcVar3,pcVar4,
                                    line);
                    /* WARNING: Subroutine does not return */
          luaX_syntaxerror(ls,pcVar3);
        }
                    /* WARNING: Subroutine does not return */
        error_expected(ls,0x106);
      }
    }
    statement(ls);
  } while( true );
}


