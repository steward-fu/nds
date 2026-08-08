/*
 * Ghidra decompilation
 *
 * Function : exp2reg
 * Address  : 08133cd4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void exp2reg(FuncState *fs,expdesc *e,int reg)

{
  int iVar1;
  int j;
  int iVar2;
  uint uVar3;
  int offset_6;
  int offset;
  Instruction *pi;
  Instruction *i;
  int iVar4;
  Instruction *pi_1;
  Instruction *i_1;
  int offset_2;
  int offset_4;
  int iVar5;
  uint uVar6;
  int offset_3;
  int offset_5;
  int offset_7;
  int offset_1;
  int p_t;
  int jpc;
  Instruction *pIVar7;
  int list;
  Instruction *jmp_2;
  int p_f;
  Instruction *pIVar8;
  Instruction *jmp;
  Instruction *jmp_1;
  expkind eVar9;
  
  discharge2reg(fs,e,reg);
  eVar9 = e->k;
  if ((eVar9 == VJMP) && (iVar5 = (e->u).info, iVar5 != -1)) {
    iVar2 = e->t;
    if (iVar2 != -1) {
      pIVar7 = fs->f->code;
      do {
        uVar3 = pIVar7[iVar2];
        pIVar8 = pIVar7 + iVar2;
        iVar1 = iVar2 + 1;
        iVar2 = (uVar3 >> 0xe) - 0x1ffff;
        if (iVar2 == -1) break;
        iVar2 = iVar2 + iVar1;
      } while (iVar2 != -1);
      uVar6 = iVar5 - iVar1;
      if (0x1ffff < (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) goto LAB_081340f8;
      *pIVar8 = uVar3 & 0x3fff | (uVar6 + 0x1ffff) * 0x4000;
      goto LAB_08133d08;
    }
    e->t = iVar5;
  }
  else {
LAB_08133d08:
    iVar5 = e->t;
  }
  iVar2 = e->f;
  if (iVar2 != iVar5) {
    for (; iVar1 = iVar2, iVar5 != -1; iVar5 = iVar4 + iVar5 + 1) {
      pIVar7 = fs->f->code;
      i = pIVar7 + iVar5;
      if ((0 < iVar5) && ((char)luaP_opmodes[i[-1] & 0x3f] < '\0')) {
        i = i + -1;
      }
      i = (Instruction *)*i;
      if (((uint)i & 0x3f) != 0x23) goto LAB_08133e64;
      iVar4 = (pIVar7[iVar5] >> 0xe) - 0x1ffff;
      if (iVar4 == -1) break;
    }
    do {
      if (iVar1 == -1) goto LAB_08134090;
      pIVar7 = fs->f->code;
      i_1 = pIVar7 + iVar1;
      if ((0 < iVar1) && ((char)luaP_opmodes[i_1[-1] & 0x3f] < '\0')) {
        i_1 = i_1 + -1;
      }
      i_1 = (Instruction *)*i_1;
      if (((uint)i_1 & 0x3f) != 0x23) goto LAB_08133e64;
      iVar5 = (pIVar7[iVar1] >> 0xe) - 0x1ffff;
      if (iVar5 == -1) {
        iVar5 = fs->pc;
        p_t = -1;
        p_f = -1;
        goto LAB_08133e04;
      }
      iVar1 = iVar5 + iVar1 + 1;
    } while( true );
  }
  goto LAB_08133e34;
LAB_08133e64:
  if (eVar9 == VJMP) {
    fs->lasttarget = fs->pc;
    p_f = luaK_code(fs,reg << 6 | 0x4003);
    fs->lasttarget = fs->pc;
    p_t = luaK_code(fs,reg << 6 | 0x800003);
    iVar5 = fs->pc;
    iVar2 = e->f;
  }
  else {
    iVar2 = fs->jpc;
    fs->jpc = -1;
    iVar1 = luaK_code(fs,0x7fff801e);
    if (iVar2 == -1) {
      fs->lasttarget = fs->pc;
      p_f = luaK_code(fs,reg << 6 | 0x4003);
      fs->lasttarget = fs->pc;
      p_t = luaK_code(fs,reg << 6 | 0x800003);
      iVar5 = fs->pc;
      fs->lasttarget = iVar5;
      if (iVar1 != -1) goto LAB_08133f44;
    }
    else {
      if (iVar1 != -1) {
        pIVar7 = fs->f->code;
        iVar5 = iVar1;
        do {
          uVar3 = pIVar7[iVar5];
          pIVar8 = pIVar7 + iVar5;
          iVar4 = iVar5 + 1;
          iVar5 = (uVar3 >> 0xe) - 0x1ffff;
          if (iVar5 == -1) break;
          iVar5 = iVar5 + iVar4;
        } while (iVar5 != -1);
        uVar6 = iVar2 - iVar4;
        if (0x1ffff < (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) goto LAB_081340f8;
        *pIVar8 = uVar3 & 0x3fff | (uVar6 + 0x1ffff) * 0x4000;
        iVar2 = iVar1;
      }
      fs->lasttarget = fs->pc;
      p_f = luaK_code(fs,reg << 6 | 0x4003);
      fs->lasttarget = fs->pc;
      p_t = luaK_code(fs,reg << 6 | 0x800003);
      iVar5 = fs->pc;
      fs->lasttarget = iVar5;
      iVar1 = iVar2;
LAB_08133f44:
      iVar2 = fs->jpc;
      if (iVar2 != -1) {
        pIVar7 = fs->f->code;
        do {
          uVar3 = pIVar7[iVar2];
          pIVar8 = pIVar7 + iVar2;
          iVar5 = iVar2 + 1;
          iVar2 = (uVar3 >> 0xe) - 0x1ffff;
          if (iVar2 == -1) break;
          iVar2 = iVar2 + iVar5;
        } while (iVar2 != -1);
        uVar6 = iVar1 - iVar5;
        if (0x1ffff < (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
LAB_081340f8:
                    /* WARNING: Subroutine does not return */
          luaX_syntaxerror(fs->ls,"control structure too long");
        }
        *pIVar8 = uVar3 & 0x3fff | (uVar6 + 0x1ffff) * 0x4000;
        iVar5 = fs->pc;
        iVar2 = e->f;
        goto LAB_08133e04;
      }
      fs->jpc = iVar1;
    }
    iVar2 = e->f;
  }
  goto LAB_08133e04;
LAB_08134090:
  iVar5 = fs->pc;
  p_t = -1;
  p_f = -1;
LAB_08133e04:
  fs->lasttarget = iVar5;
  patchlistaux(fs,iVar2,iVar5,reg,p_f);
  patchlistaux(fs,e->t,iVar5,reg,p_t);
LAB_08133e34:
  e->k = VNONRELOC;
  (e->u).info = reg;
  e->t = -1;
  e->f = -1;
  return;
}


