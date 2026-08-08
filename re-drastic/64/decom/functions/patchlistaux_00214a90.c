/*
 * Ghidra decompilation
 *
 * Function : patchlistaux
 * Address  : 00214a90
 * Program  : drastic64
 */


void patchlistaux(long *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  if (param_2 == -1) {
    return;
  }
  lVar7 = *(long *)(*param_1 + 0x38);
  do {
    lVar8 = (long)param_2;
    puVar6 = (uint *)(lVar7 + (long)param_2 * 4);
    iVar1 = param_2 + 1;
    uVar5 = *(uint *)(lVar7 + lVar8 * 4);
    iVar2 = (uVar5 >> 0xe) - 0x1ffff;
    if (iVar2 != -1) {
      iVar2 = iVar2 + iVar1;
    }
    if (param_2 < 1) {
LAB_00214b28:
      uVar9 = uVar5 & 0x3f;
      uVar4 = uVar5;
    }
    else {
      uVar4 = puVar6[-1];
      uVar9 = uVar4 & 0x3f;
      if (-1 < (char)(&luaP_opmodes)[uVar9]) goto LAB_00214b28;
      puVar6 = puVar6 + -1;
    }
    if (uVar9 == 0x23) {
      if ((param_4 == 0xff) || (param_4 == uVar4 >> 0x17)) {
        uVar5 = uVar4 & 0x7fc000 | (uVar4 >> 0x17) << 6 | 0x22;
      }
      else {
        uVar5 = uVar4 & 0xffffc03f | (param_4 & 0xff) << 6;
      }
      iVar1 = param_3 - iVar1;
      *puVar6 = uVar5;
      iVar3 = -iVar1;
      if (-1 < iVar1) {
        iVar3 = iVar1;
      }
      if (0x1ffff < iVar3) {
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(param_1[2],"control structure too long");
      }
      *(uint *)(lVar7 + lVar8 * 4) =
           *(uint *)(lVar7 + lVar8 * 4) & 0x3fff | (iVar1 + 0x1ffff) * 0x4000;
    }
    else {
      iVar1 = param_5 - iVar1;
      iVar3 = -iVar1;
      if (-1 < iVar1) {
        iVar3 = iVar1;
      }
      if (0x1ffff < iVar3) {
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(param_1[2],"control structure too long");
      }
      *(uint *)(lVar7 + lVar8 * 4) = uVar5 & 0x3fff | (iVar1 + 0x1ffff) * 0x4000;
    }
    param_2 = iVar2;
    if (iVar2 == -1) {
      return;
    }
  } while( true );
}


