/*
 * Ghidra decompilation
 *
 * Function : closegoto
 * Address  : 08119d04
 * Program  : drastic
 */


/* DWARF original prototype: void closegoto(LexState * ls, int g, Labeldesc * label, Labeldesc *
   label) */

void closegoto(LexState *ls,int g,Labeldesc *label,Labeldesc *label_1)

{
  FuncState *fs_00;
  FuncState *fs;
  char *msg_00;
  char *msg;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int i;
  int iVar4;
  Dyndata *pDVar5;
  Labeldesc *pLVar6;
  undefined4 uVar7;
  Labeldesc *gt;
  
  pDVar5 = ls->dyd;
  fs_00 = ls->fs;
  pLVar6 = (pDVar5->gt).arr;
  if (label_1 <= (Labeldesc *)(uint)pLVar6[g].nactvar) {
    luaK_patchlist(fs_00,pLVar6[g].pc,(int)label);
    iVar2 = (pDVar5->gt).n + -1;
    iVar4 = g * 0x10;
    if (g < iVar2) {
      do {
        pLVar6 = (pDVar5->gt).arr;
        g = g + 1;
        puVar1 = (undefined4 *)((int)&pLVar6[1].name + iVar4);
        puVar3 = (undefined4 *)((int)&pLVar6->name + iVar4);
        uVar7 = puVar1[1];
        *puVar3 = *puVar1;
        puVar3[1] = uVar7;
        uVar7 = puVar1[3];
        puVar3[2] = puVar1[2];
        puVar3[3] = uVar7;
        iVar2 = (pDVar5->gt).n + -1;
        iVar4 = iVar4 + 0x10;
      } while (g < iVar2);
    }
    (pDVar5->gt).n = iVar2;
    return;
  }
  msg_00 = luaO_pushfstring(ls->L,"<goto %s> at line %d jumps into the scope of local \'%s\'",
                            &pLVar6[g].name[1].tt,pLVar6[g].line,
                            &fs_00->f->locvars
                             [(fs_00->ls->dyd->actvar).arr
                              [(int)&((Labeldesc *)(uint)pLVar6[g].nactvar)->name +
                               fs_00->firstlocal].idx].varname[1].tt);
  (ls->t).token = 0;
                    /* WARNING: Subroutine does not return */
  luaX_syntaxerror(ls,msg_00);
}


