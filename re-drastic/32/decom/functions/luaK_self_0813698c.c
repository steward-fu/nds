/*
 * Ghidra decompilation
 *
 * Function : luaK_self
 * Address  : 0813698c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_self(FuncState *fs,expdesc *e,expdesc *key)

{
  int iVar1;
  Proto *pPVar2;
  int iVar3;
  Instruction *pIVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  int newstack;
  expkind eVar8;
  anon_union_4_4_e6d17769_for_u aVar9;
  uint uVar10;
  int newstack_1;
  int iVar11;
  int iVar12;
  Proto *f;
  int ereg;
  
  luaK_dischargevars(fs,e);
  if (e->k == VNONRELOC) {
    if (e->t != e->f) {
      if ((e->u).info < (int)(uint)fs->nactvar) goto LAB_081369b8;
      exp2reg(fs,e,(e->u).info);
      eVar8 = e->k;
      goto LAB_08136a18;
    }
    uVar7 = (e->u).info;
LAB_08136c0c:
    if (((uVar7 & 0x100) != 0) || ((int)uVar7 < (int)(uint)fs->nactvar)) goto LAB_08136a24;
    bVar6 = fs->freereg - 1;
    fs->freereg = bVar6;
  }
  else {
LAB_081369b8:
    luaK_dischargevars(fs,e);
    if (((e->k == VNONRELOC) && (((e->u).info & 0x100U) == 0)) &&
       ((int)(uint)fs->nactvar <= (e->u).info)) {
      bVar6 = fs->freereg - 1;
      fs->freereg = bVar6;
    }
    else {
      bVar6 = fs->freereg;
    }
    uVar7 = bVar6 + 1;
    if (fs->f->maxstacksize < uVar7) {
      if (0xf9 < uVar7) goto LAB_08136c34;
      fs->f->maxstacksize = (lu_byte)uVar7;
      uVar7 = fs->freereg + 1;
    }
    fs->freereg = (lu_byte)uVar7;
    exp2reg(fs,e,(uVar7 & 0xff) - 1);
    eVar8 = e->k;
LAB_08136a18:
    uVar7 = (e->u).info;
    if (eVar8 == VNONRELOC) goto LAB_08136c0c;
LAB_08136a24:
    bVar6 = fs->freereg;
  }
  aVar9.info._1_3_ = 0;
  aVar9.ind.idx._0_1_ = bVar6;
  e->u = aVar9;
  pPVar2 = fs->f;
  e->k = VNONRELOC;
  uVar10 = fs->freereg + 2;
  if (pPVar2->maxstacksize < uVar10) {
    if (0xf9 < uVar10) {
LAB_08136c34:
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(fs->ls,"function or expression too complex");
    }
    pPVar2->maxstacksize = (lu_byte)uVar10;
    uVar10 = fs->freereg + 2;
  }
  fs->freereg = (lu_byte)uVar10;
  iVar12 = (e->u).info;
  iVar1 = luaK_exp2RK(fs,key);
  pPVar2 = fs->f;
  patchlistaux(fs,fs->jpc,fs->pc,0xff,fs->pc);
  iVar3 = pPVar2->sizecode;
  iVar11 = fs->pc;
  fs->jpc = -1;
  if (iVar11 < iVar3) {
    pIVar4 = pPVar2->code;
  }
  else {
    pIVar4 = (Instruction *)
             luaM_growaux_(fs->ls->L,pPVar2->code,&pPVar2->sizecode,4,0x7fffffff,"opcodes");
    iVar11 = fs->pc;
    pPVar2->code = pIVar4;
  }
  pIVar4[iVar11] = uVar7 << 0x17 | iVar12 << 6 | 0xc | iVar1 << 0xe;
  iVar1 = fs->pc;
  if (iVar1 < pPVar2->sizelineinfo) {
    piVar5 = pPVar2->lineinfo;
  }
  else {
    piVar5 = (int *)luaM_growaux_(fs->ls->L,pPVar2->lineinfo,&pPVar2->sizelineinfo,4,0x7fffffff,
                                  "opcodes");
    iVar1 = fs->pc;
    pPVar2->lineinfo = piVar5;
  }
  eVar8 = key->k;
  piVar5[iVar1] = fs->ls->lastline;
  fs->pc = fs->pc + 1;
  if (((eVar8 == VNONRELOC) && (((key->u).info & 0x100U) == 0)) &&
     ((int)(uint)fs->nactvar <= (key->u).info)) {
    fs->freereg = fs->freereg + 0xff;
  }
  return;
}


