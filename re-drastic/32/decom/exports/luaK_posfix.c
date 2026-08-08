/*
 * Ghidra decompilation
 *
 * Function : luaK_posfix
 * Address  : 08137a04
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable offset_2:int[r2:4] conflicts with parameter, skipped. */

void luaK_posfix(FuncState *fs,BinOpr op,expdesc *e1,expdesc *e2,int line)

{
  Instruction *pIVar1;
  int o1;
  int o2;
  int j;
  int list;
  int o1_1;
  int o2_1;
  int j_1;
  int list_1;
  uint uVar2;
  OpCode op_00;
  int iVar3;
  uint uVar4;
  int offset_1;
  int offset_4;
  int offset_6;
  byte bVar5;
  int offset;
  anon_union_4_4_e6d17769_for_u aVar6;
  int newstack;
  int offset_5;
  int offset_3;
  Instruction *jmp;
  int jpc;
  int jpc_1;
  int iVar7;
  int iVar8;
  int iVar9;
  Instruction *jmp_1;
  
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
    op_00 = op + OPR_EQ;
    goto LAB_08137b68;
  case OPR_CONCAT:
    if (e2->t == e2->f) {
      luaK_dischargevars(fs,e2);
    }
    else {
      luaK_exp2anyreg(fs,e2);
    }
    if (e2->k == VRELOCABLE) {
      pIVar1 = fs->f->code;
      uVar2 = pIVar1[(e2->u).info];
      pIVar1 = pIVar1 + (e2->u).info;
      if ((uVar2 & 0x3f) == 0x1d) {
        uVar4 = (e1->u).info;
        if (((e1->k == VNONRELOC) && ((uVar4 & 0x100) == 0)) &&
           ((int)(uint)fs->nactvar <= (int)uVar4)) {
          fs->freereg = fs->freereg + 0xff;
          pIVar1 = fs->f->code;
          uVar4 = (e1->u).info;
          uVar2 = pIVar1[(e2->u).info];
          pIVar1 = pIVar1 + (e2->u).info;
        }
        *pIVar1 = uVar2 & 0x7fffff | uVar4 << 0x17;
        e1->k = VRELOCABLE;
        e1->u = e2->u;
        return;
      }
    }
    luaK_dischargevars(fs,e2);
    if (((e2->k == VNONRELOC) && (((e2->u).info & 0x100U) == 0)) &&
       ((int)(uint)fs->nactvar <= (e2->u).info)) {
      bVar5 = fs->freereg - 1;
      fs->freereg = bVar5;
    }
    else {
      bVar5 = fs->freereg;
    }
    uVar2 = bVar5 + 1;
    if (fs->f->maxstacksize < uVar2) {
      if (0xf9 < uVar2) {
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(fs->ls,"function or expression too complex");
      }
      fs->f->maxstacksize = (lu_byte)uVar2;
      uVar2 = fs->freereg + 1;
    }
    fs->freereg = (lu_byte)uVar2;
    exp2reg(fs,e2,(uVar2 & 0xff) - 1);
    op_00 = OP_CONCAT;
LAB_08137b68:
    codeexpval(fs,op_00,e1,e2,line);
    return;
  case OPR_EQ:
  case OPR_LT:
  case OPR_LE:
    iVar7 = luaK_exp2RK(fs,e1);
    iVar3 = luaK_exp2RK(fs,e2);
    if (((e2->k == VNONRELOC) && (((e2->u).info & 0x100U) == 0)) &&
       ((int)(uint)fs->nactvar <= (e2->u).info)) {
      fs->freereg = fs->freereg + 0xff;
    }
    if (((e1->k == VNONRELOC) && (((e1->u).info & 0x100U) == 0)) &&
       ((int)(uint)fs->nactvar <= (e1->u).info)) {
      fs->freereg = fs->freereg + 0xff;
    }
    luaK_code(fs,op + OPR_GE | 0x40 | iVar7 << 0x17 | iVar3 << 0xe);
    iVar8 = fs->jpc;
    fs->jpc = -1;
    iVar3 = luaK_code(fs,0x7fff801e);
    iVar7 = iVar3;
    if ((iVar8 != -1) && (iVar7 = iVar8, iVar3 != -1)) {
      pIVar1 = fs->f->code;
      iVar7 = iVar3;
      do {
        uVar2 = pIVar1[iVar7];
        jmp_1 = pIVar1 + iVar7;
        iVar9 = iVar7 + 1;
        iVar7 = (uVar2 >> 0xe) - 0x1ffff;
        if (iVar7 == -1) break;
        iVar7 = iVar7 + iVar9;
      } while (iVar7 != -1);
LAB_08137ce4:
      uVar4 = iVar8 - iVar9;
      if (0x1ffff < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
LAB_08137f60:
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(fs->ls,"control structure too long");
      }
      *jmp_1 = uVar2 & 0x3fff | (uVar4 + 0x1ffff) * 0x4000;
      iVar7 = iVar3;
    }
    break;
  case OPR_NE:
  case OPR_GT:
  case OPR_GE:
    iVar3 = luaK_exp2RK(fs,e1);
    iVar7 = luaK_exp2RK(fs,e2);
    if (((e2->k == VNONRELOC) && (((e2->u).info & 0x100U) == 0)) &&
       ((int)(uint)fs->nactvar <= (e2->u).info)) {
      fs->freereg = fs->freereg + 0xff;
    }
    if (((e1->k == VNONRELOC) && (((e1->u).info & 0x100U) == 0)) &&
       ((int)(uint)fs->nactvar <= (e1->u).info)) {
      fs->freereg = fs->freereg + 0xff;
    }
    if (op + OPR_LE == 0x1f) {
      uVar2 = 0;
      iVar8 = iVar3;
    }
    else {
      uVar2 = 0x40;
      iVar8 = iVar7;
      iVar7 = iVar3;
    }
    luaK_code(fs,op + OPR_LE | uVar2 | iVar8 << 0x17 | iVar7 << 0xe);
    iVar8 = fs->jpc;
    fs->jpc = -1;
    iVar3 = luaK_code(fs,0x7fff801e);
    iVar7 = iVar3;
    if ((iVar8 != -1) && (iVar7 = iVar8, iVar3 != -1)) {
      pIVar1 = fs->f->code;
      iVar7 = iVar3;
      do {
        uVar2 = pIVar1[iVar7];
        jmp_1 = pIVar1 + iVar7;
        iVar9 = iVar7 + 1;
        iVar7 = (uVar2 >> 0xe) - 0x1ffff;
        if (iVar7 == -1) break;
        iVar7 = iVar7 + iVar9;
      } while (iVar7 != -1);
      goto LAB_08137ce4;
    }
    break;
  case OPR_AND:
    luaK_dischargevars(fs,e2);
    iVar7 = e1->f;
    if (iVar7 != -1) {
      iVar3 = e2->f;
      if (iVar3 == -1) {
        e2->f = iVar7;
      }
      else {
        pIVar1 = fs->f->code;
        do {
          uVar2 = pIVar1[iVar3];
          jmp = pIVar1 + iVar3;
          iVar8 = iVar3 + 1;
          iVar3 = (uVar2 >> 0xe) - 0x1ffff;
          if (iVar3 == -1) break;
          iVar3 = iVar3 + iVar8;
        } while (iVar3 != -1);
LAB_08137b20:
        uVar4 = iVar7 - iVar8;
        if (0x1ffff < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) goto LAB_08137f60;
        *jmp = uVar2 & 0x3fff | (uVar4 + 0x1ffff) * 0x4000;
      }
    }
    goto LAB_08137b4c;
  case OPR_OR:
    luaK_dischargevars(fs,e2);
    iVar7 = e1->t;
    if (iVar7 != -1) {
      iVar3 = e2->t;
      if (iVar3 != -1) {
        pIVar1 = fs->f->code;
        do {
          uVar2 = pIVar1[iVar3];
          jmp = pIVar1 + iVar3;
          iVar8 = iVar3 + 1;
          iVar3 = (uVar2 >> 0xe) - 0x1ffff;
          if (iVar3 == -1) break;
          iVar3 = iVar3 + iVar8;
        } while (iVar3 != -1);
        goto LAB_08137b20;
      }
      e2->t = iVar7;
    }
LAB_08137b4c:
    aVar6 = e2->u;
    e1->k = e2->k;
    e1->u = aVar6;
    iVar7 = e2->f;
    e1->t = e2->t;
    e1->f = iVar7;
  default:
    goto switchD_08137a2c_caseD_15;
  }
  e1->k = VJMP;
  (e1->u).info = iVar7;
switchD_08137a2c_caseD_15:
  return;
}


