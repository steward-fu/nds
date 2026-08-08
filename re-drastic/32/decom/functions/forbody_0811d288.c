/*
 * Ghidra decompilation
 *
 * Function : forbody
 * Address  : 0811d288
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void forbody(LexState *ls,int base,int line,int nvars,int isnum)

{
  int iVar1;
  int endfor;
  FuncState *pFVar2;
  FuncState *fs_2;
  LocVar *pLVar3;
  Dyndata *pDVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FuncState *fs;
  FuncState *fs_00;
  FuncState *fs_1;
  int iVar9;
  FuncState *fs_3;
  Vardesc *pVVar10;
  int iVar11;
  int iVar12;
  int prep;
  int local_5c;
  BlockCnt bl;
  BlockCnt bl_1;
  
  iVar1 = __stack_chk_guard;
  fs_00 = ls->fs;
  iVar9 = fs_00->pc;
  iVar11 = fs_00->firstlocal;
  bVar5 = fs_00->nactvar + 3;
  fs_00->nactvar = bVar5;
  pLVar3 = fs_00->f->locvars;
  pVVar10 = (fs_00->ls->dyd->actvar).arr;
  pLVar3[pVVar10[(uint)bVar5 + iVar11 + -3].idx].startpc = iVar9;
  pLVar3[pVVar10[iVar11 + (uint)fs_00->nactvar + -2].idx].startpc = iVar9;
  iVar12 = (ls->t).token;
  pLVar3[pVVar10[iVar11 + (uint)fs_00->nactvar + -1].idx].startpc = iVar9;
  if (iVar12 != 0x103) {
                    /* WARNING: Subroutine does not return */
    error_expected(ls,0x103);
  }
  luaX_next(ls);
  if (isnum == 0) {
    local_5c = luaK_jump(fs_00);
  }
  else {
    local_5c = luaK_codeABx(fs_00,OP_FORPREP,base,0x1fffe);
  }
  bl.nactvar = fs_00->nactvar;
  bl.isloop = '\0';
  bl.upval = '\0';
  bl.previous = fs_00->bl;
  pDVar4 = fs_00->ls->dyd;
  bl.firstgoto = (pDVar4->gt).n;
  bl.firstlabel = (pDVar4->label).n;
  fs_00->bl = &bl;
  pFVar2 = ls->fs;
  uVar6 = (uint)pFVar2->nactvar + nvars;
  uVar7 = uVar6 & 0xff;
  pFVar2->nactvar = (lu_byte)uVar6;
  if (nvars != 0) {
    iVar11 = pFVar2->pc;
    iVar12 = pFVar2->firstlocal;
    pLVar3 = pFVar2->f->locvars;
    pVVar10 = (pFVar2->ls->dyd->actvar).arr;
    iVar9 = nvars;
    while( true ) {
      iVar8 = uVar7 - iVar9;
      iVar9 = iVar9 + -1;
      pLVar3[pVVar10[iVar8 + iVar12].idx].startpc = iVar11;
      if (iVar9 == 0) break;
      uVar7 = (uint)pFVar2->nactvar;
    }
  }
  luaK_reserveregs(fs_00,nvars);
  pFVar2 = ls->fs;
  bl_1.isloop = '\0';
  bl_1.nactvar = pFVar2->nactvar;
  bl_1.upval = '\0';
  bl_1.previous = pFVar2->bl;
  pDVar4 = pFVar2->ls->dyd;
  bl_1.firstlabel = (pDVar4->label).n;
  bl_1.firstgoto = (pDVar4->gt).n;
  pFVar2->bl = &bl_1;
  do {
    iVar9 = (ls->t).token;
    uVar6 = iVar9 - 0x104;
    if (uVar6 < 0x1e) {
      if ((1 << (uVar6 & 0xff) & 0x20020007U) != 0) goto LAB_0811d4a8;
      if (iVar9 == 0x112) {
        statement(ls);
LAB_0811d4a8:
        leaveblock(pFVar2);
        leaveblock(fs_00);
        luaK_patchtohere(fs_00,local_5c);
        if (isnum == 0) {
          luaK_codeABC(fs_00,OP_TFORCALL,base,0,nvars);
          luaK_fixline(fs_00,line);
          iVar9 = luaK_codeABx(fs_00,OP_TFORLOOP,base + 2,0x1fffe);
        }
        else {
          iVar9 = luaK_codeABx(fs_00,OP_FORLOOP,base,0x1fffe);
        }
        luaK_patchlist(fs_00,iVar9,local_5c + 1);
        luaK_fixline(fs_00,line);
        if (iVar1 == __stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    statement(ls);
  } while( true );
}


