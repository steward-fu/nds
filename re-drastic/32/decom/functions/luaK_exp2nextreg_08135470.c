/*
 * Ghidra decompilation
 *
 * Function : luaK_exp2nextreg
 * Address  : 08135470
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_exp2nextreg(FuncState *fs,expdesc *e)

{
  ushort uVar1;
  int iVar2;
  expkind eVar3;
  Proto *pPVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int newstack;
  Instruction IVar8;
  
  eVar3 = e->k;
  switch(eVar3) {
  case VLOCAL:
    pPVar4 = fs->f;
    e->k = VNONRELOC;
    break;
  case VUPVAL:
    IVar8 = (e->u).info << 0x17 | 5;
    goto LAB_08135524;
  case VINDEXED:
    uVar1 = (e->u).ind.idx;
    if (((uVar1 & 0x100) == 0) && ((short)(ushort)fs->nactvar <= (short)uVar1)) {
      fs->freereg = fs->freereg + 0xff;
    }
    uVar7 = (uint)(e->u).ind.t;
    if ((e->u).ind.vt == '\b') {
      if (uVar7 < fs->nactvar) {
        uVar6 = 7;
      }
      else {
        uVar6 = 7;
        fs->freereg = fs->freereg + 0xff;
        uVar7 = (uint)(e->u).ind.t;
      }
    }
    else {
      uVar6 = 6;
    }
    IVar8 = uVar6 | (int)(e->u).ind.idx << 0xe | uVar7 << 0x17;
LAB_08135524:
    iVar2 = luaK_code(fs,IVar8);
    (e->u).info = iVar2;
    pPVar4 = fs->f;
    e->k = VRELOCABLE;
    goto LAB_08135538;
  default:
    pPVar4 = fs->f;
    if (eVar3 == VNONRELOC) break;
    goto LAB_08135538;
  case VCALL:
  case VVARARG:
    if (eVar3 != VCALL) {
      pPVar4 = fs->f;
      pPVar4->code[(e->u).info] = pPVar4->code[(e->u).info] & 0x7fffff | 0x1000000;
      e->k = VRELOCABLE;
      goto LAB_08135538;
    }
    IVar8 = fs->f->code[(e->u).info];
    e->k = VNONRELOC;
    (e->u).info = (IVar8 << 0x12) >> 0x18;
    pPVar4 = fs->f;
  }
  if ((((e->u).info & 0x100U) == 0) && ((int)(uint)fs->nactvar <= (e->u).info)) {
    bVar5 = fs->freereg - 1;
    fs->freereg = bVar5;
  }
  else {
LAB_08135538:
    bVar5 = fs->freereg;
  }
  uVar7 = bVar5 + 1;
  if (pPVar4->maxstacksize < uVar7) {
    if (0xf9 < uVar7) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(fs->ls,"function or expression too complex");
    }
    pPVar4->maxstacksize = (lu_byte)uVar7;
    uVar7 = fs->freereg + 1;
  }
  fs->freereg = (lu_byte)uVar7;
  exp2reg(fs,e,(uVar7 & 0xff) - 1);
  return;
}


