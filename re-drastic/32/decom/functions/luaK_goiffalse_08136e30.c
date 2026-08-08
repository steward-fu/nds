/*
 * Ghidra decompilation
 *
 * Function : luaK_goiffalse
 * Address  : 08136e30
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_goiffalse(FuncState *fs,expdesc *e)

{
  int pc;
  uint uVar1;
  int offset;
  int offset_2;
  expkind eVar2;
  int iVar3;
  uint uVar4;
  int offset_1;
  int offset_3;
  Instruction *jmp_1;
  Instruction *pIVar5;
  Instruction *jmp;
  Instruction *pIVar6;
  int iVar7;
  int iVar8;
  
  luaK_dischargevars(fs,e);
  eVar2 = e->k;
  if (eVar2 != VFALSE) {
    if (eVar2 == VJMP) {
      pc = (e->u).info;
    }
    else {
      if (eVar2 == VNIL) goto LAB_08136ef0;
      pc = jumponcond(fs,e,1);
    }
    if (pc != -1) {
      iVar3 = e->t;
      if (iVar3 == -1) {
        e->t = pc;
      }
      else {
        pIVar6 = fs->f->code;
        do {
          uVar1 = pIVar6[iVar3];
          pIVar5 = pIVar6 + iVar3;
          iVar8 = iVar3 + 1;
          iVar3 = (uVar1 >> 0xe) - 0x1ffff;
          if (iVar3 == -1) break;
          iVar3 = iVar3 + iVar8;
        } while (iVar3 != -1);
        uVar4 = pc - iVar8;
        if (0x1ffff < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) goto LAB_08136f98;
        *pIVar5 = uVar1 & 0x3fff | (uVar4 + 0x1ffff) * 0x4000;
      }
    }
  }
LAB_08136ef0:
  iVar3 = e->f;
  fs->lasttarget = fs->pc;
  if (iVar3 != -1) {
    iVar8 = fs->jpc;
    if (iVar8 == -1) {
      fs->jpc = iVar3;
    }
    else {
      pIVar6 = fs->f->code;
      do {
        uVar1 = pIVar6[iVar8];
        pIVar5 = pIVar6 + iVar8;
        iVar7 = iVar8 + 1;
        iVar8 = (uVar1 >> 0xe) - 0x1ffff;
        if (iVar8 == -1) break;
        iVar8 = iVar8 + iVar7;
      } while (iVar8 != -1);
      uVar4 = iVar3 - iVar7;
      if (0x1ffff < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
LAB_08136f98:
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(fs->ls,"control structure too long");
      }
      *pIVar5 = uVar1 & 0x3fff | (uVar4 + 0x1ffff) * 0x4000;
    }
  }
  e->f = -1;
  return;
}


