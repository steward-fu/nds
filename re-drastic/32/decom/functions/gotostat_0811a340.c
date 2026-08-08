/*
 * Ghidra decompilation
 *
 * Function : gotostat
 * Address  : 0811a340
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gotostat(LexState *ls,int pc)

{
  Labeldesc *pLVar1;
  FuncState *pFVar2;
  Labeldesc *pLVar3;
  int i;
  int g;
  int g_00;
  int n;
  Dyndata *pDVar4;
  Labeldesc *lb;
  Labeldesc *pLVar5;
  int iVar6;
  int line;
  Labeldesc *gt;
  TString *label;
  TString *ts;
  Dyndata *pDVar7;
  Dyndata *dyd;
  Labeldesc *pLVar8;
  BlockCnt *pBVar9;
  int iVar10;
  
  iVar6 = ls->linenumber;
  if ((ls->t).token == 0x10a) {
    luaX_next(ls);
    if ((ls->t).token != 0x124) {
                    /* WARNING: Subroutine does not return */
      error_expected(ls,0x124);
    }
    label = (ls->t).seminfo.ts;
    luaX_next(ls);
  }
  else {
    luaX_next(ls);
    label = luaS_new(ls->L,"break");
  }
  pDVar4 = ls->dyd;
  g_00 = (pDVar4->gt).n;
  if (g_00 < (pDVar4->gt).size) {
    pLVar3 = (pDVar4->gt).arr;
  }
  else {
    pLVar3 = (Labeldesc *)
             luaM_growaux_(ls->L,(pDVar4->gt).arr,&(pDVar4->gt).size,0x10,0x7fff,"labels/gotos");
    (pDVar4->gt).arr = pLVar3;
  }
  pLVar3[g_00].name = label;
  pFVar2 = ls->fs;
  pLVar3[g_00].line = iVar6;
  pLVar3[g_00].nactvar = pFVar2->nactvar;
  pFVar2 = ls->fs;
  pDVar7 = ls->dyd;
  pBVar9 = pFVar2->bl;
  (pDVar4->gt).arr[g_00].pc = pc;
  pLVar3 = (pDVar7->gt).arr;
  iVar6 = pBVar9->firstlabel;
  (pDVar4->gt).n = g_00 + 1;
  iVar10 = (pDVar7->label).n;
  if (iVar10 <= iVar6) {
    return;
  }
  pLVar8 = (pDVar7->label).arr;
  pLVar5 = pLVar8 + iVar6;
  if (pLVar8[iVar6].name != pLVar3[g_00].name) {
    pLVar1 = pLVar8 + iVar6 + 1;
    do {
      pLVar5 = pLVar1;
      iVar6 = iVar6 + 1;
      if (iVar6 == iVar10) {
        return;
      }
      pLVar1 = pLVar5 + 1;
    } while (pLVar8[iVar6].name != pLVar3[g_00].name);
  }
  pLVar8 = (Labeldesc *)(uint)pLVar5->nactvar;
  if (pLVar8 < (Labeldesc *)(uint)pLVar3[g_00].nactvar) {
    luaK_patchclose(pFVar2,pLVar3[g_00].pc,(int)pLVar8);
    pLVar8 = (Labeldesc *)(uint)pLVar5->nactvar;
  }
  closegoto(ls,g_00,(Labeldesc *)pLVar5->pc,pLVar8);
  return;
}


