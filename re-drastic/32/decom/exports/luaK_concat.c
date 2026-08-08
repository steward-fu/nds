/*
 * Ghidra decompilation
 *
 * Function : luaK_concat
 * Address  : 0813483c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_concat(FuncState *fs,int *l1,int l2)

{
  int offset;
  int iVar1;
  uint uVar2;
  int offset_1;
  int iVar3;
  Instruction *pIVar4;
  Instruction *jmp;
  uint uVar5;
  Instruction *pIVar6;
  
  if (l2 == -1) {
    return;
  }
  iVar1 = *l1;
  if (iVar1 == -1) {
    *l1 = l2;
    return;
  }
  pIVar6 = fs->f->code;
  do {
    uVar5 = pIVar6[iVar1];
    pIVar4 = pIVar6 + iVar1;
    iVar3 = iVar1 + 1;
    iVar1 = (uVar5 >> 0xe) - 0x1ffff;
    if (iVar1 == -1) break;
    iVar1 = iVar1 + iVar3;
  } while (iVar1 != -1);
  uVar2 = l2 - iVar3;
  if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 0x20000) {
    *pIVar4 = uVar5 & 0x3fff | (uVar2 + 0x1ffff) * 0x4000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  luaX_syntaxerror(fs->ls,"control structure too long");
}


