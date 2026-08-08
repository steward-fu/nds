/*
 * Ghidra decompilation
 *
 * Function : render_scanline_set_visibility_8bpp
 * Address  : 00131860
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_set_visibility_8bpp(uint *param_1,long param_2,uint param_3,ulong param_4)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar23;
  byte bVar24;
  uint uVar21;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar32;
  byte bVar33;
  uint uVar31;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar43;
  byte bVar44;
  uint uVar40;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  ulong uVar41;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar62;
  byte bVar63;
  uint uVar59;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  ulong uVar60;
  byte bVar68;
  byte bVar69;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  uint uVar70;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar82;
  byte bVar83;
  uint uVar79;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  ulong uVar80;
  byte bVar88;
  int iVar89;
  uint uVar90;
  int iVar91;
  uint uVar92;
  int iVar93;
  uint7 uVar94;
  int iVar96;
  ulong uVar95;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  uint uVar107;
  int iVar108;
  uint uVar109;
  int iVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  uint uVar120;
  uint uVar121;
  uint uVar122;
  uint uVar123;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  uint uVar127;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  uint uVar131;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  uint uVar135;
  uint uVar136;
  uint uVar137;
  uint uVar138;
  uint uVar139;
  uint uVar140;
  uint uVar141;
  uint uVar142;
  undefined8 uVar22;
  undefined8 uVar42;
  undefined8 uVar61;
  undefined8 uVar81;
  
  lVar4 = ___stack_chk_guard;
  uVar5 = (uint)(param_4 >> 3) & 0x1fffffff;
  if (param_3 >> 3 <= uVar5) {
    param_3 = param_3 >> 3;
    uVar6 = (ulong)((uVar5 + 1) - param_3);
    uVar11 = (ulong)param_3;
    puVar10 = (undefined8 *)(param_2 + uVar11);
    bVar3 = param_1 < (uint *)(param_2 + uVar6 + uVar11);
    uVar2 = (uVar5 + 1) - param_3;
    if ((puVar10 < param_1 + uVar6 * 2 && bVar3 || uVar5 - param_3 < 0xe) ||
        (puVar10 >= param_1 + uVar6 * 2 || !bVar3) && uVar5 - param_3 == 0xe) {
      do {
        uVar2 = *param_1;
        puVar7 = param_1 + 1;
        param_1 = param_1 + 2;
        uVar2 = (*puVar7 | *puVar7 << 4) & 0xf0f0f0f0 | (uVar2 | uVar2 >> 4) & 0xf0f0f0f;
        uVar2 = uVar2 | uVar2 >> 2;
        uVar2 = (uVar2 | uVar2 >> 1) & 0x11111111;
        uVar2 = uVar2 | uVar2 >> 7;
        *(byte *)(param_2 + uVar11) = (byte)uVar2 | (byte)(uVar2 >> 0xe);
        uVar11 = uVar11 + 1;
      } while ((uint)uVar11 <= uVar5);
    }
    else {
      puVar7 = param_1;
      do {
        uVar127 = *puVar7;
        uVar131 = puVar7[1];
        uVar128 = puVar7[2];
        uVar132 = puVar7[3];
        uVar129 = puVar7[4];
        uVar133 = puVar7[5];
        uVar130 = puVar7[6];
        uVar134 = puVar7[7];
        puVar1 = puVar7 + 0x20;
        uVar119 = puVar7[0x10];
        uVar123 = puVar7[0x11];
        uVar120 = puVar7[0x12];
        uVar124 = puVar7[0x13];
        uVar121 = puVar7[0x14];
        uVar125 = puVar7[0x15];
        uVar122 = puVar7[0x16];
        uVar126 = puVar7[0x17];
        uVar135 = puVar7[8];
        uVar139 = puVar7[9];
        uVar136 = puVar7[10];
        uVar140 = puVar7[0xb];
        uVar137 = puVar7[0xc];
        uVar141 = puVar7[0xd];
        uVar138 = puVar7[0xe];
        uVar142 = puVar7[0xf];
        uVar111 = puVar7[0x18];
        uVar115 = puVar7[0x19];
        uVar112 = puVar7[0x1a];
        uVar116 = puVar7[0x1b];
        uVar113 = puVar7[0x1c];
        uVar117 = puVar7[0x1d];
        uVar114 = puVar7[0x1e];
        uVar118 = puVar7[0x1f];
        uVar79 = uVar137 >> 4;
        iVar105 = uVar139 << 4;
        iVar106 = uVar140 << 4;
        iVar108 = uVar141 << 4;
        iVar110 = uVar142 << 4;
        uVar59 = uVar129 >> 4;
        iVar101 = uVar131 << 4;
        iVar102 = uVar132 << 4;
        iVar103 = uVar133 << 4;
        iVar104 = uVar134 << 4;
        uVar40 = uVar121 >> 4;
        iVar97 = uVar123 << 4;
        iVar98 = uVar124 << 4;
        iVar99 = uVar125 << 4;
        iVar100 = uVar126 << 4;
        uVar90 = uVar111 >> 4;
        bVar15 = (byte)(uVar111 >> 0x18);
        uVar92 = uVar112 >> 4;
        bVar19 = (byte)(uVar112 >> 0x18);
        uVar21 = uVar113 >> 4;
        iVar89 = uVar115 << 4;
        iVar91 = uVar116 << 4;
        iVar93 = uVar117 << 4;
        iVar96 = uVar118 << 4;
        bVar12 = (byte)(uVar135 >> 0x18);
        bVar13 = (byte)(uVar136 >> 0x18);
        bVar26 = (byte)(uVar137 >> 0x18);
        bVar20 = (byte)(uVar138 >> 0x18);
        bVar14 = (byte)(uVar127 >> 0x18);
        bVar16 = (byte)(uVar128 >> 0x18);
        bVar27 = (byte)(uVar129 >> 0x18);
        bVar23 = (byte)(uVar130 >> 0x18);
        bVar17 = (byte)(uVar119 >> 0x18);
        bVar18 = (byte)(uVar120 >> 0x18);
        bVar28 = (byte)(uVar121 >> 0x18);
        bVar24 = (byte)(uVar122 >> 0x18);
        bVar29 = (byte)(uVar113 >> 0x18);
        bVar25 = (byte)(uVar114 >> 0x18);
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar105 >> 0x18) |
                                                 (byte)(uVar139 >> 0x18),
                                                 (byte)((uint)iVar105 >> 0x10) |
                                                 (byte)(uVar139 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar105 | (byte)uVar139) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar105 >> 8) | (byte)(uVar139 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar70 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139)) &
                 0xf0f0ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar106 >> 0x18) |
                                                 (byte)(uVar140 >> 0x18),
                                                 (byte)((uint)iVar106 >> 0x10) |
                                                 (byte)(uVar140 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar106 | (byte)uVar140) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar106 >> 8) | (byte)(uVar140 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar107 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0f0ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar108 >> 0x18) |
                                                 (byte)(uVar141 >> 0x18),
                                                 (byte)((uint)iVar108 >> 0x10) |
                                                 (byte)(uVar141 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar108 | (byte)uVar141) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar108 >> 8) | (byte)(uVar141 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar109 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0f0ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar110 >> 0x18) |
                                                 (byte)(uVar142 >> 0x18),
                                                 (byte)((uint)iVar110 >> 0x10) |
                                                 (byte)(uVar142 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar110 | (byte)uVar142) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar110 >> 8) | (byte)(uVar142 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar142 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0f0ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar101 >> 0x18) |
                                                 (byte)(uVar131 >> 0x18),
                                                 (byte)((uint)iVar101 >> 0x10) |
                                                 (byte)(uVar131 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar101 | (byte)uVar131) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar101 >> 8) | (byte)(uVar131 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar140 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0f0ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar102 >> 0x18) |
                                                 (byte)(uVar132 >> 0x18),
                                                 (byte)((uint)iVar102 >> 0x10) |
                                                 (byte)(uVar132 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar102 | (byte)uVar132) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar102 >> 8) | (byte)(uVar132 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar141 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0f0ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar103 >> 0x18) |
                                                 (byte)(uVar133 >> 0x18),
                                                 (byte)((uint)iVar103 >> 0x10) |
                                                 (byte)(uVar133 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar103 | (byte)uVar133) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar103 >> 8) | (byte)(uVar133 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar133 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0f0ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar104 >> 0x18) |
                                                 (byte)(uVar134 >> 0x18),
                                                 (byte)((uint)iVar104 >> 0x10) |
                                                 (byte)(uVar134 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar104 | (byte)uVar134) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar104 >> 8) | (byte)(uVar134 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar134 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0f0ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar97 >> 0x18) |
                                                 (byte)(uVar123 >> 0x18),
                                                 (byte)((uint)iVar97 >> 0x10) |
                                                 (byte)(uVar123 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar97 | (byte)uVar123) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar97 >> 8) | (byte)(uVar123 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar131 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0f0ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar98 >> 0x18) |
                                                 (byte)(uVar124 >> 0x18),
                                                 (byte)((uint)iVar98 >> 0x10) |
                                                 (byte)(uVar124 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar98 | (byte)uVar124) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar98 >> 8) | (byte)(uVar124 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar132 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0f0ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar99 >> 0x18) |
                                                 (byte)(uVar125 >> 0x18),
                                                 (byte)((uint)iVar99 >> 0x10) |
                                                 (byte)(uVar125 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar99 | (byte)uVar125) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar99 >> 8) | (byte)(uVar125 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar125 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0f0ffff;
        uVar139 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar100 >> 0x18) |
                                                  (byte)(uVar126 >> 0x18),
                                                  (byte)((uint)iVar100 >> 0x10) |
                                                  (byte)(uVar126 >> 0x10)) << 0x10) >> 8),
                           (byte)iVar100 | (byte)uVar126) & 0xfffffff0;
        uVar31 = CONCAT22((short)(uVar139 >> 0x10),
                          CONCAT11((byte)((uint)iVar100 >> 8) | (byte)(uVar126 >> 8),(char)uVar139))
                 & 0xfffff0ff;
        uVar126 = CONCAT13((char)(uVar31 >> 0x18),CONCAT12((char)(uVar139 >> 0x10),(short)uVar31)) &
                  0xf0f0ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar89 >> 0x18) |
                                                 (byte)(uVar115 >> 0x18),
                                                 (byte)((uint)iVar89 >> 0x10) |
                                                 (byte)(uVar115 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar89 | (byte)uVar115) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar89 >> 8) | (byte)(uVar115 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar123 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0f0ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11((byte)((uint)iVar91 >> 0x18) |
                                                 (byte)(uVar116 >> 0x18),
                                                 (byte)((uint)iVar91 >> 0x10) |
                                                 (byte)(uVar116 >> 0x10)) << 0x10) >> 8),
                          (byte)iVar91 | (byte)uVar116) & 0xfffffff0;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)((uint)iVar91 >> 8) | (byte)(uVar116 >> 8),(char)uVar31))
                  & 0xfffff0ff;
        uVar124 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0f0ffff;
        uVar11 = CONCAT71((int7)(((ulong)CONCAT15((byte)((uint)iVar96 >> 0x18) |
                                                  (byte)(uVar118 >> 0x18),
                                                  CONCAT14((byte)((uint)iVar96 >> 0x10) |
                                                           (byte)(uVar118 >> 0x10),
                                                           CONCAT13((byte)((uint)iVar96 >> 8) |
                                                                    (byte)(uVar118 >> 8),
                                                                    CONCAT12((byte)iVar96 |
                                                                             (byte)uVar118,
                                                                             CONCAT11((byte)((uint)
                                                  iVar93 >> 0x18) | (byte)(uVar117 >> 0x18),
                                                  (byte)((uint)iVar93 >> 0x10) |
                                                  (byte)(uVar117 >> 0x10)))))) << 0x10) >> 8),
                          (byte)iVar93 | (byte)uVar117) & 0xfffffffffffffff0;
        uVar6 = CONCAT62((int6)(uVar11 >> 0x10),
                         CONCAT11((byte)((uint)iVar93 >> 8) | (byte)(uVar117 >> 8),(char)uVar11)) &
                0xfffffffffffff0ff;
        uVar11 = CONCAT53((int5)(uVar6 >> 0x18),CONCAT12((char)(uVar11 >> 0x10),(short)uVar6)) &
                 0xfffffffffff0ffff;
        uVar6 = CONCAT44((int)(uVar11 >> 0x20),CONCAT13((char)(uVar6 >> 0x18),(int3)uVar11)) &
                0xfffffffff0ffffff;
        uVar11 = CONCAT35((int3)(uVar6 >> 0x28),CONCAT14((char)(uVar11 >> 0x20),(int)uVar6)) &
                 0xfffffff0ffffffff;
        uVar6 = CONCAT26((short)(uVar11 >> 0x30),CONCAT15((char)(uVar6 >> 0x28),(int5)uVar11)) &
                0xfffff0ffffffffff;
        uVar95 = CONCAT17((char)(uVar6 >> 0x38),CONCAT16((char)(uVar11 >> 0x30),(int6)uVar6)) &
                 0xf0f0ffffffffffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11(bVar12 >> 4 | bVar12,
                                                 (byte)(ushort)(uVar135 >> 0x14) |
                                                 (byte)(uVar135 >> 0x10)) << 0x10) >> 8),
                          (byte)(uVar135 >> 4) | (byte)uVar135) & 0xffffff0f;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)(uint3)(uVar135 >> 0xc) | (byte)(uVar135 >> 8),
                                    (char)uVar31)) & 0xffff0fff;
        uVar116 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0fffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11(bVar13 >> 4 | bVar13,
                                                 (byte)(ushort)(uVar136 >> 0x14) |
                                                 (byte)(uVar136 >> 0x10)) << 0x10) >> 8),
                          (byte)(uVar136 >> 4) | (byte)uVar136) & 0xffffff0f;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)(uint3)(uVar136 >> 0xc) | (byte)(uVar136 >> 8),
                                    (char)uVar31)) & 0xffff0fff;
        uVar117 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0fffff;
        uVar11 = CONCAT71((int7)(((ulong)CONCAT15(bVar20 >> 4 | bVar20,
                                                  CONCAT14((byte)((uint3)(uVar138 >> 0xc) >> 8) |
                                                           (byte)(uVar138 >> 0x10),
                                                           CONCAT13((byte)((uVar138 >> 4) >> 8) |
                                                                    (byte)(uVar138 >> 8),
                                                                    CONCAT12((byte)(uVar138 >> 4) |
                                                                             (byte)uVar138,
                                                                             CONCAT11(bVar26 >> 4 |
                                                                                      bVar26,(byte)(
                                                  uVar79 >> 0x10) | (byte)(uVar137 >> 0x10)))))) <<
                                 0x10) >> 8),(byte)uVar79 | (byte)uVar137) & 0xffffffffffffff0f;
        uVar6 = CONCAT62((int6)(uVar11 >> 0x10),
                         CONCAT11((byte)(uVar79 >> 8) | (byte)(uVar137 >> 8),(char)uVar11)) &
                0xffffffffffff0fff;
        uVar11 = CONCAT53((int5)(uVar6 >> 0x18),CONCAT12((char)(uVar11 >> 0x10),(short)uVar6)) &
                 0xffffffffff0fffff;
        uVar41 = CONCAT44((int)(uVar11 >> 0x20),CONCAT13((char)(uVar6 >> 0x18),(int3)uVar11)) &
                 0xffffffff0fffffff;
        uVar6 = CONCAT35((int3)(uVar41 >> 0x28),CONCAT14((char)(uVar11 >> 0x20),(int)uVar41)) &
                0xffffff0fffffffff;
        uVar11 = CONCAT26((short)(uVar6 >> 0x30),CONCAT15((char)(uVar41 >> 0x28),(int5)uVar6)) &
                 0xffff0fffffffffff;
        uVar80 = CONCAT17((char)(uVar11 >> 0x38),CONCAT16((char)(uVar6 >> 0x30),(int6)uVar11)) &
                 0xf0fffffffffffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11(bVar14 >> 4 | bVar14,
                                                 (byte)(ushort)(uVar127 >> 0x14) |
                                                 (byte)(uVar127 >> 0x10)) << 0x10) >> 8),
                          (byte)(uVar127 >> 4) | (byte)uVar127) & 0xffffff0f;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)(uint3)(uVar127 >> 0xc) | (byte)(uVar127 >> 8),
                                    (char)uVar31)) & 0xffff0fff;
        uVar79 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139)) &
                 0xf0fffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11(bVar16 >> 4 | bVar16,
                                                 (byte)(ushort)(uVar128 >> 0x14) |
                                                 (byte)(uVar128 >> 0x10)) << 0x10) >> 8),
                          (byte)(uVar128 >> 4) | (byte)uVar128) & 0xffffff0f;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)(uint3)(uVar128 >> 0xc) | (byte)(uVar128 >> 8),
                                    (char)uVar31)) & 0xffff0fff;
        uVar115 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0xf0fffff;
        uVar6 = CONCAT71((int7)(((ulong)CONCAT15(bVar23 >> 4 | bVar23,
                                                 CONCAT14((byte)((uint3)(uVar130 >> 0xc) >> 8) |
                                                          (byte)(uVar130 >> 0x10),
                                                          CONCAT13((byte)((uVar130 >> 4) >> 8) |
                                                                   (byte)(uVar130 >> 8),
                                                                   CONCAT12((byte)(uVar130 >> 4) |
                                                                            (byte)uVar130,
                                                                            CONCAT11(bVar27 >> 4 |
                                                                                     bVar27,(byte)(
                                                  uVar59 >> 0x10) | (byte)(uVar129 >> 0x10)))))) <<
                                0x10) >> 8),(byte)uVar59 | (byte)uVar129) & 0xffffffffffffff0f;
        uVar11 = CONCAT62((int6)(uVar6 >> 0x10),
                          CONCAT11((byte)(uVar59 >> 8) | (byte)(uVar129 >> 8),(char)uVar6)) &
                 0xffffffffffff0fff;
        uVar6 = CONCAT53((int5)(uVar11 >> 0x18),CONCAT12((char)(uVar6 >> 0x10),(short)uVar11)) &
                0xffffffffff0fffff;
        uVar11 = CONCAT44((int)(uVar6 >> 0x20),CONCAT13((char)(uVar11 >> 0x18),(int3)uVar6)) &
                 0xffffffff0fffffff;
        uVar6 = CONCAT35((int3)(uVar11 >> 0x28),CONCAT14((char)(uVar6 >> 0x20),(int)uVar11)) &
                0xffffff0fffffffff;
        uVar11 = CONCAT26((short)(uVar6 >> 0x30),CONCAT15((char)(uVar11 >> 0x28),(int5)uVar6)) &
                 0xffff0fffffffffff;
        uVar60 = CONCAT17((char)(uVar11 >> 0x38),CONCAT16((char)(uVar6 >> 0x30),(int6)uVar11)) &
                 0xf0fffffffffffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11(bVar17 >> 4 | bVar17,
                                                 (byte)(ushort)(uVar119 >> 0x14) |
                                                 (byte)(uVar119 >> 0x10)) << 0x10) >> 8),
                          (byte)(uVar119 >> 4) | (byte)uVar119) & 0xffffff0f;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)(uint3)(uVar119 >> 0xc) | (byte)(uVar119 >> 8),
                                    (char)uVar31)) & 0xffff0fff;
        uVar31 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139)) &
                 0xf0fffff;
        uVar139 = CONCAT31((int3)(((uint)CONCAT11(bVar18 >> 4 | bVar18,
                                                  (byte)(ushort)(uVar120 >> 0x14) |
                                                  (byte)(uVar120 >> 0x10)) << 0x10) >> 8),
                           (byte)(uVar120 >> 4) | (byte)uVar120) & 0xffffff0f;
        uVar59 = CONCAT22((short)(uVar139 >> 0x10),
                          CONCAT11((byte)(uint3)(uVar120 >> 0xc) | (byte)(uVar120 >> 8),
                                   (char)uVar139)) & 0xffff0fff;
        uVar139 = CONCAT13((char)(uVar59 >> 0x18),CONCAT12((char)(uVar139 >> 0x10),(short)uVar59)) &
                  0xf0fffff;
        uVar11 = CONCAT71((int7)(((ulong)CONCAT15(bVar24 >> 4 | bVar24,
                                                  CONCAT14((byte)((uint3)(uVar122 >> 0xc) >> 8) |
                                                           (byte)(uVar122 >> 0x10),
                                                           CONCAT13((byte)((uVar122 >> 4) >> 8) |
                                                                    (byte)(uVar122 >> 8),
                                                                    CONCAT12((byte)(uVar122 >> 4) |
                                                                             (byte)uVar122,
                                                                             CONCAT11(bVar28 >> 4 |
                                                                                      bVar28,(byte)(
                                                  uVar40 >> 0x10) | (byte)(uVar121 >> 0x10)))))) <<
                                 0x10) >> 8),(byte)uVar40 | (byte)uVar121) & 0xffffffffffffff0f;
        uVar41 = CONCAT62((int6)(uVar11 >> 0x10),
                          CONCAT11((byte)(uVar40 >> 8) | (byte)(uVar121 >> 8),(char)uVar11)) &
                 0xffffffffffff0fff;
        uVar6 = CONCAT53((int5)(uVar41 >> 0x18),CONCAT12((char)(uVar11 >> 0x10),(short)uVar41)) &
                0xffffffffff0fffff;
        uVar11 = CONCAT44((int)(uVar6 >> 0x20),CONCAT13((char)(uVar41 >> 0x18),(int3)uVar6)) &
                 0xffffffff0fffffff;
        uVar6 = CONCAT35((int3)(uVar11 >> 0x28),CONCAT14((char)(uVar6 >> 0x20),(int)uVar11)) &
                0xffffff0fffffffff;
        uVar11 = CONCAT26((short)(uVar6 >> 0x30),CONCAT15((char)(uVar11 >> 0x28),(int5)uVar6)) &
                 0xffff0fffffffffff;
        uVar41 = CONCAT17((char)(uVar11 >> 0x38),CONCAT16((char)(uVar6 >> 0x30),(int6)uVar11)) &
                 0xf0fffffffffffff;
        uVar11 = CONCAT71((int7)(((ulong)CONCAT15(bVar25 >> 4 | bVar25,
                                                  CONCAT14((byte)((uint3)(uVar114 >> 0xc) >> 8) |
                                                           (byte)(uVar114 >> 0x10),
                                                           CONCAT13((byte)((uVar114 >> 4) >> 8) |
                                                                    (byte)(uVar114 >> 8),
                                                                    CONCAT12((byte)(uVar114 >> 4) |
                                                                             (byte)uVar114,
                                                                             CONCAT11(bVar29 >> 4 |
                                                                                      bVar29,(byte)(
                                                  uVar21 >> 0x10) | (byte)(uVar113 >> 0x10)))))) <<
                                 0x10) >> 8),(byte)uVar21 | (byte)uVar113) & 0xffffffffffffff0f;
        uVar6 = CONCAT62((int6)(uVar11 >> 0x10),
                         CONCAT11((byte)(uVar21 >> 8) | (byte)(uVar113 >> 8),(char)uVar11)) &
                0xffffffffffff0fff;
        uVar11 = CONCAT53((int5)(uVar6 >> 0x18),CONCAT12((char)(uVar11 >> 0x10),(short)uVar6)) &
                 0xffffffffff0fffff;
        uVar6 = CONCAT44((int)(uVar11 >> 0x20),CONCAT13((char)(uVar6 >> 0x18),(int3)uVar11)) &
                0xffffffff0fffffff;
        uVar11 = CONCAT35((int3)(uVar6 >> 0x28),CONCAT14((char)(uVar11 >> 0x20),(int)uVar6)) &
                 0xffffff0fffffffff;
        uVar6 = CONCAT26((short)(uVar11 >> 0x30),CONCAT15((char)(uVar6 >> 0x28),(int5)uVar11)) &
                0xffff0fffffffffff;
        uVar11 = CONCAT17((char)(uVar6 >> 0x38),CONCAT16((char)(uVar11 >> 0x30),(int6)uVar6)) &
                 0xf0fffffffffffff;
        bVar69 = (byte)uVar116 | (byte)uVar70;
        bVar71 = (byte)(uVar116 >> 8) | (byte)(uVar70 >> 8);
        bVar72 = (byte)(uVar116 >> 0x10) | (byte)(uVar70 >> 0x10);
        bVar73 = (byte)(uVar116 >> 0x18) | (byte)(uVar70 >> 0x18);
        uVar116 = CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar69)));
        bVar74 = (byte)uVar117 | (byte)uVar107;
        bVar75 = (byte)(uVar117 >> 8) | (byte)(uVar107 >> 8);
        bVar76 = (byte)(uVar117 >> 0x10) | (byte)(uVar107 >> 0x10);
        bVar77 = (byte)(uVar117 >> 0x18) | (byte)(uVar107 >> 0x18);
        uVar117 = CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74)));
        bVar78 = (byte)uVar80 | (byte)uVar109;
        bVar82 = (byte)(uVar80 >> 8) | (byte)(uVar109 >> 8);
        bVar83 = (byte)(uVar80 >> 0x10) | (byte)(uVar109 >> 0x10);
        bVar84 = (byte)(uVar80 >> 0x18) | (byte)(uVar109 >> 0x18);
        uVar70 = CONCAT13(bVar84,CONCAT12(bVar83,CONCAT11(bVar82,bVar78)));
        bVar85 = (byte)(uVar80 >> 0x20) | (byte)uVar142;
        bVar86 = (byte)(uVar80 >> 0x28) | (byte)(uVar142 >> 8);
        bVar87 = (byte)(uVar80 >> 0x30) | (byte)(uVar142 >> 0x10);
        bVar88 = (byte)(uVar80 >> 0x38) | (byte)(uVar142 >> 0x18);
        uVar81 = CONCAT17(bVar88,CONCAT16(bVar87,CONCAT15(bVar86,CONCAT14(bVar85,uVar70))));
        bVar50 = (byte)uVar79 | (byte)uVar140;
        bVar51 = (byte)(uVar79 >> 8) | (byte)(uVar140 >> 8);
        bVar52 = (byte)(uVar79 >> 0x10) | (byte)(uVar140 >> 0x10);
        bVar53 = (byte)(uVar79 >> 0x18) | (byte)(uVar140 >> 0x18);
        uVar40 = CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar50)));
        bVar54 = (byte)uVar115 | (byte)uVar141;
        bVar55 = (byte)(uVar115 >> 8) | (byte)(uVar141 >> 8);
        bVar56 = (byte)(uVar115 >> 0x10) | (byte)(uVar141 >> 0x10);
        bVar57 = (byte)(uVar115 >> 0x18) | (byte)(uVar141 >> 0x18);
        uVar79 = CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)));
        bVar58 = (byte)uVar60 | (byte)uVar133;
        bVar62 = (byte)(uVar60 >> 8) | (byte)(uVar133 >> 8);
        bVar63 = (byte)(uVar60 >> 0x10) | (byte)(uVar133 >> 0x10);
        bVar64 = (byte)(uVar60 >> 0x18) | (byte)(uVar133 >> 0x18);
        uVar115 = CONCAT13(bVar64,CONCAT12(bVar63,CONCAT11(bVar62,bVar58)));
        bVar65 = (byte)(uVar60 >> 0x20) | (byte)uVar134;
        bVar66 = (byte)(uVar60 >> 0x28) | (byte)(uVar134 >> 8);
        bVar67 = (byte)(uVar60 >> 0x30) | (byte)(uVar134 >> 0x10);
        bVar68 = (byte)(uVar60 >> 0x38) | (byte)(uVar134 >> 0x18);
        uVar61 = CONCAT17(bVar68,CONCAT16(bVar67,CONCAT15(bVar66,CONCAT14(bVar65,uVar115))));
        bVar30 = (byte)uVar31 | (byte)uVar131;
        bVar32 = (byte)(uVar31 >> 8) | (byte)(uVar131 >> 8);
        bVar33 = (byte)(uVar31 >> 0x10) | (byte)(uVar131 >> 0x10);
        bVar34 = (byte)(uVar31 >> 0x18) | (byte)(uVar131 >> 0x18);
        uVar31 = CONCAT13(bVar34,CONCAT12(bVar33,CONCAT11(bVar32,bVar30)));
        bVar35 = (byte)uVar139 | (byte)uVar132;
        bVar36 = (byte)(uVar139 >> 8) | (byte)(uVar132 >> 8);
        bVar37 = (byte)(uVar139 >> 0x10) | (byte)(uVar132 >> 0x10);
        bVar38 = (byte)(uVar139 >> 0x18) | (byte)(uVar132 >> 0x18);
        uVar139 = CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar36,bVar35)));
        bVar39 = (byte)uVar41 | (byte)uVar125;
        bVar43 = (byte)(uVar41 >> 8) | (byte)(uVar125 >> 8);
        bVar44 = (byte)(uVar41 >> 0x10) | (byte)(uVar125 >> 0x10);
        bVar45 = (byte)(uVar41 >> 0x18) | (byte)(uVar125 >> 0x18);
        uVar59 = CONCAT13(bVar45,CONCAT12(bVar44,CONCAT11(bVar43,bVar39)));
        bVar46 = (byte)(uVar41 >> 0x20) | (byte)uVar126;
        bVar47 = (byte)(uVar41 >> 0x28) | (byte)(uVar126 >> 8);
        bVar48 = (byte)(uVar41 >> 0x30) | (byte)(uVar126 >> 0x10);
        bVar49 = (byte)(uVar41 >> 0x38) | (byte)(uVar126 >> 0x18);
        uVar42 = CONCAT17(bVar49,CONCAT16(bVar48,CONCAT15(bVar47,CONCAT14(bVar46,uVar59))));
        bVar12 = ((byte)uVar90 | (byte)uVar111) & 0xf | (byte)uVar123;
        bVar13 = ((byte)(uVar90 >> 8) | (byte)(uVar111 >> 8)) & 0xf | (byte)(uVar123 >> 8);
        bVar14 = ((byte)(uVar90 >> 0x10) | (byte)(uVar111 >> 0x10)) & 0xf | (byte)(uVar123 >> 0x10);
        bVar15 = bVar15 >> 4 | bVar15 & 0xf | (byte)(uVar123 >> 0x18);
        bVar16 = ((byte)uVar92 | (byte)uVar112) & 0xf | (byte)uVar124;
        bVar17 = ((byte)(uVar92 >> 8) | (byte)(uVar112 >> 8)) & 0xf | (byte)(uVar124 >> 8);
        bVar18 = ((byte)(uVar92 >> 0x10) | (byte)(uVar112 >> 0x10)) & 0xf | (byte)(uVar124 >> 0x10);
        bVar19 = bVar19 >> 4 | bVar19 & 0xf | (byte)(uVar124 >> 0x18);
        bVar20 = (byte)uVar11 | (byte)uVar95;
        bVar23 = (byte)(uVar11 >> 8) | (byte)(uVar95 >> 8);
        bVar24 = (byte)(uVar11 >> 0x10) | (byte)(uVar95 >> 0x10);
        bVar25 = (byte)(uVar11 >> 0x18) | (byte)(uVar95 >> 0x18);
        uVar21 = CONCAT13(bVar25,CONCAT12(bVar24,CONCAT11(bVar23,bVar20)));
        bVar26 = (byte)(uVar11 >> 0x20) | (byte)(uVar95 >> 0x20);
        bVar27 = (byte)(uVar11 >> 0x28) | (byte)(uVar95 >> 0x28);
        bVar28 = (byte)(uVar11 >> 0x30) | (byte)(uVar95 >> 0x30);
        bVar29 = (byte)(uVar11 >> 0x38) | (byte)(uVar95 >> 0x38);
        uVar22 = CONCAT17(bVar29,CONCAT16(bVar28,CONCAT15(bVar27,CONCAT14(bVar26,uVar21))));
        uVar90 = CONCAT13(bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar12)));
        uVar92 = CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16)));
        uVar21 = uVar21 >> 2;
        uVar123 = (uint)((ulong)uVar22 >> 0x22);
        bVar69 = (byte)(uVar116 >> 2) | bVar69;
        bVar71 = (byte)(uint3)(uVar116 >> 10) | bVar71;
        bVar72 = (byte)(ushort)(uVar116 >> 0x12) | bVar72;
        bVar73 = bVar73 >> 2 | bVar73;
        uVar141 = CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar69)));
        bVar74 = (byte)(uVar117 >> 2) | bVar74;
        bVar75 = (byte)(uint3)(uVar117 >> 10) | bVar75;
        bVar76 = (byte)(ushort)(uVar117 >> 0x12) | bVar76;
        bVar77 = bVar77 >> 2 | bVar77;
        uVar133 = CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74)));
        bVar78 = (byte)(uVar70 >> 2) | bVar78;
        bVar82 = (byte)(uint3)(uVar70 >> 10) | bVar82;
        bVar83 = (byte)(ushort)(uVar70 >> 0x12) | bVar83;
        bVar84 = bVar84 >> 2 | bVar84;
        bVar85 = (byte)(uint)((ulong)uVar81 >> 0x22) | bVar85;
        bVar86 = (byte)(uint3)((ulong)uVar81 >> 0x2a) | bVar86;
        bVar87 = (byte)(ushort)((ulong)uVar81 >> 0x32) | bVar87;
        bVar88 = bVar88 >> 2 | bVar88;
        uVar134 = CONCAT13(bVar88,CONCAT12(bVar87,CONCAT11(bVar86,bVar85)));
        bVar50 = (byte)(uVar40 >> 2) | bVar50;
        bVar51 = (byte)(uint3)(uVar40 >> 10) | bVar51;
        bVar52 = (byte)(ushort)(uVar40 >> 0x12) | bVar52;
        bVar53 = bVar53 >> 2 | bVar53;
        uVar125 = CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar50)));
        bVar54 = (byte)(uVar79 >> 2) | bVar54;
        bVar55 = (byte)(uint3)(uVar79 >> 10) | bVar55;
        bVar56 = (byte)(ushort)(uVar79 >> 0x12) | bVar56;
        bVar57 = bVar57 >> 2 | bVar57;
        uVar126 = CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)));
        bVar58 = (byte)(uVar115 >> 2) | bVar58;
        bVar62 = (byte)(uint3)(uVar115 >> 10) | bVar62;
        bVar63 = (byte)(ushort)(uVar115 >> 0x12) | bVar63;
        bVar64 = bVar64 >> 2 | bVar64;
        bVar65 = (byte)(uint)((ulong)uVar61 >> 0x22) | bVar65;
        bVar66 = (byte)(uint3)((ulong)uVar61 >> 0x2a) | bVar66;
        bVar67 = (byte)(ushort)((ulong)uVar61 >> 0x32) | bVar67;
        bVar68 = bVar68 >> 2 | bVar68;
        uVar140 = CONCAT13(bVar68,CONCAT12(bVar67,CONCAT11(bVar66,bVar65)));
        bVar30 = (byte)(uVar31 >> 2) | bVar30;
        bVar32 = (byte)(uint3)(uVar31 >> 10) | bVar32;
        bVar33 = (byte)(ushort)(uVar31 >> 0x12) | bVar33;
        bVar34 = bVar34 >> 2 | bVar34;
        uVar124 = CONCAT13(bVar34,CONCAT12(bVar33,CONCAT11(bVar32,bVar30)));
        bVar35 = (byte)(uVar139 >> 2) | bVar35;
        bVar36 = (byte)(uint3)(uVar139 >> 10) | bVar36;
        bVar37 = (byte)(ushort)(uVar139 >> 0x12) | bVar37;
        bVar38 = bVar38 >> 2 | bVar38;
        uVar131 = CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar36,bVar35)));
        bVar39 = (byte)(uVar59 >> 2) | bVar39;
        bVar43 = (byte)(uint3)(uVar59 >> 10) | bVar43;
        bVar44 = (byte)(ushort)(uVar59 >> 0x12) | bVar44;
        bVar45 = bVar45 >> 2 | bVar45;
        bVar46 = (byte)(uint)((ulong)uVar42 >> 0x22) | bVar46;
        bVar47 = (byte)(uint3)((ulong)uVar42 >> 0x2a) | bVar47;
        bVar48 = (byte)(ushort)((ulong)uVar42 >> 0x32) | bVar48;
        bVar49 = bVar49 >> 2 | bVar49;
        uVar132 = CONCAT13(bVar49,CONCAT12(bVar48,CONCAT11(bVar47,bVar46)));
        bVar12 = (byte)(uVar90 >> 2) | bVar12;
        bVar13 = (byte)(uint3)(uVar90 >> 10) | bVar13;
        bVar14 = (byte)(ushort)(uVar90 >> 0x12) | bVar14;
        bVar15 = bVar15 >> 2 | bVar15;
        bVar16 = (byte)(uVar92 >> 2) | bVar16;
        bVar17 = (byte)(uint3)(uVar92 >> 10) | bVar17;
        bVar18 = (byte)(ushort)(uVar92 >> 0x12) | bVar18;
        bVar19 = bVar19 >> 2 | bVar19;
        bVar20 = (byte)uVar21 | bVar20;
        bVar23 = (byte)(uVar21 >> 8) | bVar23;
        bVar24 = (byte)(uVar21 >> 0x10) | bVar24;
        bVar25 = bVar25 >> 2 | bVar25;
        bVar26 = (byte)uVar123 | bVar26;
        bVar27 = (byte)(uVar123 >> 8) | bVar27;
        bVar28 = (byte)((uint3)((ulong)uVar22 >> 0x2a) >> 8) | bVar28;
        uVar94 = CONCAT16(bVar28,CONCAT15(bVar27,CONCAT14(bVar26,CONCAT13(bVar25,CONCAT12(bVar24,
                                                  CONCAT11(bVar23,bVar20))))));
        bVar29 = bVar29 >> 2 | bVar29;
        uVar22 = CONCAT17(bVar29,uVar94);
        uVar115 = CONCAT13(bVar84,CONCAT12(bVar83,CONCAT11(bVar82,bVar78))) >> 1;
        uVar116 = uVar134 >> 1;
        uVar59 = CONCAT13(bVar64,CONCAT12(bVar63,CONCAT11(bVar62,bVar58))) >> 1;
        uVar117 = uVar140 >> 1;
        uVar40 = CONCAT13(bVar45,CONCAT12(bVar44,CONCAT11(bVar43,bVar39))) >> 1;
        uVar79 = uVar132 >> 1;
        uVar90 = CONCAT13(bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar12))) >> 1;
        uVar92 = CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16))) >> 1;
        uVar11 = ((ulong)uVar94 & 0xfffffffe) >> 1;
        uVar21 = (uint)((ulong)uVar22 >> 0x21);
        bVar12 = (byte)uVar90 | bVar12;
        bVar14 = (byte)(uVar90 >> 0x10) | bVar14;
        bVar16 = (byte)uVar92 | bVar16;
        bVar18 = (byte)(uVar92 >> 0x10) | bVar18;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11(bVar73 >> 1 | bVar73,
                                                 (byte)(ushort)(uVar141 >> 0x11) | bVar72) << 0x10)
                                >> 8),(byte)(uVar141 >> 1) | bVar69) & 0xffffff11;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)(uint3)(uVar141 >> 9) | bVar71,(char)uVar31)) & 0xffff11ff
        ;
        uVar70 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139)) &
                 0x1111ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11(bVar77 >> 1 | bVar77,
                                                 (byte)(ushort)(uVar133 >> 0x11) | bVar76) << 0x10)
                                >> 8),(byte)(uVar133 >> 1) | bVar74) & 0xffffff11;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)(uint3)(uVar133 >> 9) | bVar75,(char)uVar31)) & 0xffff11ff
        ;
        uVar123 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0x1111ffff;
        uVar41 = CONCAT71((int7)(((ulong)CONCAT15(bVar88 >> 1 | bVar88,
                                                  CONCAT14((byte)((uint3)(uVar134 >> 9) >> 8) |
                                                           bVar87,CONCAT13((byte)(uVar116 >> 8) |
                                                                           bVar86,CONCAT12((byte)
                                                  uVar116 | bVar85,
                                                  CONCAT11(bVar84 >> 1 | bVar84,
                                                           (byte)(uVar115 >> 0x10) | bVar83))))) <<
                                 0x10) >> 8),(byte)uVar115 | bVar78) & 0xffffffffffffff11;
        uVar6 = CONCAT62((int6)(uVar41 >> 0x10),CONCAT11((byte)(uVar115 >> 8) | bVar82,(char)uVar41)
                        ) & 0xffffffffffff11ff;
        uVar41 = CONCAT53((int5)(uVar6 >> 0x18),CONCAT12((char)(uVar41 >> 0x10),(short)uVar6)) &
                 0xffffffffff11ffff;
        uVar6 = CONCAT44((int)(uVar41 >> 0x20),CONCAT13((char)(uVar6 >> 0x18),(int3)uVar41)) &
                0xffffffff11ffffff;
        uVar41 = CONCAT35((int3)(uVar6 >> 0x28),CONCAT14((char)(uVar41 >> 0x20),(int)uVar6)) &
                 0xffffff11ffffffff;
        uVar6 = CONCAT26((short)(uVar41 >> 0x30),CONCAT15((char)(uVar6 >> 0x28),(int5)uVar41)) &
                0xffff11ffffffffff;
        uVar80 = CONCAT17((char)(uVar6 >> 0x38),CONCAT16((char)(uVar41 >> 0x30),(int6)uVar6)) &
                 0x1111ffffffffffff;
        uVar139 = CONCAT31((int3)(((uint)CONCAT11(bVar53 >> 1 | bVar53,
                                                  (byte)(ushort)(uVar125 >> 0x11) | bVar52) << 0x10)
                                 >> 8),(byte)(uVar125 >> 1) | bVar50) & 0xffffff11;
        uVar31 = CONCAT22((short)(uVar139 >> 0x10),
                          CONCAT11((byte)(uint3)(uVar125 >> 9) | bVar51,(char)uVar139)) & 0xffff11ff
        ;
        uVar115 = CONCAT13((char)(uVar31 >> 0x18),CONCAT12((char)(uVar139 >> 0x10),(short)uVar31)) &
                  0x1111ffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11(bVar57 >> 1 | bVar57,
                                                 (byte)(ushort)(uVar126 >> 0x11) | bVar56) << 0x10)
                                >> 8),(byte)(uVar126 >> 1) | bVar54) & 0xffffff11;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)(uint3)(uVar126 >> 9) | bVar55,(char)uVar31)) & 0xffff11ff
        ;
        uVar116 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139))
                  & 0x1111ffff;
        uVar6 = CONCAT71((int7)(((ulong)CONCAT15(bVar68 >> 1 | bVar68,
                                                 CONCAT14((byte)((uint3)(uVar140 >> 9) >> 8) |
                                                          bVar67,CONCAT13((byte)(uVar117 >> 8) |
                                                                          bVar66,CONCAT12((byte)
                                                  uVar117 | bVar65,
                                                  CONCAT11(bVar64 >> 1 | bVar64,
                                                           (byte)(uVar59 >> 0x10) | bVar63))))) <<
                                0x10) >> 8),(byte)uVar59 | bVar58) & 0xffffffffffffff11;
        uVar41 = CONCAT62((int6)(uVar6 >> 0x10),CONCAT11((byte)(uVar59 >> 8) | bVar62,(char)uVar6))
                 & 0xffffffffffff11ff;
        uVar6 = CONCAT53((int5)(uVar41 >> 0x18),CONCAT12((char)(uVar6 >> 0x10),(short)uVar41)) &
                0xffffffffff11ffff;
        uVar41 = CONCAT44((int)(uVar6 >> 0x20),CONCAT13((char)(uVar41 >> 0x18),(int3)uVar6)) &
                 0xffffffff11ffffff;
        uVar6 = CONCAT35((int3)(uVar41 >> 0x28),CONCAT14((char)(uVar6 >> 0x20),(int)uVar41)) &
                0xffffff11ffffffff;
        uVar41 = CONCAT26((short)(uVar6 >> 0x30),CONCAT15((char)(uVar41 >> 0x28),(int5)uVar6)) &
                 0xffff11ffffffffff;
        uVar60 = CONCAT17((char)(uVar41 >> 0x38),CONCAT16((char)(uVar6 >> 0x30),(int6)uVar41)) &
                 0x1111ffffffffffff;
        uVar31 = CONCAT31((int3)(((uint)CONCAT11(bVar34 >> 1 | bVar34,
                                                 (byte)(ushort)(uVar124 >> 0x11) | bVar33) << 0x10)
                                >> 8),(byte)(uVar124 >> 1) | bVar30) & 0xffffff11;
        uVar139 = CONCAT22((short)(uVar31 >> 0x10),
                           CONCAT11((byte)(uint3)(uVar124 >> 9) | bVar32,(char)uVar31)) & 0xffff11ff
        ;
        uVar31 = CONCAT13((char)(uVar139 >> 0x18),CONCAT12((char)(uVar31 >> 0x10),(short)uVar139)) &
                 0x1111ffff;
        uVar139 = CONCAT31((int3)(((uint)CONCAT11(bVar38 >> 1 | bVar38,
                                                  (byte)(ushort)(uVar131 >> 0x11) | bVar37) << 0x10)
                                 >> 8),(byte)(uVar131 >> 1) | bVar35) & 0xffffff11;
        uVar59 = CONCAT22((short)(uVar139 >> 0x10),
                          CONCAT11((byte)(uint3)(uVar131 >> 9) | bVar36,(char)uVar139)) & 0xffff11ff
        ;
        uVar139 = CONCAT13((char)(uVar59 >> 0x18),CONCAT12((char)(uVar139 >> 0x10),(short)uVar59)) &
                  0x1111ffff;
        uVar6 = CONCAT71((int7)(((ulong)CONCAT15(bVar49 >> 1 | bVar49,
                                                 CONCAT14((byte)((uint3)(uVar132 >> 9) >> 8) |
                                                          bVar48,CONCAT13((byte)(uVar79 >> 8) |
                                                                          bVar47,CONCAT12((byte)
                                                  uVar79 | bVar46,
                                                  CONCAT11(bVar45 >> 1 | bVar45,
                                                           (byte)(uVar40 >> 0x10) | bVar44))))) <<
                                0x10) >> 8),(byte)uVar40 | bVar39) & 0xffffffffffffff11;
        uVar41 = CONCAT62((int6)(uVar6 >> 0x10),CONCAT11((byte)(uVar40 >> 8) | bVar43,(char)uVar6))
                 & 0xffffffffffff11ff;
        uVar6 = CONCAT53((int5)(uVar41 >> 0x18),CONCAT12((char)(uVar6 >> 0x10),(short)uVar41)) &
                0xffffffffff11ffff;
        uVar41 = CONCAT44((int)(uVar6 >> 0x20),CONCAT13((char)(uVar41 >> 0x18),(int3)uVar6)) &
                 0xffffffff11ffffff;
        uVar6 = CONCAT35((int3)(uVar41 >> 0x28),CONCAT14((char)(uVar6 >> 0x20),(int)uVar41)) &
                0xffffff11ffffffff;
        uVar41 = CONCAT26((short)(uVar6 >> 0x30),CONCAT15((char)(uVar41 >> 0x28),(int5)uVar6)) &
                 0xffff11ffffffffff;
        uVar41 = CONCAT17((char)(uVar41 >> 0x38),CONCAT16((char)(uVar6 >> 0x30),(int6)uVar41)) &
                 0x1111ffffffffffff;
        uVar6 = CONCAT71((int7)(((ulong)CONCAT15(bVar29 >> 1 | bVar29,
                                                 CONCAT14((byte)((uint3)((ulong)uVar22 >> 0x29) >> 8
                                                                ) | bVar28,
                                                          CONCAT13((byte)(uVar21 >> 8) | bVar27,
                                                                   CONCAT12((byte)uVar21 | bVar26,
                                                                            CONCAT11((byte)(uVar11 
                                                  >> 0x18) | bVar25,(byte)(uVar11 >> 0x10) | bVar24)
                                                  )))) << 0x10) >> 8),(byte)uVar11 | bVar20) &
                0xffffffffffffff11;
        uVar11 = CONCAT62((int6)(uVar6 >> 0x10),CONCAT11((byte)(uVar11 >> 8) | bVar23,(char)uVar6))
                 & 0xffffffffffff11ff;
        uVar6 = CONCAT53((int5)(uVar11 >> 0x18),CONCAT12((char)(uVar6 >> 0x10),(short)uVar11)) &
                0xffffffffff11ffff;
        uVar11 = CONCAT44((int)(uVar6 >> 0x20),CONCAT13((char)(uVar11 >> 0x18),(int3)uVar6)) &
                 0xffffffff11ffffff;
        uVar6 = CONCAT35((int3)(uVar11 >> 0x28),CONCAT14((char)(uVar6 >> 0x20),(int)uVar11)) &
                0xffffff11ffffffff;
        uVar11 = CONCAT26((short)(uVar6 >> 0x30),CONCAT15((char)(uVar11 >> 0x28),(int5)uVar6)) &
                 0xffff11ffffffffff;
        uVar11 = CONCAT17((char)(uVar11 >> 0x38),CONCAT16((char)(uVar6 >> 0x30),(int6)uVar11)) &
                 0x1111ffffffffffff;
        uVar117 = (uint)uVar80 >> 7;
        uVar124 = (uint)(uVar80 >> 0x27);
        uVar131 = (uint)uVar60 >> 7;
        uVar132 = (uint)(uVar60 >> 0x27);
        uVar40 = (uint)uVar41 >> 7;
        uVar79 = (uint)(uVar41 >> 0x27);
        uVar90 = (CONCAT13(bVar15 >> 1 | bVar15,
                           CONCAT12(bVar14,CONCAT11((byte)(uVar90 >> 8) | bVar13,bVar12))) &
                 0x11111111) >> 7;
        uVar92 = (CONCAT13(bVar19 >> 1 | bVar19,
                           CONCAT12(bVar18,CONCAT11((byte)(uVar92 >> 8) | bVar17,bVar16))) &
                 0x11111111) >> 7;
        uVar21 = (uint)(uVar11 >> 7) & 0x1ffffff;
        uVar59 = (uint)(uVar11 >> 0x27);
        puVar10[1] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar59 >> 0x10) |
                                                          (byte)(uVar11 >> 0x30)) << 0x30) >> 0x2e)
                              | (byte)uVar59 | (byte)(uVar11 >> 0x20),
                              CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar21 >> 0x10) |
                                                                   (byte)(uVar11 >> 0x10)) << 0x10)
                                             >> 0xe) | (byte)uVar21 | (byte)uVar11,
                                       CONCAT15((byte)((uint3)((uint3)(byte)((byte)(uVar92 >> 0x10)
                                                                            | bVar18 & 0x11) << 0x10
                                                              ) >> 0xe) |
                                                (byte)uVar92 | bVar16 & 0x11,
                                                CONCAT14((byte)((uint3)((uint3)(byte)((byte)(uVar90 
                                                  >> 0x10) | bVar14 & 0x11) << 0x10) >> 0xe) |
                                                  (byte)uVar90 | bVar12 & 0x11,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar79 >> 0x10) | (byte)(uVar41 >> 0x30)) << 0x30)
                                                  >> 0x2e) | (byte)uVar79 | (byte)(uVar41 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar40 >> 0x10) | (byte)(uVar41 >> 0x10)) << 0x10)
                                                  >> 0xe) | (byte)uVar40 | (byte)uVar41,
                                                  CONCAT11((byte)((uint3)((uint3)(byte)((byte)((
                                                  uVar139 >> 7) >> 0x10) | (byte)(uVar139 >> 0x10))
                                                  << 0x10) >> 0xe) |
                                                  (byte)(uVar139 >> 7) | (byte)uVar139,
                                                  (byte)((uint3)((uint3)(byte)((byte)((uVar31 >> 7)
                                                                                     >> 0x10) |
                                                                              (byte)(uVar31 >> 0x10)
                                                                              ) << 0x10) >> 0xe) |
                                                  (byte)(uVar31 >> 7) | (byte)uVar31)))))));
        *puVar10 = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar124 >> 0x10) |
                                                        (byte)(uVar80 >> 0x30)) << 0x30) >> 0x2e) |
                            (byte)uVar124 | (byte)(uVar80 >> 0x20),
                            CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar117 >> 0x10) |
                                                                 (byte)(uVar80 >> 0x10)) << 0x10) >>
                                           0xe) | (byte)uVar117 | (byte)uVar80,
                                     CONCAT15((byte)((uint3)((uint3)(byte)((byte)((uVar123 >> 7) >>
                                                                                 0x10) |
                                                                          (byte)(uVar123 >> 0x10))
                                                            << 0x10) >> 0xe) |
                                              (byte)(uVar123 >> 7) | (byte)uVar123,
                                              CONCAT14((byte)((uint3)((uint3)(byte)((byte)((uVar70 
                                                  >> 7) >> 0x10) | (byte)(uVar70 >> 0x10)) << 0x10)
                                                  >> 0xe) | (byte)(uVar70 >> 7) | (byte)uVar70,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar132 >> 0x10) | (byte)(uVar60 >> 0x30)) << 0x30
                                                  ) >> 0x2e) |
                                                  (byte)uVar132 | (byte)(uVar60 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar131 >> 0x10) | (byte)(uVar60 >> 0x10)) << 0x10
                                                  ) >> 0xe) | (byte)uVar131 | (byte)uVar60,
                                                  CONCAT11((byte)((uint3)((uint3)(byte)((byte)((
                                                  uVar116 >> 7) >> 0x10) | (byte)(uVar116 >> 0x10))
                                                  << 0x10) >> 0xe) |
                                                  (byte)(uVar116 >> 7) | (byte)uVar116,
                                                  (byte)((uint3)((uint3)(byte)((byte)((uVar115 >> 7)
                                                                                     >> 0x10) |
                                                                              (byte)(uVar115 >> 0x10
                                                                                    )) << 0x10) >>
                                                        0xe) | (byte)(uVar115 >> 7) | (byte)uVar115)
                                                  ))))));
        puVar7 = puVar1;
        puVar10 = puVar10 + 2;
      } while (puVar1 != param_1 + (ulong)((uVar2 >> 4) - 1) * 0x20 + 0x20);
      param_1 = param_1 + ((ulong)uVar2 & 0xfffffff0) * 2;
      if (uVar2 != (uVar2 & 0xfffffff0)) {
        pbVar8 = (byte *)(param_2 + (ulong)(param_3 + (uVar2 & 0xfffffff0)));
        do {
          uVar2 = *param_1;
          puVar7 = param_1 + 1;
          param_1 = param_1 + 2;
          uVar2 = (*puVar7 | *puVar7 << 4) & 0xf0f0f0f0 | (uVar2 | uVar2 >> 4) & 0xf0f0f0f;
          uVar2 = uVar2 | uVar2 >> 2;
          uVar2 = (uVar2 | uVar2 >> 1) & 0x11111111;
          uVar2 = uVar2 | uVar2 >> 7;
          pbVar9 = pbVar8 + 1;
          *pbVar8 = (byte)uVar2 | (byte)(uVar2 >> 0xe);
          pbVar8 = pbVar9;
        } while ((uint)((int)pbVar9 - (int)param_2) <= uVar5);
      }
    }
  }
  if (lVar4 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4 - ___stack_chk_guard,0);
}


