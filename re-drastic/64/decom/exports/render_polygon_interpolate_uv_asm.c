/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_uv_asm
 * Address  : 0019a3a0
 * Program  : drastic64
 */


void render_polygon_interpolate_uv_asm
               (short *param_1,int *param_2,short *param_3,int param_4,uint param_5)

{
  bool bVar1;
  undefined6 uVar2;
  undefined6 uVar3;
  int *piVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  
  piVar4 = param_2 + param_5;
  do {
    sVar5 = *param_3;
    sVar6 = param_3[1];
    sVar7 = param_3[2];
    sVar8 = param_3[3];
    uVar3 = *(undefined6 *)(param_3 + 4);
    uVar2 = *(undefined6 *)(param_3 + 4);
    sVar9 = param_3[7];
    param_3 = param_3 + 8;
    iVar10 = *param_2;
    iVar14 = param_2[1];
    iVar11 = param_2[2];
    iVar15 = param_2[3];
    iVar12 = param_2[4];
    iVar16 = param_2[5];
    iVar13 = param_2[6];
    iVar17 = param_2[7];
    sVar26 = *(short *)piVar4;
    sVar34 = *(short *)((long)piVar4 + 2);
    sVar27 = *(short *)(piVar4 + 1);
    sVar35 = *(short *)((long)piVar4 + 6);
    sVar28 = *(short *)(piVar4 + 2);
    sVar36 = *(short *)((long)piVar4 + 10);
    sVar29 = *(short *)(piVar4 + 3);
    sVar37 = *(short *)((long)piVar4 + 0xe);
    sVar30 = *(short *)(piVar4 + 4);
    sVar38 = *(short *)((long)piVar4 + 0x12);
    sVar31 = *(short *)(piVar4 + 5);
    sVar39 = *(short *)((long)piVar4 + 0x16);
    sVar32 = *(short *)(piVar4 + 6);
    sVar40 = *(short *)((long)piVar4 + 0x1a);
    sVar33 = *(short *)(piVar4 + 7);
    sVar41 = *(short *)((long)piVar4 + 0x1e);
    piVar4 = piVar4 + 8;
    iVar18 = param_2[8];
    iVar22 = param_2[9];
    iVar19 = param_2[10];
    iVar23 = param_2[0xb];
    iVar20 = param_2[0xc];
    iVar24 = param_2[0xd];
    iVar21 = param_2[0xe];
    iVar25 = param_2[0xf];
    param_2 = param_2 + 0x10;
    *param_1 = (short)(iVar10 + (int)sVar26 * (int)sVar5 >> 0x13);
    param_1[1] = (short)(iVar14 + (int)sVar34 * (int)sVar5 >> 0x13);
    param_1[2] = (short)(iVar11 + (int)sVar27 * (int)sVar6 >> 0x13);
    param_1[3] = (short)(iVar15 + (int)sVar35 * (int)sVar6 >> 0x13);
    param_1[4] = (short)(iVar12 + (int)sVar28 * (int)sVar7 >> 0x13);
    param_1[5] = (short)(iVar16 + (int)sVar36 * (int)sVar7 >> 0x13);
    param_1[6] = (short)(iVar13 + (int)sVar29 * (int)sVar8 >> 0x13);
    param_1[7] = (short)(iVar17 + (int)sVar37 * (int)sVar8 >> 0x13);
    param_1[8] = (short)(iVar18 + (int)sVar30 * (int)(short)uVar2 >> 0x13);
    param_1[9] = (short)(iVar22 + (int)sVar38 * (int)(short)uVar3 >> 0x13);
    param_1[10] = (short)(iVar19 + (int)sVar31 * (int)(short)((uint6)uVar2 >> 0x10) >> 0x13);
    param_1[0xb] = (short)(iVar23 + (int)sVar39 * (int)(short)((uint6)uVar3 >> 0x10) >> 0x13);
    param_1[0xc] = (short)(iVar20 + (int)sVar32 * (int)(short)((uint6)uVar2 >> 0x20) >> 0x13);
    param_1[0xd] = (short)(iVar24 + (int)sVar40 * (int)(short)((uint6)uVar3 >> 0x20) >> 0x13);
    param_1[0xe] = (short)(iVar21 + (int)sVar33 * (int)sVar9 >> 0x13);
    param_1[0xf] = (short)(iVar25 + (int)sVar41 * (int)sVar9 >> 0x13);
    param_1 = param_1 + 0x10;
    iVar10 = param_4 + -8;
    bVar1 = 7 < param_4;
    param_4 = iVar10;
  } while (iVar10 != 0 && bVar1);
  return;
}


