/*
 * Ghidra decompilation
 *
 * Function : luaK_exp2val
 * Address  : 08135b74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_exp2val(FuncState *fs,expdesc *e)

{
  ushort uVar1;
  Instruction IVar2;
  expkind eVar3;
  uint uVar4;
  Instruction *pIVar5;
  Proto *pPVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int newstack;
  
  eVar3 = e->k;
  iVar8 = eVar3 + ~VNONRELOC;
  if (e->t == e->f) {
    switch(iVar8) {
    case 0:
      e->k = VNONRELOC;
      break;
    case 1:
      iVar8 = luaK_code(fs,(e->u).info << 0x17 | 5);
      e->k = VRELOCABLE;
      (e->u).info = iVar8;
      break;
    case 2:
      uVar1 = (e->u).ind.idx;
      if (((uVar1 & 0x100) == 0) && ((short)(ushort)fs->nactvar <= (short)uVar1)) {
        fs->freereg = fs->freereg + 0xff;
      }
      uVar4 = (uint)(e->u).ind.t;
      if ((e->u).ind.vt == '\b') {
        if (uVar4 < fs->nactvar) {
          uVar9 = 7;
        }
        else {
          uVar9 = 7;
          fs->freereg = fs->freereg + 0xff;
          uVar4 = (uint)(e->u).ind.t;
        }
      }
      else {
        uVar9 = 6;
      }
      iVar8 = luaK_code(fs,uVar9 | (int)(e->u).ind.idx << 0xe | uVar4 << 0x17);
      e->k = VRELOCABLE;
      (e->u).info = iVar8;
      break;
    case 5:
    case 6:
      if (eVar3 == VCALL) {
        IVar2 = fs->f->code[(e->u).info];
        e->k = VNONRELOC;
        (e->u).info = (IVar2 << 0x12) >> 0x18;
      }
      else {
        pIVar5 = fs->f->code;
        pIVar5[(e->u).info] = pIVar5[(e->u).info] & 0x7fffff | 0x1000000;
        e->k = VRELOCABLE;
      }
    }
    return;
  }
  switch(iVar8) {
  case 0:
    uVar4 = (e->u).info;
    e->k = VNONRELOC;
LAB_08135cf0:
    if ((int)(uint)fs->nactvar <= (int)uVar4) goto LAB_08135c44;
    pPVar6 = fs->f;
    if (e->k == VNONRELOC) goto LAB_08135e20;
    break;
  case 1:
switchD_08135ba0_caseD_1:
    IVar2 = (e->u).info << 0x17 | 5;
    goto LAB_08135bf4;
  case 2:
switchD_08135ba0_caseD_2:
    uVar1 = (e->u).ind.idx;
    if (((uVar1 & 0x100) == 0) && ((short)(ushort)fs->nactvar <= (short)uVar1)) {
      fs->freereg = fs->freereg + 0xff;
    }
    uVar4 = (uint)(e->u).ind.t;
    if ((e->u).ind.vt == '\b') {
      if (uVar4 < fs->nactvar) {
        uVar9 = 7;
      }
      else {
        uVar9 = 7;
        fs->freereg = fs->freereg + 0xff;
        uVar4 = (uint)(e->u).ind.t;
      }
    }
    else {
      uVar9 = 6;
    }
    IVar2 = uVar9 | (int)(e->u).ind.idx << 0xe | uVar4 << 0x17;
LAB_08135bf4:
    iVar8 = luaK_code(fs,IVar2);
    (e->u).info = iVar8;
    pPVar6 = fs->f;
    e->k = VRELOCABLE;
    break;
  default:
    if (eVar3 == VNONRELOC) {
      uVar4 = (e->u).info;
      goto LAB_08135cf0;
    }
    switch(iVar8) {
    case 0:
      pPVar6 = fs->f;
      e->k = VNONRELOC;
      break;
    case 1:
      goto switchD_08135ba0_caseD_1;
    case 2:
      goto switchD_08135ba0_caseD_2;
    default:
      pPVar6 = fs->f;
      goto LAB_08135c08;
    case 5:
    case 6:
      if (eVar3 != VCALL) goto LAB_08135d18;
      IVar2 = fs->f->code[(e->u).info];
      e->k = VNONRELOC;
      (e->u).info = (IVar2 << 0x12) >> 0x18;
      pPVar6 = fs->f;
    }
LAB_08135e20:
    if ((((e->u).info & 0x100U) != 0) || ((e->u).info < (int)(uint)fs->nactvar)) break;
    bVar7 = fs->freereg - 1;
    fs->freereg = bVar7;
    goto LAB_08135c0c;
  case 5:
  case 6:
    if (eVar3 == VCALL) {
      uVar4 = (fs->f->code[(e->u).info] << 0x12) >> 0x18;
      e->k = VNONRELOC;
      (e->u).info = uVar4;
      goto LAB_08135cf0;
    }
LAB_08135d18:
    pPVar6 = fs->f;
    pPVar6->code[(e->u).info] = pPVar6->code[(e->u).info] & 0x7fffff | 0x1000000;
    e->k = VRELOCABLE;
  }
LAB_08135c08:
  bVar7 = fs->freereg;
LAB_08135c0c:
  uVar9 = bVar7 + 1;
  if (pPVar6->maxstacksize < uVar9) {
    if (0xf9 < uVar9) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(fs->ls,"function or expression too complex");
    }
    pPVar6->maxstacksize = (lu_byte)uVar9;
    uVar9 = fs->freereg + 1;
  }
  uVar4 = (uVar9 & 0xff) - 1;
  fs->freereg = (lu_byte)uVar9;
LAB_08135c44:
  exp2reg(fs,e,uVar4);
  return;
}


