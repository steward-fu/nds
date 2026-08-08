/*
 * Ghidra decompilation
 *
 * Function : luaK_indexed
 * Address  : 08136fa8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_indexed(FuncState *fs,expdesc *t,expdesc *k)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  Instruction IVar4;
  TValue *io;
  Proto *pPVar5;
  anon_struct_4_3_27b252c0_for_ind reg;
  lu_byte lVar6;
  byte bVar7;
  expkind eVar8;
  uint uVar9;
  uint uVar10;
  int newstack;
  TValue k_1;
  TValue o;
  
  iVar2 = __stack_chk_guard;
  (t->u).ind.t = (t->u).ind.idx;
  if (k->t == k->f) {
    luaK_dischargevars(fs,k);
  }
  else {
    luaK_exp2anyreg(fs,k);
  }
  eVar8 = k->k;
  switch(eVar8) {
  case VNIL:
  case VTRUE:
  case VFALSE:
    if (fs->nk < 0x100) {
      if (eVar8 == VNIL) {
        k_1.value_ = (Value)fs->ls->h;
        o.tt_ = 0;
        k_1.tt_ = 0x45;
        uVar10 = addk(fs,&k_1,&o);
      }
      else {
        o.value_.b._1_3_ = 0;
        o.value_.b._0_1_ = eVar8 == VTRUE;
        o.tt_ = 1;
        uVar10 = addk(fs,&o,&o);
      }
      reg = (anon_struct_4_3_27b252c0_for_ind)(uVar10 | 0x100);
      k->k = VK;
      (k->u).info = uVar10;
      goto LAB_08137064;
    }
    break;
  case VK:
    uVar10 = (k->u).info;
    if ((int)uVar10 < 0x100) goto LAB_08137060;
    goto LAB_081370f4;
  case VKFLT:
    o.value_ = *(Value *)&k->u;
    o.tt_ = 3;
    uVar10 = addk(fs,&o,&o);
    k->k = VK;
    (k->u).info = uVar10;
    goto joined_r0x0813705c;
  case VKINT:
    k_1.value_ = *(Value *)&k->u;
    k_1.tt_ = 2;
    o.tt_ = 0x13;
    o.value_ = k_1.value_;
    uVar10 = addk(fs,&k_1,&o);
    k->k = VK;
    (k->u).info = uVar10;
joined_r0x0813705c:
    if ((int)uVar10 < 0x100) {
LAB_08137060:
      reg = (anon_struct_4_3_27b252c0_for_ind)(uVar10 | 0x100);
      goto LAB_08137064;
    }
    goto switchD_081370f8_caseD_b;
  }
  switch(eVar8) {
  case VLOCAL:
    reg = (anon_struct_4_3_27b252c0_for_ind)(k->u).info;
    k->k = VNONRELOC;
LAB_0813727c:
    if (k->t == k->f) goto LAB_08137064;
    if ((int)(uint)fs->nactvar <= (int)reg) {
      exp2reg(fs,k,(int)reg);
      reg = (k->u).ind;
      goto LAB_08137064;
    }
    pPVar5 = fs->f;
    if (k->k == VNONRELOC) goto LAB_08137300;
    break;
  case VUPVAL:
switchD_08137174_caseD_9:
    IVar4 = (k->u).info << 0x17 | 5;
    goto LAB_081371c8;
  case VINDEXED:
switchD_08137174_caseD_a:
    uVar1 = (k->u).ind.idx;
    if (((uVar1 & 0x100) == 0) && ((short)(ushort)fs->nactvar <= (short)uVar1)) {
      fs->freereg = fs->freereg + 0xff;
    }
    uVar10 = (uint)(k->u).ind.t;
    if ((k->u).ind.vt == '\b') {
      if (uVar10 < fs->nactvar) {
        uVar9 = 7;
      }
      else {
        uVar9 = 7;
        fs->freereg = fs->freereg + 0xff;
        uVar10 = (uint)(k->u).ind.t;
      }
    }
    else {
      uVar9 = 6;
    }
    IVar4 = uVar9 | (int)(k->u).ind.idx << 0xe | uVar10 << 0x17;
LAB_081371c8:
    iVar3 = luaK_code(fs,IVar4);
    (k->u).info = iVar3;
    pPVar5 = fs->f;
    k->k = VRELOCABLE;
    break;
  default:
    if (eVar8 == VNONRELOC) {
      reg = (anon_struct_4_3_27b252c0_for_ind)(k->u).info;
      goto LAB_0813727c;
    }
LAB_081370f4:
    switch(eVar8) {
    case VLOCAL:
      pPVar5 = fs->f;
      k->k = VNONRELOC;
      break;
    case VUPVAL:
      goto switchD_08137174_caseD_9;
    case VINDEXED:
      goto switchD_08137174_caseD_a;
    default:
switchD_081370f8_caseD_b:
      pPVar5 = fs->f;
      goto LAB_081371dc;
    case VCALL:
    case VVARARG:
      if (eVar8 != VCALL) goto LAB_08137248;
      IVar4 = fs->f->code[(k->u).info];
      k->k = VNONRELOC;
      (k->u).info = (IVar4 << 0x12) >> 0x18;
      pPVar5 = fs->f;
    }
LAB_08137300:
    if ((((k->u).info & 0x100U) != 0) || ((k->u).info < (int)(uint)fs->nactvar)) break;
    bVar7 = fs->freereg - 1;
    fs->freereg = bVar7;
    goto LAB_081371e0;
  case VCALL:
  case VVARARG:
    if (eVar8 == VCALL) {
      reg = (anon_struct_4_3_27b252c0_for_ind)((fs->f->code[(k->u).info] << 0x12) >> 0x18);
      k->k = VNONRELOC;
      (k->u).info = (int)reg;
      goto LAB_0813727c;
    }
LAB_08137248:
    pPVar5 = fs->f;
    pPVar5->code[(k->u).info] = pPVar5->code[(k->u).info] & 0x7fffff | 0x1000000;
    k->k = VRELOCABLE;
  }
LAB_081371dc:
  bVar7 = fs->freereg;
LAB_081371e0:
  uVar10 = bVar7 + 1;
  if (pPVar5->maxstacksize < uVar10) {
    if (0xf9 < uVar10) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(fs->ls,"function or expression too complex");
    }
    pPVar5->maxstacksize = (lu_byte)uVar10;
    uVar10 = fs->freereg + 1;
  }
  fs->freereg = (lu_byte)uVar10;
  exp2reg(fs,k,(uVar10 & 0xff) - 1);
  reg = (k->u).ind;
LAB_08137064:
  eVar8 = t->k;
  (t->u).ind.idx = reg.idx;
  iVar3 = __stack_chk_guard;
  t->k = VINDEXED;
  if (eVar8 == VUPVAL) {
    lVar6 = '\t';
  }
  else {
    lVar6 = '\b';
  }
  (t->u).ind.vt = lVar6;
  if (iVar2 != iVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


