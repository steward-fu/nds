/*
 * Ghidra decompilation
 *
 * Function : close_func
 * Address  : 0811a198
 * Program  : drastic
 */


/* DWARF original prototype: void close_func(LexState * ls, LexState * ls) */

void close_func(LexState *ls,LexState *ls_1)

{
  short sVar1;
  Instruction *pIVar2;
  int *piVar3;
  TValue *pTVar4;
  Proto **ppPVar5;
  LocVar *pLVar6;
  Upvaldesc *pUVar7;
  lua_State *L;
  int iVar8;
  FuncState *pFVar9;
  Proto *pPVar10;
  Proto *f;
  FuncState *fs;
  FuncState *fs_00;
  
  fs_00 = (FuncState *)ls->current;
  pPVar10 = fs_00->f;
  luaK_ret(fs_00,0,0);
  leaveblock(fs_00);
  iVar8 = fs_00->pc;
  if (iVar8 + 1U < 0x3fffffff || iVar8 == 0x3ffffffe) {
    pIVar2 = (Instruction *)
             luaM_realloc_((lua_State *)ls_1,pPVar10->code,pPVar10->sizecode << 2,iVar8 << 2);
    iVar8 = fs_00->pc;
    pPVar10->sizecode = iVar8;
    pPVar10->code = pIVar2;
    if (iVar8 + 1U < 0x3fffffff || iVar8 == 0x3ffffffe) {
      piVar3 = (int *)luaM_realloc_((lua_State *)ls_1,pPVar10->lineinfo,pPVar10->sizelineinfo << 2,
                                    iVar8 << 2);
      iVar8 = fs_00->nk;
      pPVar10->sizelineinfo = fs_00->pc;
      pPVar10->lineinfo = piVar3;
      if (iVar8 + 1U < 0x1fffffff || iVar8 == 0x1ffffffe) {
        pTVar4 = (TValue *)
                 luaM_realloc_((lua_State *)ls_1,pPVar10->k,pPVar10->sizek << 3,iVar8 << 3);
        iVar8 = fs_00->np;
        pPVar10->sizek = fs_00->nk;
        pPVar10->k = pTVar4;
        if (iVar8 + 1U < 0x3fffffff || iVar8 == 0x3ffffffe) {
          ppPVar5 = (Proto **)
                    luaM_realloc_((lua_State *)ls_1,pPVar10->p,pPVar10->sizep << 2,iVar8 << 2);
          sVar1 = fs_00->nlocvars;
          pPVar10->sizep = fs_00->np;
          pPVar10->p = ppPVar5;
          pLVar6 = (LocVar *)
                   luaM_realloc_((lua_State *)ls_1,pPVar10->locvars,pPVar10->sizelocvars * 0xc,
                                 sVar1 * 0xc);
          pPVar10->sizelocvars = (int)fs_00->nlocvars;
          pPVar10->locvars = pLVar6;
          pUVar7 = (Upvaldesc *)
                   luaM_realloc_((lua_State *)ls_1,pPVar10->upvalues,pPVar10->sizeupvalues << 3,
                                 (uint)fs_00->nups << 3);
          pFVar9 = fs_00->prev;
          pPVar10->upvalues = pUVar7;
          pPVar10->sizeupvalues = (uint)fs_00->nups;
          ls->current = (int)pFVar9;
          if (0 < *(int *)((ls_1->t).token + 0xc)) {
            luaC_step((lua_State *)ls_1);
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  luaM_toobig((lua_State *)ls_1);
}


