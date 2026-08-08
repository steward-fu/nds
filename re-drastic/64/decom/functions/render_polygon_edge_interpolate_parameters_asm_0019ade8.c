/*
 * Ghidra decompilation
 *
 * Function : render_polygon_edge_interpolate_parameters_asm
 * Address  : 0019ade8
 * Program  : drastic64
 */


void render_polygon_edge_interpolate_parameters_asm
               (long *param_1,long param_2,short *param_3,byte *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  uint uVar15;
  ushort uVar16;
  ushort uVar19;
  ushort uVar20;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  short sVar25;
  short sVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  undefined2 in_h26;
  undefined2 in_register_00005342;
  undefined2 in_register_00005344;
  undefined2 in_register_00005346;
  
  puVar13 = (undefined2 *)(param_2 + 0x2c0);
  puVar14 = (undefined2 *)(param_2 + 0x420);
  puVar12 = (undefined2 *)(param_2 + 0x580);
  do {
    uVar8 = *(undefined2 *)(*param_1 + 10);
    uVar9 = *(undefined2 *)(param_1[1] + 10);
    uVar10 = *(undefined4 *)(*param_1 + 0xc);
    uVar11 = *(undefined4 *)(param_1[1] + 0xc);
    sVar35 = (short)uVar11;
    sVar36 = (short)((uint)uVar11 >> 0x10);
    uVar17 = (ulong)CONCAT24(uVar8,CONCAT22(uVar8,uVar8)) & 0x7c0003e0001f;
    uVar21 = (ulong)CONCAT24(uVar9,CONCAT22(uVar9,uVar9)) & 0x7c0003e0001f;
    sVar33 = (short)uVar10;
    sVar25 = sVar35 - sVar33;
    sVar34 = (short)((uint)uVar10 >> 0x10);
    sVar26 = sVar36 - sVar34;
    uVar23 = NEON_cmgt(uVar17,0,2);
    uVar24 = NEON_cmgt(uVar21,0,2);
    uVar27 = NEON_cmgt(CONCAT26(sVar36 - sVar34,CONCAT24(sVar35 - sVar33,CONCAT22(sVar26,sVar25))),0
                       ,2);
    uVar18 = NEON_ushl(uVar17,0xfff7fffc0001,2);
    uVar22 = NEON_ushl(uVar21,0xfff7fffc0001,2);
    uVar16 = (short)uVar18 - (short)uVar23;
    uVar19 = (short)((ulong)uVar18 >> 0x10) - (short)((ulong)uVar23 >> 0x10);
    uVar20 = (short)((ulong)uVar18 >> 0x20) - (short)((ulong)uVar23 >> 0x20);
    iVar31 = sVar33 * 0x8000 + (uint)(ushort)(uVar27 & 0x800080008000800);
    iVar32 = sVar34 * 0x8000 + (uint)(ushort)((uVar27 & 0x800080008000800) >> 0x10);
    iVar28 = (uint)uVar16 * 0x40000 + 0x38000;
    iVar29 = (uint)uVar19 * 0x40000 + 0x38000;
    iVar30 = (uint)uVar20 * 0x40000 + 0x38000;
    uVar15 = (uint)*param_4;
    do {
      sVar33 = *param_3;
      sVar34 = param_3[1];
      sVar35 = param_3[2];
      sVar36 = param_3[3];
      param_3 = param_3 + 4;
      iVar3 = (int)sVar25;
      iVar4 = (int)sVar26;
      iVar5 = (int)(short)((((short)uVar22 - (short)uVar24) - uVar16) * 8);
      iVar6 = (int)(short)((((short)((ulong)uVar22 >> 0x10) - (short)((ulong)uVar24 >> 0x10)) -
                           uVar19) * 8);
      iVar7 = (int)(short)((((short)((ulong)uVar22 >> 0x20) - (short)((ulong)uVar24 >> 0x20)) -
                           uVar20) * 8);
      *puVar13 = (short)((uint)(iVar31 + sVar33 * iVar3) >> 0xf);
      puVar13[1] = (short)((uint)(iVar32 + sVar33 * iVar4) >> 0xf);
      puVar13[2] = (short)((uint)(iVar31 + sVar34 * iVar3) >> 0xf);
      puVar13[3] = (short)((uint)(iVar32 + sVar34 * iVar4) >> 0xf);
      puVar13[4] = (short)((uint)(iVar31 + sVar35 * iVar3) >> 0xf);
      puVar13[5] = (short)((uint)(iVar32 + sVar35 * iVar4) >> 0xf);
      puVar13[6] = (short)((uint)(iVar31 + sVar36 * iVar3) >> 0xf);
      puVar13[7] = (short)((uint)(iVar32 + sVar36 * iVar4) >> 0xf);
      puVar13 = puVar13 + 8;
      *puVar14 = (short)((uint)(iVar28 + sVar33 * iVar5) >> 0xf);
      puVar14[1] = (short)((uint)(iVar29 + sVar33 * iVar6) >> 0xf);
      puVar14[2] = (short)((uint)(iVar28 + sVar34 * iVar5) >> 0xf);
      puVar14[3] = (short)((uint)(iVar29 + sVar34 * iVar6) >> 0xf);
      puVar14[4] = (short)((uint)(iVar28 + sVar35 * iVar5) >> 0xf);
      puVar14[5] = (short)((uint)(iVar29 + sVar35 * iVar6) >> 0xf);
      puVar14[6] = (short)((uint)(iVar28 + sVar36 * iVar5) >> 0xf);
      puVar14[7] = (short)((uint)(iVar29 + sVar36 * iVar6) >> 0xf);
      puVar14 = puVar14 + 8;
      *puVar12 = in_h26;
      puVar12[1] = (short)((uint)(iVar30 + sVar33 * iVar7) >> 0xf);
      puVar12[2] = in_register_00005342;
      puVar12[3] = (short)((uint)(iVar30 + sVar34 * iVar7) >> 0xf);
      puVar12[4] = in_register_00005344;
      puVar12[5] = (short)((uint)(iVar30 + sVar35 * iVar7) >> 0xf);
      puVar12[6] = in_register_00005346;
      puVar12[7] = (short)((uint)(iVar30 + sVar36 * iVar7) >> 0xf);
      puVar12 = puVar12 + 8;
      uVar2 = uVar15 - 4;
      bVar1 = 3 < (int)uVar15;
      uVar15 = uVar2;
    } while (uVar2 != 0 && bVar1);
    puVar13 = puVar13 + (long)(int)uVar2 * 2;
    puVar14 = puVar14 + (long)(int)uVar2 * 2;
    puVar12 = puVar12 + (long)(int)uVar2 * 2;
    param_3 = param_3 + (int)uVar2;
    param_5 = param_5 + -1;
    param_1 = param_1 + 2;
    param_4 = param_4 + 1;
  } while (param_5 != 0);
  return;
}


