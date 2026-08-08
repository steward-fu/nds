/*
 * Ghidra decompilation
 *
 * Function : luaK_dischargevars
 * Address  : 08135240
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_dischargevars(FuncState *fs,expdesc *e)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  Instruction *pIVar4;
  int iVar5;
  Instruction IVar6;
  Proto *f;
  Proto *f_1;
  uint uVar7;
  uint uVar8;
  
  switch(e->k) {
  case VLOCAL:
    e->k = VNONRELOC;
    break;
  case VUPVAL:
    f_1 = fs->f;
    iVar5 = fs->pc;
    iVar3 = fs->jpc;
    IVar6 = (e->u).info << 0x17 | 5;
    goto LAB_081352a8;
  case VINDEXED:
    uVar1 = (e->u).ind.idx;
    if (((uVar1 & 0x100) == 0) && ((short)(ushort)fs->nactvar <= (short)uVar1)) {
      fs->freereg = fs->freereg + 0xff;
    }
    uVar8 = (uint)(e->u).ind.t;
    if ((e->u).ind.vt == '\b') {
      if (uVar8 < fs->nactvar) {
        uVar7 = 7;
      }
      else {
        uVar7 = 7;
        fs->freereg = fs->freereg + 0xff;
        uVar8 = (uint)(e->u).ind.t;
      }
    }
    else {
      uVar7 = 6;
    }
    f_1 = fs->f;
    iVar5 = fs->pc;
    iVar3 = fs->jpc;
    IVar6 = uVar7 | (int)(e->u).ind.idx << 0xe | uVar8 << 0x17;
LAB_081352a8:
    patchlistaux(fs,iVar3,iVar5,0xff,iVar5);
    iVar3 = f_1->sizecode;
    iVar5 = fs->pc;
    fs->jpc = -1;
    if (iVar5 < iVar3) {
      pIVar4 = f_1->code;
    }
    else {
      pIVar4 = (Instruction *)
               luaM_growaux_(fs->ls->L,f_1->code,&f_1->sizecode,4,0x7fffffff,"opcodes");
      iVar5 = fs->pc;
      f_1->code = pIVar4;
    }
    pIVar4[iVar5] = IVar6;
    iVar3 = fs->pc;
    if (iVar3 < f_1->sizelineinfo) {
      piVar2 = f_1->lineinfo;
    }
    else {
      piVar2 = (int *)luaM_growaux_(fs->ls->L,f_1->lineinfo,&f_1->sizelineinfo,4,0x7fffffff,
                                    "opcodes");
      iVar3 = fs->pc;
      f_1->lineinfo = piVar2;
    }
    piVar2[iVar3] = fs->ls->lastline;
    iVar3 = fs->pc;
    fs->pc = iVar3 + 1;
    e->k = VRELOCABLE;
    (e->u).info = iVar3;
    break;
  case VCALL:
  case VVARARG:
    if (e->k == VCALL) {
      IVar6 = fs->f->code[(e->u).info];
      e->k = VNONRELOC;
      (e->u).info = (IVar6 << 0x12) >> 0x18;
    }
    else {
      pIVar4 = fs->f->code;
      pIVar4[(e->u).info] = pIVar4[(e->u).info] & 0x7fffff | 0x1000000;
      e->k = VRELOCABLE;
    }
  }
  return;
}


