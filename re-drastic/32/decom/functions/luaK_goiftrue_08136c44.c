/*
 * Ghidra decompilation
 *
 * Function : luaK_goiftrue
 * Address  : 08136c44
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_goiftrue(FuncState *fs,expdesc *e)

{
  int pc;
  uint uVar1;
  int offset;
  int offset_2;
  Instruction *pi;
  int iVar2;
  uint uVar3;
  int offset_1;
  int offset_3;
  Instruction *jmp_1;
  Instruction *pIVar4;
  Instruction *jmp;
  Instruction *pIVar5;
  int iVar6;
  int iVar7;
  
  luaK_dischargevars(fs,e);
  switch(e->k) {
  case VTRUE:
  case VK:
  case VKFLT:
  case VKINT:
    goto switchD_08136c6c_caseD_2;
  default:
    pc = jumponcond(fs,e,0);
    break;
  case VJMP:
    pIVar5 = fs->f->code + (e->u).info;
    if ((0 < (e->u).info) && ((char)luaP_opmodes[pIVar5[-1] & 0x3f] < '\0')) {
      pIVar5 = pIVar5 + -1;
    }
    if ((*pIVar5 << 0x12) >> 0x18 == 0) {
      uVar1 = 0x40;
    }
    else {
      uVar1 = 0;
    }
    *pIVar5 = *pIVar5 & 0xffffc03f | uVar1;
    pc = (e->u).info;
  }
  if (pc != -1) {
    iVar2 = e->f;
    if (iVar2 == -1) {
      e->f = pc;
    }
    else {
      pIVar5 = fs->f->code;
      do {
        uVar1 = pIVar5[iVar2];
        pIVar4 = pIVar5 + iVar2;
        iVar7 = iVar2 + 1;
        iVar2 = (uVar1 >> 0xe) - 0x1ffff;
        if (iVar2 == -1) break;
        iVar2 = iVar2 + iVar7;
      } while (iVar2 != -1);
      uVar3 = pc - iVar7;
      if (0x1ffff < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) goto LAB_08136e20;
      *pIVar4 = uVar1 & 0x3fff | (uVar3 + 0x1ffff) * 0x4000;
    }
  }
switchD_08136c6c_caseD_2:
  iVar2 = e->t;
  fs->lasttarget = fs->pc;
  if (iVar2 != -1) {
    iVar7 = fs->jpc;
    if (iVar7 == -1) {
      fs->jpc = iVar2;
    }
    else {
      pIVar5 = fs->f->code;
      do {
        uVar1 = pIVar5[iVar7];
        pIVar4 = pIVar5 + iVar7;
        iVar6 = iVar7 + 1;
        iVar7 = (uVar1 >> 0xe) - 0x1ffff;
        if (iVar7 == -1) break;
        iVar7 = iVar7 + iVar6;
      } while (iVar7 != -1);
      uVar3 = iVar2 - iVar6;
      if (0x1ffff < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
LAB_08136e20:
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(fs->ls,"control structure too long");
      }
      *pIVar4 = uVar1 & 0x3fff | (uVar3 + 0x1ffff) * 0x4000;
    }
  }
  e->t = -1;
  return;
}


