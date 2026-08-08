/*
 * Ghidra decompilation
 *
 * Function : luaK_exp2anyregup
 * Address  : 081358d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_exp2anyregup(FuncState *fs,expdesc *e)

{
  ushort uVar1;
  Instruction IVar2;
  int iVar3;
  Proto *pPVar4;
  byte bVar5;
  expkind eVar6;
  uint uVar7;
  uint uVar8;
  int newstack;
  
  eVar6 = e->k;
  if (eVar6 == VUPVAL) {
    if (e->t == e->f) {
      return;
    }
    IVar2 = (e->u).info << 0x17 | 5;
LAB_08135950:
    iVar3 = luaK_code(fs,IVar2);
    (e->u).info = iVar3;
    pPVar4 = fs->f;
    e->k = VRELOCABLE;
    goto LAB_08135964;
  }
  switch(eVar6 + ~VNONRELOC) {
  case VVOID:
    e->k = VNONRELOC;
LAB_08135a1c:
    if (e->t == e->f) {
      return;
    }
    iVar3 = (e->u).info;
    if ((int)(uint)fs->nactvar <= iVar3) goto LAB_081359a0;
    pPVar4 = fs->f;
    if (e->k == VNONRELOC) goto LAB_08135aa4;
    break;
  default:
    if (eVar6 == VNONRELOC) goto LAB_08135a1c;
    switch(eVar6 + ~VNONRELOC) {
    case VVOID:
      pPVar4 = fs->f;
      e->k = VNONRELOC;
      break;
    case VNIL:
      IVar2 = (e->u).info << 0x17 | 5;
      goto LAB_08135950;
    case VTRUE:
      goto switchD_081358fc_caseD_2;
    default:
      pPVar4 = fs->f;
      goto LAB_08135964;
    case VKFLT:
    case VKINT:
      if (eVar6 != VCALL) goto LAB_08135a54;
      IVar2 = fs->f->code[(e->u).info];
      e->k = VNONRELOC;
      (e->u).info = (IVar2 << 0x12) >> 0x18;
      pPVar4 = fs->f;
    }
LAB_08135aa4:
    if ((((e->u).info & 0x100U) != 0) || ((e->u).info < (int)(uint)fs->nactvar)) break;
    bVar5 = fs->freereg - 1;
    fs->freereg = bVar5;
    goto LAB_08135968;
  case VTRUE:
switchD_081358fc_caseD_2:
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
    IVar2 = uVar7 | (int)(e->u).ind.idx << 0xe | uVar8 << 0x17;
    goto LAB_08135950;
  case VKFLT:
  case VKINT:
    if (eVar6 == VCALL) {
      IVar2 = fs->f->code[(e->u).info];
      e->k = VNONRELOC;
      (e->u).info = (IVar2 << 0x12) >> 0x18;
      goto LAB_08135a1c;
    }
LAB_08135a54:
    pPVar4 = fs->f;
    pPVar4->code[(e->u).info] = pPVar4->code[(e->u).info] & 0x7fffff | 0x1000000;
    e->k = VRELOCABLE;
  }
LAB_08135964:
  bVar5 = fs->freereg;
LAB_08135968:
  uVar8 = bVar5 + 1;
  if (pPVar4->maxstacksize < uVar8) {
    if (0xf9 < uVar8) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(fs->ls,"function or expression too complex");
    }
    pPVar4->maxstacksize = (lu_byte)uVar8;
    uVar8 = fs->freereg + 1;
  }
  iVar3 = (uVar8 & 0xff) - 1;
  fs->freereg = (lu_byte)uVar8;
LAB_081359a0:
  exp2reg(fs,e,iVar3);
  return;
}


