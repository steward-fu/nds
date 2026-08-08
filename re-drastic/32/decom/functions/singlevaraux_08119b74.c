/*
 * Ghidra decompilation
 *
 * Function : singlevaraux
 * Address  : 08119b74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int singlevaraux(FuncState *fs,TString *n,expdesc *var,int base)

{
  byte bVar1;
  int idx;
  Upvaldesc *up;
  TString *pTVar2;
  BlockCnt *pBVar3;
  BlockCnt *bl;
  Vardesc *pVVar4;
  Proto *pPVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  if (fs == (FuncState *)0x0) {
    return 0;
  }
  uVar6 = (uint)fs->nactvar;
  iVar7 = uVar6 - 1;
  if (uVar6 == 0) {
    pPVar5 = fs->f;
LAB_08119bfc:
    if (fs->nups == 0) {
LAB_08119c44:
      iVar7 = singlevaraux(fs->prev,n,var,0);
      if (iVar7 == 0) {
        return 0;
      }
      idx = newupvalue(fs,n,var,(expdesc *)&(var->u).ind);
    }
    else {
      idx = 0;
      pTVar2 = pPVar5->upvalues->name;
      while (n != pTVar2) {
        idx = idx + 1;
        if (idx == (uint)fs->nups) goto LAB_08119c44;
        pTVar2 = pPVar5->upvalues[idx].name;
      }
    }
    var->k = VUPVAL;
    (var->u).info = idx;
    var->t = -1;
    fs = (FuncState *)0x9;
    var->f = -1;
  }
  else {
    pPVar5 = fs->f;
    pVVar4 = (fs->ls->dyd->actvar).arr;
    if (n != pPVar5->locvars[pVVar4[iVar7 + fs->firstlocal].idx].varname) {
      pVVar4 = pVVar4 + fs->firstlocal + uVar6 + -1;
      do {
        bVar8 = iVar7 == 0;
        iVar7 = iVar7 + -1;
        if (bVar8) goto LAB_08119bfc;
        pVVar4 = pVVar4 + -1;
      } while (n != pPVar5->locvars[pVVar4->idx].varname);
    }
    if (base != 0) {
      fs = (FuncState *)0x8;
    }
    var->k = VLOCAL;
    (var->u).info = iVar7;
    var->t = -1;
    var->f = -1;
    if (base == 0) {
      pBVar3 = fs->bl;
      bVar1 = pBVar3->nactvar;
      while (iVar7 < (int)(uint)bVar1) {
        pBVar3 = pBVar3->previous;
        bVar1 = pBVar3->nactvar;
      }
      fs = (FuncState *)0x8;
      pBVar3->upval = '\x01';
    }
  }
  return (int)fs;
}


