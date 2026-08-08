/*
 * Ghidra decompilation
 *
 * Function : skip_sep
 * Address  : 00218590
 * Program  : drastic64
 */


uint skip_sep(uint *param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  
  plVar10 = *(long **)(param_1 + 0x12);
  uVar2 = *param_1;
  lVar6 = plVar10[1];
  uVar9 = plVar10[2];
  uVar1 = lVar6 + 1;
  if (uVar9 < uVar1) {
    if (0x3ffffffe < uVar9) {
LAB_00218764:
                    /* WARNING: Subroutine does not return */
      lexerror(param_1,"lexical element too long",0);
    }
    lVar6 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar9,uVar9 * 2);
    lVar8 = plVar10[1];
    *plVar10 = lVar6;
    plVar10[2] = uVar9 * 2;
    plVar10[1] = lVar8 + 1;
    *(char *)(lVar6 + lVar8) = (char)uVar2;
    plVar10 = *(long **)(param_1 + 0x10);
    lVar6 = *plVar10;
    *plVar10 = lVar6 + -1;
  }
  else {
    plVar10[1] = uVar1;
    *(char *)(*plVar10 + lVar6) = (char)uVar2;
    plVar10 = *(long **)(param_1 + 0x10);
    lVar6 = *plVar10;
    *plVar10 = lVar6 + -1;
  }
  if (lVar6 == 0) {
    uVar5 = luaZ_fill();
    *param_1 = uVar5;
  }
  else {
    pbVar7 = (byte *)plVar10[1];
    plVar10[1] = (long)(pbVar7 + 1);
    uVar5 = (uint)*pbVar7;
    *param_1 = uVar5;
  }
  if (uVar5 != 0x3d) {
    uVar12 = 0;
    if (uVar2 != uVar5) {
      uVar12 = 0xffffffff;
    }
    return uVar12;
  }
  iVar4 = 0;
  do {
    while( true ) {
      iVar11 = iVar4;
      plVar10 = *(long **)(param_1 + 0x12);
      lVar6 = plVar10[1];
      uVar9 = plVar10[2];
      uVar1 = lVar6 + 1;
      if (uVar1 <= uVar9) break;
      if (0x3ffffffe < uVar9) goto LAB_00218764;
      lVar6 = luaM_realloc_(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar9,uVar9 * 2);
      lVar8 = plVar10[1];
      *plVar10 = lVar6;
      plVar10[2] = uVar9 * 2;
      plVar10[1] = lVar8 + 1;
      *(undefined *)(lVar6 + lVar8) = 0x3d;
      plVar10 = *(long **)(param_1 + 0x10);
      lVar6 = *plVar10;
      *plVar10 = lVar6 + -1;
      if (lVar6 == 0) goto LAB_002186cc;
LAB_00218644:
      pbVar7 = (byte *)plVar10[1];
      plVar10[1] = (long)(pbVar7 + 1);
      bVar3 = *pbVar7;
      uVar5 = (uint)bVar3;
      *param_1 = (uint)bVar3;
      iVar4 = iVar11 + 1;
      if (bVar3 != 0x3d) goto LAB_00218664;
    }
    plVar10[1] = uVar1;
    *(undefined *)(*plVar10 + lVar6) = 0x3d;
    plVar10 = *(long **)(param_1 + 0x10);
    lVar6 = *plVar10;
    *plVar10 = lVar6 + -1;
    if (lVar6 != 0) goto LAB_00218644;
LAB_002186cc:
    uVar5 = luaZ_fill();
    *param_1 = uVar5;
    iVar4 = iVar11 + 1;
  } while (uVar5 == 0x3d);
LAB_00218664:
  uVar12 = iVar11 + 1;
  if (uVar2 != uVar5) {
    uVar12 = ~uVar12;
  }
  return uVar12;
}


