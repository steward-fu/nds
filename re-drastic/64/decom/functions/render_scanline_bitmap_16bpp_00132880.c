/*
 * Ghidra decompilation
 *
 * Function : render_scanline_bitmap_16bpp
 * Address  : 00132880
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_bitmap_16bpp(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined2 uVar9;
  short sVar10;
  undefined3 uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined7 uVar15;
  undefined7 uVar16;
  undefined3 uVar17;
  undefined7 uVar18;
  undefined3 uVar19;
  undefined3 uVar20;
  undefined7 uVar21;
  undefined3 uVar22;
  undefined3 uVar23;
  undefined7 uVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  undefined8 *puVar33;
  uint *puVar34;
  ulong uVar35;
  byte *pbVar36;
  byte *pbVar37;
  int iVar38;
  int extraout_w9;
  undefined8 *puVar39;
  undefined2 *extraout_x10;
  int iVar40;
  int extraout_w11;
  long lVar41;
  long extraout_x12;
  int iVar42;
  int extraout_w13;
  undefined8 *extraout_x14;
  undefined *puVar43;
  undefined *extraout_x15;
  long lVar44;
  uint extraout_w18;
  int iVar45;
  int iVar46;
  ushort uVar47;
  ushort uVar48;
  uint3 uVar49;
  uint5 uVar50;
  undefined8 uVar52;
  uint3 uVar53;
  uint5 uVar54;
  undefined8 uVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  ushort uVar64;
  ushort uVar65;
  uint3 uVar66;
  uint5 uVar67;
  undefined4 uVar69;
  undefined4 uVar70;
  uint5 uVar71;
  uint3 uVar72;
  uint5 uVar73;
  uint3 uVar75;
  uint3 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  uint3 uVar79;
  undefined8 uVar80;
  uint3 uVar81;
  uint3 uVar82;
  uint7 uVar83;
  uint7 uVar84;
  uint3 uVar85;
  uint7 uVar86;
  uint7 uVar87;
  uint7 uVar88;
  byte bVar90;
  uint7 uVar89;
  ushort uVar91;
  uint7 uVar92;
  uint7 uVar93;
  uint3 uVar94;
  uint uVar95;
  uint uVar97;
  uint3 uVar98;
  uint uVar99;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint3 uVar104;
  uint uVar105;
  uint uVar106;
  uint3 uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  ushort uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  ushort uVar118;
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
  uint7 uVar130;
  uint7 uVar131;
  byte local_230;
  byte bStack_228;
  byte bStack_226;
  byte bStack_224;
  byte bStack_222;
  uint local_210 [4];
  uint uStack_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uint local_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint auStack_10 [2];
  long local_8;
  uint7 uVar51;
  uint7 uVar55;
  uint7 uVar68;
  uint7 uVar74;
  uint7 uVar96;
  uint7 uVar100;
  
  puVar43 = &DAT_0025f000;
  sVar10 = *(short *)(param_1 + 0x9e);
  local_8 = ___stack_chk_guard;
  bVar90 = *(byte *)(param_1 + 0xaa);
  uVar26 = (uint)bVar90;
  iVar42 = *(int *)(param_1 + 0x40);
  iVar38 = *(int *)(param_1 + 0x90);
  iVar40 = *(int *)(param_1 + 0x94);
  iVar46 = (int)*(short *)(param_1 + 0xa0);
  lVar41 = *(long *)(param_1 + 8);
  uVar32 = (uint)*(ushort *)(param_1 + 0xa6);
  uVar28 = (uint)*(ushort *)(param_1 + 0xa8);
  if (sVar10 == 0x100 && iVar46 == 0) {
    uVar5 = iVar40 >> 8;
    uVar27 = iVar38 >> 8;
    if ((*(ushort *)(param_1 + 0x98) & 0x2000) == 0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      if ((int)uVar5 < 0 || uVar28 < uVar5) goto LAB_00132b94;
      uVar32 = uVar32 - uVar27;
      if ((int)uVar27 < 1) {
        uVar28 = -uVar27;
        param_2 = param_2 + (int)uVar28;
        puVar29 = (uint *)((long)local_210 + ((ulong)uVar28 & 7) * 2);
        uVar35 = (ulong)(uVar28 & 7);
        uVar27 = 0;
      }
      else {
        puVar29 = local_210;
        uVar35 = 0;
        uVar28 = 0;
      }
      puVar34 = local_210;
      if (0xff < (int)uVar32) {
        uVar32 = 0xff;
      }
      uVar95 = uVar32 - uVar28;
      if ((int)uVar95 < 0) goto LAB_00132b94;
      iVar40 = uVar5 << (ulong)(uVar26 & 0x1f);
      lVar44 = (long)iVar42;
      lVar30 = (long)(int)((iVar40 + uVar27) * 2);
      puVar4 = (undefined2 *)(lVar41 + lVar44 + lVar30);
      bVar1 = param_2 < (undefined2 *)(lVar41 + lVar44 + 0x10 + lVar30);
      if ((bVar1 && puVar4 < param_2 + 8 || uVar95 < 6) ||
          (!bVar1 || puVar4 >= param_2 + 8) && uVar95 == 6) {
        lVar30 = 0;
        do {
          uVar9 = *(undefined2 *)(lVar41 + lVar44 + (long)(int)(iVar40 + uVar27) * 2 + lVar30);
          *(undefined2 *)((long)puVar29 + lVar30) = uVar9;
          *(undefined2 *)((long)param_2 + lVar30) = uVar9;
          lVar30 = lVar30 + 2;
        } while (lVar30 != ((long)(int)uVar95 + 1) * 2);
      }
      else {
        uVar26 = uVar95 + 1;
        lVar30 = 0;
        do {
          uVar56 = ((undefined8 *)((long)puVar4 + lVar30))[1];
          uVar52 = *(undefined8 *)((long)puVar4 + lVar30);
          ((undefined8 *)((long)puVar29 + lVar30))[1] = uVar56;
          *(undefined8 *)((long)puVar29 + lVar30) = uVar52;
          ((undefined8 *)((long)param_2 + lVar30))[1] = uVar56;
          *(undefined8 *)((long)param_2 + lVar30) = uVar52;
          lVar30 = lVar30 + 0x10;
        } while (lVar30 != (ulong)(uVar26 >> 3) * 0x10);
        uVar31 = (ulong)uVar26 & 0xfffffff8;
        uVar5 = uVar26 & 0xfffffff8;
        lVar30 = uVar31 * 2;
        iVar38 = uVar5 + uVar27;
        iVar46 = uVar95 - uVar5;
        if (uVar5 != uVar26) {
          uVar9 = *(undefined2 *)(lVar41 + (iVar42 + (iVar40 + iVar38) * 2));
          *(undefined2 *)((long)puVar29 + lVar30) = uVar9;
          param_2[uVar31] = uVar9;
          if (uVar95 != uVar5) {
            uVar9 = *(undefined2 *)(lVar41 + (iVar42 + (iVar40 + iVar38 + 1) * 2));
            *(undefined2 *)((long)puVar29 + lVar30 + 2) = uVar9;
            param_2[uVar31 + 1] = uVar9;
            if (iVar46 != 1) {
              uVar9 = *(undefined2 *)(lVar41 + (iVar42 + (iVar40 + iVar38 + 2) * 2));
              *(undefined2 *)((long)puVar29 + lVar30 + 4) = uVar9;
              param_2[uVar31 + 2] = uVar9;
              if (iVar46 != 2) {
                uVar9 = *(undefined2 *)(lVar41 + (iVar42 + (iVar40 + iVar38 + 3) * 2));
                *(undefined2 *)((long)puVar29 + lVar30 + 6) = uVar9;
                param_2[uVar31 + 3] = uVar9;
                if (iVar46 != 3) {
                  uVar9 = *(undefined2 *)(lVar41 + (iVar42 + (iVar40 + iVar38 + 4) * 2));
                  *(undefined2 *)((long)puVar29 + lVar30 + 8) = uVar9;
                  param_2[uVar31 + 4] = uVar9;
                  if (iVar46 != 4) {
                    uVar9 = *(undefined2 *)(lVar41 + (iVar42 + (iVar40 + iVar38 + 5) * 2));
                    *(undefined2 *)((long)puVar29 + lVar30 + 10) = uVar9;
                    param_2[uVar31 + 5] = uVar9;
                    if (iVar46 != 5) {
                      uVar9 = *(undefined2 *)(lVar41 + (iVar42 + (iVar40 + iVar38 + 6) * 2));
                      *(undefined2 *)((long)puVar29 + lVar30 + 0xc) = uVar9;
                      param_2[uVar31 + 6] = uVar9;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar27 = uVar32 >> 3;
      uVar26 = uVar28 >> 3;
      if (uVar28 >> 3 <= uVar27) {
        uVar5 = (uVar27 + 1) - uVar26;
        if (0xe < uVar27 - uVar26) {
          puVar3 = (undefined8 *)((long)param_3 + (ulong)uVar26) + 2;
          puVar29 = puVar34;
          puVar25 = puVar3;
          puVar39 = (undefined8 *)((long)param_3 + (ulong)uVar26);
          while( true ) {
            puVar33 = puVar25;
            uVar95 = *puVar29;
            uVar102 = puVar29[1];
            uVar105 = puVar29[2];
            uVar110 = puVar29[3];
            uVar97 = puVar29[4];
            uVar103 = puVar29[5];
            uVar106 = puVar29[6];
            uVar111 = puVar29[7];
            uVar99 = puVar29[8];
            uVar108 = puVar29[10];
            uVar101 = puVar29[0xc];
            uVar109 = puVar29[0xe];
            uVar112 = puVar29[0xf];
            uVar114 = puVar29[0x10];
            uVar119 = puVar29[0x11];
            uVar123 = puVar29[0x12];
            uVar127 = puVar29[0x13];
            uVar115 = puVar29[0x14];
            uVar120 = puVar29[0x15];
            uVar124 = puVar29[0x16];
            uVar128 = puVar29[0x17];
            uVar116 = puVar29[0x18];
            uVar121 = puVar29[0x19];
            uVar125 = puVar29[0x1a];
            uVar117 = puVar29[0x1c];
            uVar122 = puVar29[0x1d];
            uVar126 = puVar29[0x1e];
            uVar129 = puVar29[0x1f];
            uVar50 = CONCAT14((char)(uVar117 >> 0xf),(uVar116 >> 0x1f) << 0x10) & 0x1ffffffff;
            uVar72 = CONCAT12((byte)(puVar29[9] >> 0x1d),(ushort)((byte)(puVar29[9] >> 0xd) & 4)) &
                     0x4ffff;
            uVar74 = CONCAT16((byte)(puVar29[0xd] >> 0x1d),
                              (uint6)(CONCAT14((char)(puVar29[0xd] >> 0xd),(uint)uVar72) &
                                     0x4ffffffff)) & 0x4ffffffffffff;
            uVar66 = CONCAT12((byte)(puVar29[0x29] >> 0x1d),
                              (ushort)((byte)(puVar29[0x29] >> 0xd) & 4)) & 0x4ffff;
            uVar68 = CONCAT16((byte)(puVar29[0x2d] >> 0x1d),
                              (uint6)(CONCAT14((char)(puVar29[0x2d] >> 0xd),(uint)uVar66) &
                                     0x4ffffffff)) & 0x4ffffffffffff;
            uVar49 = CONCAT12((byte)(puVar29[0x31] >> 0x1d),
                              (ushort)((byte)(puVar29[0x31] >> 0xd) & 4)) & 0x4ffff;
            uVar51 = CONCAT16((byte)(puVar29[0x35] >> 0x1d),
                              (uint6)(CONCAT14((char)(puVar29[0x35] >> 0xd),(uint)uVar49) &
                                     0x4ffffffff)) & 0x4ffffffffffff;
            uVar53 = CONCAT12((byte)(puVar29[0x39] >> 0x1d),
                              (ushort)((byte)(puVar29[0x39] >> 0xd) & 4)) & 0x4ffff;
            uVar55 = CONCAT16((byte)(puVar29[0x3d] >> 0x1d),
                              (uint6)(CONCAT14((char)(puVar29[0x3d] >> 0xd),(uint)uVar53) &
                                     0x4ffffffff)) & 0x4ffffffffffff;
            uVar94 = CONCAT12((byte)(puVar29[0x22] >> 0x1b),
                              (ushort)((byte)(puVar29[0x22] >> 0xb) & 0x10)) & 0x10ffff;
            uVar98 = CONCAT12((byte)(puVar29[0x2a] >> 0x1b),
                              (ushort)((byte)(puVar29[0x2a] >> 0xb) & 0x10)) & 0x10ffff;
            uVar82 = CONCAT12((byte)(puVar29[0x32] >> 0x1b),
                              (ushort)((byte)(puVar29[0x32] >> 0xb) & 0x10)) & 0x10ffff;
            uVar85 = CONCAT12((byte)(puVar29[0x3a] >> 0x1b),
                              (ushort)((byte)(puVar29[0x3a] >> 0xb) & 0x10)) & 0x10ffff;
            uVar76 = CONCAT12((byte)(puVar29[0x2b] >> 0x19),
                              (ushort)((byte)(puVar29[0x2b] >> 9) & 0x40)) & 0x40ffff;
            uVar81 = CONCAT12((byte)(puVar29[0x1b] >> 0x19),
                              (ushort)((byte)(puVar29[0x1b] >> 9) & 0x40)) & 0x40ffff;
            uVar79 = CONCAT12((byte)(puVar29[0xb] >> 0x19),
                              (ushort)((byte)(puVar29[0xb] >> 9) & 0x40)) & 0x40ffff;
            uVar75 = CONCAT12((byte)(puVar29[0x3b] >> 0x19),
                              (ushort)((byte)(puVar29[0x3b] >> 9) & 0x40)) & 0x40ffff;
            puVar39[1] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar55 >> 0x30) |
                                                               (byte)(puVar29[0x3c] >> 0x1f) |
                                                               (byte)(puVar29[0x3e] >> 0x1b) & 0x10
                                                              | (byte)(puVar29[0x3f] >> 0x19) & 0x40
                                                              ) << 0x30) >> 0x2f) |
                                  (byte)(uVar55 >> 0x20) | (byte)(puVar29[0x3c] >> 0xf) & 1 |
                                  (byte)(puVar29[0x3e] >> 0xb) & 0x10 |
                                  (byte)(puVar29[0x3f] >> 9) & 0x40,
                                  CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar55 >> 0x10) |
                                                                        (byte)(puVar29[0x38] >> 0x1f
                                                                              ) | (byte)(uVar85 >>
                                                                                        0x10) |
                                                                       (byte)(uVar75 >> 0x10)) <<
                                                         0x10) >> 0xf) |
                                           (byte)uVar53 | (byte)(puVar29[0x38] >> 0xf) & 1 |
                                           (byte)uVar85 | (byte)uVar75,
                                           CONCAT15((byte)(ushort)(((uint7)(byte)((byte)(uVar51 >>
                                                                                        0x30) |
                                                                                  (byte)(puVar29[
                                                  0x34] >> 0x1f) |
                                                  (byte)(puVar29[0x36] >> 0x1b) & 0x10 |
                                                  (byte)(puVar29[0x37] >> 0x19) & 0x40) << 0x30) >>
                                                  0x2f) | (byte)(uVar51 >> 0x20) |
                                                          (byte)(puVar29[0x34] >> 0xf) & 1 |
                                                          (byte)(puVar29[0x36] >> 0xb) & 0x10 |
                                                          (byte)(puVar29[0x37] >> 9) & 0x40,
                                                  CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar51 >> 0x10) |
                                                  (byte)(puVar29[0x30] >> 0x1f) |
                                                  (byte)(uVar82 >> 0x10) |
                                                  (byte)(puVar29[0x33] >> 0x19) & 0x40) << 0x10) >>
                                                  0xf) | (byte)uVar49 |
                                                         (byte)(puVar29[0x30] >> 0xf) & 1 |
                                                         (byte)uVar82 |
                                                         (byte)(puVar29[0x33] >> 9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar68 >> 0x30) | (byte)(puVar29[0x2c] >> 0x1f) |
                                                  (byte)(puVar29[0x2e] >> 0x1b) & 0x10 |
                                                  (byte)(puVar29[0x2f] >> 0x19) & 0x40) << 0x30) >>
                                                  0x2f) | (byte)(uVar68 >> 0x20) |
                                                          (byte)(puVar29[0x2c] >> 0xf) & 1 |
                                                          (byte)(puVar29[0x2e] >> 0xb) & 0x10 |
                                                          (byte)(puVar29[0x2f] >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar68 >> 0x10) | (byte)(puVar29[0x28] >> 0x1f) |
                                                  (byte)(uVar98 >> 0x10) | (byte)(uVar76 >> 0x10))
                                                  << 0x10) >> 0xf) |
                                                  (byte)uVar66 | (byte)(puVar29[0x28] >> 0xf) & 1 |
                                                  (byte)uVar98 | (byte)uVar76,
                                                  CONCAT11((byte)((uint3)((uint3)(byte)((byte)(
                                                  puVar29[0x25] >> 0x1d) & 4 |
                                                  (byte)(puVar29[0x24] >> 0x1f) |
                                                  (byte)(puVar29[0x26] >> 0x1b) & 0x10 |
                                                  (byte)(puVar29[0x27] >> 0x19) & 0x40) << 0x10) >>
                                                  0xf) | (byte)(puVar29[0x25] >> 0xd) & 4 |
                                                         (byte)(puVar29[0x24] >> 0xf) & 1 |
                                                         (byte)(puVar29[0x26] >> 0xb) & 0x10 |
                                                         (byte)(puVar29[0x27] >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(puVar29[0x21]
                                                                                     >> 0x1d) & 4 |
                                                                               (byte)(puVar29[0x20]
                                                                                     >> 0x1f) |
                                                                               (byte)(uVar94 >> 0x10
                                                                                     ) |
                                                                              (byte)(puVar29[0x23]
                                                                                    >> 0x19) & 0x40)
                                                                << 0x10) >> 0xf) |
                                                  (byte)(puVar29[0x21] >> 0xd) & 4 |
                                                  (byte)(puVar29[0x20] >> 0xf) & 1 | (byte)uVar94 |
                                                  (byte)(puVar29[0x23] >> 9) & 0x40)))))));
            *puVar39 = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar122 >> 0x1d) & 4 |
                                                             (byte)(uVar117 >> 0x1f) |
                                                             (byte)(uVar126 >> 0x1b) & 0x10 |
                                                            (byte)(uVar129 >> 0x19) & 0x40) << 0x30)
                                             >> 0x2f) |
                                (byte)(uVar122 >> 0xd) & 4 | (byte)(uVar50 >> 0x20) |
                                (byte)(uVar126 >> 0xb) & 0x10 | (byte)(uVar129 >> 9) & 0x40,
                                CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar121 >> 0x1d) & 4 |
                                                                      (byte)(uVar50 >> 0x10) |
                                                                      (byte)(uVar125 >> 0x1b) & 0x10
                                                                     | (byte)(uVar81 >> 0x10)) <<
                                                       0x10) >> 0xf) |
                                         (byte)(uVar121 >> 0xd) & 4 | (byte)(uVar116 >> 0xf) & 1 |
                                         (byte)(uVar125 >> 0xb) & 0x10 | (byte)uVar81,
                                         CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar120 >> 0x1d) & 4 | (byte)(uVar115 >> 0x1f) |
                                                  (byte)(uVar124 >> 0x1b) & 0x10 |
                                                  (byte)(uVar128 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar120 >> 0xd) & 4 |
                                                  (byte)(uVar115 >> 0xf) & 1 |
                                                  (byte)(uVar124 >> 0xb) & 0x10 |
                                                  (byte)(uVar128 >> 9) & 0x40,
                                                  CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar119 >> 0x1d) & 4 |
                                                  (byte)(uVar114 >> 0x1f) |
                                                  (byte)(uVar123 >> 0x1b) & 0x10 |
                                                  (byte)(uVar127 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar119 >> 0xd) & 4 |
                                                  (byte)(uVar114 >> 0xf) & 1 |
                                                  (byte)(uVar123 >> 0xb) & 0x10 |
                                                  (byte)(uVar127 >> 9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar74 >> 0x30) | (byte)(uVar101 >> 0x1f) |
                                                  (byte)(uVar109 >> 0x1b) & 0x10 |
                                                  (byte)(uVar112 >> 0x19) & 0x40) << 0x30) >> 0x2f)
                                                  | (byte)(uVar74 >> 0x20) |
                                                    (byte)(uVar101 >> 0xf) & 1 |
                                                    (byte)(uVar109 >> 0xb) & 0x10 |
                                                    (byte)(uVar112 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar74 >> 0x10) | (byte)(uVar99 >> 0x1f) |
                                                  (byte)(uVar108 >> 0x1b) & 0x10 |
                                                  (byte)(uVar79 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)uVar72 | (byte)(uVar99 >> 0xf) & 1 |
                                                  (byte)(uVar108 >> 0xb) & 0x10 | (byte)uVar79,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar103 >> 0x1d) & 4 |
                                                  (byte)(uVar97 >> 0x1f) |
                                                  (byte)(uVar106 >> 0x1b) & 0x10 |
                                                  (byte)(uVar111 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar103 >> 0xd) & 4 |
                                                  (byte)(uVar97 >> 0xf) & 1 |
                                                  (byte)(uVar106 >> 0xb) & 0x10 |
                                                  (byte)(uVar111 >> 9) & 0x40,
                                                  (byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar102 >> 0x1d) & 4 | (byte)(uVar95 >> 0x1f) |
                                                  (byte)(uVar105 >> 0x1b) & 0x10 |
                                                  (byte)(uVar110 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar102 >> 0xd) & 4 |
                                                  (byte)(uVar95 >> 0xf) & 1 |
                                                  (byte)(uVar105 >> 0xb) & 0x10 |
                                                  (byte)(uVar110 >> 9) & 0x40)))))));
            if (puVar33 == puVar3 + (ulong)((uVar5 >> 4) - 1) * 2) break;
            puVar29 = puVar29 + 0x40;
            puVar25 = puVar33 + 2;
            puVar39 = puVar33;
          }
          puVar34 = puVar34 + ((ulong)uVar5 & 0xfffffff0) * 4;
          uVar26 = uVar26 + (uVar5 & 0xfffffff0);
          if ((uVar5 & 0xfffffff0) == uVar5) goto LAB_001334d4;
        }
        pbVar36 = (byte *)((long)param_3 + (ulong)uVar26);
        do {
          uVar26 = *puVar34;
          puVar7 = puVar34 + 1;
          puVar29 = puVar34 + 2;
          puVar8 = puVar34 + 3;
          puVar34 = puVar34 + 4;
          uVar26 = *puVar8 >> 9 & 0x400040 | *puVar29 >> 0xb & 0x100010 |
                   *puVar7 >> 0xd & 0x40004 | uVar26 >> 0xf & 0x10001;
          pbVar37 = pbVar36 + 1;
          *pbVar36 = (byte)uVar26 | (byte)(uVar26 >> 0xf);
          pbVar36 = pbVar37;
        } while ((uint)((int)pbVar37 - (int)param_3) <= uVar27);
      }
LAB_001334d4:
      uVar26 = uVar32 + 7;
      if (-1 < (int)uVar32) {
        uVar26 = uVar32;
      }
      *(byte *)((long)param_3 + (long)((int)uVar28 >> 3)) =
           (byte)(0xff << uVar35) & *(byte *)((long)param_3 + (long)((int)uVar28 >> 3));
      uVar28 = uVar32 & 7;
      if ((int)uVar32 < 1) {
        uVar28 = -(-uVar32 & 7);
      }
      *(byte *)((long)param_3 + (long)((int)uVar26 >> 3)) =
           *(byte *)((long)param_3 + (long)((int)uVar26 >> 3)) &
           ((byte)(0xfe << (ulong)(uVar28 & 0x1f)) ^ 0xff);
      goto LAB_00132b94;
    }
    puVar29 = local_210;
    do {
      uVar26 = uVar27 & uVar32;
      uVar27 = uVar26 + 1;
      uVar9 = *(undefined2 *)
               (lVar41 + (int)(iVar42 + (((uVar28 & uVar5) << (ulong)(bVar90 & 0x1f)) + uVar26) * 2)
               );
      puVar34 = (uint *)((long)puVar29 + 2);
      *(undefined2 *)puVar29 = uVar9;
      *param_2 = uVar9;
      puVar29 = puVar34;
      param_2 = param_2 + 1;
    } while (puVar34 != auStack_10);
    uVar79 = CONCAT12((byte)(uStack_18c >> 0x1d),(ushort)((byte)(uStack_18c >> 0xd) & 4)) & 0x4ffff;
    uVar88 = CONCAT16((byte)(uStack_17c >> 0x1d),
                      (uint6)(CONCAT14((char)(uStack_17c >> 0xd),(uint)uVar79) & 0x4ffffffff)) &
             0x4ffffffffffff;
    uVar81 = CONCAT12((byte)(uStack_16c >> 0x1d),(ushort)((byte)(uStack_16c >> 0xd) & 4)) & 0x4ffff;
    uVar89 = CONCAT16((byte)(uStack_15c >> 0x1d),
                      (uint6)(CONCAT14((char)(uStack_15c >> 0xd),(uint)uVar81) & 0x4ffffffff)) &
             0x4ffffffffffff;
    uVar66 = CONCAT12((byte)(uStack_14c >> 0x1d),(ushort)((byte)(uStack_14c >> 0xd) & 4)) & 0x4ffff;
    uVar83 = CONCAT16((byte)(uStack_13c >> 0x1d),
                      (uint6)(CONCAT14((char)(uStack_13c >> 0xd),(uint)uVar66) & 0x4ffffffff)) &
             0x4ffffffffffff;
    uVar75 = CONCAT12((byte)(uStack_12c >> 0x1d),(ushort)((byte)(uStack_12c >> 0xd) & 4)) & 0x4ffff;
    uVar86 = CONCAT16((byte)(uStack_11c >> 0x1d),
                      (uint6)(CONCAT14((char)(uStack_11c >> 0xd),(uint)uVar75) & 0x4ffffffff)) &
             0x4ffffffffffff;
    uVar49 = CONCAT12((byte)(local_210[1] >> 0x1d),(ushort)((byte)(local_210[1] >> 0xd) & 4)) &
             0x4ffff;
    uVar68 = CONCAT16((byte)(uStack_1fc >> 0x1d),
                      (uint6)(CONCAT14((char)(uStack_1fc >> 0xd),(uint)uVar49) & 0x4ffffffff)) &
             0x4ffffffffffff;
    uVar53 = CONCAT12((byte)(uStack_1ec >> 0x1d),(ushort)((byte)(uStack_1ec >> 0xd) & 4)) & 0x4ffff;
    uVar74 = CONCAT16((byte)(uStack_1dc >> 0x1d),
                      (uint6)(CONCAT14((char)(uStack_1dc >> 0xd),(uint)uVar53) & 0x4ffffffff)) &
             0x4ffffffffffff;
    uVar94 = CONCAT12((byte)(uStack_10c >> 0x1d),(ushort)((byte)(uStack_10c >> 0xd) & 4)) & 0x4ffff;
    uVar96 = CONCAT16((byte)(uStack_fc >> 0x1d),
                      (uint6)(CONCAT14((char)(uStack_fc >> 0xd),(uint)uVar94) & 0x4ffffffff)) &
             0x4ffffffffffff;
    uVar98 = CONCAT12((byte)(uStack_ec >> 0x1d),(ushort)((byte)(uStack_ec >> 0xd) & 4)) & 0x4ffff;
    uVar100 = CONCAT16((byte)(uStack_dc >> 0x1d),
                       (uint6)(CONCAT14((char)(uStack_dc >> 0xd),(uint)uVar98) & 0x4ffffffff)) &
              0x4ffffffffffff;
    uVar104 = CONCAT12((byte)(uStack_cc >> 0x1d),(ushort)((byte)(uStack_cc >> 0xd) & 4)) & 0x4ffff;
    uVar107 = CONCAT12((byte)(uStack_ac >> 0x1d),(ushort)((byte)(uStack_ac >> 0xd) & 4)) & 0x4ffff;
    uVar82 = CONCAT12((byte)(uStack_1cc >> 0x1d),(ushort)((byte)(uStack_1cc >> 0xd) & 4)) & 0x4ffff;
    uVar92 = CONCAT16((byte)(uStack_1bc >> 0x1d),
                      (uint6)(CONCAT14((char)(uStack_1bc >> 0xd),(uint)uVar82) & 0x4ffffffff)) &
             0x4ffffffffffff;
    uVar85 = CONCAT12((byte)(uStack_1ac >> 0x1d),(ushort)((byte)(uStack_1ac >> 0xd) & 4)) & 0x4ffff;
    uVar93 = CONCAT16((byte)(uStack_19c >> 0x1d),
                      (uint6)(CONCAT14((char)(uStack_19c >> 0xd),(uint)uVar85) & 0x4ffffffff)) &
             0x4ffffffffffff;
    uVar50 = CONCAT14((char)(uStack_c0 >> 0xf),(local_d0 >> 0x1f) << 0x10) & 0x1ffffffff;
    uVar54 = CONCAT14((char)(uStack_a0 >> 0xf),(uStack_b0 >> 0x1f) << 0x10) & 0x1ffffffff;
    uVar130 = CONCAT16((byte)(uStack_1b8 >> 0x1b),
                       (uint6)(CONCAT14((char)(uStack_1b8 >> 0xb),
                                        (uint)(CONCAT12((byte)(uStack_1c8 >> 0x1b),
                                                        (ushort)((byte)(uStack_1c8 >> 0xb) & 0x10))
                                              & 0x10ffff)) & 0x10ffffffff)) & 0x10ffffffffffff;
    uVar72 = CONCAT12((byte)(uStack_8c >> 0x1d),(ushort)((byte)(uStack_8c >> 0xd) & 4)) & 0x4ffff;
    uVar84 = CONCAT16((byte)(uStack_7c >> 0x1d),
                      (uint6)(CONCAT14((char)(uStack_7c >> 0xd),(uint)uVar72) & 0x4ffffffff)) &
             0x4ffffffffffff;
    uVar76 = CONCAT12((byte)(uStack_6c >> 0x1d),(ushort)((byte)(uStack_6c >> 0xd) & 4)) & 0x4ffff;
    uVar87 = CONCAT16((byte)(uStack_5c >> 0x1d),
                      (uint6)(CONCAT14((char)(uStack_5c >> 0xd),(uint)uVar76) & 0x4ffffffff)) &
             0x4ffffffffffff;
    uVar91 = (ushort)(byte)((byte)(local_1d0 >> 0xf) & 1 | (byte)uVar82 | (byte)uVar130 |
                           (byte)(uStack_1c4 >> 9) & 0x40);
    local_230 = (byte)(local_210[3] >> 9);
    bStack_228 = (byte)(uStack_1e4 >> 9);
    bStack_226 = (byte)(uStack_1e4 >> 0x19);
    bStack_224 = (byte)(uStack_1d4 >> 9);
    bStack_222 = (byte)(uStack_1d4 >> 0x19);
    uVar131 = CONCAT16((byte)(uStack_1f4 >> 0x19),
                       (uint6)(CONCAT14((char)(uStack_1f4 >> 9),
                                        (uint)(CONCAT12((byte)(local_210[3] >> 0x19),
                                                        (ushort)(local_230 & 0x40)) & 0x40ffff)) &
                              0x40ffffffff)) & 0x40ffffffffffff;
    uVar51 = CONCAT16((byte)(uStack_94 >> 0x19),
                      (uint6)(CONCAT14((char)(uStack_94 >> 9),
                                       (uint)(uint3)(((byte)(uStack_a4 >> 0x19) & 0x40) << 0x10)) &
                             0x40ffffffff)) & 0x40ffffffffffff;
    uVar55 = CONCAT16((byte)(uStack_d4 >> 0x19),
                      (uint6)(CONCAT14((char)(uStack_d4 >> 9),
                                       (uint)(uint3)(((byte)(uStack_e4 >> 0x19) & 0x40) << 0x10)) &
                             0x40ffffffff)) & 0x40ffffffffffff;
    uVar48 = (ushort)(byte)((byte)(local_190 >> 0xf) & 1 | (byte)uVar79 |
                            (byte)(uStack_188 >> 0xb) & 0x10 | (byte)(uStack_184 >> 9) & 0x40);
    uVar65 = (ushort)(byte)((byte)(uStack_170 >> 0xf) & 1 | (byte)uVar81 |
                            (byte)(uStack_168 >> 0xb) & 0x10 | (byte)(uStack_164 >> 9) & 0x40);
    bVar90 = (byte)(uStack_160 >> 0xf) & 1 | (byte)(uVar89 >> 0x20) |
             (byte)(uStack_158 >> 0xb) & 0x10 | (byte)(uStack_154 >> 9) & 0x40;
    uVar89 = CONCAT16((byte)(uStack_160 >> 0x1f) | (byte)(uVar89 >> 0x30) |
                      (byte)(uStack_158 >> 0x1b) & 0x10 | (byte)(uStack_154 >> 0x19) & 0x40,
                      (uint6)CONCAT14(bVar90,(uint)CONCAT12((byte)(uStack_170 >> 0x1f) |
                                                            (byte)(uVar89 >> 0x10) |
                                                            (byte)(uStack_168 >> 0x1b) & 0x10 |
                                                            (byte)(uStack_164 >> 0x19) & 0x40,uVar65
                                                           )));
    uVar118 = (ushort)(byte)((byte)(local_150 >> 0xf) & 1 | (byte)uVar66 |
                             (byte)(uStack_148 >> 0xb) & 0x10 | (byte)(uStack_144 >> 9) & 0x40);
    uVar113 = (ushort)(byte)((byte)(local_210[0] >> 0xf) & 1 | (byte)uVar49 |
                             (byte)(local_210[2] >> 0xb) & 0x10 | (byte)uVar131);
    uVar64 = (ushort)(byte)((byte)uVar76 | (byte)(uStack_70 >> 0xf) & 1 |
                            (byte)(uStack_68 >> 0xb) & 0x10 | (byte)(uStack_64 >> 9) & 0x40);
    uVar12 = (ushort)(byte)((byte)uVar104 | (byte)(local_d0 >> 0xf) & 1 |
                            (byte)(uStack_c8 >> 0xb) & 0x10 | (byte)(uStack_c4 >> 9) & 0x40);
    uVar13 = (ushort)(byte)((byte)uVar94 | (byte)(local_110 >> 0xf) & 1 |
                            (byte)(uStack_108 >> 0xb) & 0x10 | (byte)(uStack_104 >> 9) & 0x40);
    uVar14 = (ushort)(byte)((byte)uVar98 | (byte)(uStack_f0 >> 0xf) & 1 |
                            (byte)(uStack_e8 >> 0xb) & 0x10 | (byte)(uStack_e4 >> 9) & 0x40);
    uVar47 = (ushort)(byte)((byte)(uStack_4c >> 0xd) & 4 | (byte)(local_50 >> 0xf) & 1 |
                            (byte)(uStack_48 >> 0xb) & 0x10 | (byte)(uStack_44 >> 9) & 0x40);
    uVar15 = CONCAT16((byte)(uStack_1e0 >> 0xf) & 1 | (byte)(uVar74 >> 0x20) |
                      (byte)(uStack_1d8 >> 0xb) & 0x10 | bStack_224 & 0x40,
                      (uint6)CONCAT14((byte)(uStack_1f0 >> 0xf) & 1 | (byte)uVar53 |
                                      (byte)(uStack_1e8 >> 0xb) & 0x10 | bStack_228 & 0x40,
                                      (uint)CONCAT12((byte)(uStack_200 >> 0xf) & 1 |
                                                     (byte)(uVar68 >> 0x20) |
                                                     (byte)(uStack_1f8 >> 0xb) & 0x10 |
                                                     (byte)(uVar131 >> 0x20),uVar113)));
    uVar21 = CONCAT16((byte)(uStack_1a0 >> 0xf) & 1 | (byte)(uVar93 >> 0x20) |
                      (byte)(uStack_198 >> 0xb) & 0x10 | (byte)(uStack_194 >> 9) & 0x40,
                      (uint6)CONCAT14((byte)(uStack_1b0 >> 0xf) & 1 | (byte)uVar85 |
                                      (byte)(uStack_1a8 >> 0xb) & 0x10 |
                                      (byte)(uStack_1a4 >> 9) & 0x40,
                                      (uint)CONCAT12((byte)(uStack_1c0 >> 0xf) & 1 |
                                                     (byte)(uVar92 >> 0x20) |
                                                     (byte)(uVar130 >> 0x20) |
                                                     (byte)(uStack_1b4 >> 9) & 0x40,uVar91)));
    uVar23 = CONCAT12((byte)(uVar96 >> 0x20) | (byte)(uStack_100 >> 0xf) & 1 |
                      (byte)(uStack_f8 >> 0xb) & 0x10 | (byte)(uStack_f4 >> 9) & 0x40,uVar13);
    uVar22 = CONCAT12((byte)(uVar100 >> 0x20) | (byte)(uStack_e0 >> 0xf) & 1 |
                      (byte)(uStack_d8 >> 0xb) & 0x10 | (byte)(uVar55 >> 0x20),uVar14);
    uVar24 = CONCAT16((byte)(uStack_9c >> 0xd) & 4 | (byte)(uVar54 >> 0x20) |
                      (byte)(uStack_98 >> 0xb) & 0x10 | (byte)(uVar51 >> 0x20),
                      (uint6)CONCAT14((byte)uVar107 | (byte)(uStack_b0 >> 0xf) & 1 |
                                      (byte)(uStack_a8 >> 0xb) & 0x10 |
                                      (byte)(uStack_a4 >> 9) & 0x40,
                                      (uint)CONCAT12((byte)(uStack_bc >> 0xd) & 4 |
                                                     (byte)(uVar50 >> 0x20) |
                                                     (byte)(uStack_b8 >> 0xb) & 0x10 |
                                                     (byte)(uStack_b4 >> 9) & 0x40,uVar12)));
    uVar77 = CONCAT22((ushort)((uint3)((uint3)(byte)((byte)(uVar96 >> 0x30) |
                                                     (byte)(uStack_100 >> 0x1f) |
                                                     (byte)(uStack_f8 >> 0x1b) & 0x10 |
                                                    (byte)(uStack_f4 >> 0x19) & 0x40) << 0x10) >>
                              0xf),
                      (ushort)(CONCAT12((byte)(uVar96 >> 0x10) | (byte)(local_110 >> 0x1f) |
                                        (byte)(uStack_108 >> 0x1b) & 0x10 |
                                        (byte)(uStack_104 >> 0x19) & 0x40,uVar13) >> 0xf));
    uVar78 = CONCAT22((ushort)(((uint7)(byte)((byte)(uVar100 >> 0x30) | (byte)(uStack_e0 >> 0x1f) |
                                              (byte)(uStack_d8 >> 0x1b) & 0x10 |
                                             (byte)(uVar55 >> 0x30)) << 0x30) >> 0x2f),
                      (ushort)(CONCAT12((byte)(uVar100 >> 0x10) | (byte)(uStack_f0 >> 0x1f) |
                                        (byte)(uStack_e8 >> 0x1b) & 0x10 | (byte)(uVar55 >> 0x10),
                                        uVar14) >> 0xf));
    uVar80 = CONCAT26((ushort)(((uint7)(byte)((byte)(uStack_9c >> 0x1d) & 4 |
                                              (byte)(uStack_a0 >> 0x1f) |
                                              (byte)(uStack_98 >> 0x1b) & 0x10 |
                                             (byte)(uVar51 >> 0x30)) << 0x30) >> 0x2f),
                      CONCAT24((ushort)((uint3)((uint3)(byte)((byte)(uVar107 >> 0x10) |
                                                              (byte)(uVar54 >> 0x10) |
                                                              (byte)(uStack_a8 >> 0x1b) & 0x10 |
                                                             (byte)(uVar51 >> 0x10)) << 0x10) >> 0xf
                                       ),
                               CONCAT22((ushort)((uint3)((uint3)(byte)((byte)(uStack_bc >> 0x1d) & 4
                                                                       | (byte)(uStack_c0 >> 0x1f) |
                                                                       (byte)(uStack_b8 >> 0x1b) &
                                                                       0x10 | (byte)(uStack_b4 >>
                                                                                    0x19) & 0x40) <<
                                                        0x10) >> 0xf),
                                        (ushort)(CONCAT12((byte)(uVar104 >> 0x10) |
                                                          (byte)(uVar50 >> 0x10) |
                                                          (byte)(uStack_c8 >> 0x1b) & 0x10 |
                                                          (byte)(uStack_c4 >> 0x19) & 0x40,uVar12)
                                                >> 0xf))));
    uVar19 = CONCAT12((byte)(uStack_180 >> 0xf) & 1 | (byte)(uVar88 >> 0x20) |
                      (byte)(uStack_178 >> 0xb) & 0x10 | (byte)(uStack_174 >> 9) & 0x40,uVar48);
    uVar20 = CONCAT12(bVar90,uVar65);
    uVar16 = CONCAT16((byte)(uStack_120 >> 0xf) & 1 | (byte)(uVar86 >> 0x20) |
                      (byte)(uStack_118 >> 0xb) & 0x10 | (byte)(uStack_114 >> 9) & 0x40,
                      (uint6)CONCAT14((byte)(uStack_130 >> 0xf) & 1 | (byte)uVar75 |
                                      (byte)(uStack_128 >> 0xb) & 0x10 |
                                      (byte)(uStack_124 >> 9) & 0x40,
                                      (uint)CONCAT12((byte)(uStack_140 >> 0xf) & 1 |
                                                     (byte)(uVar83 >> 0x20) |
                                                     (byte)(uStack_138 >> 0xb) & 0x10 |
                                                     (byte)(uStack_134 >> 9) & 0x40,uVar118)));
    uVar11 = CONCAT12((byte)(uVar84 >> 0x20) | (byte)(uStack_80 >> 0xf) & 1 |
                      (byte)(uStack_78 >> 0xb) & 0x10 | (byte)(uStack_74 >> 9) & 0x40,
                      (ushort)(byte)((byte)uVar72 | (byte)(local_90 >> 0xf) & 1 |
                                     (byte)(uStack_88 >> 0xb) & 0x10 | (byte)(uStack_84 >> 9) & 0x40
                                    ));
    uVar17 = CONCAT12((byte)(uVar87 >> 0x20) | (byte)(uStack_60 >> 0xf) & 1 |
                      (byte)(uStack_58 >> 0xb) & 0x10 | (byte)(uStack_54 >> 9) & 0x40,uVar64);
    uVar18 = CONCAT16((byte)(uStack_1c >> 0xd) & 4 | (byte)(uStack_20 >> 0xf) & 1 |
                      (byte)(uStack_18 >> 0xb) & 0x10 | (byte)(uStack_14 >> 9) & 0x40,
                      (uint6)CONCAT14((byte)(uStack_2c >> 0xd) & 4 | (byte)(uStack_30 >> 0xf) & 1 |
                                      (byte)(uStack_28 >> 0xb) & 0x10 |
                                      (byte)(uStack_24 >> 9) & 0x40,
                                      (uint)CONCAT12((byte)(uStack_3c >> 0xd) & 4 |
                                                     (byte)(uStack_40 >> 0xf) & 1 |
                                                     (byte)(uStack_38 >> 0xb) & 0x10 |
                                                     (byte)(uStack_34 >> 9) & 0x40,uVar47)));
    uVar69 = CONCAT22((ushort)((uint3)((uint3)(byte)((byte)(uVar84 >> 0x30) |
                                                     (byte)(uStack_80 >> 0x1f) |
                                                     (byte)(uStack_78 >> 0x1b) & 0x10 |
                                                    (byte)(uStack_74 >> 0x19) & 0x40) << 0x10) >>
                              0xf),
                      (ushort)((uint3)((uint3)(byte)((byte)(uVar84 >> 0x10) |
                                                     (byte)(local_90 >> 0x1f) |
                                                     (byte)(uStack_88 >> 0x1b) & 0x10 |
                                                    (byte)(uStack_84 >> 0x19) & 0x40) << 0x10) >>
                              0xf));
    uVar70 = CONCAT22((ushort)(((uint7)(byte)((byte)(uVar87 >> 0x30) | (byte)(uStack_60 >> 0x1f) |
                                              (byte)(uStack_58 >> 0x1b) & 0x10 |
                                             (byte)(uStack_54 >> 0x19) & 0x40) << 0x30) >> 0x2f),
                      (ushort)(CONCAT12((byte)(uVar87 >> 0x10) | (byte)(uStack_70 >> 0x1f) |
                                        (byte)(uStack_68 >> 0x1b) & 0x10 |
                                        (byte)(uStack_64 >> 0x19) & 0x40,uVar64) >> 0xf));
    uVar52 = CONCAT26((ushort)(((uint7)(byte)((byte)(uStack_1c >> 0x1d) & 4 |
                                              (byte)(uStack_20 >> 0x1f) |
                                              (byte)(uStack_18 >> 0x1b) & 0x10 |
                                             (byte)(uStack_14 >> 0x19) & 0x40) << 0x30) >> 0x2f),
                      CONCAT24((ushort)((uint3)((uint3)(byte)((byte)(uStack_2c >> 0x1d) & 4 |
                                                              (byte)(uStack_30 >> 0x1f) |
                                                              (byte)(uStack_28 >> 0x1b) & 0x10 |
                                                             (byte)(uStack_24 >> 0x19) & 0x40) <<
                                               0x10) >> 0xf),
                               CONCAT22((ushort)(((uint7)(byte)((byte)(uStack_3c >> 0x1d) & 4 |
                                                                (byte)(uStack_40 >> 0x1f) |
                                                                (byte)(uStack_38 >> 0x1b) & 0x10 |
                                                               (byte)(uStack_34 >> 0x19) & 0x40) <<
                                                 0x30) >> 0x2f),
                                        (ushort)(CONCAT12((byte)(uStack_4c >> 0x1d) & 4 |
                                                          (byte)(local_50 >> 0x1f) |
                                                          (byte)(uStack_48 >> 0x1b) & 0x10 |
                                                          (byte)(uStack_44 >> 0x19) & 0x40,uVar47)
                                                >> 0xf))));
    bVar90 = (byte)(CONCAT12((byte)(local_210[0] >> 0x1f) | (byte)(uVar68 >> 0x10) |
                             (byte)(local_210[2] >> 0x1b) & 0x10 | (byte)(uVar131 >> 0x10),uVar113)
                   >> 0xf);
    bVar57 = (byte)((uint3)((uint3)(byte)((byte)(uStack_200 >> 0x1f) | (byte)(uVar68 >> 0x30) |
                                          (byte)(uStack_1f8 >> 0x1b) & 0x10 |
                                         (byte)(uVar131 >> 0x30)) << 0x10) >> 0xf);
    bVar58 = (byte)((uint3)((uint3)(byte)((byte)(uStack_1f0 >> 0x1f) | (byte)(uVar74 >> 0x10) |
                                          (byte)(uStack_1e8 >> 0x1b) & 0x10 | bStack_226 & 0x40) <<
                           0x10) >> 0xf);
    bVar59 = (byte)(ushort)((uint3)((uint3)(byte)((byte)(uStack_1e0 >> 0x1f) |
                                                  (byte)(uVar74 >> 0x30) |
                                                  (byte)(uStack_1d8 >> 0x1b) & 0x10 |
                                                 bStack_222 & 0x40) << 0x10) >> 0xf);
    bVar60 = (byte)(CONCAT12((byte)(local_1d0 >> 0x1f) | (byte)(uVar92 >> 0x10) |
                             (byte)(uVar130 >> 0x10) | (byte)(uStack_1c4 >> 0x19) & 0x40,uVar91) >>
                   0xf);
    bVar61 = (byte)(uint3)(((uint7)(byte)((byte)(uStack_1c0 >> 0x1f) | (byte)(uVar92 >> 0x30) |
                                          (byte)(uVar130 >> 0x30) |
                                         (byte)(uStack_1b4 >> 0x19) & 0x40) << 0x30) >> 0x2f);
    bVar62 = (byte)((uint3)((uint3)(byte)((byte)(uStack_1b0 >> 0x1f) | (byte)(uVar93 >> 0x10) |
                                          (byte)(uStack_1a8 >> 0x1b) & 0x10 |
                                         (byte)(uStack_1a4 >> 0x19) & 0x40) << 0x10) >> 0xf);
    bVar63 = (byte)(uint3)(((uint7)(byte)((byte)(uStack_1a0 >> 0x1f) | (byte)(uVar93 >> 0x30) |
                                          (byte)(uStack_198 >> 0x1b) & 0x10 |
                                         (byte)(uStack_194 >> 0x19) & 0x40) << 0x30) >> 0x2f);
    uVar56 = CONCAT17((char)(ushort)((uint3)((uint3)(byte)((byte)(uStack_120 >> 0x1f) |
                                                           (byte)(uVar86 >> 0x30) |
                                                           (byte)(uStack_118 >> 0x1b) & 0x10 |
                                                          (byte)(uStack_114 >> 0x19) & 0x40) << 0x10
                                            ) >> 0xf),
                      CONCAT16((char)((uint3)((uint3)(byte)((byte)(uStack_130 >> 0x1f) |
                                                            (byte)(uVar86 >> 0x10) |
                                                            (byte)(uStack_128 >> 0x1b) & 0x10 |
                                                           (byte)(uStack_124 >> 0x19) & 0x40) <<
                                             0x10) >> 0xf),
                               CONCAT15((char)(ushort)((uint3)((uint3)(byte)((byte)(uStack_140 >>
                                                                                   0x1f) |
                                                                             (byte)(uVar83 >> 0x30)
                                                                             | (byte)(uStack_138 >>
                                                                                     0x1b) & 0x10 |
                                                                            (byte)(uStack_134 >>
                                                                                  0x19) & 0x40) <<
                                                              0x10) >> 0xf),
                                        CONCAT14((char)(ushort)(CONCAT12((byte)(local_150 >> 0x1f) |
                                                                         (byte)(uVar83 >> 0x10) |
                                                                         (byte)(uStack_148 >> 0x1b)
                                                                         & 0x10 | (byte)(uStack_144
                                                                                        >> 0x19) &
                                                                                  0x40,uVar118) >>
                                                               0xf),
                                                 CONCAT13((char)(uint3)(uVar89 >> 0x2f),
                                                          CONCAT12((char)(((ulong)uVar89 &
                                                                          0xffff8000) >> 0xf),
                                                                   CONCAT11((char)(ushort)(((uint7)(
                                                  byte)((byte)(uStack_180 >> 0x1f) |
                                                        (byte)(uVar88 >> 0x30) |
                                                        (byte)(uStack_178 >> 0x1b) & 0x10 |
                                                       (byte)(uStack_174 >> 0x19) & 0x40) << 0x30)
                                                  >> 0x2f),(char)(ushort)(CONCAT12((byte)(local_190
                                                                                         >> 0x1f) |
                                                                                   (byte)(uVar88 >>
                                                                                         0x10) |
                                                                                   (byte)(uStack_188
                                                                                         >> 0x1b) &
                                                                                   0x10 | (byte)(
                                                  uStack_184 >> 0x19) & 0x40,uVar48) >> 0xf))))))));
  }
  else {
    iVar45 = (int)sVar10;
    if ((*(ushort *)(param_1 + 0x98) & 0x2000) == 0) {
      if (*(char *)(param_1 + 0xae) != '\0') {
        video_2d_bg_layer_affine_setup_edges
                  (iVar38,(int)sVar10,uVar32 * 0x100 + 0xff,(long)*(short *)(param_1 + 0xa2),
                   param_1 + 0x58,param_1 + 0x68,param_1 + 0x60);
        video_2d_bg_layer_affine_setup_edges
                  (*(undefined4 *)(param_1 + 0x94),(long)*(short *)(param_1 + 0xa0),
                   uVar28 * 0x100 + 0xff,(long)*(short *)(param_1 + 0xa4),param_1 + 0x70,
                   param_1 + 0x80,param_1 + 0x78);
        *(undefined *)(param_1 + 0xae) = 0;
        param_2 = extraout_x10;
        lVar41 = extraout_x12;
        param_3 = extraout_x14;
        puVar43 = extraout_x15;
        iVar38 = extraout_w9;
        iVar40 = extraout_w11;
        uVar26 = extraout_w18;
        iVar42 = extraout_w13;
      }
      lVar44 = *(long *)(param_1 + 0x58);
      lVar30 = *(long *)(param_1 + 0x70);
      uVar32 = (uint)((ulong)lVar30 >> 0x20);
      uVar28 = (uint)((ulong)lVar44 >> 0x20);
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x68) + lVar44;
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x80) + lVar30;
      if ((int)uVar32 <= (int)uVar28) {
        uVar32 = uVar28;
      }
      uVar27 = (uint)((ulong)(lVar30 + *(long *)(param_1 + 0x78)) >> 0x20);
      uVar28 = (uint)((ulong)(lVar44 + *(long *)(param_1 + 0x60)) >> 0x20);
      *param_3 = 0;
      param_3[1] = 0;
      if ((int)uVar27 < (int)uVar28) {
        uVar28 = uVar27;
      }
      param_3[2] = 0;
      param_3[3] = 0;
      if (((int)uVar28 < (int)uVar32) ||
         (((int)uVar32 < 0x100 && (int)uVar28 < 0) != 0xff < (int)uVar32)) goto LAB_00132b94;
      if ((int)uVar32 < 0) {
        uVar32 = 0;
      }
      if (0xff < (int)uVar28) {
        uVar28 = 0xff;
      }
      puVar29 = local_210;
      iVar38 = iVar38 + uVar32 * iVar45;
      iVar40 = iVar40 + uVar32 * iVar46;
      if (-1 < (int)(uVar28 - uVar32)) {
        lVar30 = 0;
        do {
          iVar6 = iVar40 >> 8;
          iVar40 = iVar40 + iVar46;
          iVar2 = iVar38 >> 8;
          iVar38 = iVar38 + iVar45;
          uVar9 = *(undefined2 *)
                   (lVar41 + (iVar42 + ((iVar6 << (ulong)(uVar26 & 0x1f)) + iVar2) * 2));
          *(undefined2 *)((long)puVar29 + lVar30 + ((ulong)uVar32 & 7) * 2) = uVar9;
          *(undefined2 *)((long)param_2 + lVar30 + (long)(int)uVar32 * 2) = uVar9;
          lVar30 = lVar30 + 2;
        } while (lVar30 != ((long)(int)(uVar28 - uVar32) + 1) * 2);
      }
      uVar27 = uVar28 >> 3;
      uVar26 = uVar32 >> 3;
      if (uVar32 >> 3 <= uVar27) {
        uVar5 = (uVar27 - uVar26) + 1;
        if (0xe < uVar27 - uVar26) {
          uVar71 = CONCAT14((char)(uStack_1a0 >> 0xf),(uStack_1b0 >> 0x1f) << 0x10) & 0x1ffffffff;
          uVar73 = CONCAT14((char)(uStack_1e0 >> 0xf),(uStack_1f0 >> 0x1f) << 0x10) & 0x1ffffffff;
          uVar67 = CONCAT14((char)(uStack_160 >> 0xf),(uStack_170 >> 0x1f) << 0x10) & 0x1ffffffff;
          uVar50 = CONCAT14((char)(uStack_140 >> 0xf),(local_150 >> 0x1f) << 0x10) & 0x1ffffffff;
          uVar54 = CONCAT14((char)(uStack_120 >> 0xf),(uStack_130 >> 0x1f) << 0x10) & 0x1ffffffff;
          ((undefined8 *)((long)param_3 + (ulong)uVar26))[1] =
               CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uStack_120 >> 0x1f) |
                                                     (byte)(uStack_11c >> 0x1d) & 4 |
                                                     (byte)(uStack_118 >> 0x1b) & 0x10 |
                                                    (byte)(uStack_114 >> 0x19) & 0x40) << 0x30) >>
                                     0x2f) |
                        (byte)(uVar54 >> 0x20) | (byte)(uStack_11c >> 0xd) & 4 |
                        (byte)(uStack_118 >> 0xb) & 0x10 | (byte)(uStack_114 >> 9) & 0x40,
                        CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar54 >> 0x10) |
                                                              (byte)(uStack_12c >> 0x1d) & 4 |
                                                              (byte)(uStack_128 >> 0x1b) & 0x10 |
                                                             (byte)(uStack_124 >> 0x19) & 0x40) <<
                                               0x10) >> 0xf) |
                                 (byte)(uStack_130 >> 0xf) & 1 | (byte)(uStack_12c >> 0xd) & 4 |
                                 (byte)(uStack_128 >> 0xb) & 0x10 | (byte)(uStack_124 >> 9) & 0x40,
                                 CONCAT15((byte)(ushort)(((uint7)(byte)((byte)(uStack_140 >> 0x1f) |
                                                                        (byte)(uStack_13c >> 0x1d) &
                                                                        4 | (byte)(uStack_138 >>
                                                                                  0x1b) & 0x10 |
                                                                       (byte)(uStack_134 >> 0x19) &
                                                                       0x40) << 0x30) >> 0x2f) |
                                          (byte)(uVar50 >> 0x20) | (byte)(uStack_13c >> 0xd) & 4 |
                                          (byte)(uStack_138 >> 0xb) & 0x10 |
                                          (byte)(uStack_134 >> 9) & 0x40,
                                          CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar50 >> 0x10) | (byte)(uStack_14c >> 0x1d) & 4 |
                                                  (byte)(uStack_148 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_144 >> 0x19) & 0x40) << 0x10) >> 0xf
                                                  ) | (byte)(local_150 >> 0xf) & 1 |
                                                      (byte)(uStack_14c >> 0xd) & 4 |
                                                      (byte)(uStack_148 >> 0xb) & 0x10 |
                                                      (byte)(uStack_144 >> 9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uStack_160 >> 0x1f) |
                                                  (byte)(uStack_15c >> 0x1d) & 4 |
                                                  (byte)(uStack_158 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_154 >> 0x19) & 0x40) << 0x30) >>
                                                  0x2f) | (byte)(uVar67 >> 0x20) |
                                                          (byte)(uStack_15c >> 0xd) & 4 |
                                                          (byte)(uStack_158 >> 0xb) & 0x10 |
                                                          (byte)(uStack_154 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar67 >> 0x10) | (byte)(uStack_16c >> 0x1d) & 4 |
                                                  (byte)(uStack_168 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_164 >> 0x19) & 0x40) << 0x10) >> 0xf
                                                  ) | (byte)(uStack_170 >> 0xf) & 1 |
                                                      (byte)(uStack_16c >> 0xd) & 4 |
                                                      (byte)(uStack_168 >> 0xb) & 0x10 |
                                                      (byte)(uStack_164 >> 9) & 0x40,
                                                  CONCAT11((byte)((uint3)((uint3)(byte)((byte)(
                                                  uStack_180 >> 0x1f) |
                                                  (byte)(uStack_17c >> 0x1d) & 4 |
                                                  (byte)(uStack_178 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_174 >> 0x19) & 0x40) << 0x10) >> 0xf
                                                  ) | (byte)(uStack_180 >> 0xf) & 1 |
                                                      (byte)(uStack_17c >> 0xd) & 4 |
                                                      (byte)(uStack_178 >> 0xb) & 0x10 |
                                                      (byte)(uStack_174 >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(local_190 >>
                                                                                     0x1f) |
                                                                               (byte)(uStack_18c >>
                                                                                     0x1d) & 4 |
                                                                               (byte)(uStack_188 >>
                                                                                     0x1b) & 0x10 |
                                                                              (byte)(uStack_184 >>
                                                                                    0x19) & 0x40) <<
                                                                0x10) >> 0xf) |
                                                  (byte)(local_190 >> 0xf) & 1 |
                                                  (byte)(uStack_18c >> 0xd) & 4 |
                                                  (byte)(uStack_188 >> 0xb) & 0x10 |
                                                  (byte)(uStack_184 >> 9) & 0x40)))))));
          *(undefined8 *)((long)param_3 + (ulong)uVar26) =
               CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uStack_1a0 >> 0x1f) |
                                                     (byte)(uStack_19c >> 0x1d) & 4 |
                                                     (byte)(uStack_198 >> 0x1b) & 0x10 |
                                                    (byte)(uStack_194 >> 0x19) & 0x40) << 0x30) >>
                                     0x2f) |
                        (byte)(uVar71 >> 0x20) | (byte)(uStack_19c >> 0xd) & 4 |
                        (byte)(uStack_198 >> 0xb) & 0x10 | (byte)(uStack_194 >> 9) & 0x40,
                        CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar71 >> 0x10) |
                                                              (byte)(uStack_1ac >> 0x1d) & 4 |
                                                              (byte)(uStack_1a8 >> 0x1b) & 0x10 |
                                                             (byte)(uStack_1a4 >> 0x19) & 0x40) <<
                                               0x10) >> 0xf) |
                                 (byte)(uStack_1b0 >> 0xf) & 1 | (byte)(uStack_1ac >> 0xd) & 4 |
                                 (byte)(uStack_1a8 >> 0xb) & 0x10 | (byte)(uStack_1a4 >> 9) & 0x40,
                                 CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(uStack_1c0 >>
                                                                                     0x1f) |
                                                                               (byte)(uStack_1bc >>
                                                                                     0x1d) & 4 |
                                                                               (byte)(uStack_1b8 >>
                                                                                     0x1b) & 0x10 |
                                                                              (byte)(uStack_1b4 >>
                                                                                    0x19) & 0x40) <<
                                                                0x10) >> 0xf) |
                                          (byte)(uStack_1c0 >> 0xf) & 1 |
                                          (byte)(uStack_1bc >> 0xd) & 4 |
                                          (byte)(uStack_1b8 >> 0xb) & 0x10 |
                                          (byte)(uStack_1b4 >> 9) & 0x40,
                                          CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  local_1d0 >> 0x1f) |
                                                  (byte)(uStack_1cc >> 0x1d) & 4 |
                                                  (byte)(uStack_1c8 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_1c4 >> 0x19) & 0x40) << 0x10) >> 0xf
                                                  ) | (byte)(local_1d0 >> 0xf) & 1 |
                                                      (byte)(uStack_1cc >> 0xd) & 4 |
                                                      (byte)(uStack_1c8 >> 0xb) & 0x10 |
                                                      (byte)(uStack_1c4 >> 9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uStack_1e0 >> 0x1f) |
                                                  (byte)(uStack_1dc >> 0x1d) & 4 |
                                                  (byte)(uStack_1d8 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_1d4 >> 0x19) & 0x40) << 0x30) >>
                                                  0x2f) | (byte)(uVar73 >> 0x20) |
                                                          (byte)(uStack_1dc >> 0xd) & 4 |
                                                          (byte)(uStack_1d8 >> 0xb) & 0x10 |
                                                          (byte)(uStack_1d4 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar73 >> 0x10) | (byte)(uStack_1ec >> 0x1d) & 4 |
                                                  (byte)(uStack_1e8 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_1e4 >> 0x19) & 0x40) << 0x10) >> 0xf
                                                  ) | (byte)(uStack_1f0 >> 0xf) & 1 |
                                                      (byte)(uStack_1ec >> 0xd) & 4 |
                                                      (byte)(uStack_1e8 >> 0xb) & 0x10 |
                                                      (byte)(uStack_1e4 >> 9) & 0x40,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uStack_200 >> 0x1f) |
                                                  (byte)(uStack_1fc >> 0x1d) & 4 |
                                                  (byte)(uStack_1f8 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_1f4 >> 0x19) & 0x40) << 0x10) >> 0xf
                                                  ) | (byte)(uStack_200 >> 0xf) & 1 |
                                                      (byte)(uStack_1fc >> 0xd) & 4 |
                                                      (byte)(uStack_1f8 >> 0xb) & 0x10 |
                                                      (byte)(uStack_1f4 >> 9) & 0x40,
                                                  (byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  local_210[0] >> 0x1f) |
                                                  (byte)(local_210[1] >> 0x1d) & 4 |
                                                  (byte)(local_210[2] >> 0x1b) & 0x10 |
                                                  (byte)(local_210[3] >> 0x19) & 0x40) << 0x10) >>
                                                  0xf) | (byte)(local_210[0] >> 0xf) & 1 |
                                                         (byte)(local_210[1] >> 0xd) & 4 |
                                                         (byte)(local_210[2] >> 0xb) & 0x10 |
                                                         (byte)(local_210[3] >> 9) & 0x40)))))));
          if (uVar5 >> 4 != 1) {
            uVar73 = CONCAT14((char)(uStack_e0 >> 0xf),(uStack_f0 >> 0x1f) << 0x10) & 0x1ffffffff;
            uVar71 = CONCAT14((char)(uStack_a0 >> 0xf),(uStack_b0 >> 0x1f) << 0x10) & 0x1ffffffff;
            uVar67 = CONCAT14((char)(uStack_60 >> 0xf),(uStack_70 >> 0x1f) << 0x10) & 0x1ffffffff;
            uVar50 = CONCAT14((char)(uStack_40 >> 0xf),(local_50 >> 0x1f) << 0x10) & 0x1ffffffff;
            uVar54 = CONCAT14((char)(uStack_20 >> 0xf),(uStack_30 >> 0x1f) << 0x10) & 0x1ffffffff;
            *(ulong *)((long)param_3 + (ulong)uVar26 + 0x18) =
                 CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uStack_20 >> 0x1f) |
                                                       (byte)(uStack_1c >> 0x1d) & 4 |
                                                       (byte)(uStack_18 >> 0x1b) & 0x10 |
                                                      (byte)(uStack_14 >> 0x19) & 0x40) << 0x30) >>
                                       0x2f) |
                          (byte)(uVar54 >> 0x20) | (byte)(uStack_1c >> 0xd) & 4 |
                          (byte)(uStack_18 >> 0xb) & 0x10 | (byte)(uStack_14 >> 9) & 0x40,
                          CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar54 >> 0x10) |
                                                                (byte)(uStack_2c >> 0x1d) & 4 |
                                                                (byte)(uStack_28 >> 0x1b) & 0x10 |
                                                               (byte)(uStack_24 >> 0x19) & 0x40) <<
                                                 0x10) >> 0xf) |
                                   (byte)(uStack_30 >> 0xf) & 1 | (byte)(uStack_2c >> 0xd) & 4 |
                                   (byte)(uStack_28 >> 0xb) & 0x10 | (byte)(uStack_24 >> 9) & 0x40,
                                   CONCAT15((byte)(ushort)(((uint7)(byte)((byte)(uStack_40 >> 0x1f)
                                                                          | (byte)(uStack_3c >> 0x1d
                                                                                  ) & 4 |
                                                                          (byte)(uStack_38 >> 0x1b)
                                                                          & 0x10 | (byte)(uStack_34
                                                                                         >> 0x19) &
                                                                                   0x40) << 0x30) >>
                                                          0x2f) |
                                            (byte)(uVar50 >> 0x20) | (byte)(uStack_3c >> 0xd) & 4 |
                                            (byte)(uStack_38 >> 0xb) & 0x10 |
                                            (byte)(uStack_34 >> 9) & 0x40,
                                            CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar50 >> 0x10) | (byte)(uStack_4c >> 0x1d) & 4 |
                                                  (byte)(uStack_48 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_44 >> 0x19) & 0x40) << 0x10) >> 0xf)
                                                  | (byte)(local_50 >> 0xf) & 1 |
                                                    (byte)(uStack_4c >> 0xd) & 4 |
                                                    (byte)(uStack_48 >> 0xb) & 0x10 |
                                                    (byte)(uStack_44 >> 9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uStack_60 >> 0x1f) | (byte)(uStack_5c >> 0x1d) & 4
                                                  | (byte)(uStack_58 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_54 >> 0x19) & 0x40) << 0x30) >> 0x2f
                                                  ) | (byte)(uVar67 >> 0x20) |
                                                      (byte)(uStack_5c >> 0xd) & 4 |
                                                      (byte)(uStack_58 >> 0xb) & 0x10 |
                                                      (byte)(uStack_54 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar67 >> 0x10) | (byte)(uStack_6c >> 0x1d) & 4 |
                                                  (byte)(uStack_68 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_64 >> 0x19) & 0x40) << 0x10) >> 0xf)
                                                  | (byte)(uStack_70 >> 0xf) & 1 |
                                                    (byte)(uStack_6c >> 0xd) & 4 |
                                                    (byte)(uStack_68 >> 0xb) & 0x10 |
                                                    (byte)(uStack_64 >> 9) & 0x40,
                                                  CONCAT11((byte)((uint3)((uint3)(byte)((byte)(
                                                  uStack_80 >> 0x1f) | (byte)(uStack_7c >> 0x1d) & 4
                                                  | (byte)(uStack_78 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_74 >> 0x19) & 0x40) << 0x10) >> 0xf)
                                                  | (byte)(uStack_80 >> 0xf) & 1 |
                                                    (byte)(uStack_7c >> 0xd) & 4 |
                                                    (byte)(uStack_78 >> 0xb) & 0x10 |
                                                    (byte)(uStack_74 >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(local_90 >>
                                                                                     0x1f) |
                                                                               (byte)(uStack_8c >>
                                                                                     0x1d) & 4 |
                                                                               (byte)(uStack_88 >>
                                                                                     0x1b) & 0x10 |
                                                                              (byte)(uStack_84 >>
                                                                                    0x19) & 0x40) <<
                                                                0x10) >> 0xf) |
                                                  (byte)(local_90 >> 0xf) & 1 |
                                                  (byte)(uStack_8c >> 0xd) & 4 |
                                                  (byte)(uStack_88 >> 0xb) & 0x10 |
                                                  (byte)(uStack_84 >> 9) & 0x40)))))));
            *(ulong *)((long)param_3 + (ulong)uVar26 + 0x10) =
                 CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uStack_a0 >> 0x1f) |
                                                       (byte)(uStack_9c >> 0x1d) & 4 |
                                                       (byte)(uStack_98 >> 0x1b) & 0x10 |
                                                      (byte)(uStack_94 >> 0x19) & 0x40) << 0x30) >>
                                       0x2f) |
                          (byte)(uVar71 >> 0x20) | (byte)(uStack_9c >> 0xd) & 4 |
                          (byte)(uStack_98 >> 0xb) & 0x10 | (byte)(uStack_94 >> 9) & 0x40,
                          CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar71 >> 0x10) |
                                                                (byte)(uStack_ac >> 0x1d) & 4 |
                                                                (byte)(uStack_a8 >> 0x1b) & 0x10 |
                                                               (byte)(uStack_a4 >> 0x19) & 0x40) <<
                                                 0x10) >> 0xf) |
                                   (byte)(uStack_b0 >> 0xf) & 1 | (byte)(uStack_ac >> 0xd) & 4 |
                                   (byte)(uStack_a8 >> 0xb) & 0x10 | (byte)(uStack_a4 >> 9) & 0x40,
                                   CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(uStack_c0 >>
                                                                                       0x1f) |
                                                                                 (byte)(uStack_bc >>
                                                                                       0x1d) & 4 |
                                                                                 (byte)(uStack_b8 >>
                                                                                       0x1b) & 0x10
                                                                                | (byte)(uStack_b4
                                                                                        >> 0x19) &
                                                                                  0x40) << 0x10) >>
                                                          0xf) |
                                            (byte)(uStack_c0 >> 0xf) & 1 |
                                            (byte)(uStack_bc >> 0xd) & 4 |
                                            (byte)(uStack_b8 >> 0xb) & 0x10 |
                                            (byte)(uStack_b4 >> 9) & 0x40,
                                            CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  local_d0 >> 0x1f) | (byte)(uStack_cc >> 0x1d) & 4
                                                  | (byte)(uStack_c8 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_c4 >> 0x19) & 0x40) << 0x10) >> 0xf)
                                                  | (byte)(local_d0 >> 0xf) & 1 |
                                                    (byte)(uStack_cc >> 0xd) & 4 |
                                                    (byte)(uStack_c8 >> 0xb) & 0x10 |
                                                    (byte)(uStack_c4 >> 9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uStack_e0 >> 0x1f) | (byte)(uStack_dc >> 0x1d) & 4
                                                  | (byte)(uStack_d8 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_d4 >> 0x19) & 0x40) << 0x30) >> 0x2f
                                                  ) | (byte)(uVar73 >> 0x20) |
                                                      (byte)(uStack_dc >> 0xd) & 4 |
                                                      (byte)(uStack_d8 >> 0xb) & 0x10 |
                                                      (byte)(uStack_d4 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar73 >> 0x10) | (byte)(uStack_ec >> 0x1d) & 4 |
                                                  (byte)(uStack_e8 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_e4 >> 0x19) & 0x40) << 0x10) >> 0xf)
                                                  | (byte)(uStack_f0 >> 0xf) & 1 |
                                                    (byte)(uStack_ec >> 0xd) & 4 |
                                                    (byte)(uStack_e8 >> 0xb) & 0x10 |
                                                    (byte)(uStack_e4 >> 9) & 0x40,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uStack_100 >> 0x1f) |
                                                  (byte)(uStack_fc >> 0x1d) & 4 |
                                                  (byte)(uStack_f8 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_f4 >> 0x19) & 0x40) << 0x10) >> 0xf)
                                                  | (byte)(uStack_100 >> 0xf) & 1 |
                                                    (byte)(uStack_fc >> 0xd) & 4 |
                                                    (byte)(uStack_f8 >> 0xb) & 0x10 |
                                                    (byte)(uStack_f4 >> 9) & 0x40,
                                                  (byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  local_110 >> 0x1f) |
                                                  (byte)(uStack_10c >> 0x1d) & 4 |
                                                  (byte)(uStack_108 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_104 >> 0x19) & 0x40) << 0x10) >> 0xf
                                                  ) | (byte)(local_110 >> 0xf) & 1 |
                                                      (byte)(uStack_10c >> 0xd) & 4 |
                                                      (byte)(uStack_108 >> 0xb) & 0x10 |
                                                      (byte)(uStack_104 >> 9) & 0x40)))))));
          }
          puVar29 = puVar29 + ((ulong)uVar5 & 0xfffffff0) * 4;
          uVar26 = uVar26 + (uVar5 & 0xfffffff0);
          if (uVar5 == (uVar5 & 0xfffffff0)) goto LAB_001330f4;
        }
        pbVar36 = (byte *)((long)param_3 + (ulong)uVar26);
        do {
          uVar26 = *puVar29;
          puVar7 = puVar29 + 1;
          puVar34 = puVar29 + 2;
          puVar8 = puVar29 + 3;
          puVar29 = puVar29 + 4;
          uVar26 = *puVar34 >> 0xb & 0x100010 | *puVar8 >> 9 & 0x400040 |
                   uVar26 >> 0xf & 0x10001 | *puVar7 >> 0xd & 0x40004;
          pbVar37 = pbVar36 + 1;
          *pbVar36 = (byte)uVar26 | (byte)(uVar26 >> 0xf);
          pbVar36 = pbVar37;
        } while ((uint)((int)pbVar37 - (int)param_3) <= uVar27);
      }
LAB_001330f4:
      *(byte *)((long)param_3 + (long)((int)uVar32 >> 3)) =
           (byte)(0xff << (ulong)(uVar32 & 7)) & *(byte *)((long)param_3 + (long)((int)uVar32 >> 3))
      ;
      *(byte *)((long)param_3 + (long)((int)uVar28 >> 3)) =
           *(byte *)((long)param_3 + (long)((int)uVar28 >> 3)) &
           ((byte)(0xfe << (ulong)(uVar28 & 7)) ^ 0xff);
      goto LAB_00132b94;
    }
    puVar29 = local_210;
    do {
      uVar27 = iVar40 >> 8;
      uVar5 = iVar38 >> 8;
      iVar40 = iVar40 + iVar46;
      iVar38 = iVar38 + iVar45;
      uVar9 = *(undefined2 *)
               (lVar41 + (int)(iVar42 + (((uVar28 & uVar27) << (ulong)(uVar26 & 0x1f)) +
                                        (uVar32 & uVar5)) * 2));
      puVar34 = (uint *)((long)puVar29 + 2);
      *(undefined2 *)puVar29 = uVar9;
      *param_2 = uVar9;
      puVar29 = puVar34;
      param_2 = param_2 + 1;
    } while (puVar34 != auStack_10);
    uVar50 = CONCAT14((char)(uStack_1c0 >> 0xf),
                      (uint)CONCAT12((byte)(local_1d0 >> 0x1f),
                                     (ushort)((byte)(local_1d0 >> 0xf) & 1))) & 0x1ffffffff;
    uVar91 = (ushort)(byte)((byte)uVar50 | (byte)(uStack_1cc >> 0xd) & 4 |
                            (byte)(uStack_1c8 >> 0xb) & 0x10 | (byte)(uStack_1c4 >> 9) & 0x40);
    uVar85 = CONCAT12((byte)(uStack_cc >> 0x1d),(ushort)((byte)(uStack_cc >> 0xd) & 4)) & 0x4ffff;
    uVar98 = CONCAT12((byte)(uStack_ac >> 0x1d),(ushort)((byte)(uStack_ac >> 0xd) & 4)) & 0x4ffff;
    local_230 = (byte)(local_210[3] >> 9);
    bStack_228 = (byte)(uStack_1e4 >> 9);
    bStack_226 = (byte)(uStack_1e4 >> 0x19);
    bStack_224 = (byte)(uStack_1d4 >> 9);
    bStack_222 = (byte)(uStack_1d4 >> 0x19);
    uVar81 = CONCAT12((byte)(uStack_c8 >> 0x1b),(ushort)((byte)(uStack_c8 >> 0xb) & 0x10)) &
             0x10ffff;
    uVar82 = CONCAT12((byte)(uStack_a8 >> 0x1b),(ushort)((byte)(uStack_a8 >> 0xb) & 0x10)) &
             0x10ffff;
    uVar76 = CONCAT12((byte)(uStack_88 >> 0x1b),(ushort)((byte)(uStack_88 >> 0xb) & 0x10)) &
             0x10ffff;
    uVar79 = CONCAT12((byte)(uStack_68 >> 0x1b),(ushort)((byte)(uStack_68 >> 0xb) & 0x10)) &
             0x10ffff;
    uVar72 = CONCAT12((byte)(uStack_108 >> 0x1b),(ushort)((byte)(uStack_108 >> 0xb) & 0x10)) &
             0x10ffff;
    uVar75 = CONCAT12((byte)(uStack_e8 >> 0x1b),(ushort)((byte)(uStack_e8 >> 0xb) & 0x10)) &
             0x10ffff;
    uVar94 = CONCAT12((byte)(uStack_144 >> 0x19),(ushort)((byte)(uStack_144 >> 9) & 0x40)) &
             0x40ffff;
    uVar104 = CONCAT12((byte)(uStack_124 >> 0x19),(ushort)((byte)(uStack_124 >> 9) & 0x40)) &
              0x40ffff;
    uVar68 = CONCAT16((byte)(uStack_1f4 >> 0x19),
                      (uint6)(CONCAT14((char)(uStack_1f4 >> 9),
                                       (uint)(CONCAT12((byte)(local_210[3] >> 0x19),
                                                       (ushort)(local_230 & 0x40)) & 0x40ffff)) &
                             0x40ffffffff)) & 0x40ffffffffffff;
    uVar66 = CONCAT12((byte)(uStack_64 >> 0x19),(ushort)((byte)(uStack_64 >> 9) & 0x40)) & 0x40ffff;
    uVar53 = CONCAT12((byte)(uStack_e4 >> 0x19),(ushort)((byte)(uStack_e4 >> 9) & 0x40)) & 0x40ffff;
    uVar55 = CONCAT16((byte)(uStack_d4 >> 0x19),
                      (uint6)(CONCAT14((char)(uStack_d4 >> 9),(uint)uVar53) & 0x40ffffffff)) &
             0x40ffffffffffff;
    uVar49 = CONCAT12((byte)(uStack_a4 >> 0x19),(ushort)((byte)(uStack_a4 >> 9) & 0x40)) & 0x40ffff;
    uVar51 = CONCAT16((byte)(uStack_94 >> 0x19),
                      (uint6)(CONCAT14((char)(uStack_94 >> 9),(uint)uVar49) & 0x40ffffffff)) &
             0x40ffffffffffff;
    uVar12 = (ushort)(byte)((byte)(local_190 >> 0xf) & 1 | (byte)(uStack_18c >> 0xd) & 4 |
                            (byte)(uStack_188 >> 0xb) & 0x10 | (byte)(uStack_184 >> 9) & 0x40);
    uVar13 = (ushort)(byte)((byte)(uStack_170 >> 0xf) & 1 | (byte)(uStack_16c >> 0xd) & 4 |
                            (byte)(uStack_168 >> 0xb) & 0x10 | (byte)(uStack_164 >> 9) & 0x40);
    uVar118 = (ushort)(byte)((byte)(local_150 >> 0xf) & 1 | (byte)(uStack_14c >> 0xd) & 4 |
                             (byte)(uStack_148 >> 0xb) & 0x10 | (byte)uVar94);
    uVar113 = (ushort)(byte)((byte)(local_210[0] >> 0xf) & 1 | (byte)(local_210[1] >> 0xd) & 4 |
                             (byte)(local_210[2] >> 0xb) & 0x10 | (byte)uVar68);
    uVar65 = (ushort)(byte)((byte)(uStack_6c >> 0xd) & 4 | (byte)(uStack_70 >> 0xf) & 1 |
                            (byte)uVar79 | (byte)uVar66);
    uVar14 = (ushort)(byte)((byte)uVar85 | (byte)(local_d0 >> 0xf) & 1 | (byte)uVar81 |
                           (byte)(uStack_c4 >> 9) & 0x40);
    uVar47 = (ushort)(byte)((byte)(uStack_10c >> 0xd) & 4 | (byte)(local_110 >> 0xf) & 1 |
                            (byte)uVar72 | (byte)(uStack_104 >> 9) & 0x40);
    uVar64 = (ushort)(byte)((byte)(uStack_ec >> 0xd) & 4 | (byte)(uStack_f0 >> 0xf) & 1 |
                            (byte)uVar75 | (byte)uVar53);
    uVar48 = (ushort)(byte)((byte)(uStack_4c >> 0xd) & 4 | (byte)(local_50 >> 0xf) & 1 |
                            (byte)(uStack_48 >> 0xb) & 0x10 | (byte)(uStack_44 >> 9) & 0x40);
    uVar23 = CONCAT12((byte)(uStack_fc >> 0xd) & 4 | (byte)(uStack_100 >> 0xf) & 1 |
                      (byte)(uStack_f8 >> 0xb) & 0x10 | (byte)(uStack_f4 >> 9) & 0x40,uVar47);
    uVar22 = CONCAT12((byte)(uStack_dc >> 0xd) & 4 | (byte)(uStack_e0 >> 0xf) & 1 |
                      (byte)(uStack_d8 >> 0xb) & 0x10 | (byte)(uVar55 >> 0x20),uVar64);
    uVar24 = CONCAT16((byte)(uStack_9c >> 0xd) & 4 | (byte)(uStack_a0 >> 0xf) & 1 |
                      (byte)(uStack_98 >> 0xb) & 0x10 | (byte)(uVar51 >> 0x20),
                      (uint6)CONCAT14((byte)uVar98 | (byte)(uStack_b0 >> 0xf) & 1 | (byte)uVar82 |
                                      (byte)uVar49,
                                      (uint)CONCAT12((byte)(uStack_bc >> 0xd) & 4 |
                                                     (byte)(uStack_c0 >> 0xf) & 1 |
                                                     (byte)(uStack_b8 >> 0xb) & 0x10 |
                                                     (byte)(uStack_b4 >> 9) & 0x40,uVar14)));
    uVar77 = CONCAT22((ushort)((uint3)((uint3)(byte)((byte)(uStack_fc >> 0x1d) & 4 |
                                                     (byte)(uStack_100 >> 0x1f) |
                                                     (byte)(uStack_f8 >> 0x1b) & 0x10 |
                                                    (byte)(uStack_f4 >> 0x19) & 0x40) << 0x10) >>
                              0xf),
                      (ushort)(CONCAT12((byte)(uStack_10c >> 0x1d) & 4 | (byte)(local_110 >> 0x1f) |
                                        (byte)(uVar72 >> 0x10) | (byte)(uStack_104 >> 0x19) & 0x40,
                                        uVar47) >> 0xf));
    uVar78 = CONCAT22((ushort)(((uint7)(byte)((byte)(uStack_dc >> 0x1d) & 4 |
                                              (byte)(uStack_e0 >> 0x1f) |
                                              (byte)(uStack_d8 >> 0x1b) & 0x10 |
                                             (byte)(uVar55 >> 0x30)) << 0x30) >> 0x2f),
                      (ushort)(CONCAT12((byte)(uStack_ec >> 0x1d) & 4 | (byte)(uStack_f0 >> 0x1f) |
                                        (byte)(uVar75 >> 0x10) | (byte)(uVar55 >> 0x10),uVar64) >>
                              0xf));
    uVar80 = CONCAT26((ushort)(((uint7)(byte)((byte)(uStack_9c >> 0x1d) & 4 |
                                              (byte)(uStack_a0 >> 0x1f) |
                                              (byte)(uStack_98 >> 0x1b) & 0x10 |
                                             (byte)(uVar51 >> 0x30)) << 0x30) >> 0x2f),
                      CONCAT24((ushort)((uint3)((uint3)(byte)((byte)(uVar98 >> 0x10) |
                                                              (byte)(uStack_b0 >> 0x1f) |
                                                              (byte)(uVar82 >> 0x10) |
                                                             (byte)(uVar51 >> 0x10)) << 0x10) >> 0xf
                                       ),
                               CONCAT22((ushort)((uint3)((uint3)(byte)((byte)(uStack_bc >> 0x1d) & 4
                                                                       | (byte)(uStack_c0 >> 0x1f) |
                                                                       (byte)(uStack_b8 >> 0x1b) &
                                                                       0x10 | (byte)(uStack_b4 >>
                                                                                    0x19) & 0x40) <<
                                                        0x10) >> 0xf),
                                        (ushort)(CONCAT12((byte)(uVar85 >> 0x10) |
                                                          (byte)(local_d0 >> 0x1f) |
                                                          (byte)(uVar81 >> 0x10) |
                                                          (byte)(uStack_c4 >> 0x19) & 0x40,uVar14)
                                                >> 0xf))));
    uVar15 = CONCAT16((byte)(uStack_1e0 >> 0xf) & 1 | (byte)(uStack_1dc >> 0xd) & 4 |
                      (byte)(uStack_1d8 >> 0xb) & 0x10 | bStack_224 & 0x40,
                      (uint6)CONCAT14((byte)(uStack_1f0 >> 0xf) & 1 | (byte)(uStack_1ec >> 0xd) & 4
                                      | (byte)(uStack_1e8 >> 0xb) & 0x10 | bStack_228 & 0x40,
                                      (uint)CONCAT12((byte)(uStack_200 >> 0xf) & 1 |
                                                     (byte)(uStack_1fc >> 0xd) & 4 |
                                                     (byte)(uStack_1f8 >> 0xb) & 0x10 |
                                                     (byte)(uVar68 >> 0x20),uVar113)));
    uVar21 = CONCAT16((byte)(uStack_1a0 >> 0xf) & 1 | (byte)(uStack_19c >> 0xd) & 4 |
                      (byte)(uStack_198 >> 0xb) & 0x10 | (byte)(uStack_194 >> 9) & 0x40,
                      (uint6)CONCAT14((byte)(uStack_1b0 >> 0xf) & 1 | (byte)(uStack_1ac >> 0xd) & 4
                                      | (byte)(uStack_1a8 >> 0xb) & 0x10 |
                                      (byte)(uStack_1a4 >> 9) & 0x40,
                                      (uint)CONCAT12((byte)(uVar50 >> 0x20) |
                                                     (byte)(uStack_1bc >> 0xd) & 4 |
                                                     (byte)(uStack_1b8 >> 0xb) & 0x10 |
                                                     (byte)(uStack_1b4 >> 9) & 0x40,uVar91)));
    uVar11 = CONCAT12((byte)(uStack_7c >> 0xd) & 4 | (byte)(uStack_80 >> 0xf) & 1 |
                      (byte)(uStack_78 >> 0xb) & 0x10 | (byte)(uStack_74 >> 9) & 0x40,
                      (ushort)(byte)((byte)(uStack_8c >> 0xd) & 4 | (byte)(local_90 >> 0xf) & 1 |
                                     (byte)uVar76 | (byte)(uStack_84 >> 9) & 0x40));
    uVar17 = CONCAT12((byte)(uStack_5c >> 0xd) & 4 | (byte)(uStack_60 >> 0xf) & 1 |
                      (byte)(uStack_58 >> 0xb) & 0x10 | (byte)(uStack_54 >> 9) & 0x40,uVar65);
    uVar18 = CONCAT16((byte)(uStack_1c >> 0xd) & 4 | (byte)(uStack_20 >> 0xf) & 1 |
                      (byte)(uStack_18 >> 0xb) & 0x10 | (byte)(uStack_14 >> 9) & 0x40,
                      (uint6)CONCAT14((byte)(uStack_2c >> 0xd) & 4 | (byte)(uStack_30 >> 0xf) & 1 |
                                      (byte)(uStack_28 >> 0xb) & 0x10 |
                                      (byte)(uStack_24 >> 9) & 0x40,
                                      (uint)CONCAT12((byte)(uStack_3c >> 0xd) & 4 |
                                                     (byte)(uStack_40 >> 0xf) & 1 |
                                                     (byte)(uStack_38 >> 0xb) & 0x10 |
                                                     (byte)(uStack_34 >> 9) & 0x40,uVar48)));
    uVar19 = CONCAT12((byte)(uStack_180 >> 0xf) & 1 | (byte)(uStack_17c >> 0xd) & 4 |
                      (byte)(uStack_178 >> 0xb) & 0x10 | (byte)(uStack_174 >> 9) & 0x40,uVar12);
    uVar20 = CONCAT12((byte)(uStack_160 >> 0xf) & 1 | (byte)(uStack_15c >> 0xd) & 4 |
                      (byte)(uStack_158 >> 0xb) & 0x10 | (byte)(uStack_154 >> 9) & 0x40,uVar13);
    uVar16 = CONCAT16((byte)(uStack_120 >> 0xf) & 1 | (byte)(uStack_11c >> 0xd) & 4 |
                      (byte)(uStack_118 >> 0xb) & 0x10 | (byte)(uStack_114 >> 9) & 0x40,
                      (uint6)CONCAT14((byte)(uStack_130 >> 0xf) & 1 | (byte)(uStack_12c >> 0xd) & 4
                                      | (byte)(uStack_128 >> 0xb) & 0x10 | (byte)uVar104,
                                      (uint)CONCAT12((byte)(uStack_140 >> 0xf) & 1 |
                                                     (byte)(uStack_13c >> 0xd) & 4 |
                                                     (byte)(uStack_138 >> 0xb) & 0x10 |
                                                     (byte)(uStack_134 >> 9) & 0x40,uVar118)));
    uVar69 = CONCAT22((ushort)((uint3)((uint3)(byte)((byte)(uStack_7c >> 0x1d) & 4 |
                                                     (byte)(uStack_80 >> 0x1f) |
                                                     (byte)(uStack_78 >> 0x1b) & 0x10 |
                                                    (byte)(uStack_74 >> 0x19) & 0x40) << 0x10) >>
                              0xf),
                      (ushort)((uint3)((uint3)(byte)((byte)(uStack_8c >> 0x1d) & 4 |
                                                     (byte)(local_90 >> 0x1f) |
                                                     (byte)(uVar76 >> 0x10) |
                                                    (byte)(uStack_84 >> 0x19) & 0x40) << 0x10) >>
                              0xf));
    uVar70 = CONCAT22((ushort)(((uint7)(byte)((byte)(uStack_5c >> 0x1d) & 4 |
                                              (byte)(uStack_60 >> 0x1f) |
                                              (byte)(uStack_58 >> 0x1b) & 0x10 |
                                             (byte)(uStack_54 >> 0x19) & 0x40) << 0x30) >> 0x2f),
                      (ushort)(CONCAT12((byte)(uStack_6c >> 0x1d) & 4 | (byte)(uStack_70 >> 0x1f) |
                                        (byte)(uVar79 >> 0x10) | (byte)(uVar66 >> 0x10),uVar65) >>
                              0xf));
    uVar52 = CONCAT26((ushort)(((uint7)(byte)((byte)(uStack_1c >> 0x1d) & 4 |
                                              (byte)(uStack_20 >> 0x1f) |
                                              (byte)(uStack_18 >> 0x1b) & 0x10 |
                                             (byte)(uStack_14 >> 0x19) & 0x40) << 0x30) >> 0x2f),
                      CONCAT24((ushort)((uint3)((uint3)(byte)((byte)(uStack_2c >> 0x1d) & 4 |
                                                              (byte)(uStack_30 >> 0x1f) |
                                                              (byte)(uStack_28 >> 0x1b) & 0x10 |
                                                             (byte)(uStack_24 >> 0x19) & 0x40) <<
                                               0x10) >> 0xf),
                               CONCAT22((ushort)(((uint7)(byte)((byte)(uStack_3c >> 0x1d) & 4 |
                                                                (byte)(uStack_40 >> 0x1f) |
                                                                (byte)(uStack_38 >> 0x1b) & 0x10 |
                                                               (byte)(uStack_34 >> 0x19) & 0x40) <<
                                                 0x30) >> 0x2f),
                                        (ushort)(CONCAT12((byte)(uStack_4c >> 0x1d) & 4 |
                                                          (byte)(local_50 >> 0x1f) |
                                                          (byte)(uStack_48 >> 0x1b) & 0x10 |
                                                          (byte)(uStack_44 >> 0x19) & 0x40,uVar48)
                                                >> 0xf))));
    bVar90 = (byte)(CONCAT12((byte)(local_210[0] >> 0x1f) | (byte)(local_210[1] >> 0x1d) & 4 |
                             (byte)(local_210[2] >> 0x1b) & 0x10 | (byte)(uVar68 >> 0x10),uVar113)
                   >> 0xf);
    bVar57 = (byte)((uint3)((uint3)(byte)((byte)(uStack_200 >> 0x1f) |
                                          (byte)(uStack_1fc >> 0x1d) & 4 |
                                          (byte)(uStack_1f8 >> 0x1b) & 0x10 | (byte)(uVar68 >> 0x30)
                                         ) << 0x10) >> 0xf);
    bVar58 = (byte)((uint3)((uint3)(byte)((byte)(uStack_1f0 >> 0x1f) |
                                          (byte)(uStack_1ec >> 0x1d) & 4 |
                                          (byte)(uStack_1e8 >> 0x1b) & 0x10 | bStack_226 & 0x40) <<
                           0x10) >> 0xf);
    bVar59 = (byte)(ushort)((uint3)((uint3)(byte)((byte)(uStack_1e0 >> 0x1f) |
                                                  (byte)(uStack_1dc >> 0x1d) & 4 |
                                                  (byte)(uStack_1d8 >> 0x1b) & 0x10 |
                                                 bStack_222 & 0x40) << 0x10) >> 0xf);
    bVar60 = (byte)(CONCAT12((byte)(uVar50 >> 0x10) | (byte)(uStack_1cc >> 0x1d) & 4 |
                             (byte)(uStack_1c8 >> 0x1b) & 0x10 | (byte)(uStack_1c4 >> 0x19) & 0x40,
                             uVar91) >> 0xf);
    bVar61 = (byte)((uint3)((uint3)(byte)((byte)(uStack_1c0 >> 0x1f) |
                                          (byte)(uStack_1bc >> 0x1d) & 4 |
                                          (byte)(uStack_1b8 >> 0x1b) & 0x10 |
                                         (byte)(uStack_1b4 >> 0x19) & 0x40) << 0x10) >> 0xf);
    bVar62 = (byte)(ushort)((uint3)((uint3)(byte)((byte)(uStack_1b0 >> 0x1f) |
                                                  (byte)(uStack_1ac >> 0x1d) & 4 |
                                                  (byte)(uStack_1a8 >> 0x1b) & 0x10 |
                                                 (byte)(uStack_1a4 >> 0x19) & 0x40) << 0x10) >> 0xf)
    ;
    bVar63 = (byte)(ushort)((uint3)((uint3)(byte)((byte)(uStack_1a0 >> 0x1f) |
                                                  (byte)(uStack_19c >> 0x1d) & 4 |
                                                  (byte)(uStack_198 >> 0x1b) & 0x10 |
                                                 (byte)(uStack_194 >> 0x19) & 0x40) << 0x10) >> 0xf)
    ;
    uVar56 = CONCAT17((char)(ushort)((uint3)((uint3)(byte)((byte)(uStack_120 >> 0x1f) |
                                                           (byte)(uStack_11c >> 0x1d) & 4 |
                                                           (byte)(uStack_118 >> 0x1b) & 0x10 |
                                                          (byte)(uStack_114 >> 0x19) & 0x40) << 0x10
                                            ) >> 0xf),
                      CONCAT16((char)((uint3)((uint3)(byte)((byte)(uStack_130 >> 0x1f) |
                                                            (byte)(uStack_12c >> 0x1d) & 4 |
                                                            (byte)(uStack_128 >> 0x1b) & 0x10 |
                                                           (byte)(uVar104 >> 0x10)) << 0x10) >> 0xf)
                               ,CONCAT15((char)(ushort)((uint3)((uint3)(byte)((byte)(uStack_140 >>
                                                                                    0x1f) |
                                                                              (byte)(uStack_13c >>
                                                                                    0x1d) & 4 |
                                                                              (byte)(uStack_138 >>
                                                                                    0x1b) & 0x10 |
                                                                             (byte)(uStack_134 >>
                                                                                   0x19) & 0x40) <<
                                                               0x10) >> 0xf),
                                         CONCAT14((char)(ushort)(CONCAT12((byte)(local_150 >> 0x1f)
                                                                          | (byte)(uStack_14c >>
                                                                                  0x1d) & 4 |
                                                                          (byte)(uStack_148 >> 0x1b)
                                                                          & 0x10 | (byte)(uVar94 >>
                                                                                         0x10),
                                                                          uVar118) >> 0xf),
                                                  CONCAT13((char)((uint3)((uint3)(byte)((byte)(
                                                  uStack_160 >> 0x1f) |
                                                  (byte)(uStack_15c >> 0x1d) & 4 |
                                                  (byte)(uStack_158 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_154 >> 0x19) & 0x40) << 0x10) >> 0xf
                                                  ),CONCAT12((char)(ushort)(CONCAT12((byte)(
                                                  uStack_170 >> 0x1f) |
                                                  (byte)(uStack_16c >> 0x1d) & 4 |
                                                  (byte)(uStack_168 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_164 >> 0x19) & 0x40,uVar13) >> 0xf),
                                                  CONCAT11((char)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uStack_180 >> 0x1f) |
                                                  (byte)(uStack_17c >> 0x1d) & 4 |
                                                  (byte)(uStack_178 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_174 >> 0x19) & 0x40) << 0x10) >> 0xf
                                                  ),(char)(ushort)(CONCAT12((byte)(local_190 >> 0x1f
                                                                                  ) | (byte)(
                                                  uStack_18c >> 0x1d) & 4 |
                                                  (byte)(uStack_188 >> 0x1b) & 0x10 |
                                                  (byte)(uStack_184 >> 0x19) & 0x40,uVar12) >> 0xf))
                                                  ))))));
  }
  param_3[1] = CONCAT17((byte)((ulong)uVar56 >> 0x38) | (byte)((uint7)uVar16 >> 0x30),
                        CONCAT16((byte)((ulong)uVar56 >> 0x30) | (byte)((uint7)uVar16 >> 0x20),
                                 CONCAT15((byte)((ulong)uVar56 >> 0x28) |
                                          (byte)((uint7)uVar16 >> 0x10),
                                          CONCAT14((byte)((ulong)uVar56 >> 0x20) | (byte)uVar16,
                                                   CONCAT13((byte)((ulong)uVar56 >> 0x18) |
                                                            (byte)((uint3)uVar20 >> 0x10),
                                                            CONCAT12((byte)((ulong)uVar56 >> 0x10) |
                                                                     (byte)uVar20,
                                                                     CONCAT11((byte)((ulong)uVar56
                                                                                    >> 8) |
                                                                              (byte)((uint3)uVar19
                                                                                    >> 0x10),
                                                                              (byte)uVar56 |
                                                                              (byte)uVar19)))))));
  *param_3 = CONCAT17(bVar63 | (byte)((uint7)uVar21 >> 0x30),
                      CONCAT16(bVar62 | (byte)((uint7)uVar21 >> 0x20),
                               CONCAT15(bVar61 | (byte)((uint7)uVar21 >> 0x10),
                                        CONCAT14(bVar60 | (byte)uVar21,
                                                 CONCAT13(bVar59 | (byte)((uint7)uVar15 >> 0x30),
                                                          CONCAT12(bVar58 | (byte)((uint7)uVar15 >>
                                                                                  0x20),
                                                                   CONCAT11(bVar57 | (byte)((uint7)
                                                  uVar15 >> 0x10),bVar90 | (byte)uVar15)))))));
  param_3[3] = CONCAT17((byte)((ulong)uVar52 >> 0x30) | (byte)((uint7)uVar18 >> 0x30),
                        CONCAT16((byte)((ulong)uVar52 >> 0x20) | (byte)((uint7)uVar18 >> 0x20),
                                 CONCAT15((byte)((ulong)uVar52 >> 0x10) |
                                          (byte)((uint7)uVar18 >> 0x10),
                                          CONCAT14((byte)uVar52 | (byte)uVar18,
                                                   CONCAT13((byte)((uint)uVar70 >> 0x10) |
                                                            (byte)((uint3)uVar17 >> 0x10),
                                                            CONCAT12((byte)uVar70 | (byte)uVar17,
                                                                     CONCAT11((byte)((uint)uVar69 >>
                                                                                    0x10) |
                                                                              (byte)((uint3)uVar11
                                                                                    >> 0x10),
                                                                              (byte)uVar69 |
                                                                              (byte)uVar11)))))));
  param_3[2] = CONCAT17((byte)((ulong)uVar80 >> 0x30) | (byte)((uint7)uVar24 >> 0x30),
                        CONCAT16((byte)((ulong)uVar80 >> 0x20) | (byte)((uint7)uVar24 >> 0x20),
                                 CONCAT15((byte)((ulong)uVar80 >> 0x10) |
                                          (byte)((uint7)uVar24 >> 0x10),
                                          CONCAT14((byte)uVar80 | (byte)uVar24,
                                                   CONCAT13((byte)((uint)uVar78 >> 0x10) |
                                                            (byte)((uint3)uVar22 >> 0x10),
                                                            CONCAT12((byte)uVar78 | (byte)uVar22,
                                                                     CONCAT11((byte)((uint)uVar77 >>
                                                                                    0x10) |
                                                                              (byte)((uint3)uVar23
                                                                                    >> 0x10),
                                                                              (byte)uVar77 |
                                                                              (byte)uVar23)))))));
LAB_00132b94:
  if (local_8 - **(long **)(puVar43 + 0xdc0) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - **(long **)(puVar43 + 0xdc0),0);
}


