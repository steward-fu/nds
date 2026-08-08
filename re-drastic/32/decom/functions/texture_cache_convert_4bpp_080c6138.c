/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_4bpp
 * Address  : 080c6138
 * Program  : drastic
 */


void texture_cache_convert_4bpp(byte *param_1,undefined (*param_2) [16],int param_3)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  undefined auVar5 [16];
  undefined (*pauVar6) [16];
  int iVar7;
  int iVar8;
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [16];
  byte *pbVar11;
  longlong lVar12;
  
  SIMDExpandImmediate(0,0xe,0xf);
  iVar7 = param_3 + -0x40;
  iVar8 = iVar7;
  if (iVar7 != 0 && 0x3f < param_3) {
    do {
      HintPreloadData(param_2 + 8);
      auVar5 = *param_2;
      pauVar9 = param_2 + 1;
      pauVar6 = param_2 + 2;
      pauVar10 = param_2 + 3;
      param_2 = param_2 + 4;
      VectorShiftRight(auVar5,4);
      VectorShiftRight(*pauVar9,4);
      VectorShiftRight(*pauVar6,4);
      VectorShiftRight(*pauVar10,4);
      pbVar2 = (byte *)0x340;
      pbVar3 = (byte *)0x350;
      lVar12 = 8;
      pbVar11 = param_1;
      while( true ) {
        *pbVar11 = *pbVar2;
        pbVar11[1] = *pbVar3;
        pbVar11 = pbVar11 + 2;
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) break;
        pbVar2 = pbVar2 + 1;
        pbVar3 = pbVar3 + 1;
      }
      pbVar2 = (byte *)0x348;
      pbVar3 = (byte *)0x358;
      lVar12 = 8;
      while( true ) {
        *pbVar11 = *pbVar2;
        pbVar11[1] = *pbVar3;
        pbVar11 = pbVar11 + 2;
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) break;
        pbVar2 = pbVar2 + 1;
        pbVar3 = pbVar3 + 1;
      }
      pbVar11 = param_1 + 0x20;
      pbVar2 = (byte *)0x360;
      pbVar3 = (byte *)0x370;
      lVar12 = 8;
      while( true ) {
        *pbVar11 = *pbVar2;
        pbVar11[1] = *pbVar3;
        pbVar11 = pbVar11 + 2;
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) break;
        pbVar2 = pbVar2 + 1;
        pbVar3 = pbVar3 + 1;
      }
      pbVar2 = (byte *)0x368;
      pbVar3 = (byte *)0x378;
      lVar12 = 8;
      while( true ) {
        *pbVar11 = *pbVar2;
        pbVar11[1] = *pbVar3;
        pbVar11 = pbVar11 + 2;
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) break;
        pbVar2 = pbVar2 + 1;
        pbVar3 = pbVar3 + 1;
      }
      pbVar11 = param_1 + 0x40;
      pbVar2 = (byte *)0x380;
      pbVar3 = (byte *)0x390;
      lVar12 = 8;
      while( true ) {
        *pbVar11 = *pbVar2;
        pbVar11[1] = *pbVar3;
        pbVar11 = pbVar11 + 2;
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) break;
        pbVar2 = pbVar2 + 1;
        pbVar3 = pbVar3 + 1;
      }
      pbVar2 = (byte *)0x388;
      pbVar3 = (byte *)0x398;
      lVar12 = 8;
      while( true ) {
        *pbVar11 = *pbVar2;
        pbVar11[1] = *pbVar3;
        pbVar11 = pbVar11 + 2;
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) break;
        pbVar2 = pbVar2 + 1;
        pbVar3 = pbVar3 + 1;
      }
      pbVar11 = param_1 + 0x60;
      pbVar2 = (byte *)0x3a0;
      pbVar3 = (byte *)0x3b0;
      lVar12 = 8;
      while( true ) {
        *pbVar11 = *pbVar2;
        pbVar11[1] = *pbVar3;
        pbVar11 = pbVar11 + 2;
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) break;
        pbVar2 = pbVar2 + 1;
        pbVar3 = pbVar3 + 1;
      }
      pbVar2 = (byte *)0x3a8;
      pbVar3 = (byte *)0x3b8;
      lVar12 = 8;
      while( true ) {
        *pbVar11 = *pbVar2;
        pbVar11[1] = *pbVar3;
        pbVar11 = pbVar11 + 2;
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) break;
        pbVar2 = pbVar2 + 1;
        pbVar3 = pbVar3 + 1;
      }
      param_1 = param_1 + 0x80;
      iVar7 = iVar8 + -0x40;
      bVar1 = 0x3f < iVar8;
      iVar8 = iVar7;
    } while (iVar7 != 0 && bVar1);
  }
  iVar7 = iVar7 + 0x40;
  if (iVar7 == 0) {
    return;
  }
  do {
    bVar4 = (*param_2)[0];
    *param_1 = bVar4 & 0xf;
    param_1[1] = bVar4 >> 4;
    param_1 = param_1 + 2;
    iVar7 = iVar7 + -1;
    param_2 = (undefined (*) [16])(*param_2 + 1);
  } while (iVar7 != 0);
  return;
}


