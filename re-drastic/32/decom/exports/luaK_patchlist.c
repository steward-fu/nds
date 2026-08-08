/*
 * Ghidra decompilation
 *
 * Function : luaK_patchlist
 * Address  : 08134634
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_patchlist(FuncState *fs,int list,int target)

{
  uint uVar1;
  Instruction *pIVar2;
  int offset;
  int iVar3;
  uint uVar4;
  int offset_1;
  Instruction *jmp;
  Instruction *pIVar5;
  int iVar6;
  
  if (fs->pc == target) {
    fs->lasttarget = fs->pc;
    if (list != -1) {
      iVar3 = fs->jpc;
      if (iVar3 == -1) {
        fs->jpc = list;
      }
      else {
        pIVar2 = fs->f->code;
        do {
          uVar1 = pIVar2[iVar3];
          pIVar5 = pIVar2 + iVar3;
          iVar6 = iVar3 + 1;
          iVar3 = (uVar1 >> 0xe) - 0x1ffff;
          if (iVar3 == -1) break;
          iVar3 = iVar3 + iVar6;
        } while (iVar3 != -1);
        uVar4 = list - iVar6;
        if (0x1ffff < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
                    /* WARNING: Subroutine does not return */
          luaX_syntaxerror(fs->ls,"control structure too long");
        }
        *pIVar5 = uVar1 & 0x3fff | (uVar4 + 0x1ffff) * 0x4000;
      }
    }
  }
  else {
    patchlistaux(fs,list,target,0xff,target);
  }
  return;
}


