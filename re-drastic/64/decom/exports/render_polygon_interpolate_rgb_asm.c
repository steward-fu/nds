/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_rgb_asm
 * Address  : 0019a4a0
 * Program  : drastic64
 */


void render_polygon_interpolate_rgb_asm
               (undefined *param_1,short *param_2,undefined4 *param_3,int param_4,uint param_5)

{
  bool bVar1;
  undefined6 uVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  undefined4 *puVar5;
  undefined *puVar8;
  undefined *puVar9;
  short *psVar10;
  short *psVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  undefined4 uVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  psVar10 = (short *)((long)param_2 + (ulong)param_5);
  puVar8 = param_1 + param_5;
  psVar11 = param_2 + param_5;
  puVar9 = param_1 + (ulong)param_5 * 2;
  piVar12 = (int *)((long)psVar11 + (ulong)param_5);
  piVar13 = (int *)((long)piVar12 + (ulong)param_5 * 2);
  piVar14 = (int *)((long)piVar13 + (ulong)param_5 * 2);
  do {
    uVar20 = *param_3;
    puVar5 = param_3 + 1;
    puVar6 = param_3 + 2;
    puVar7 = param_3 + 3;
    param_3 = param_3 + 4;
    iVar24 = *piVar12;
    iVar25 = piVar12[1];
    iVar26 = piVar12[2];
    iVar27 = piVar12[3];
    iVar28 = piVar12[4];
    iVar29 = piVar12[5];
    iVar30 = piVar12[6];
    iVar31 = piVar12[7];
    piVar12 = piVar12 + 8;
    iVar32 = *piVar13;
    iVar33 = piVar13[1];
    iVar34 = piVar13[2];
    iVar35 = piVar13[3];
    iVar36 = piVar13[4];
    iVar37 = piVar13[5];
    iVar38 = piVar13[6];
    iVar39 = piVar13[7];
    piVar13 = piVar13 + 8;
    iVar40 = *piVar14;
    iVar41 = piVar14[1];
    iVar42 = piVar14[2];
    iVar43 = piVar14[3];
    iVar44 = piVar14[4];
    iVar45 = piVar14[5];
    iVar46 = piVar14[6];
    iVar47 = piVar14[7];
    piVar14 = piVar14 + 8;
    sVar48 = *param_2;
    sVar49 = param_2[1];
    sVar50 = param_2[2];
    sVar51 = param_2[3];
    uVar2 = *(undefined6 *)(param_2 + 4);
    sVar52 = param_2[7];
    param_2 = param_2 + 8;
    sVar53 = *psVar10;
    sVar54 = psVar10[1];
    sVar55 = psVar10[2];
    sVar56 = psVar10[3];
    uVar3 = *(undefined6 *)(psVar10 + 4);
    sVar57 = psVar10[7];
    psVar10 = psVar10 + 8;
    sVar58 = *psVar11;
    sVar59 = psVar11[1];
    sVar60 = psVar11[2];
    sVar61 = psVar11[3];
    uVar4 = *(undefined6 *)(psVar11 + 4);
    sVar62 = psVar11[7];
    psVar11 = psVar11 + 8;
    sVar19 = (short)uVar20;
    sVar21 = (short)((uint)uVar20 >> 0x10);
    sVar22 = (short)*puVar5;
    sVar23 = (short)((uint)*puVar5 >> 0x10);
    sVar15 = (short)*puVar6;
    sVar16 = (short)((uint)*puVar6 >> 0x10);
    sVar17 = (short)*puVar7;
    sVar18 = (short)((uint)*puVar7 >> 0x10);
    *param_1 = (char)(ushort)((uint)(iVar24 + (int)sVar48 * (int)sVar19) >> 0x12);
    param_1[1] = (char)(ushort)((uint)(iVar25 + (int)sVar49 * (int)sVar21) >> 0x12);
    param_1[2] = (char)(ushort)((uint)(iVar26 + (int)sVar50 * (int)sVar22) >> 0x12);
    param_1[3] = (char)(ushort)((uint)(iVar27 + (int)sVar51 * (int)sVar23) >> 0x12);
    param_1[4] = (char)(ushort)((uint)(iVar28 + (int)(short)uVar2 * (int)sVar15) >> 0x12);
    param_1[5] = (char)(ushort)((uint)(iVar29 + (int)(short)((uint6)uVar2 >> 0x10) * (int)sVar16) >>
                               0x12);
    param_1[6] = (char)(ushort)((uint)(iVar30 + (int)(short)((uint6)uVar2 >> 0x20) * (int)sVar17) >>
                               0x12);
    param_1[7] = (char)(ushort)((uint)(iVar31 + (int)sVar52 * (int)sVar18) >> 0x12);
    param_1 = param_1 + 8;
    *puVar8 = (char)(ushort)((uint)(iVar32 + (int)sVar53 * (int)sVar19) >> 0x12);
    puVar8[1] = (char)(ushort)((uint)(iVar33 + (int)sVar54 * (int)sVar21) >> 0x12);
    puVar8[2] = (char)(ushort)((uint)(iVar34 + (int)sVar55 * (int)sVar22) >> 0x12);
    puVar8[3] = (char)(ushort)((uint)(iVar35 + (int)sVar56 * (int)sVar23) >> 0x12);
    puVar8[4] = (char)(ushort)((uint)(iVar36 + (int)(short)uVar3 * (int)sVar15) >> 0x12);
    puVar8[5] = (char)(ushort)((uint)(iVar37 + (int)(short)((uint6)uVar3 >> 0x10) * (int)sVar16) >>
                              0x12);
    puVar8[6] = (char)(ushort)((uint)(iVar38 + (int)(short)((uint6)uVar3 >> 0x20) * (int)sVar17) >>
                              0x12);
    puVar8[7] = (char)(ushort)((uint)(iVar39 + (int)sVar57 * (int)sVar18) >> 0x12);
    puVar8 = puVar8 + 8;
    *puVar9 = (char)(ushort)((uint)(iVar40 + (int)sVar58 * (int)sVar19) >> 0x12);
    puVar9[1] = (char)(ushort)((uint)(iVar41 + (int)sVar59 * (int)sVar21) >> 0x12);
    puVar9[2] = (char)(ushort)((uint)(iVar42 + (int)sVar60 * (int)sVar22) >> 0x12);
    puVar9[3] = (char)(ushort)((uint)(iVar43 + (int)sVar61 * (int)sVar23) >> 0x12);
    puVar9[4] = (char)(ushort)((uint)(iVar44 + (int)(short)uVar4 * (int)sVar15) >> 0x12);
    puVar9[5] = (char)(ushort)((uint)(iVar45 + (int)(short)((uint6)uVar4 >> 0x10) * (int)sVar16) >>
                              0x12);
    puVar9[6] = (char)(ushort)((uint)(iVar46 + (int)(short)((uint6)uVar4 >> 0x20) * (int)sVar17) >>
                              0x12);
    puVar9[7] = (char)(ushort)((uint)(iVar47 + (int)sVar62 * (int)sVar18) >> 0x12);
    puVar9 = puVar9 + 8;
    iVar24 = param_4 + -8;
    bVar1 = 7 < param_4;
    param_4 = iVar24;
  } while (iVar24 != 0 && bVar1);
  return;
}


