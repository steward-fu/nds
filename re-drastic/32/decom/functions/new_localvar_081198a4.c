/*
 * Ghidra decompilation
 *
 * Function : new_localvar
 * Address  : 081198a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void new_localvar(LexState *ls,TString *name)

{
  Vardesc *pVVar1;
  char *pcVar2;
  LocVar *pLVar3;
  char *what;
  int iVar4;
  Dyndata *pDVar5;
  Dyndata *dyd;
  FuncState *fs;
  FuncState *fs_00;
  FuncState *fs_1;
  Proto *o;
  Proto *f;
  int iVar6;
  int oldsize;
  int iVar7;
  
  fs_00 = ls->fs;
  pDVar5 = ls->dyd;
  o = fs_00->f;
  iVar7 = (int)fs_00->nlocvars;
  iVar6 = o->sizelocvars;
  if (iVar7 < iVar6) {
    pLVar3 = o->locvars;
  }
  else {
    pLVar3 = (LocVar *)luaM_growaux_(ls->L,o->locvars,&o->sizelocvars,0xc,0x7fff,"local variables");
    iVar7 = o->sizelocvars;
    o->locvars = pLVar3;
    if (iVar6 < iVar7) {
      iVar4 = 0;
      do {
        *(undefined4 *)((int)&pLVar3[iVar6].varname + iVar4) = 0;
        iVar4 = iVar4 + 0xc;
      } while ((iVar7 - iVar6) * 0xc - iVar4 != 0);
      iVar7 = (int)fs_00->nlocvars;
      pLVar3 = o->locvars;
    }
    else {
      iVar7 = (int)fs_00->nlocvars;
    }
  }
  pLVar3[iVar7].varname = name;
  if (((o->marked & 4) != 0) && ((name->marked & 3) != 0)) {
    luaC_barrier_(ls->L,(GCObject *)o,(GCObject *)name);
    iVar7 = (int)fs_00->nlocvars;
  }
  what = (char *)(pDVar5->actvar).n;
  fs_00->nlocvars = (short)iVar7 + 1;
  pcVar2 = what + 1;
  if ((int)pcVar2 - fs_00->firstlocal < 0xc9) {
    if ((int)pcVar2 < (pDVar5->actvar).size) {
      pVVar1 = (pDVar5->actvar).arr;
    }
    else {
      pVVar1 = (Vardesc *)
               luaM_growaux_(ls->L,(pDVar5->actvar).arr,&(pDVar5->actvar).size,2,0x7fffffff,
                             "local variables");
      what = (char *)(pDVar5->actvar).n;
      (pDVar5->actvar).arr = pVVar1;
      pcVar2 = what + 1;
    }
    (pDVar5->actvar).n = (int)pcVar2;
    pVVar1[(int)what].idx = (short)iVar7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  checklimit(fs_00,200,0x814605c,what);
}


