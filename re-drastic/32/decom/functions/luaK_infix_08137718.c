/*
 * Ghidra decompilation
 *
 * Function : luaK_infix
 * Address  : 08137718
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_infix(FuncState *fs,BinOpr op,expdesc *v)

{
  int pc;
  uint uVar1;
  int offset;
  int offset_2;
  byte bVar2;
  expkind eVar3;
  int iVar4;
  uint uVar5;
  int offset_1;
  int offset_3;
  int newstack;
  Instruction *jmp_1;
  Instruction *pIVar6;
  Instruction *jmp;
  Instruction *pIVar7;
  int iVar8;
  int iVar9;
  
  switch(op) {
  case OPR_ADD:
  case OPR_SUB:
  case OPR_MUL:
  case OPR_MOD:
  case OPR_POW:
  case OPR_DIV:
  case OPR_IDIV:
  case OPR_BAND:
  case OPR_BOR:
  case OPR_BXOR:
  case OPR_SHL:
  case OPR_SHR:
    if (((v->t == -1) && (v->f == -1)) && (v->k + ~VK < 2)) {
      return;
    }
  default:
    luaK_exp2RK(fs,v);
    return;
  case OPR_CONCAT:
    luaK_dischargevars(fs,v);
    if (((v->k == VNONRELOC) && (((v->u).info & 0x100U) == 0)) &&
       ((int)(uint)fs->nactvar <= (v->u).info)) {
      bVar2 = fs->freereg - 1;
      fs->freereg = bVar2;
    }
    else {
      bVar2 = fs->freereg;
    }
    uVar1 = bVar2 + 1;
    if (fs->f->maxstacksize < uVar1) {
      if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(fs->ls,"function or expression too complex");
      }
      fs->f->maxstacksize = (lu_byte)uVar1;
      uVar1 = fs->freereg + 1;
    }
    fs->freereg = (lu_byte)uVar1;
    exp2reg(fs,v,(uVar1 & 0xff) - 1);
    return;
  case OPR_AND:
    luaK_goiftrue(fs,v);
    return;
  case OPR_OR:
    break;
  }
  luaK_dischargevars(fs,v);
  eVar3 = v->k;
  if (eVar3 != VFALSE) {
    if (eVar3 == VJMP) {
      pc = (v->u).info;
    }
    else {
      if (eVar3 == VNIL) goto LAB_0813783c;
      pc = jumponcond(fs,v,1);
    }
    if (pc != -1) {
      iVar4 = v->t;
      if (iVar4 == -1) {
        v->t = pc;
      }
      else {
        pIVar7 = fs->f->code;
        do {
          uVar1 = pIVar7[iVar4];
          pIVar6 = pIVar7 + iVar4;
          iVar9 = iVar4 + 1;
          iVar4 = (uVar1 >> 0xe) - 0x1ffff;
          if (iVar4 == -1) break;
          iVar4 = iVar4 + iVar9;
        } while (iVar4 != -1);
        uVar5 = pc - iVar9;
        if (0x1ffff < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) goto LAB_081379f4;
        *pIVar6 = uVar1 & 0x3fff | (uVar5 + 0x1ffff) * 0x4000;
      }
    }
  }
LAB_0813783c:
  iVar4 = v->f;
  fs->lasttarget = fs->pc;
  if (iVar4 != -1) {
    iVar9 = fs->jpc;
    if (iVar9 == -1) {
      fs->jpc = iVar4;
    }
    else {
      pIVar7 = fs->f->code;
      do {
        uVar1 = pIVar7[iVar9];
        pIVar6 = pIVar7 + iVar9;
        iVar8 = iVar9 + 1;
        iVar9 = (uVar1 >> 0xe) - 0x1ffff;
        if (iVar9 == -1) break;
        iVar9 = iVar9 + iVar8;
      } while (iVar9 != -1);
      uVar5 = iVar4 - iVar8;
      if (0x1ffff < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
LAB_081379f4:
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(fs->ls,"control structure too long");
      }
      *pIVar6 = uVar1 & 0x3fff | (uVar5 + 0x1ffff) * 0x4000;
    }
  }
  v->f = -1;
  return;
}


