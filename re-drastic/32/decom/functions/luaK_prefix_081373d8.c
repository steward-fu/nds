/*
 * Ghidra decompilation
 *
 * Function : luaK_prefix
 * Address  : 081373d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_prefix(FuncState *fs,UnOpr op,expdesc *e,int line)

{
  int iVar1;
  Instruction *pIVar2;
  int iVar3;
  Instruction *pi_1;
  Instruction *pIVar4;
  int offset_1;
  int newstack;
  int iVar5;
  int temp;
  uint uVar6;
  int offset;
  Instruction *pi_2;
  Instruction *pi;
  expdesc e2;
  
  iVar1 = __stack_chk_guard;
  e2.k = VKINT;
  e2.u.info = 0;
  e2.t = -1;
  e2.f = -1;
  switch(op) {
  case OPR_MINUS:
  case OPR_BNOT:
  case OPR_LEN:
    codeexpval(fs,op + 0x19,e,&e2,line);
    break;
  case OPR_NOT:
    luaK_dischargevars(fs,e);
    switch(e->k) {
    case VNIL:
    case VFALSE:
      e->k = VTRUE;
      break;
    case VTRUE:
    case VK:
    case VKFLT:
    case VKINT:
      e->k = VFALSE;
      break;
    case VNONRELOC:
    case VRELOCABLE:
      if (e->k == VNONRELOC) {
LAB_081376dc:
        uVar6 = (e->u).info;
        if (((uVar6 & 0x100) == 0) && ((int)(uint)fs->nactvar <= (int)uVar6)) {
          fs->freereg = fs->freereg + 0xff;
          goto LAB_08137518;
        }
      }
      else {
        uVar6 = fs->freereg + 1;
        if (fs->f->maxstacksize < uVar6) {
          if (0xf9 < uVar6) {
                    /* WARNING: Subroutine does not return */
            luaX_syntaxerror(fs->ls,"function or expression too complex");
          }
          fs->f->maxstacksize = (lu_byte)uVar6;
          uVar6 = fs->freereg + 1;
        }
        fs->freereg = (lu_byte)uVar6;
        discharge2reg(fs,e,(uVar6 & 0xff) - 1);
        if (e->k == VNONRELOC) goto LAB_081376dc;
LAB_08137518:
        uVar6 = (e->u).info;
      }
      iVar3 = luaK_code(fs,uVar6 << 0x17 | 0x1b);
      e->k = VRELOCABLE;
      (e->u).info = iVar3;
      break;
    case VJMP:
      pIVar2 = fs->f->code + (e->u).info;
      if ((0 < (e->u).info) && ((char)luaP_opmodes[pIVar2[-1] & 0x3f] < '\0')) {
        pIVar2 = pIVar2 + -1;
      }
      if ((*pIVar2 << 0x12) >> 0x18 == 0) {
        uVar6 = 0x40;
      }
      else {
        uVar6 = 0;
      }
      *pIVar2 = *pIVar2 & 0xffffc03f | uVar6;
    }
    iVar3 = e->t;
    iVar5 = e->f;
    e->t = iVar5;
    e->f = iVar3;
    if (iVar3 != -1) {
      pIVar2 = fs->f->code;
      do {
        pIVar4 = pIVar2 + iVar3;
        if ((0 < iVar3) && ((char)luaP_opmodes[pIVar4[-1] & 0x3f] < '\0')) {
          pIVar4 = pIVar4 + -1;
        }
        uVar6 = *pIVar4;
        if ((uVar6 & 0x3f) == 0x23) {
          *pIVar4 = uVar6 & 0x7fc000 | 0x22 | (uVar6 >> 0x17) << 6;
        }
        iVar5 = (pIVar2[iVar3] >> 0xe) - 0x1ffff;
      } while ((iVar5 != -1) && (iVar3 = iVar5 + iVar3 + 1, iVar3 != -1));
      iVar5 = e->t;
    }
    if (iVar5 != -1) {
      pIVar2 = fs->f->code;
      do {
        pIVar4 = pIVar2 + iVar5;
        if ((0 < iVar5) && ((char)luaP_opmodes[pIVar4[-1] & 0x3f] < '\0')) {
          pIVar4 = pIVar4 + -1;
        }
        uVar6 = *pIVar4;
        if ((uVar6 & 0x3f) == 0x23) {
          *pIVar4 = uVar6 & 0x7fc000 | 0x22 | (uVar6 >> 0x17) << 6;
        }
        iVar3 = (pIVar2[iVar5] >> 0xe) - 0x1ffff;
      } while ((iVar3 != -1) && (iVar5 = iVar3 + iVar5 + 1, iVar5 != -1));
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


