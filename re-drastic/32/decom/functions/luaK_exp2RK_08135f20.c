/*
 * Ghidra decompilation
 *
 * Function : luaK_exp2RK
 * Address  : 08135f20
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaK_exp2RK(FuncState *fs,expdesc *e)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  Instruction IVar4;
  uint uVar5;
  TValue *io;
  Proto *pPVar6;
  byte bVar7;
  expkind eVar8;
  uint uVar9;
  int newstack;
  TValue k;
  TValue o;
  
  iVar2 = __stack_chk_guard;
  if (e->t == e->f) {
    luaK_dischargevars(fs,e);
  }
  else {
    luaK_exp2anyreg(fs,e);
  }
  eVar8 = e->k;
  switch(eVar8) {
  case VNIL:
  case VTRUE:
  case VFALSE:
    if (fs->nk < 0x100) {
      if (eVar8 == VNIL) {
        k.value_ = (Value)fs->ls->h;
        o.tt_ = 0;
        k.tt_ = 0x45;
        uVar5 = addk(fs,&k,&o);
      }
      else {
        o.value_.b._1_3_ = 0;
        o.value_.b._0_1_ = eVar8 == VTRUE;
        o.tt_ = 1;
        uVar5 = addk(fs,&o,&o);
      }
      e->k = VK;
      (e->u).info = uVar5;
      uVar5 = uVar5 | 0x100;
      goto LAB_08135fcc;
    }
    break;
  case VK:
    uVar5 = (e->u).info;
    if ((int)uVar5 < 0x100) goto LAB_08135fc8;
    goto LAB_0813603c;
  case VKFLT:
    o.value_ = *(Value *)&e->u;
    o.tt_ = 3;
    uVar5 = addk(fs,&o,&o);
    e->k = VK;
    (e->u).info = uVar5;
    goto joined_r0x08135fc4;
  case VKINT:
    k.value_ = *(Value *)&e->u;
    k.tt_ = 2;
    o.tt_ = 0x13;
    o.value_ = k.value_;
    uVar5 = addk(fs,&k,&o);
    e->k = VK;
    (e->u).info = uVar5;
joined_r0x08135fc4:
    if ((int)uVar5 < 0x100) {
LAB_08135fc8:
      uVar5 = uVar5 | 0x100;
      goto LAB_08135fcc;
    }
    goto switchD_08136040_caseD_b;
  }
  switch(eVar8) {
  case VLOCAL:
    uVar5 = (e->u).info;
    e->k = VNONRELOC;
LAB_081361c4:
    if (e->t == e->f) goto LAB_08135fcc;
    if ((int)(uint)fs->nactvar <= (int)uVar5) {
      exp2reg(fs,e,uVar5);
      uVar5 = (e->u).info;
      goto LAB_08135fcc;
    }
    pPVar6 = fs->f;
    if (e->k == VNONRELOC) goto LAB_08136244;
    break;
  case VUPVAL:
switchD_081360bc_caseD_9:
    IVar4 = (e->u).info << 0x17 | 5;
    goto LAB_08136110;
  case VINDEXED:
switchD_081360bc_caseD_a:
    uVar1 = (e->u).ind.idx;
    if (((uVar1 & 0x100) == 0) && ((short)(ushort)fs->nactvar <= (short)uVar1)) {
      fs->freereg = fs->freereg + 0xff;
    }
    uVar5 = (uint)(e->u).ind.t;
    if ((e->u).ind.vt == '\b') {
      if (uVar5 < fs->nactvar) {
        uVar9 = 7;
      }
      else {
        uVar9 = 7;
        fs->freereg = fs->freereg + 0xff;
        uVar5 = (uint)(e->u).ind.t;
      }
    }
    else {
      uVar9 = 6;
    }
    IVar4 = uVar9 | (int)(e->u).ind.idx << 0xe | uVar5 << 0x17;
LAB_08136110:
    iVar3 = luaK_code(fs,IVar4);
    (e->u).info = iVar3;
    pPVar6 = fs->f;
    e->k = VRELOCABLE;
    break;
  default:
    if (eVar8 == VNONRELOC) {
      uVar5 = (e->u).info;
      goto LAB_081361c4;
    }
LAB_0813603c:
    switch(eVar8) {
    case VLOCAL:
      pPVar6 = fs->f;
      e->k = VNONRELOC;
      break;
    case VUPVAL:
      goto switchD_081360bc_caseD_9;
    case VINDEXED:
      goto switchD_081360bc_caseD_a;
    default:
switchD_08136040_caseD_b:
      pPVar6 = fs->f;
      goto LAB_08136124;
    case VCALL:
    case VVARARG:
      if (eVar8 != VCALL) goto LAB_08136190;
      IVar4 = fs->f->code[(e->u).info];
      e->k = VNONRELOC;
      (e->u).info = (IVar4 << 0x12) >> 0x18;
      pPVar6 = fs->f;
    }
LAB_08136244:
    if ((((e->u).info & 0x100U) != 0) || ((e->u).info < (int)(uint)fs->nactvar)) break;
    bVar7 = fs->freereg - 1;
    fs->freereg = bVar7;
    goto LAB_08136128;
  case VCALL:
  case VVARARG:
    if (eVar8 == VCALL) {
      IVar4 = fs->f->code[(e->u).info];
      e->k = VNONRELOC;
      uVar5 = (IVar4 << 0x12) >> 0x18;
      (e->u).info = uVar5;
      goto LAB_081361c4;
    }
LAB_08136190:
    pPVar6 = fs->f;
    pPVar6->code[(e->u).info] = pPVar6->code[(e->u).info] & 0x7fffff | 0x1000000;
    e->k = VRELOCABLE;
  }
LAB_08136124:
  bVar7 = fs->freereg;
LAB_08136128:
  uVar5 = bVar7 + 1;
  if (pPVar6->maxstacksize < uVar5) {
    if (0xf9 < uVar5) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(fs->ls,"function or expression too complex");
    }
    pPVar6->maxstacksize = (lu_byte)uVar5;
    uVar5 = fs->freereg + 1;
  }
  fs->freereg = (lu_byte)uVar5;
  exp2reg(fs,e,(uVar5 & 0xff) - 1);
  uVar5 = (e->u).info;
LAB_08135fcc:
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


