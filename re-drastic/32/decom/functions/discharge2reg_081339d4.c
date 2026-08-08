/*
 * Ghidra decompilation
 *
 * Function : discharge2reg
 * Address  : 081339d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void discharge2reg(FuncState *fs,expdesc *e,int reg)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  TValue *key;
  uint uVar4;
  TValue *io;
  expkind eVar5;
  Instruction *pIVar6;
  uint uVar7;
  TValue k;
  TValue o;
  
  iVar2 = __stack_chk_guard;
  eVar5 = e->k;
  switch(eVar5) {
  case VLOCAL:
    uVar4 = (e->u).info;
    e->k = VNONRELOC;
    break;
  case VUPVAL:
    iVar3 = luaK_code(fs,(e->u).info << 0x17 | 5);
    (e->u).info = iVar3;
    pIVar6 = fs->f->code;
    goto LAB_08133ac0;
  case VINDEXED:
    uVar1 = (e->u).ind.idx;
    if (((uVar1 & 0x100) == 0) && ((short)(ushort)fs->nactvar <= (short)uVar1)) {
      fs->freereg = fs->freereg + 0xff;
    }
    uVar4 = (uint)(e->u).ind.t;
    if ((e->u).ind.vt == '\b') {
      if (uVar4 < fs->nactvar) {
        uVar7 = 7;
      }
      else {
        uVar7 = 7;
        fs->freereg = fs->freereg + 0xff;
        uVar4 = (uint)(e->u).ind.t;
      }
    }
    else {
      uVar7 = 6;
    }
    iVar3 = luaK_code(fs,uVar7 | (int)(e->u).ind.idx << 0xe | uVar4 << 0x17);
    (e->u).info = iVar3;
    pIVar6 = fs->f->code;
LAB_08133ac0:
    pIVar6[iVar3] = pIVar6[iVar3] & 0xffffc03f | (reg & 0xffU) << 6;
    goto LAB_08133ad8;
  default:
    switch(eVar5) {
    case VNIL:
      luaK_nil(fs,reg,1);
      break;
    case VTRUE:
    case VFALSE:
      luaK_code(fs,(uint)(eVar5 == VTRUE) << 0x17 | 3 | reg << 6);
      break;
    case VK:
      iVar3 = (e->u).info;
      if (iVar3 < 0x40000) {
        luaK_code(fs,iVar3 << 0xe | 1U | reg << 6);
        break;
      }
      goto LAB_08133bcc;
    case VKFLT:
      o.value_ = *(Value *)&e->u;
      key = &o;
      o.tt_ = 3;
      goto LAB_08133bb4;
    case VKINT:
      k.value_ = *(Value *)&e->u;
      key = &k;
      k.tt_ = 2;
      o.tt_ = 0x13;
      o.value_ = k.value_;
LAB_08133bb4:
      iVar3 = addk(fs,key,&o);
      if (iVar3 < 0x40000) {
        luaK_code(fs,reg << 6 | 1U | iVar3 << 0xe);
      }
      else {
LAB_08133bcc:
        luaK_code(fs,reg << 6 | 2);
        luaK_code(fs,iVar3 << 6 | 0x2e);
      }
      break;
    case VNONRELOC:
      uVar4 = (e->u).info;
      goto LAB_08133b14;
    default:
      goto switchD_08133b38_caseD_8;
    case VRELOCABLE:
      iVar3 = (e->u).info;
      pIVar6 = fs->f->code;
      goto LAB_08133ac0;
    }
    goto LAB_08133ad8;
  case VCALL:
  case VVARARG:
    if (eVar5 != VCALL) {
      pIVar6 = fs->f->code;
      pIVar6[(e->u).info] = pIVar6[(e->u).info] & 0x7fffff | 0x1000000;
      iVar3 = (e->u).info;
      goto LAB_08133ac0;
    }
    pIVar6 = fs->f->code;
    e->k = VNONRELOC;
    uVar4 = (pIVar6[(e->u).info] << 0x12) >> 0x18;
    (e->u).info = uVar4;
  }
LAB_08133b14:
  if (reg != uVar4) {
    luaK_code(fs,uVar4 << 0x17 | reg << 6);
  }
LAB_08133ad8:
  e->k = VNONRELOC;
  (e->u).info = reg;
switchD_08133b38_caseD_8:
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


