/*
 * Ghidra decompilation
 *
 * Function : luaK_exp2anyreg
 * Address  : 08135648
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaK_exp2anyreg(FuncState *fs,expdesc *e)

{
  ushort uVar1;
  int iVar2;
  Instruction IVar3;
  expkind eVar4;
  Proto *pPVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int newstack;
  
  eVar4 = e->k;
  switch(eVar4 + ~VNONRELOC) {
  case VVOID:
    uVar8 = (e->u).info;
    e->k = VNONRELOC;
LAB_08135744:
    if (e->t == e->f) {
      return uVar8;
    }
    if ((int)(uint)fs->nactvar <= (int)uVar8) {
      exp2reg(fs,e,uVar8);
      return (e->u).info;
    }
    pPVar5 = fs->f;
    if (e->k == VNONRELOC) goto LAB_08135808;
    break;
  case VNIL:
switchD_08135668_caseD_1:
    IVar3 = (e->u).info << 0x17 | 5;
    goto LAB_081356bc;
  case VTRUE:
switchD_08135668_caseD_2:
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
    IVar3 = uVar7 | (int)(e->u).ind.idx << 0xe | uVar8 << 0x17;
LAB_081356bc:
    iVar2 = luaK_code(fs,IVar3);
    (e->u).info = iVar2;
    pPVar5 = fs->f;
    e->k = VRELOCABLE;
    break;
  default:
    if (eVar4 == VNONRELOC) {
      uVar8 = (e->u).info;
      goto LAB_08135744;
    }
    switch(eVar4 + ~VNONRELOC) {
    case VVOID:
      pPVar5 = fs->f;
      e->k = VNONRELOC;
      break;
    case VNIL:
      goto switchD_08135668_caseD_1;
    case VTRUE:
      goto switchD_08135668_caseD_2;
    default:
      pPVar5 = fs->f;
      goto LAB_081356d0;
    case VKFLT:
    case VKINT:
      if (eVar4 != VCALL) goto LAB_08135778;
      IVar3 = fs->f->code[(e->u).info];
      e->k = VNONRELOC;
      (e->u).info = (IVar3 << 0x12) >> 0x18;
      pPVar5 = fs->f;
    }
LAB_08135808:
    if ((((e->u).info & 0x100U) == 0) && ((int)(uint)fs->nactvar <= (e->u).info)) {
      bVar6 = fs->freereg - 1;
      fs->freereg = bVar6;
      goto LAB_081356d4;
    }
    break;
  case VKFLT:
  case VKINT:
    if (eVar4 == VCALL) {
      IVar3 = fs->f->code[(e->u).info];
      e->k = VNONRELOC;
      uVar8 = (IVar3 << 0x12) >> 0x18;
      (e->u).info = uVar8;
      goto LAB_08135744;
    }
LAB_08135778:
    pPVar5 = fs->f;
    pPVar5->code[(e->u).info] = pPVar5->code[(e->u).info] & 0x7fffff | 0x1000000;
    e->k = VRELOCABLE;
  }
LAB_081356d0:
  bVar6 = fs->freereg;
LAB_081356d4:
  uVar8 = bVar6 + 1;
  if (pPVar5->maxstacksize < uVar8) {
    if (0xf9 < uVar8) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(fs->ls,"function or expression too complex");
    }
    pPVar5->maxstacksize = (lu_byte)uVar8;
    uVar8 = fs->freereg + 1;
  }
  fs->freereg = (lu_byte)uVar8;
  exp2reg(fs,e,(uVar8 & 0xff) - 1);
  return (e->u).info;
}


