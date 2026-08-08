/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_render_tiles_normal_normal_asm
 * Address  : 0019f9bc
 * Program  : drastic64
 */


void render_scanline_affine_render_tiles_normal_normal_asm
               (undefined (*param_1) [16],undefined (*param_2) [16],ushort *param_3,ushort *param_4,
               int param_5,long param_6)

{
  bool bVar1;
  undefined (*pauVar2) [16];
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined *puVar11;
  undefined (*pauVar12) [16];
  ushort *puVar13;
  ushort *puVar14;
  int iVar15;
  uint uVar16;
  undefined (*pauVar17) [16];
  long lVar18;
  undefined (*pauVar19) [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  
  if (*(byte *)param_3 == 0) {
    lVar18 = 0x100;
    pauVar19 = (undefined (*) [16])(param_6 + (ulong)*(byte *)param_4 * 0x40);
    auVar22 = *pauVar19;
    auVar20 = *pauVar19;
    auVar8 = pauVar19[1];
    auVar23 = pauVar19[1];
    auVar9 = pauVar19[2];
    auVar6 = pauVar19[2];
    auVar10 = pauVar19[3];
    auVar7 = pauVar19[3];
    do {
      auVar21 = *param_2;
      pauVar19 = param_2 + 1;
      param_2 = param_2 + 2;
      auVar21 = a64_TBL(ZEXT816(0),auVar20,auVar23,auVar6,auVar7,auVar21);
      auVar24 = a64_TBL(ZEXT816(0),auVar22,auVar8,auVar9,auVar10,*pauVar19);
      lVar18 = lVar18 + -0x20;
      (*param_1)[0] = auVar21[0];
      (*param_1)[1] = auVar21[1];
      (*param_1)[2] = auVar21[2];
      (*param_1)[3] = auVar21[3];
      (*param_1)[4] = auVar21[4];
      (*param_1)[5] = auVar21[5];
      (*param_1)[6] = auVar21[6];
      (*param_1)[7] = auVar21[7];
      (*param_1)[8] = auVar21[8];
      (*param_1)[9] = auVar21[9];
      (*param_1)[10] = auVar21[10];
      (*param_1)[0xb] = auVar21[11];
      (*param_1)[0xc] = auVar21[12];
      (*param_1)[0xd] = auVar21[13];
      (*param_1)[0xe] = auVar21[14];
      (*param_1)[0xf] = auVar21[15];
      param_1[1][0] = auVar24[0];
      param_1[1][1] = auVar24[1];
      param_1[1][2] = auVar24[2];
      param_1[1][3] = auVar24[3];
      param_1[1][4] = auVar24[4];
      param_1[1][5] = auVar24[5];
      param_1[1][6] = auVar24[6];
      param_1[1][7] = auVar24[7];
      param_1[1][8] = auVar24[8];
      param_1[1][9] = auVar24[9];
      param_1[1][10] = auVar24[10];
      param_1[1][0xb] = auVar24[11];
      param_1[1][0xc] = auVar24[12];
      param_1[1][0xd] = auVar24[13];
      param_1[1][0xe] = auVar24[14];
      param_1[1][0xf] = auVar24[15];
      param_1 = param_1 + 2;
    } while (lVar18 != 0);
    return;
  }
  puVar13 = param_3;
  puVar14 = param_4;
  iVar15 = param_5 + -1;
  if (param_5 + -1 != 0) {
    do {
      while( true ) {
        param_4 = puVar14 + 1;
        param_3 = puVar13 + 1;
        uVar3 = *puVar13;
        pauVar17 = (undefined (*) [16])((ulong)uVar3 & 0xff);
        pauVar19 = (undefined (*) [16])(ulong)(uVar3 >> 8);
        pauVar2 = (undefined (*) [16])(param_6 + (ulong)((*puVar14 & 0xff) << 6));
        pauVar12 = (undefined (*) [16])(param_6 + (ulong)(*puVar14 >> 2 & 0x3fc0));
        auVar20 = *pauVar2;
        auVar23 = pauVar2[1];
        auVar6 = pauVar2[2];
        auVar7 = pauVar2[3];
        auVar22 = *pauVar12;
        auVar8 = pauVar12[1];
        auVar9 = pauVar12[2];
        auVar10 = pauVar12[3];
        puVar13 = param_3;
        puVar14 = param_4;
        if ((uVar3 & 0xf0f0) != 0) break;
        auVar20 = a64_TBL(ZEXT816(0),*pauVar2,pauVar2[1],pauVar2[2],pauVar2[3],*param_2);
        auVar23 = a64_TBL(ZEXT816(0),*pauVar12,pauVar12[1],pauVar12[2],pauVar12[3],*pauVar17);
        iVar4 = iVar15 + -2;
        (*param_1)[0] = auVar20[0];
        (*param_1)[1] = auVar20[1];
        (*param_1)[2] = auVar20[2];
        (*param_1)[3] = auVar20[3];
        (*param_1)[4] = auVar20[4];
        (*param_1)[5] = auVar20[5];
        (*param_1)[6] = auVar20[6];
        (*param_1)[7] = auVar20[7];
        (*param_1)[8] = auVar20[8];
        (*param_1)[9] = auVar20[9];
        (*param_1)[10] = auVar20[10];
        (*param_1)[0xb] = auVar20[11];
        (*param_1)[0xc] = auVar20[12];
        (*param_1)[0xd] = auVar20[13];
        (*param_1)[0xe] = auVar20[14];
        (*param_1)[0xf] = auVar20[15];
        (*pauVar17)[0] = auVar23[0];
        (*pauVar17)[1] = auVar23[1];
        (*pauVar17)[2] = auVar23[2];
        (*pauVar17)[3] = auVar23[3];
        (*pauVar17)[4] = auVar23[4];
        (*pauVar17)[5] = auVar23[5];
        (*pauVar17)[6] = auVar23[6];
        (*pauVar17)[7] = auVar23[7];
        (*pauVar17)[8] = auVar23[8];
        (*pauVar17)[9] = auVar23[9];
        (*pauVar17)[10] = auVar23[10];
        (*pauVar17)[0xb] = auVar23[11];
        (*pauVar17)[0xc] = auVar23[12];
        (*pauVar17)[0xd] = auVar23[13];
        (*pauVar17)[0xe] = auVar23[14];
        (*pauVar17)[0xf] = auVar23[15];
        bVar1 = iVar15 < 2;
        param_1 = pauVar19;
        param_2 = pauVar19;
        iVar15 = iVar4;
        if (iVar4 == 0 || bVar1) {
          if (iVar4 != 0) {
            return;
          }
          goto LAB_0019fa6c;
        }
      }
      do {
        auVar21 = *param_2;
        param_2 = param_2 + 1;
        auVar21 = a64_TBL(ZEXT816(0),auVar20,auVar23,auVar6,auVar7,auVar21);
        pauVar2 = pauVar17 + -1;
        (*param_1)[0] = auVar21[0];
        (*param_1)[1] = auVar21[1];
        (*param_1)[2] = auVar21[2];
        (*param_1)[3] = auVar21[3];
        (*param_1)[4] = auVar21[4];
        (*param_1)[5] = auVar21[5];
        (*param_1)[6] = auVar21[6];
        (*param_1)[7] = auVar21[7];
        (*param_1)[8] = auVar21[8];
        (*param_1)[9] = auVar21[9];
        (*param_1)[10] = auVar21[10];
        (*param_1)[0xb] = auVar21[11];
        (*param_1)[0xc] = auVar21[12];
        (*param_1)[0xd] = auVar21[13];
        (*param_1)[0xe] = auVar21[14];
        (*param_1)[0xf] = auVar21[15];
        param_1 = param_1 + 1;
        bVar1 = 0xf < (long)pauVar17;
        pauVar17 = pauVar2;
      } while (pauVar2 != (undefined (*) [16])0x0 && bVar1);
      pauVar12 = (undefined (*) [16])(*param_2 + (int)pauVar2);
      puVar11 = *param_1 + (int)pauVar2;
      do {
        auVar20 = *pauVar12;
        pauVar12 = pauVar12 + 1;
        auVar20 = a64_TBL(ZEXT816(0),auVar22,auVar8,auVar9,auVar10,auVar20);
        pauVar2 = pauVar19 + -1;
        *puVar11 = auVar20[0];
        puVar11[1] = auVar20[1];
        puVar11[2] = auVar20[2];
        puVar11[3] = auVar20[3];
        puVar11[4] = auVar20[4];
        puVar11[5] = auVar20[5];
        puVar11[6] = auVar20[6];
        puVar11[7] = auVar20[7];
        puVar11[8] = auVar20[8];
        puVar11[9] = auVar20[9];
        puVar11[10] = auVar20[10];
        puVar11[0xb] = auVar20[11];
        puVar11[0xc] = auVar20[12];
        puVar11[0xd] = auVar20[13];
        puVar11[0xe] = auVar20[14];
        puVar11[0xf] = auVar20[15];
        puVar11 = puVar11 + 0x10;
        bVar1 = 0xf < (long)pauVar19;
        pauVar19 = pauVar2;
      } while (pauVar2 != (undefined (*) [16])0x0 && bVar1);
      iVar4 = iVar15 + -2;
      param_2 = (undefined (*) [16])(*pauVar12 + (int)pauVar2);
      param_1 = (undefined (*) [16])(puVar11 + (int)pauVar2);
      bVar1 = 1 < iVar15;
      iVar15 = iVar4;
    } while (iVar4 != 0 && bVar1);
    if (iVar4 != 0) {
      return;
    }
  }
LAB_0019fa6c:
  pauVar19 = (undefined (*) [16])(param_6 + (ulong)*(byte *)param_4 * 0x40);
  auVar20 = *pauVar19;
  auVar23 = pauVar19[1];
  auVar6 = pauVar19[2];
  auVar7 = pauVar19[3];
  uVar16 = (uint)*(byte *)param_3;
  do {
    auVar22 = *param_2;
    param_2 = param_2 + 1;
    auVar22 = a64_TBL(ZEXT816(0),auVar20,auVar23,auVar6,auVar7,auVar22);
    uVar5 = uVar16 - 0x10;
    (*param_1)[0] = auVar22[0];
    (*param_1)[1] = auVar22[1];
    (*param_1)[2] = auVar22[2];
    (*param_1)[3] = auVar22[3];
    (*param_1)[4] = auVar22[4];
    (*param_1)[5] = auVar22[5];
    (*param_1)[6] = auVar22[6];
    (*param_1)[7] = auVar22[7];
    (*param_1)[8] = auVar22[8];
    (*param_1)[9] = auVar22[9];
    (*param_1)[10] = auVar22[10];
    (*param_1)[0xb] = auVar22[11];
    (*param_1)[0xc] = auVar22[12];
    (*param_1)[0xd] = auVar22[13];
    (*param_1)[0xe] = auVar22[14];
    (*param_1)[0xf] = auVar22[15];
    param_1 = param_1 + 1;
    bVar1 = 0xf < (int)uVar16;
    uVar16 = uVar5;
  } while (uVar5 != 0 && bVar1);
  return;
}


