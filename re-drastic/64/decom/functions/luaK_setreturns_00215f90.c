/*
 * Ghidra decompilation
 *
 * Function : luaK_setreturns
 * Address  : 00215f90
 * Program  : drastic64
 */


void luaK_setreturns(long *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined uVar2;
  long lVar3;
  long lVar4;
  
  if (*param_2 == 0xd) {
    uVar1 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[1] * 4);
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[1] * 4) =
         uVar1 & 0xff800000 | uVar1 & 0x3fff | (param_3 + 1U & 0x1ff) << 0xe;
    return;
  }
  if (*param_2 != 0xe) {
    return;
  }
  lVar4 = *param_1;
  lVar3 = *(long *)(lVar4 + 0x38);
  *(uint *)(lVar3 + (long)param_2[1] * 4) =
       *(uint *)(lVar3 + (long)param_2[1] * 4) & 0x7fffff | (param_3 + 1) * 0x800000;
  *(uint *)(lVar3 + (long)param_2[1] * 4) =
       *(uint *)(lVar3 + (long)param_2[1] * 4) & 0xffffc03f |
       (uint)*(byte *)((long)param_1 + 0x3c) << 6;
  uVar1 = *(byte *)((long)param_1 + 0x3c) + 1;
  uVar2 = (undefined)uVar1;
  if (*(byte *)(lVar4 + 0xc) < uVar1) {
    if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(param_1[2],"function or expression too complex");
    }
    *(undefined *)(lVar4 + 0xc) = uVar2;
    *(undefined *)((long)param_1 + 0x3c) = uVar2;
  }
  else {
    *(undefined *)((long)param_1 + 0x3c) = uVar2;
  }
  return;
}


