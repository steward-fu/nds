/*
 * Ghidra decompilation
 *
 * Function : luaK_concat
 * Address  : 00215340
 * Program  : drastic64
 */


void luaK_concat(long *param_1,int *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 != -1) {
    iVar4 = *param_2;
    if (iVar4 == -1) {
      *param_2 = param_3;
      return;
    }
    do {
      lVar1 = (long)iVar4;
      uVar3 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)iVar4 * 4);
      iVar2 = iVar4 + 1;
      iVar4 = (uVar3 >> 0xe) - 0x1ffff;
      if (iVar4 == -1) break;
      iVar4 = iVar4 + iVar2;
    } while (iVar4 != -1);
    param_3 = param_3 - iVar2;
    iVar4 = -param_3;
    if (-1 < param_3) {
      iVar4 = param_3;
    }
    if (0x1ffff < iVar4) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(param_1[2],"control structure too long");
    }
    *(uint *)(*(long *)(*param_1 + 0x38) + lVar1 * 4) =
         uVar3 & 0x3fff | (param_3 + 0x1ffff) * 0x4000;
  }
  return;
}


