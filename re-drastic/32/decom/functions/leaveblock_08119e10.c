/*
 * Ghidra decompilation
 *
 * Function : leaveblock
 * Address  : 08119e10
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void leaveblock(FuncState *fs)

{
  Labeldesc *pLVar1;
  int iVar2;
  BlockCnt *pBVar3;
  char *msg_00;
  TString *n;
  FuncState *pFVar4;
  int j;
  LexState *pLVar5;
  Labeldesc *pLVar6;
  char *msg;
  uint uVar7;
  Dyndata *pDVar8;
  Dyndata *dyd;
  TString *pTVar9;
  byte bVar10;
  uint uVar11;
  int i_1;
  LexState *pLVar12;
  LexState *ls;
  Labeldesc *lb;
  Labeldesc *pLVar13;
  int l;
  int i;
  int n_1;
  int i_2;
  Labeldesc *pLVar14;
  Labeldesc *gt;
  BlockCnt *pBVar15;
  BlockCnt *bl;
  Dyndata *pDVar16;
  int iVar17;
  Labeldesc *gt_1;
  Proto *pPVar18;
  
  pLVar12 = fs->ls;
  pBVar15 = fs->bl;
  if ((pBVar15->previous != (BlockCnt *)0x0) && (pBVar15->upval != '\0')) {
    iVar2 = luaK_jump(fs);
    luaK_patchclose(fs,iVar2,(uint)pBVar15->nactvar);
    luaK_patchtohere(fs,iVar2);
  }
  if (pBVar15->isloop != '\0') {
    pTVar9 = luaS_new(pLVar12->L,"break");
    pDVar16 = pLVar12->dyd;
    iVar17 = pLVar12->fs->pc;
    iVar2 = (pDVar16->label).n;
    if (iVar2 < (pDVar16->label).size) {
      pLVar14 = (pDVar16->label).arr;
    }
    else {
      pLVar14 = (Labeldesc *)
                luaM_growaux_(pLVar12->L,(pDVar16->label).arr,&(pDVar16->label).size,0x10,0x7fff,
                              "labels/gotos");
      (pDVar16->label).arr = pLVar14;
    }
    pLVar14[iVar2].name = pTVar9;
    pFVar4 = pLVar12->fs;
    pLVar14[iVar2].line = 0;
    pLVar14[iVar2].nactvar = pFVar4->nactvar;
    pDVar8 = pLVar12->dyd;
    pLVar14 = (pDVar8->label).arr;
    i_2 = pLVar12->fs->bl->firstgoto;
    (pDVar16->label).arr[iVar2].pc = iVar17;
    (pDVar16->label).n = iVar2 + 1;
    iVar17 = (pDVar8->gt).n;
    pLVar14 = pLVar14 + iVar2;
    while (i_2 < iVar17) {
      if ((pDVar8->gt).arr[i_2].name == pLVar14->name) {
        closegoto(pLVar12,i_2,(Labeldesc *)pLVar14->pc,(Labeldesc *)(uint)pLVar14->nactvar);
        iVar17 = (pDVar8->gt).n;
      }
      else {
        i_2 = i_2 + 1;
      }
    }
  }
  pLVar5 = fs->ls;
  pDVar16 = pLVar5->dyd;
  fs->bl = pBVar15->previous;
  uVar7 = (uint)pBVar15->nactvar;
  (pDVar16->actvar).n = (pDVar16->actvar).n - (fs->nactvar - uVar7);
  bVar10 = fs->nactvar;
  uVar11 = (uint)bVar10;
  if (uVar7 < uVar11) {
    pPVar18 = fs->f;
    iVar17 = fs->pc;
    iVar2 = fs->firstlocal;
    do {
      fs->nactvar = (lu_byte)(uVar11 - 1);
      pPVar18->locvars[(pLVar5->dyd->actvar).arr[(uVar11 - 1 & 0xff) + iVar2].idx].endpc = iVar17;
      bVar10 = fs->nactvar;
      uVar11 = (uint)bVar10;
    } while (uVar7 < uVar11);
  }
  fs->freereg = bVar10;
  pBVar3 = pBVar15->previous;
  pDVar16 = pLVar12->dyd;
  (pDVar16->label).n = pBVar15->firstlabel;
  if (pBVar3 == (BlockCnt *)0x0) {
    iVar2 = pBVar15->firstgoto;
    if ((pDVar16->gt).n <= iVar2) {
      return;
    }
    pLVar14 = (pDVar16->gt).arr;
    pTVar9 = pLVar14[iVar2].name;
    if (pTVar9->tt == '\x04') {
      msg = "no visible label \'%s\' for <goto> at line %d";
      if (pTVar9->extra != '\0') {
        msg = "<%s> at line %d not inside a loop";
      }
    }
    else {
      msg = "no visible label \'%s\' for <goto> at line %d";
    }
    msg_00 = luaO_pushfstring(pLVar12->L,msg,&pTVar9[1].tt,pLVar14[iVar2].line);
    (pLVar12->t).token = 0;
                    /* WARNING: Subroutine does not return */
    luaX_syntaxerror(pLVar12,msg_00);
  }
  pDVar16 = pLVar5->dyd;
  i = pBVar15->firstgoto;
LAB_08119ef4:
  if ((pDVar16->gt).n <= i) {
    return;
  }
  do {
    pLVar14 = (pDVar16->gt).arr;
    bVar10 = pBVar15->nactvar;
    if ((uint)bVar10 < (uint)pLVar14[i].nactvar) {
      if (pBVar15->upval != '\0') {
        luaK_patchclose(fs,pLVar14[i].pc,(uint)bVar10);
        bVar10 = pBVar15->nactvar;
      }
      pLVar14[i].nactvar = bVar10;
    }
    pLVar12 = fs->ls;
    pDVar8 = pLVar12->dyd;
    pLVar14 = (pDVar8->gt).arr;
    iVar17 = (pDVar8->label).n;
    iVar2 = pLVar12->fs->bl->firstlabel;
    if (iVar2 < iVar17) {
      pLVar6 = (pDVar8->label).arr;
      pLVar13 = pLVar6 + iVar2;
      if (pLVar6[iVar2].name == pLVar14[i].name) break;
      pLVar1 = pLVar6 + iVar2 + 1;
      while (pLVar13 = pLVar1, iVar2 = iVar2 + 1, iVar2 != iVar17) {
        pLVar1 = pLVar13 + 1;
        if (pLVar6[iVar2].name == pLVar14[i].name) goto LAB_08119fc8;
      }
    }
    i = i + 1;
    if ((pDVar16->gt).n <= i) {
      return;
    }
  } while( true );
LAB_08119fc8:
  pLVar6 = (Labeldesc *)(uint)pLVar13->nactvar;
  if (pLVar6 < (Labeldesc *)(uint)pLVar14[i].nactvar) {
    luaK_patchclose(pLVar12->fs,pLVar14[i].pc,(int)pLVar6);
    pLVar6 = (Labeldesc *)(uint)pLVar13->nactvar;
  }
  closegoto(pLVar12,i,(Labeldesc *)pLVar13->pc,pLVar6);
  goto LAB_08119ef4;
}


