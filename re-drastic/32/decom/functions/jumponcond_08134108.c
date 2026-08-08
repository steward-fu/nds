/*
 * Ghidra decompilation
 *
 * Function : jumponcond
 * Address  : 08134108
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int jumponcond(FuncState *fs,expdesc *e,int cond)

{
  int iVar1;
  int j;
  int list;
  int j_1;
  int list_1;
  uint uVar2;
  Proto *pPVar3;
  int iVar4;
  int offset;
  int offset_2;
  int newstack;
  uint uVar5;
  int offset_1;
  Instruction ie;
  int offset_3;
  Instruction *pIVar6;
  Instruction *jmp;
  Instruction *jmp_1;
  int iVar7;
  int jpc;
  int jpc_1;
  int iVar8;
  Instruction *pIVar9;
  
  if (e->k == VRELOCABLE) {
    pPVar3 = fs->f;
    uVar2 = pPVar3->code[(e->u).info];
    if ((uVar2 & 0x3f) == 0x1b) {
      fs->pc = fs->pc + -1;
      luaK_code(fs,(uVar2 >> 0x17) << 6 | 0x22 | (uint)(cond == 0) << 0xe);
      iVar1 = fs->jpc;
      fs->jpc = -1;
      iVar4 = luaK_code(fs,0x7fff801e);
      if (iVar1 == -1) {
        return iVar4;
      }
      if (iVar4 == -1) {
        return iVar1;
      }
      pIVar9 = fs->f->code;
      iVar7 = iVar4;
      do {
        uVar2 = pIVar9[iVar7];
        pIVar6 = pIVar9 + iVar7;
        iVar8 = iVar7 + 1;
        iVar7 = (uVar2 >> 0xe) - 0x1ffff;
        if (iVar7 == -1) break;
        iVar7 = iVar7 + iVar8;
      } while (iVar7 != -1);
      uVar5 = iVar1 - iVar8;
      if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0x20000) {
        *pIVar6 = uVar2 & 0x3fff | (uVar5 + 0x1ffff) * 0x4000;
        return iVar4;
      }
      goto LAB_0813435c;
    }
LAB_08134164:
    uVar2 = fs->freereg + 1;
    if (pPVar3->maxstacksize < uVar2) {
      if (0xf9 < uVar2) {
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(fs->ls,"function or expression too complex");
      }
      pPVar3->maxstacksize = (lu_byte)uVar2;
      uVar2 = fs->freereg + 1;
    }
    fs->freereg = (lu_byte)uVar2;
    discharge2reg(fs,e,(uVar2 & 0xff) - 1);
    if (e->k == VNONRELOC) goto LAB_08134138;
LAB_081341b0:
    uVar2 = (e->u).info;
  }
  else {
    if (e->k != VNONRELOC) {
      pPVar3 = fs->f;
      goto LAB_08134164;
    }
LAB_08134138:
    uVar2 = (e->u).info;
    if (((uVar2 & 0x100) == 0) && ((int)(uint)fs->nactvar <= (int)uVar2)) {
      fs->freereg = fs->freereg + 0xff;
      goto LAB_081341b0;
    }
  }
  luaK_code(fs,cond << 0xe | 0x3fe3U | uVar2 << 0x17);
  iVar7 = fs->jpc;
  fs->jpc = -1;
  iVar1 = luaK_code(fs,0x7fff801e);
  iVar4 = iVar1;
  if ((iVar7 != -1) && (iVar4 = iVar7, iVar1 != -1)) {
    pIVar9 = fs->f->code;
    iVar4 = iVar1;
    do {
      uVar2 = pIVar9[iVar4];
      pIVar6 = pIVar9 + iVar4;
      iVar8 = iVar4 + 1;
      iVar4 = (uVar2 >> 0xe) - 0x1ffff;
      if (iVar4 == -1) break;
      iVar4 = iVar4 + iVar8;
    } while (iVar4 != -1);
    uVar5 = iVar7 - iVar8;
    if (0x1ffff < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
LAB_0813435c:
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(fs->ls,"control structure too long");
    }
    *pIVar6 = uVar2 & 0x3fff | (uVar5 + 0x1ffff) * 0x4000;
    iVar4 = iVar1;
  }
  return iVar4;
}


