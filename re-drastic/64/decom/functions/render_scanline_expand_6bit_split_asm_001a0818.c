/*
 * Ghidra decompilation
 *
 * Function : render_scanline_expand_6bit_split_asm
 * Address  : 001a0818
 * Program  : drastic64
 */


void render_scanline_expand_6bit_split_asm(char *param_1,ushort *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ulong uVar36;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar42;
  ulong uVar37;
  ulong uVar41;
  
  pbVar1 = (byte *)(param_1 + 0x100);
  pbVar2 = (byte *)(param_1 + 0x200);
  iVar3 = 0x100;
  do {
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    uVar8 = param_2[4];
    uVar9 = param_2[5];
    uVar10 = param_2[6];
    uVar11 = param_2[7];
    uVar12 = param_2[8];
    uVar13 = param_2[9];
    uVar14 = param_2[10];
    uVar15 = param_2[0xb];
    uVar16 = param_2[0xc];
    uVar17 = param_2[0xd];
    uVar18 = param_2[0xe];
    uVar19 = param_2[0xf];
    uVar20 = param_2[0x10];
    uVar21 = param_2[0x11];
    uVar22 = param_2[0x12];
    uVar23 = param_2[0x13];
    uVar24 = param_2[0x14];
    uVar25 = param_2[0x15];
    uVar26 = param_2[0x16];
    uVar27 = param_2[0x17];
    uVar28 = param_2[0x18];
    uVar29 = param_2[0x19];
    uVar30 = param_2[0x1a];
    uVar31 = param_2[0x1b];
    uVar32 = param_2[0x1c];
    uVar33 = param_2[0x1d];
    uVar34 = param_2[0x1e];
    uVar35 = param_2[0x1f];
    param_2 = param_2 + 0x20;
    uVar36 = CONCAT71((int7)(((ulong)CONCAT15((char)uVar19 << 1,
                                              CONCAT14((char)uVar18 << 1,
                                                       CONCAT13((char)uVar17 << 1,
                                                                CONCAT12((char)uVar16 << 1,
                                                                         CONCAT11((char)uVar15 << 1,
                                                                                  (char)uVar14 << 1)
                                                                        )))) << 0x10) >> 8),
                      (char)uVar12 << 1) & 0xffffffffffffff3e;
    uVar37 = CONCAT62((int6)(uVar36 >> 0x10),CONCAT11((char)uVar13 << 1,(char)uVar36)) &
             0xffffffffffff3eff;
    uVar36 = CONCAT53((int5)(uVar37 >> 0x18),CONCAT12((char)(uVar36 >> 0x10),(short)uVar37)) &
             0xffffffffff3effff;
    uVar37 = CONCAT44((int)(uVar36 >> 0x20),CONCAT13((char)(uVar37 >> 0x18),(int3)uVar36)) &
             0xffffffff3effffff;
    uVar36 = CONCAT35((int3)(uVar37 >> 0x28),CONCAT14((char)(uVar36 >> 0x20),(int)uVar37)) &
             0xffffff3effffffff;
    uVar37 = CONCAT26((short)(uVar36 >> 0x30),CONCAT15((char)(uVar37 >> 0x28),(int5)uVar36)) &
             0xffff3effffffffff;
    uVar37 = CONCAT17((char)(uVar37 >> 0x38),CONCAT16((char)(uVar36 >> 0x30),(int6)uVar37)) &
             0x3e3effffffffffff;
    uVar38 = CONCAT71((int7)(((ulong)CONCAT15((char)uVar35 << 1,
                                              CONCAT14((char)uVar34 << 1,
                                                       CONCAT13((char)uVar33 << 1,
                                                                CONCAT12((char)uVar32 << 1,
                                                                         CONCAT11((char)uVar31 << 1,
                                                                                  (char)uVar30 << 1)
                                                                        )))) << 0x10) >> 8),
                      (char)uVar28 << 1) & 0xffffffffffffff3e;
    uVar36 = CONCAT62((int6)(uVar38 >> 0x10),CONCAT11((char)uVar29 << 1,(char)uVar38)) &
             0xffffffffffff3eff;
    uVar38 = CONCAT53((int5)(uVar36 >> 0x18),CONCAT12((char)(uVar38 >> 0x10),(short)uVar36)) &
             0xffffffffff3effff;
    uVar36 = CONCAT44((int)(uVar38 >> 0x20),CONCAT13((char)(uVar36 >> 0x18),(int3)uVar38)) &
             0xffffffff3effffff;
    uVar38 = CONCAT35((int3)(uVar36 >> 0x28),CONCAT14((char)(uVar38 >> 0x20),(int)uVar36)) &
             0xffffff3effffffff;
    uVar36 = CONCAT26((short)(uVar38 >> 0x30),CONCAT15((char)(uVar36 >> 0x28),(int5)uVar38)) &
             0xffff3effffffffff;
    uVar36 = CONCAT17((char)(uVar36 >> 0x38),CONCAT16((char)(uVar38 >> 0x30),(int6)uVar36)) &
             0x3e3effffffffffff;
    uVar38 = CONCAT71((int7)(((ulong)CONCAT15((char)(uVar19 >> 4),
                                              CONCAT14((char)(uVar18 >> 4),
                                                       CONCAT13((char)(uVar17 >> 4),
                                                                CONCAT12((char)(uVar16 >> 4),
                                                                         CONCAT11((char)(uVar15 >> 4
                                                                                        ),(char)(
                                                  uVar14 >> 4)))))) << 0x10) >> 8),
                      (char)(uVar12 >> 4)) & 0xffffffffffffff3e;
    uVar39 = CONCAT62((int6)(uVar38 >> 0x10),CONCAT11((char)(uVar13 >> 4),(char)uVar38)) &
             0xffffffffffff3eff;
    uVar38 = CONCAT53((int5)(uVar39 >> 0x18),CONCAT12((char)(uVar38 >> 0x10),(short)uVar39)) &
             0xffffffffff3effff;
    uVar39 = CONCAT44((int)(uVar38 >> 0x20),CONCAT13((char)(uVar39 >> 0x18),(int3)uVar38)) &
             0xffffffff3effffff;
    uVar38 = CONCAT35((int3)(uVar39 >> 0x28),CONCAT14((char)(uVar38 >> 0x20),(int)uVar39)) &
             0xffffff3effffffff;
    uVar39 = CONCAT26((short)(uVar38 >> 0x30),CONCAT15((char)(uVar39 >> 0x28),(int5)uVar38)) &
             0xffff3effffffffff;
    uVar38 = CONCAT17((char)(uVar39 >> 0x38),CONCAT16((char)(uVar38 >> 0x30),(int6)uVar39)) &
             0x3e3effffffffffff;
    uVar39 = CONCAT71((int7)(((ulong)CONCAT15((char)(uVar35 >> 4),
                                              CONCAT14((char)(uVar34 >> 4),
                                                       CONCAT13((char)(uVar33 >> 4),
                                                                CONCAT12((char)(uVar32 >> 4),
                                                                         CONCAT11((char)(uVar31 >> 4
                                                                                        ),(char)(
                                                  uVar30 >> 4)))))) << 0x10) >> 8),
                      (char)(uVar28 >> 4)) & 0xffffffffffffff3e;
    uVar40 = CONCAT62((int6)(uVar39 >> 0x10),CONCAT11((char)(uVar29 >> 4),(char)uVar39)) &
             0xffffffffffff3eff;
    uVar39 = CONCAT53((int5)(uVar40 >> 0x18),CONCAT12((char)(uVar39 >> 0x10),(short)uVar40)) &
             0xffffffffff3effff;
    uVar41 = CONCAT44((int)(uVar39 >> 0x20),CONCAT13((char)(uVar40 >> 0x18),(int3)uVar39)) &
             0xffffffff3effffff;
    uVar40 = CONCAT35((int3)(uVar41 >> 0x28),CONCAT14((char)(uVar39 >> 0x20),(int)uVar41)) &
             0xffffff3effffffff;
    uVar39 = CONCAT26((short)(uVar40 >> 0x30),CONCAT15((char)(uVar41 >> 0x28),(int5)uVar40)) &
             0xffff3effffffffff;
    uVar39 = CONCAT17((char)(uVar39 >> 0x38),CONCAT16((char)(uVar40 >> 0x30),(int6)uVar39)) &
             0x3e3effffffffffff;
    uVar41 = CONCAT71((int7)(((ulong)CONCAT15((byte)(uVar19 >> 9),
                                              CONCAT14((byte)(uVar18 >> 9),
                                                       CONCAT13((byte)(uVar17 >> 9),
                                                                CONCAT12((byte)(uVar16 >> 9),
                                                                         CONCAT11((byte)(uVar15 >> 9
                                                                                        ),(byte)(
                                                  uVar14 >> 9)))))) << 0x10) >> 8),
                      (byte)(uVar12 >> 9)) & 0xffffffffffffff3e;
    uVar40 = CONCAT62((int6)(uVar41 >> 0x10),CONCAT11((byte)(uVar13 >> 9),(char)uVar41)) &
             0xffffffffffff3eff;
    uVar41 = CONCAT53((int5)(uVar40 >> 0x18),CONCAT12((char)(uVar41 >> 0x10),(short)uVar40)) &
             0xffffffffff3effff;
    uVar40 = CONCAT44((int)(uVar41 >> 0x20),CONCAT13((char)(uVar40 >> 0x18),(int3)uVar41)) &
             0xffffffff3effffff;
    uVar41 = CONCAT35((int3)(uVar40 >> 0x28),CONCAT14((char)(uVar41 >> 0x20),(int)uVar40)) &
             0xffffff3effffffff;
    uVar40 = CONCAT26((short)(uVar41 >> 0x30),CONCAT15((char)(uVar40 >> 0x28),(int5)uVar41)) &
             0xffff3effffffffff;
    uVar40 = CONCAT17((char)(uVar40 >> 0x38),CONCAT16((char)(uVar41 >> 0x30),(int6)uVar40)) &
             0x3e3effffffffffff;
    uVar41 = CONCAT71((int7)(((ulong)CONCAT15((byte)(uVar35 >> 9),
                                              CONCAT14((byte)(uVar34 >> 9),
                                                       CONCAT13((byte)(uVar33 >> 9),
                                                                CONCAT12((byte)(uVar32 >> 9),
                                                                         CONCAT11((byte)(uVar31 >> 9
                                                                                        ),(byte)(
                                                  uVar30 >> 9)))))) << 0x10) >> 8),
                      (byte)(uVar28 >> 9)) & 0xffffffffffffff3e;
    uVar42 = CONCAT62((int6)(uVar41 >> 0x10),CONCAT11((byte)(uVar29 >> 9),(char)uVar41)) &
             0xffffffffffff3eff;
    uVar41 = CONCAT53((int5)(uVar42 >> 0x18),CONCAT12((char)(uVar41 >> 0x10),(short)uVar42)) &
             0xffffffffff3effff;
    uVar42 = CONCAT44((int)(uVar41 >> 0x20),CONCAT13((char)(uVar42 >> 0x18),(int3)uVar41)) &
             0xffffffff3effffff;
    uVar41 = CONCAT35((int3)(uVar42 >> 0x28),CONCAT14((char)(uVar41 >> 0x20),(int)uVar42)) &
             0xffffff3effffffff;
    uVar42 = CONCAT26((short)(uVar41 >> 0x30),CONCAT15((char)(uVar42 >> 0x28),(int5)uVar41)) &
             0xffff3effffffffff;
    uVar41 = CONCAT17((char)(uVar42 >> 0x38),CONCAT16((char)(uVar41 >> 0x30),(int6)uVar42)) &
             0x3e3effffffffffff;
    *param_1 = ((byte)uVar4 & 0x1f) << 1;
    param_1[1] = ((byte)uVar5 & 0x1f) << 1;
    param_1[2] = ((byte)uVar6 & 0x1f) << 1;
    param_1[3] = ((byte)uVar7 & 0x1f) << 1;
    param_1[4] = ((byte)uVar8 & 0x1f) << 1;
    param_1[5] = ((byte)uVar9 & 0x1f) << 1;
    param_1[6] = ((byte)uVar10 & 0x1f) << 1;
    param_1[7] = ((byte)uVar11 & 0x1f) << 1;
    param_1[8] = (char)uVar37;
    param_1[9] = (char)(uVar37 >> 8);
    param_1[10] = (char)(uVar37 >> 0x10);
    param_1[0xb] = (char)(uVar37 >> 0x18);
    param_1[0xc] = (char)(uVar37 >> 0x20);
    param_1[0xd] = (char)(uVar37 >> 0x28);
    param_1[0xe] = (char)(uVar37 >> 0x30);
    param_1[0xf] = (char)(uVar37 >> 0x38);
    param_1[0x10] = ((byte)uVar20 & 0x1f) << 1;
    param_1[0x11] = ((byte)uVar21 & 0x1f) << 1;
    param_1[0x12] = ((byte)uVar22 & 0x1f) << 1;
    param_1[0x13] = ((byte)uVar23 & 0x1f) << 1;
    param_1[0x14] = ((byte)uVar24 & 0x1f) << 1;
    param_1[0x15] = ((byte)uVar25 & 0x1f) << 1;
    param_1[0x16] = ((byte)uVar26 & 0x1f) << 1;
    param_1[0x17] = ((byte)uVar27 & 0x1f) << 1;
    param_1[0x18] = (char)uVar36;
    param_1[0x19] = (char)(uVar36 >> 8);
    param_1[0x1a] = (char)(uVar36 >> 0x10);
    param_1[0x1b] = (char)(uVar36 >> 0x18);
    param_1[0x1c] = (char)(uVar36 >> 0x20);
    param_1[0x1d] = (char)(uVar36 >> 0x28);
    param_1[0x1e] = (char)(uVar36 >> 0x30);
    param_1[0x1f] = (char)(uVar36 >> 0x38);
    param_1 = param_1 + 0x20;
    *pbVar1 = (byte)(uVar4 >> 4) & 0x3e;
    pbVar1[1] = (byte)(uVar5 >> 4) & 0x3e;
    pbVar1[2] = (byte)(uVar6 >> 4) & 0x3e;
    pbVar1[3] = (byte)(uVar7 >> 4) & 0x3e;
    pbVar1[4] = (byte)(uVar8 >> 4) & 0x3e;
    pbVar1[5] = (byte)(uVar9 >> 4) & 0x3e;
    pbVar1[6] = (byte)(uVar10 >> 4) & 0x3e;
    pbVar1[7] = (byte)(uVar11 >> 4) & 0x3e;
    pbVar1[8] = (byte)uVar38;
    pbVar1[9] = (byte)(uVar38 >> 8);
    pbVar1[10] = (byte)(uVar38 >> 0x10);
    pbVar1[0xb] = (byte)(uVar38 >> 0x18);
    pbVar1[0xc] = (byte)(uVar38 >> 0x20);
    pbVar1[0xd] = (byte)(uVar38 >> 0x28);
    pbVar1[0xe] = (byte)(uVar38 >> 0x30);
    pbVar1[0xf] = (byte)(uVar38 >> 0x38);
    pbVar1[0x10] = (byte)(uVar20 >> 4) & 0x3e;
    pbVar1[0x11] = (byte)(uVar21 >> 4) & 0x3e;
    pbVar1[0x12] = (byte)(uVar22 >> 4) & 0x3e;
    pbVar1[0x13] = (byte)(uVar23 >> 4) & 0x3e;
    pbVar1[0x14] = (byte)(uVar24 >> 4) & 0x3e;
    pbVar1[0x15] = (byte)(uVar25 >> 4) & 0x3e;
    pbVar1[0x16] = (byte)(uVar26 >> 4) & 0x3e;
    pbVar1[0x17] = (byte)(uVar27 >> 4) & 0x3e;
    pbVar1[0x18] = (byte)uVar39;
    pbVar1[0x19] = (byte)(uVar39 >> 8);
    pbVar1[0x1a] = (byte)(uVar39 >> 0x10);
    pbVar1[0x1b] = (byte)(uVar39 >> 0x18);
    pbVar1[0x1c] = (byte)(uVar39 >> 0x20);
    pbVar1[0x1d] = (byte)(uVar39 >> 0x28);
    pbVar1[0x1e] = (byte)(uVar39 >> 0x30);
    pbVar1[0x1f] = (byte)(uVar39 >> 0x38);
    pbVar1 = pbVar1 + 0x20;
    *pbVar2 = (byte)(uVar4 >> 9) & 0x3e;
    pbVar2[1] = (byte)(uVar5 >> 9) & 0x3e;
    pbVar2[2] = (byte)(uVar6 >> 9) & 0x3e;
    pbVar2[3] = (byte)(uVar7 >> 9) & 0x3e;
    pbVar2[4] = (byte)(uVar8 >> 9) & 0x3e;
    pbVar2[5] = (byte)(uVar9 >> 9) & 0x3e;
    pbVar2[6] = (byte)(uVar10 >> 9) & 0x3e;
    pbVar2[7] = (byte)(uVar11 >> 9) & 0x3e;
    pbVar2[8] = (byte)uVar40;
    pbVar2[9] = (byte)(uVar40 >> 8);
    pbVar2[10] = (byte)(uVar40 >> 0x10);
    pbVar2[0xb] = (byte)(uVar40 >> 0x18);
    pbVar2[0xc] = (byte)(uVar40 >> 0x20);
    pbVar2[0xd] = (byte)(uVar40 >> 0x28);
    pbVar2[0xe] = (byte)(uVar40 >> 0x30);
    pbVar2[0xf] = (byte)(uVar40 >> 0x38);
    pbVar2[0x10] = (byte)(uVar20 >> 9) & 0x3e;
    pbVar2[0x11] = (byte)(uVar21 >> 9) & 0x3e;
    pbVar2[0x12] = (byte)(uVar22 >> 9) & 0x3e;
    pbVar2[0x13] = (byte)(uVar23 >> 9) & 0x3e;
    pbVar2[0x14] = (byte)(uVar24 >> 9) & 0x3e;
    pbVar2[0x15] = (byte)(uVar25 >> 9) & 0x3e;
    pbVar2[0x16] = (byte)(uVar26 >> 9) & 0x3e;
    pbVar2[0x17] = (byte)(uVar27 >> 9) & 0x3e;
    pbVar2[0x18] = (byte)uVar41;
    pbVar2[0x19] = (byte)(uVar41 >> 8);
    pbVar2[0x1a] = (byte)(uVar41 >> 0x10);
    pbVar2[0x1b] = (byte)(uVar41 >> 0x18);
    pbVar2[0x1c] = (byte)(uVar41 >> 0x20);
    pbVar2[0x1d] = (byte)(uVar41 >> 0x28);
    pbVar2[0x1e] = (byte)(uVar41 >> 0x30);
    pbVar2[0x1f] = (byte)(uVar41 >> 0x38);
    pbVar2 = pbVar2 + 0x20;
    iVar3 = iVar3 + -0x20;
  } while (iVar3 != 0);
  return;
}


