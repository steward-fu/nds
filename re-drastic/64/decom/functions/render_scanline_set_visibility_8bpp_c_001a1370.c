/*
 * Ghidra decompilation
 *
 * Function : render_scanline_set_visibility_8bpp_c
 * Address  : 001a1370
 * Program  : drastic64
 */


void render_scanline_set_visibility_8bpp_c(undefined8 *param_1,undefined8 *param_2)

{
  uint5 uVar1;
  uint5 uVar2;
  long lVar3;
  byte bVar4;
  byte bVar11;
  uint5 uVar5;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar13;
  byte bVar14;
  ulong uVar6;
  ulong uVar7;
  byte bVar15;
  byte bVar16;
  byte bVar23;
  uint5 uVar17;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar25;
  byte bVar26;
  undefined8 uVar18;
  ulong uVar19;
  byte bVar27;
  byte bVar28;
  uint uVar29;
  byte bVar32;
  byte bVar33;
  byte bVar35;
  byte bVar37;
  byte bVar38;
  ulong uVar30;
  byte bVar34;
  uint uVar36;
  byte bVar39;
  ulong uVar31;
  byte bVar40;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar49;
  byte bVar50;
  undefined8 uVar41;
  ulong uVar42;
  byte bVar51;
  ulong uVar43;
  byte bVar52;
  uint uVar53;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar61;
  byte bVar62;
  ulong uVar54;
  uint uVar60;
  ulong uVar55;
  byte bVar63;
  byte bVar64;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar71;
  byte bVar72;
  undefined8 uVar65;
  uint uVar70;
  byte bVar73;
  byte bVar74;
  byte bVar78;
  byte bVar79;
  uint uVar75;
  uint7 uVar76;
  byte bVar80;
  byte bVar81;
  byte bVar83;
  uint uVar82;
  byte bVar84;
  byte bVar85;
  undefined8 uVar77;
  byte bVar86;
  uint7 uVar87;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar95;
  ulong uVar88;
  byte bVar96;
  byte bVar97;
  undefined8 uVar89;
  int iVar98;
  undefined8 uVar99;
  int iVar101;
  ulong uVar100;
  int iVar102;
  int iVar104;
  ulong uVar103;
  uint3 uVar105;
  ulong uVar106;
  uint3 uVar107;
  undefined8 uVar108;
  uint7 uVar109;
  uint7 uVar110;
  undefined8 uVar111;
  int iVar112;
  uint7 uVar113;
  ulong uVar114;
  int iVar116;
  ulong uVar115;
  int iVar117;
  uint7 uVar118;
  undefined8 uVar119;
  int iVar121;
  ulong uVar120;
  uint uVar122;
  int iVar123;
  uint7 uVar124;
  undefined8 uVar125;
  int iVar128;
  ulong uVar126;
  uint uVar129;
  ulong uVar127;
  int iVar130;
  uint7 uVar131;
  undefined8 uVar132;
  int iVar134;
  ulong uVar133;
  uint uVar135;
  ushort uVar136;
  int iVar137;
  int iVar138;
  uint uVar139;
  ushort uVar140;
  int iVar141;
  int iVar142;
  uint uVar143;
  undefined8 uVar144;
  uint uVar12;
  uint uVar24;
  uint uVar48;
  uint uVar94;
  
  if (param_1 + 4 <= param_2 || param_2 + 0x20 <= param_1) {
    uVar132 = param_2[1];
    uVar125 = *param_2;
    uVar119 = param_2[3];
    uVar114 = param_2[2];
    uVar111 = param_2[5];
    uVar89 = param_2[4];
    uVar108 = param_2[7];
    uVar106 = param_2[6];
    uVar77 = param_2[9];
    uVar99 = param_2[8];
    uVar18 = param_2[0xb];
    uVar6 = param_2[10];
    uVar65 = param_2[0xd];
    uVar54 = param_2[0xc];
    uVar41 = param_2[0xf];
    uVar30 = param_2[0xe];
    uVar53 = (uint)uVar89 >> 4;
    uVar60 = (uint)uVar111 >> 4;
    uVar127 = (uVar106 & 0xfffffff0) >> 4;
    uVar70 = (uint)uVar108 >> 4;
    iVar137 = (int)((ulong)uVar125 >> 0x20) << 4;
    iVar138 = (int)((ulong)uVar132 >> 0x20) << 4;
    iVar141 = (int)(uVar114 >> 0x20) << 4;
    iVar142 = (int)((ulong)uVar119 >> 0x20) << 4;
    uVar75 = (uint)uVar125 >> 4;
    uVar82 = (uint)uVar132 >> 4;
    uVar88 = (uVar114 & 0xfffffff0) >> 4;
    uVar94 = (uint)uVar119 >> 4;
    iVar123 = (int)((ulong)uVar89 >> 0x20) << 4;
    iVar128 = (int)((ulong)uVar111 >> 0x20) << 4;
    iVar130 = (int)(uVar106 >> 0x20) << 4;
    iVar134 = (int)((ulong)uVar108 >> 0x20) << 4;
    uVar29 = (uint)uVar99 >> 4;
    uVar36 = (uint)uVar77 >> 4;
    uVar42 = (uVar6 & 0xfffffff0) >> 4;
    uVar48 = (uint)uVar18 >> 4;
    iVar112 = (int)((ulong)uVar99 >> 0x20) << 4;
    iVar116 = (int)((ulong)uVar77 >> 0x20) << 4;
    iVar117 = (int)(uVar6 >> 0x20) << 4;
    iVar121 = (int)((ulong)uVar18 >> 0x20) << 4;
    uVar7 = (uVar54 & 0xfffffff0) >> 4;
    uVar12 = (uint)uVar65 >> 4;
    uVar19 = (uVar30 & 0xfffffff0) >> 4;
    uVar24 = (uint)uVar41 >> 4;
    iVar98 = (int)(uVar54 >> 0x20) << 4;
    iVar101 = (int)((ulong)uVar65 >> 0x20) << 4;
    iVar102 = (int)(uVar30 >> 0x20) << 4;
    iVar104 = (int)((ulong)uVar41 >> 0x20) << 4;
    bVar16 = (byte)((ulong)uVar125 >> 0x18);
    bVar4 = (byte)((ulong)uVar132 >> 0x18);
    bVar8 = (byte)((ulong)uVar119 >> 0x18);
    bVar20 = (byte)((ulong)uVar89 >> 0x18);
    bVar9 = (byte)((ulong)uVar111 >> 0x18);
    bVar10 = (byte)((ulong)uVar108 >> 0x18);
    bVar21 = (byte)((ulong)uVar99 >> 0x18);
    bVar11 = (byte)((ulong)uVar77 >> 0x18);
    bVar13 = (byte)((ulong)uVar18 >> 0x18);
    bVar14 = (byte)((ulong)uVar65 >> 0x18);
    bVar15 = (byte)((ulong)uVar41 >> 0x18);
    uVar136 = CONCAT11((byte)((uint)iVar137 >> 8) | (byte)((ulong)uVar125 >> 0x28),
                       (byte)iVar137 | (byte)((ulong)uVar125 >> 0x20)) & 0xf0f0;
    uVar140 = CONCAT11((byte)((uint)iVar141 >> 8) | (byte)(uVar114 >> 0x28),
                       (byte)iVar141 | (byte)(uVar114 >> 0x20)) & 0xf0f0;
    uVar126 = CONCAT17((byte)((uint)iVar128 >> 0x18) | (byte)((ulong)uVar111 >> 0x38),
                       CONCAT16((byte)((uint)iVar128 >> 0x10) | (byte)((ulong)uVar111 >> 0x30),
                                CONCAT15((byte)((uint)iVar128 >> 8) | (byte)((ulong)uVar111 >> 0x28)
                                         ,CONCAT14((byte)iVar128 | (byte)((ulong)uVar111 >> 0x20),
                                                   CONCAT13((byte)((uint)iVar123 >> 0x18) |
                                                            (byte)((ulong)uVar89 >> 0x38),
                                                            CONCAT12((byte)((uint)iVar123 >> 0x10) |
                                                                     (byte)((ulong)uVar89 >> 0x30),
                                                                     CONCAT11((byte)((uint)iVar123
                                                                                    >> 8) |
                                                                              (byte)((ulong)uVar89
                                                                                    >> 0x28),
                                                                              (byte)iVar123 |
                                                                              (byte)((ulong)uVar89
                                                                                    >> 0x20))))))))
              & 0xf0f0f0f0f0f0f0f0;
    uVar133 = CONCAT17((byte)((uint)iVar134 >> 0x18) | (byte)((ulong)uVar108 >> 0x38),
                       CONCAT16((byte)((uint)iVar134 >> 0x10) | (byte)((ulong)uVar108 >> 0x30),
                                CONCAT15((byte)((uint)iVar134 >> 8) | (byte)((ulong)uVar108 >> 0x28)
                                         ,CONCAT14((byte)iVar134 | (byte)((ulong)uVar108 >> 0x20),
                                                   CONCAT13((byte)((uint)iVar130 >> 0x18) |
                                                            (byte)(uVar106 >> 0x38),
                                                            CONCAT12((byte)((uint)iVar130 >> 0x10) |
                                                                     (byte)(uVar106 >> 0x30),
                                                                     CONCAT11((byte)((uint)iVar130
                                                                                    >> 8) |
                                                                              (byte)(uVar106 >> 0x28
                                                                                    ),(byte)iVar130
                                                                                      | (byte)(
                                                  uVar106 >> 0x20)))))))) & 0xf0f0f0f0f0f0f0f0;
    uVar115 = CONCAT17((byte)((uint)iVar116 >> 0x18) | (byte)((ulong)uVar77 >> 0x38),
                       CONCAT16((byte)((uint)iVar116 >> 0x10) | (byte)((ulong)uVar77 >> 0x30),
                                CONCAT15((byte)((uint)iVar116 >> 8) | (byte)((ulong)uVar77 >> 0x28),
                                         CONCAT14((byte)iVar116 | (byte)((ulong)uVar77 >> 0x20),
                                                  CONCAT13((byte)((uint)iVar112 >> 0x18) |
                                                           (byte)((ulong)uVar99 >> 0x38),
                                                           CONCAT12((byte)((uint)iVar112 >> 0x10) |
                                                                    (byte)((ulong)uVar99 >> 0x30),
                                                                    CONCAT11((byte)((uint)iVar112 >>
                                                                                   8) |
                                                                             (byte)((ulong)uVar99 >>
                                                                                   0x28),
                                                                             (byte)iVar112 |
                                                                             (byte)((ulong)uVar99 >>
                                                                                   0x20)))))))) &
              0xf0f0f0f0f0f0f0f0;
    uVar120 = CONCAT17((byte)((uint)iVar121 >> 0x18) | (byte)((ulong)uVar18 >> 0x38),
                       CONCAT16((byte)((uint)iVar121 >> 0x10) | (byte)((ulong)uVar18 >> 0x30),
                                CONCAT15((byte)((uint)iVar121 >> 8) | (byte)((ulong)uVar18 >> 0x28),
                                         CONCAT14((byte)iVar121 | (byte)((ulong)uVar18 >> 0x20),
                                                  CONCAT13((byte)((uint)iVar117 >> 0x18) |
                                                           (byte)(uVar6 >> 0x38),
                                                           CONCAT12((byte)((uint)iVar117 >> 0x10) |
                                                                    (byte)(uVar6 >> 0x30),
                                                                    CONCAT11((byte)((uint)iVar117 >>
                                                                                   8) |
                                                                             (byte)(uVar6 >> 0x28),
                                                                             (byte)iVar117 |
                                                                             (byte)(uVar6 >> 0x20)))
                                                          ))))) & 0xf0f0f0f0f0f0f0f0;
    uVar100 = CONCAT17((byte)((uint)iVar101 >> 0x18) | (byte)((ulong)uVar65 >> 0x38),
                       CONCAT16((byte)((uint)iVar101 >> 0x10) | (byte)((ulong)uVar65 >> 0x30),
                                CONCAT15((byte)((uint)iVar101 >> 8) | (byte)((ulong)uVar65 >> 0x28),
                                         CONCAT14((byte)iVar101 | (byte)((ulong)uVar65 >> 0x20),
                                                  CONCAT13((byte)((uint)iVar98 >> 0x18) |
                                                           (byte)(uVar54 >> 0x38),
                                                           CONCAT12((byte)((uint)iVar98 >> 0x10) |
                                                                    (byte)(uVar54 >> 0x30),
                                                                    CONCAT11((byte)((uint)iVar98 >>
                                                                                   8) |
                                                                             (byte)(uVar54 >> 0x28),
                                                                             (byte)iVar98 |
                                                                             (byte)(uVar54 >> 0x20))
                                                                   )))))) & 0xf0f0f0f0f0f0f0f0;
    uVar103 = CONCAT17((byte)((uint)iVar104 >> 0x18) | (byte)((ulong)uVar41 >> 0x38),
                       CONCAT16((byte)((uint)iVar104 >> 0x10) | (byte)((ulong)uVar41 >> 0x30),
                                CONCAT15((byte)((uint)iVar104 >> 8) | (byte)((ulong)uVar41 >> 0x28),
                                         CONCAT14((byte)iVar104 | (byte)((ulong)uVar41 >> 0x20),
                                                  CONCAT13((byte)((uint)iVar102 >> 0x18) |
                                                           (byte)(uVar30 >> 0x38),
                                                           CONCAT12((byte)((uint)iVar102 >> 0x10) |
                                                                    (byte)(uVar30 >> 0x30),
                                                                    CONCAT11((byte)((uint)iVar102 >>
                                                                                   8) |
                                                                             (byte)(uVar30 >> 0x28),
                                                                             (byte)iVar102 |
                                                                             (byte)(uVar30 >> 0x20))
                                                                   )))))) & 0xf0f0f0f0f0f0f0f0;
    uVar31 = (ulong)CONCAT14((byte)((uint3)((uint3)((ulong)uVar132 >> 8) >> 4) >> 8) |
                             (byte)((ulong)uVar132 >> 0x10),
                             CONCAT13((byte)(uVar82 >> 8) | (byte)((ulong)uVar132 >> 8),
                                      CONCAT12((byte)uVar82 | (byte)uVar132,
                                               CONCAT11(bVar16 >> 4 | bVar16,
                                                        (byte)(uVar75 >> 0x10) |
                                                        (byte)((ulong)uVar125 >> 0x10))))) &
             0xf0f0f0f0f0f;
    uVar43 = (ulong)CONCAT14((byte)((uint3)((uint3)((ulong)uVar119 >> 8) >> 4) >> 8) |
                             (byte)((ulong)uVar119 >> 0x10),
                             CONCAT13((byte)(uVar94 >> 8) | (byte)((ulong)uVar119 >> 8),
                                      CONCAT12((byte)uVar94 | (byte)uVar119,
                                               CONCAT11((byte)(uVar88 >> 0x18) |
                                                        (byte)(uVar114 >> 0x18),
                                                        (byte)(uVar88 >> 0x10) |
                                                        (byte)(uVar114 >> 0x10))))) & 0xf0f0f0f0f0f;
    uVar55 = CONCAT17(bVar9 >> 4 | bVar9,
                      CONCAT16((byte)((uint3)((uint3)((ulong)uVar111 >> 8) >> 4) >> 8) |
                               (byte)((ulong)uVar111 >> 0x10),
                               CONCAT15((byte)(uVar60 >> 8) | (byte)((ulong)uVar111 >> 8),
                                        CONCAT14((byte)uVar60 | (byte)uVar111,
                                                 CONCAT13(bVar20 >> 4 | bVar20,
                                                          CONCAT12((byte)(uVar53 >> 0x10) |
                                                                   (byte)((ulong)uVar89 >> 0x10),
                                                                   CONCAT11((byte)(uVar53 >> 8) |
                                                                            (byte)((ulong)uVar89 >>
                                                                                  8),(byte)uVar53 |
                                                                                     (byte)uVar89)))
                                                )))) & 0xf0f0f0f0f0f0f0f;
    uVar106 = CONCAT17(bVar10 >> 4 | bVar10,
                       CONCAT16((byte)((uint3)((uint3)((ulong)uVar108 >> 8) >> 4) >> 8) |
                                (byte)((ulong)uVar108 >> 0x10),
                                CONCAT15((byte)(uVar70 >> 8) | (byte)((ulong)uVar108 >> 8),
                                         CONCAT14((byte)uVar70 | (byte)uVar108,
                                                  CONCAT13((byte)(uVar127 >> 0x18) |
                                                           (byte)(uVar106 >> 0x18),
                                                           CONCAT12((byte)(uVar127 >> 0x10) |
                                                                    (byte)(uVar106 >> 0x10),
                                                                    CONCAT11((byte)(uVar127 >> 8) |
                                                                             (byte)(uVar106 >> 8),
                                                                             (byte)uVar127 |
                                                                             (byte)uVar106))))))) &
              0xf0f0f0f0f0f0f0f;
    uVar127 = CONCAT17(bVar11 >> 4 | bVar11,
                       CONCAT16((byte)((uint3)((uint3)((ulong)uVar77 >> 8) >> 4) >> 8) |
                                (byte)((ulong)uVar77 >> 0x10),
                                CONCAT15((byte)(uVar36 >> 8) | (byte)((ulong)uVar77 >> 8),
                                         CONCAT14((byte)uVar36 | (byte)uVar77,
                                                  CONCAT13(bVar21 >> 4 | bVar21,
                                                           CONCAT12((byte)(uVar29 >> 0x10) |
                                                                    (byte)((ulong)uVar99 >> 0x10),
                                                                    CONCAT11((byte)(uVar29 >> 8) |
                                                                             (byte)((ulong)uVar99 >>
                                                                                   8),(byte)uVar29 |
                                                                                      (byte)uVar99))
                                                          ))))) & 0xf0f0f0f0f0f0f0f;
    uVar42 = CONCAT17(bVar13 >> 4 | bVar13,
                      CONCAT16((byte)((uint3)((uint3)((ulong)uVar18 >> 8) >> 4) >> 8) |
                               (byte)((ulong)uVar18 >> 0x10),
                               CONCAT15((byte)(uVar48 >> 8) | (byte)((ulong)uVar18 >> 8),
                                        CONCAT14((byte)uVar48 | (byte)uVar18,
                                                 CONCAT13((byte)(uVar42 >> 0x18) |
                                                          (byte)(uVar6 >> 0x18),
                                                          CONCAT12((byte)(uVar42 >> 0x10) |
                                                                   (byte)(uVar6 >> 0x10),
                                                                   CONCAT11((byte)(uVar42 >> 8) |
                                                                            (byte)(uVar6 >> 8),
                                                                            (byte)uVar42 |
                                                                            (byte)uVar6))))))) &
             0xf0f0f0f0f0f0f0f;
    uVar6 = CONCAT17(bVar14 >> 4 | bVar14,
                     CONCAT16((byte)((uint3)((uint3)((ulong)uVar65 >> 8) >> 4) >> 8) |
                              (byte)((ulong)uVar65 >> 0x10),
                              CONCAT15((byte)(uVar12 >> 8) | (byte)((ulong)uVar65 >> 8),
                                       CONCAT14((byte)uVar12 | (byte)uVar65,
                                                CONCAT13((byte)(uVar7 >> 0x18) |
                                                         (byte)(uVar54 >> 0x18),
                                                         CONCAT12((byte)(uVar7 >> 0x10) |
                                                                  (byte)(uVar54 >> 0x10),
                                                                  CONCAT11((byte)(uVar7 >> 8) |
                                                                           (byte)(uVar54 >> 8),
                                                                           (byte)uVar7 |
                                                                           (byte)uVar54))))))) &
            0xf0f0f0f0f0f0f0f;
    uVar7 = CONCAT17(bVar15 >> 4 | bVar15,
                     CONCAT16((byte)((uint3)((uint3)((ulong)uVar41 >> 8) >> 4) >> 8) |
                              (byte)((ulong)uVar41 >> 0x10),
                              CONCAT15((byte)(uVar24 >> 8) | (byte)((ulong)uVar41 >> 8),
                                       CONCAT14((byte)uVar24 | (byte)uVar41,
                                                CONCAT13((byte)(uVar19 >> 0x18) |
                                                         (byte)(uVar30 >> 0x18),
                                                         CONCAT12((byte)(uVar19 >> 0x10) |
                                                                  (byte)(uVar30 >> 0x10),
                                                                  CONCAT11((byte)(uVar19 >> 8) |
                                                                           (byte)(uVar30 >> 8),
                                                                           (byte)uVar19 |
                                                                           (byte)uVar30))))))) &
            0xf0f0f0f0f0f0f0f;
    bVar74 = ((byte)uVar75 | (byte)uVar125) & 0xf | (byte)uVar136;
    bVar78 = ((byte)(uVar75 >> 8) | (byte)((ulong)uVar125 >> 8)) & 0xf | (byte)(uVar136 >> 8);
    bVar79 = (byte)uVar31 | ((byte)((uint)iVar137 >> 0x10) | (byte)((ulong)uVar125 >> 0x30)) & 0xf0;
    bVar80 = (byte)(uVar31 >> 8) |
             ((byte)((uint)iVar137 >> 0x18) | (byte)((ulong)uVar125 >> 0x38)) & 0xf0;
    uVar60 = CONCAT13(bVar80,CONCAT12(bVar79,CONCAT11(bVar78,bVar74)));
    bVar81 = (byte)(uVar31 >> 0x10) | (byte)iVar138 | (byte)((ulong)uVar132 >> 0x20) & 0xf0;
    bVar83 = (byte)(uVar31 >> 0x18) |
             ((byte)((uint)iVar138 >> 8) | (byte)((ulong)uVar132 >> 0x28)) & 0xf0;
    bVar84 = (byte)(uVar31 >> 0x20) |
             ((byte)((uint)iVar138 >> 0x10) | (byte)((ulong)uVar132 >> 0x30)) & 0xf0;
    bVar85 = bVar4 >> 4 | bVar4 & 0xf |
             ((byte)((uint)iVar138 >> 0x18) | (byte)((ulong)uVar132 >> 0x38)) & 0xf0;
    bVar86 = ((byte)uVar88 | (byte)uVar114) & 0xf | (byte)uVar140;
    bVar90 = ((byte)(uVar88 >> 8) | (byte)(uVar114 >> 8)) & 0xf | (byte)(uVar140 >> 8);
    bVar91 = (byte)uVar43 | ((byte)((uint)iVar141 >> 0x10) | (byte)(uVar114 >> 0x30)) & 0xf0;
    bVar92 = (byte)(uVar43 >> 8) | ((byte)((uint)iVar141 >> 0x18) | (byte)(uVar114 >> 0x38)) & 0xf0;
    uVar70 = CONCAT13(bVar92,CONCAT12(bVar91,CONCAT11(bVar90,bVar86)));
    bVar93 = (byte)(uVar43 >> 0x10) | (byte)iVar142 | (byte)((ulong)uVar119 >> 0x20) & 0xf0;
    bVar95 = (byte)(uVar43 >> 0x18) |
             ((byte)((uint)iVar142 >> 8) | (byte)((ulong)uVar119 >> 0x28)) & 0xf0;
    bVar96 = (byte)(uVar43 >> 0x20) |
             ((byte)((uint)iVar142 >> 0x10) | (byte)((ulong)uVar119 >> 0x30)) & 0xf0;
    bVar97 = bVar8 >> 4 | bVar8 & 0xf |
             ((byte)((uint)iVar142 >> 0x18) | (byte)((ulong)uVar119 >> 0x38)) & 0xf0;
    bVar52 = (byte)uVar55 | (byte)uVar126;
    bVar56 = (byte)(uVar55 >> 8) | (byte)(uVar126 >> 8);
    bVar57 = (byte)(uVar55 >> 0x10) | (byte)(uVar126 >> 0x10);
    bVar58 = (byte)(uVar55 >> 0x18) | (byte)(uVar126 >> 0x18);
    uVar48 = CONCAT13(bVar58,CONCAT12(bVar57,CONCAT11(bVar56,bVar52)));
    bVar59 = (byte)(uVar55 >> 0x20) | (byte)(uVar126 >> 0x20);
    bVar61 = (byte)(uVar55 >> 0x28) | (byte)(uVar126 >> 0x28);
    bVar62 = (byte)(uVar55 >> 0x30) | (byte)(uVar126 >> 0x30);
    bVar63 = (byte)(uVar55 >> 0x38) | (byte)(uVar126 >> 0x38);
    uVar77 = CONCAT17(bVar63,CONCAT16(bVar62,CONCAT15(bVar61,CONCAT14(bVar59,uVar48))));
    bVar64 = (byte)uVar106 | (byte)uVar133;
    bVar66 = (byte)(uVar106 >> 8) | (byte)(uVar133 >> 8);
    bVar67 = (byte)(uVar106 >> 0x10) | (byte)(uVar133 >> 0x10);
    bVar68 = (byte)(uVar106 >> 0x18) | (byte)(uVar133 >> 0x18);
    uVar53 = CONCAT13(bVar68,CONCAT12(bVar67,CONCAT11(bVar66,bVar64)));
    bVar69 = (byte)(uVar106 >> 0x20) | (byte)(uVar133 >> 0x20);
    bVar71 = (byte)(uVar106 >> 0x28) | (byte)(uVar133 >> 0x28);
    bVar72 = (byte)(uVar106 >> 0x30) | (byte)(uVar133 >> 0x30);
    bVar73 = (byte)(uVar106 >> 0x38) | (byte)(uVar133 >> 0x38);
    uVar108 = CONCAT17(bVar73,CONCAT16(bVar72,CONCAT15(bVar71,CONCAT14(bVar69,uVar53))));
    bVar28 = (byte)uVar127 | (byte)uVar115;
    bVar32 = (byte)(uVar127 >> 8) | (byte)(uVar115 >> 8);
    bVar33 = (byte)(uVar127 >> 0x10) | (byte)(uVar115 >> 0x10);
    bVar34 = (byte)(uVar127 >> 0x18) | (byte)(uVar115 >> 0x18);
    uVar29 = CONCAT13(bVar34,CONCAT12(bVar33,CONCAT11(bVar32,bVar28)));
    bVar35 = (byte)(uVar127 >> 0x20) | (byte)(uVar115 >> 0x20);
    bVar37 = (byte)(uVar127 >> 0x28) | (byte)(uVar115 >> 0x28);
    bVar38 = (byte)(uVar127 >> 0x30) | (byte)(uVar115 >> 0x30);
    bVar39 = (byte)(uVar127 >> 0x38) | (byte)(uVar115 >> 0x38);
    uVar65 = CONCAT17(bVar39,CONCAT16(bVar38,CONCAT15(bVar37,CONCAT14(bVar35,uVar29))));
    bVar40 = (byte)uVar42 | (byte)uVar120;
    bVar44 = (byte)(uVar42 >> 8) | (byte)(uVar120 >> 8);
    bVar45 = (byte)(uVar42 >> 0x10) | (byte)(uVar120 >> 0x10);
    bVar46 = (byte)(uVar42 >> 0x18) | (byte)(uVar120 >> 0x18);
    uVar36 = CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar40)));
    bVar47 = (byte)(uVar42 >> 0x20) | (byte)(uVar120 >> 0x20);
    bVar49 = (byte)(uVar42 >> 0x28) | (byte)(uVar120 >> 0x28);
    bVar50 = (byte)(uVar42 >> 0x30) | (byte)(uVar120 >> 0x30);
    bVar51 = (byte)(uVar42 >> 0x38) | (byte)(uVar120 >> 0x38);
    uVar99 = CONCAT17(bVar51,CONCAT16(bVar50,CONCAT15(bVar49,CONCAT14(bVar47,uVar36))));
    bVar4 = (byte)uVar6 | (byte)uVar100;
    bVar8 = (byte)(uVar6 >> 8) | (byte)(uVar100 >> 8);
    bVar9 = (byte)(uVar6 >> 0x10) | (byte)(uVar100 >> 0x10);
    bVar10 = (byte)(uVar6 >> 0x18) | (byte)(uVar100 >> 0x18);
    uVar12 = CONCAT13(bVar10,CONCAT12(bVar9,CONCAT11(bVar8,bVar4)));
    bVar11 = (byte)(uVar6 >> 0x20) | (byte)(uVar100 >> 0x20);
    bVar13 = (byte)(uVar6 >> 0x28) | (byte)(uVar100 >> 0x28);
    bVar14 = (byte)(uVar6 >> 0x30) | (byte)(uVar100 >> 0x30);
    bVar15 = (byte)(uVar6 >> 0x38) | (byte)(uVar100 >> 0x38);
    uVar18 = CONCAT17(bVar15,CONCAT16(bVar14,CONCAT15(bVar13,CONCAT14(bVar11,uVar12))));
    bVar16 = (byte)uVar7 | (byte)uVar103;
    bVar20 = (byte)(uVar7 >> 8) | (byte)(uVar103 >> 8);
    bVar21 = (byte)(uVar7 >> 0x10) | (byte)(uVar103 >> 0x10);
    bVar22 = (byte)(uVar7 >> 0x18) | (byte)(uVar103 >> 0x18);
    uVar24 = CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar16)));
    bVar23 = (byte)(uVar7 >> 0x20) | (byte)(uVar103 >> 0x20);
    bVar25 = (byte)(uVar7 >> 0x28) | (byte)(uVar103 >> 0x28);
    bVar26 = (byte)(uVar7 >> 0x30) | (byte)(uVar103 >> 0x30);
    bVar27 = (byte)(uVar7 >> 0x38) | (byte)(uVar103 >> 0x38);
    uVar41 = CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar23,uVar24))));
    uVar75 = uVar60 >> 2;
    uVar60 = (uint)(CONCAT17(bVar85,CONCAT16(bVar84,CONCAT15(bVar83,CONCAT14(bVar81,uVar60)))) >>
                   0x22);
    uVar82 = uVar70 >> 2;
    uVar70 = (uint)(CONCAT17(bVar97,CONCAT16(bVar96,CONCAT15(bVar95,CONCAT14(bVar93,uVar70)))) >>
                   0x22);
    uVar48 = uVar48 >> 2;
    uVar139 = (uint)((ulong)uVar77 >> 0x22);
    uVar53 = uVar53 >> 2;
    uVar143 = (uint)((ulong)uVar108 >> 0x22);
    uVar29 = uVar29 >> 2;
    uVar129 = (uint)((ulong)uVar65 >> 0x22);
    uVar36 = uVar36 >> 2;
    uVar135 = (uint)((ulong)uVar99 >> 0x22);
    uVar12 = uVar12 >> 2;
    uVar94 = (uint)((ulong)uVar18 >> 0x22);
    uVar24 = uVar24 >> 2;
    uVar122 = (uint)((ulong)uVar41 >> 0x22);
    bVar74 = (byte)uVar75 | bVar74;
    bVar78 = (byte)(uVar75 >> 8) | bVar78;
    bVar79 = (byte)(uVar75 >> 0x10) | bVar79;
    bVar80 = bVar80 >> 2 | bVar80;
    bVar81 = (byte)uVar60 | bVar81;
    bVar83 = (byte)(uVar60 >> 8) | bVar83;
    bVar84 = (byte)(uVar60 >> 0x10) | bVar84;
    uVar124 = CONCAT16(bVar84,CONCAT15(bVar83,CONCAT14(bVar81,CONCAT13(bVar80,CONCAT12(bVar79,
                                                  CONCAT11(bVar78,bVar74))))));
    bVar85 = bVar85 >> 2 | bVar85;
    uVar89 = CONCAT17(bVar85,uVar124);
    bVar86 = (byte)uVar82 | bVar86;
    bVar90 = (byte)(uVar82 >> 8) | bVar90;
    bVar91 = (byte)(uVar82 >> 0x10) | bVar91;
    bVar92 = bVar92 >> 2 | bVar92;
    bVar93 = (byte)uVar70 | bVar93;
    bVar95 = (byte)(uVar70 >> 8) | bVar95;
    bVar96 = (byte)(uVar70 >> 0x10) | bVar96;
    uVar131 = CONCAT16(bVar96,CONCAT15(bVar95,CONCAT14(bVar93,CONCAT13(bVar92,CONCAT12(bVar91,
                                                  CONCAT11(bVar90,bVar86))))));
    bVar97 = bVar97 >> 2 | bVar97;
    uVar111 = CONCAT17(bVar97,uVar131);
    bVar52 = (byte)uVar48 | bVar52;
    bVar56 = (byte)(uVar48 >> 8) | bVar56;
    bVar57 = (byte)(uVar48 >> 0x10) | bVar57;
    bVar58 = bVar58 >> 2 | bVar58;
    bVar59 = (byte)uVar139 | bVar59;
    bVar61 = (byte)(uVar139 >> 8) | bVar61;
    bVar62 = (byte)((uint3)((ulong)uVar77 >> 0x2a) >> 8) | bVar62;
    uVar113 = CONCAT16(bVar62,CONCAT15(bVar61,CONCAT14(bVar59,CONCAT13(bVar58,CONCAT12(bVar57,
                                                  CONCAT11(bVar56,bVar52))))));
    bVar63 = bVar63 >> 2 | bVar63;
    uVar77 = CONCAT17(bVar63,uVar113);
    bVar64 = (byte)uVar53 | bVar64;
    bVar66 = (byte)(uVar53 >> 8) | bVar66;
    bVar67 = (byte)(uVar53 >> 0x10) | bVar67;
    bVar68 = bVar68 >> 2 | bVar68;
    bVar69 = (byte)uVar143 | bVar69;
    bVar71 = (byte)(uVar143 >> 8) | bVar71;
    bVar72 = (byte)((uint3)((ulong)uVar108 >> 0x2a) >> 8) | bVar72;
    uVar118 = CONCAT16(bVar72,CONCAT15(bVar71,CONCAT14(bVar69,CONCAT13(bVar68,CONCAT12(bVar67,
                                                  CONCAT11(bVar66,bVar64))))));
    bVar73 = bVar73 >> 2 | bVar73;
    uVar108 = CONCAT17(bVar73,uVar118);
    bVar28 = (byte)uVar29 | bVar28;
    bVar32 = (byte)(uVar29 >> 8) | bVar32;
    bVar33 = (byte)(uVar29 >> 0x10) | bVar33;
    bVar34 = bVar34 >> 2 | bVar34;
    bVar35 = (byte)uVar129 | bVar35;
    bVar37 = (byte)(uVar129 >> 8) | bVar37;
    bVar38 = (byte)((uint3)((ulong)uVar65 >> 0x2a) >> 8) | bVar38;
    uVar109 = CONCAT16(bVar38,CONCAT15(bVar37,CONCAT14(bVar35,CONCAT13(bVar34,CONCAT12(bVar33,
                                                  CONCAT11(bVar32,bVar28))))));
    bVar39 = bVar39 >> 2 | bVar39;
    uVar65 = CONCAT17(bVar39,uVar109);
    bVar40 = (byte)uVar36 | bVar40;
    bVar44 = (byte)(uVar36 >> 8) | bVar44;
    bVar45 = (byte)(uVar36 >> 0x10) | bVar45;
    bVar46 = bVar46 >> 2 | bVar46;
    bVar47 = (byte)uVar135 | bVar47;
    bVar49 = (byte)(uVar135 >> 8) | bVar49;
    bVar50 = (byte)((uint3)((ulong)uVar99 >> 0x2a) >> 8) | bVar50;
    uVar110 = CONCAT16(bVar50,CONCAT15(bVar49,CONCAT14(bVar47,CONCAT13(bVar46,CONCAT12(bVar45,
                                                  CONCAT11(bVar44,bVar40))))));
    bVar51 = bVar51 >> 2 | bVar51;
    uVar99 = CONCAT17(bVar51,uVar110);
    bVar4 = (byte)uVar12 | bVar4;
    bVar8 = (byte)(uVar12 >> 8) | bVar8;
    bVar9 = (byte)(uVar12 >> 0x10) | bVar9;
    bVar10 = bVar10 >> 2 | bVar10;
    bVar11 = (byte)uVar94 | bVar11;
    bVar13 = (byte)(uVar94 >> 8) | bVar13;
    bVar14 = (byte)((uint3)((ulong)uVar18 >> 0x2a) >> 8) | bVar14;
    uVar76 = CONCAT16(bVar14,CONCAT15(bVar13,CONCAT14(bVar11,CONCAT13(bVar10,CONCAT12(bVar9,CONCAT11
                                                  (bVar8,bVar4))))));
    bVar15 = bVar15 >> 2 | bVar15;
    uVar18 = CONCAT17(bVar15,uVar76);
    bVar16 = (byte)uVar24 | bVar16;
    bVar20 = (byte)(uVar24 >> 8) | bVar20;
    bVar21 = (byte)(uVar24 >> 0x10) | bVar21;
    bVar22 = bVar22 >> 2 | bVar22;
    bVar23 = (byte)uVar122 | bVar23;
    bVar25 = (byte)(uVar122 >> 8) | bVar25;
    bVar26 = (byte)((uint3)((ulong)uVar41 >> 0x2a) >> 8) | bVar26;
    uVar87 = CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar23,CONCAT13(bVar22,CONCAT12(bVar21,
                                                  CONCAT11(bVar20,bVar16))))));
    bVar27 = bVar27 >> 2 | bVar27;
    uVar41 = CONCAT17(bVar27,uVar87);
    uVar127 = ((ulong)uVar124 & 0xfffffffe) >> 1;
    uVar24 = (uint)((ulong)uVar89 >> 0x21);
    uVar42 = ((ulong)uVar131 & 0xfffffffe) >> 1;
    uVar75 = (uint)((ulong)uVar111 >> 0x21);
    uVar19 = ((ulong)uVar113 & 0xfffffffe) >> 1;
    uVar60 = (uint)((ulong)uVar77 >> 0x21);
    uVar30 = ((ulong)uVar118 & 0xfffffffe) >> 1;
    uVar70 = (uint)((ulong)uVar108 >> 0x21);
    uVar6 = ((ulong)uVar109 & 0xfffffffe) >> 1;
    uVar48 = (uint)((ulong)uVar65 >> 0x21);
    uVar7 = ((ulong)uVar110 & 0xfffffffe) >> 1;
    uVar53 = (uint)((ulong)uVar99 >> 0x21);
    uVar31 = ((ulong)uVar76 & 0xfffffffe) >> 1;
    uVar29 = (uint)((ulong)uVar18 >> 0x21);
    uVar43 = ((ulong)uVar87 & 0xfffffffe) >> 1;
    uVar36 = (uint)((ulong)uVar41 >> 0x21);
    bVar74 = (byte)uVar127 | bVar74;
    bVar85 = bVar85 >> 1 | bVar85;
    bVar86 = (byte)uVar42 | bVar86;
    bVar97 = bVar97 >> 1 | bVar97;
    uVar12 = CONCAT13((byte)(uVar127 >> 0x18) | bVar80,
                      CONCAT12((byte)(uVar127 >> 0x10) | bVar79,
                               CONCAT11((byte)(uVar127 >> 8) | bVar78,bVar74)));
    uVar127 = CONCAT17(bVar85,CONCAT16((byte)((uint3)((ulong)uVar89 >> 0x29) >> 8) | bVar84,
                                       CONCAT15((byte)(uVar24 >> 8) | bVar83,
                                                CONCAT14((byte)uVar24 | bVar81,uVar12)))) &
              0x1111111111111111;
    uVar24 = CONCAT13((byte)(uVar42 >> 0x18) | bVar92,
                      CONCAT12((byte)(uVar42 >> 0x10) | bVar91,
                               CONCAT11((byte)(uVar42 >> 8) | bVar90,bVar86)));
    uVar42 = CONCAT17(bVar97,CONCAT16((byte)((uint3)((ulong)uVar111 >> 0x29) >> 8) | bVar96,
                                      CONCAT15((byte)(uVar75 >> 8) | bVar95,
                                               CONCAT14((byte)uVar75 | bVar93,uVar24)))) &
             0x1111111111111111;
    uVar19 = CONCAT17(bVar63 >> 1 | bVar63,
                      CONCAT16((byte)((uint3)((ulong)uVar77 >> 0x29) >> 8) | bVar62,
                               CONCAT15((byte)(uVar60 >> 8) | bVar61,
                                        CONCAT14((byte)uVar60 | bVar59,
                                                 CONCAT13((byte)(uVar19 >> 0x18) | bVar58,
                                                          CONCAT12((byte)(uVar19 >> 0x10) | bVar57,
                                                                   CONCAT11((byte)(uVar19 >> 8) |
                                                                            bVar56,(byte)uVar19 |
                                                                                   bVar52))))))) &
             0x1111111111111111;
    uVar30 = CONCAT17(bVar73 >> 1 | bVar73,
                      CONCAT16((byte)((uint3)((ulong)uVar108 >> 0x29) >> 8) | bVar72,
                               CONCAT15((byte)(uVar70 >> 8) | bVar71,
                                        CONCAT14((byte)uVar70 | bVar69,
                                                 CONCAT13((byte)(uVar30 >> 0x18) | bVar68,
                                                          CONCAT12((byte)(uVar30 >> 0x10) | bVar67,
                                                                   CONCAT11((byte)(uVar30 >> 8) |
                                                                            bVar66,(byte)uVar30 |
                                                                                   bVar64))))))) &
             0x1111111111111111;
    uVar6 = CONCAT17(bVar39 >> 1 | bVar39,
                     CONCAT16((byte)((uint3)((ulong)uVar65 >> 0x29) >> 8) | bVar38,
                              CONCAT15((byte)(uVar48 >> 8) | bVar37,
                                       CONCAT14((byte)uVar48 | bVar35,
                                                CONCAT13((byte)(uVar6 >> 0x18) | bVar34,
                                                         CONCAT12((byte)(uVar6 >> 0x10) | bVar33,
                                                                  CONCAT11((byte)(uVar6 >> 8) |
                                                                           bVar32,(byte)uVar6 |
                                                                                  bVar28))))))) &
            0x1111111111111111;
    uVar7 = CONCAT17(bVar51 >> 1 | bVar51,
                     CONCAT16((byte)((uint3)((ulong)uVar99 >> 0x29) >> 8) | bVar50,
                              CONCAT15((byte)(uVar53 >> 8) | bVar49,
                                       CONCAT14((byte)uVar53 | bVar47,
                                                CONCAT13((byte)(uVar7 >> 0x18) | bVar46,
                                                         CONCAT12((byte)(uVar7 >> 0x10) | bVar45,
                                                                  CONCAT11((byte)(uVar7 >> 8) |
                                                                           bVar44,(byte)uVar7 |
                                                                                  bVar40))))))) &
            0x1111111111111111;
    uVar31 = CONCAT17(bVar15 >> 1 | bVar15,
                      CONCAT16((byte)((uint3)((ulong)uVar18 >> 0x29) >> 8) | bVar14,
                               CONCAT15((byte)(uVar29 >> 8) | bVar13,
                                        CONCAT14((byte)uVar29 | bVar11,
                                                 CONCAT13((byte)(uVar31 >> 0x18) | bVar10,
                                                          CONCAT12((byte)(uVar31 >> 0x10) | bVar9,
                                                                   CONCAT11((byte)(uVar31 >> 8) |
                                                                            bVar8,(byte)uVar31 |
                                                                                  bVar4))))))) &
             0x1111111111111111;
    uVar43 = CONCAT17(bVar27 >> 1 | bVar27,
                      CONCAT16((byte)((uint3)((ulong)uVar41 >> 0x29) >> 8) | bVar26,
                               CONCAT15((byte)(uVar36 >> 8) | bVar25,
                                        CONCAT14((byte)uVar36 | bVar23,
                                                 CONCAT13((byte)(uVar43 >> 0x18) | bVar22,
                                                          CONCAT12((byte)(uVar43 >> 0x10) | bVar21,
                                                                   CONCAT11((byte)(uVar43 >> 8) |
                                                                            bVar20,(byte)uVar43 |
                                                                                   bVar16))))))) &
             0x1111111111111111;
    uVar129 = (uVar12 & 0x11111111) >> 7;
    uVar135 = (uint)(uVar127 >> 0x27);
    uVar139 = (uVar24 & 0x11111111) >> 7;
    uVar143 = (uint)(uVar42 >> 0x27);
    uVar75 = (uint)(uVar19 >> 7) & 0x1ffffff;
    uVar82 = (uint)(uVar19 >> 0x27);
    uVar94 = (uint)(uVar30 >> 7) & 0x1ffffff;
    uVar122 = (uint)(uVar30 >> 0x27);
    uVar48 = (uint)(uVar6 >> 7) & 0x1ffffff;
    uVar53 = (uint)(uVar6 >> 0x27);
    uVar60 = (uint)(uVar7 >> 7) & 0x1ffffff;
    uVar70 = (uint)(uVar7 >> 0x27);
    uVar12 = (uint)(uVar31 >> 7) & 0x1ffffff;
    uVar24 = (uint)(uVar31 >> 0x27);
    uVar29 = (uint)(uVar43 >> 7) & 0x1ffffff;
    uVar36 = (uint)(uVar43 >> 0x27);
    param_1[1] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar36 >> 0x10) |
                                                      (byte)(uVar43 >> 0x30)) << 0x30) >> 0x2e) |
                          (byte)uVar36 | (byte)(uVar43 >> 0x20),
                          CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar29 >> 0x10) |
                                                               (byte)(uVar43 >> 0x10)) << 0x10) >>
                                         0xe) | (byte)uVar29 | (byte)uVar43,
                                   CONCAT15((byte)(uint3)(((uint7)(byte)((byte)(uVar24 >> 0x10) |
                                                                        (byte)(uVar31 >> 0x30)) <<
                                                          0x30) >> 0x2e) |
                                            (byte)uVar24 | (byte)(uVar31 >> 0x20),
                                            CONCAT14((byte)((uint3)((uint3)(byte)((byte)(uVar12 >>
                                                                                        0x10) |
                                                                                 (byte)(uVar31 >>
                                                                                       0x10)) <<
                                                                   0x10) >> 0xe) |
                                                     (byte)uVar12 | (byte)uVar31,
                                                     CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar70 >> 0x10) | (byte)(uVar7 >> 0x30)) << 0x30)
                                                  >> 0x2e) | (byte)uVar70 | (byte)(uVar7 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar60 >> 0x10) | (byte)(uVar7 >> 0x10)) << 0x10)
                                                  >> 0xe) | (byte)uVar60 | (byte)uVar7,
                                                  CONCAT11((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar53 >> 0x10) | (byte)(uVar6 >> 0x30)) << 0x30)
                                                  >> 0x2e) | (byte)uVar53 | (byte)(uVar6 >> 0x20),
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar48 >> 0x10
                                                                                     ) |
                                                                              (byte)(uVar6 >> 0x10))
                                                                << 0x10) >> 0xe) |
                                                  (byte)uVar48 | (byte)uVar6)))))));
    *param_1 = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar122 >> 0x10) |
                                                    (byte)(uVar30 >> 0x30)) << 0x30) >> 0x2e) |
                        (byte)uVar122 | (byte)(uVar30 >> 0x20),
                        CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar94 >> 0x10) |
                                                             (byte)(uVar30 >> 0x10)) << 0x10) >> 0xe
                                       ) | (byte)uVar94 | (byte)uVar30,
                                 CONCAT15((byte)(uint3)(((uint7)(byte)((byte)(uVar82 >> 0x10) |
                                                                      (byte)(uVar19 >> 0x30)) <<
                                                        0x30) >> 0x2e) |
                                          (byte)uVar82 | (byte)(uVar19 >> 0x20),
                                          CONCAT14((byte)((uint3)((uint3)(byte)((byte)(uVar75 >>
                                                                                      0x10) |
                                                                               (byte)(uVar19 >> 0x10
                                                                                     )) << 0x10) >>
                                                         0xe) | (byte)uVar75 | (byte)uVar19,
                                                   CONCAT13((byte)(((uint)(((ulong)CONCAT11(bVar97,(
                                                  byte)(uVar143 >> 0x10) | (byte)(uVar42 >> 0x30))
                                                  << 0x30) >> 0x20) & 0x11ffffff) >> 0xe) |
                                                  (byte)uVar143 | (byte)(uVar42 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar139 >> 0x10) | (byte)(uVar42 >> 0x10)) << 0x10
                                                  ) >> 0xe) | (byte)uVar139 | bVar86 & 0x11,
                                                  CONCAT11((byte)(((uint)(((ulong)CONCAT11(bVar85,(
                                                  byte)(uVar135 >> 0x10) | (byte)(uVar127 >> 0x30))
                                                  << 0x30) >> 0x20) & 0x11ffffff) >> 0xe) |
                                                  (byte)uVar135 | (byte)(uVar127 >> 0x20),
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar129 >>
                                                                                     0x10) |
                                                                              (byte)(uVar127 >> 0x10
                                                                                    )) << 0x10) >>
                                                        0xe) | (byte)uVar129 | bVar74 & 0x11)))))));
    uVar144 = param_2[0x11];
    uVar132 = param_2[0x10];
    uVar125 = param_2[0x13];
    uVar54 = param_2[0x12];
    uVar119 = param_2[0x15];
    uVar111 = param_2[0x14];
    uVar108 = param_2[0x17];
    uVar127 = param_2[0x16];
    uVar99 = param_2[0x19];
    uVar65 = param_2[0x18];
    uVar18 = param_2[0x1b];
    uVar31 = param_2[0x1a];
    uVar89 = param_2[0x1d];
    uVar77 = param_2[0x1c];
    uVar41 = param_2[0x1f];
    uVar6 = param_2[0x1e];
    iVar137 = (int)((ulong)uVar132 >> 0x20) << 4;
    iVar138 = (int)((ulong)uVar144 >> 0x20) << 4;
    iVar141 = (int)(uVar54 >> 0x20) << 4;
    iVar142 = (int)((ulong)uVar125 >> 0x20) << 4;
    uVar82 = (uint)uVar132 >> 4;
    uVar94 = (uint)uVar144 >> 4;
    uVar30 = (uVar54 & 0xfffffff0) >> 4;
    uVar122 = (uint)uVar125 >> 4;
    uVar60 = (uint)uVar111 >> 4;
    uVar70 = (uint)uVar119 >> 4;
    uVar7 = (uVar127 & 0xfffffff0) >> 4;
    uVar75 = (uint)uVar108 >> 4;
    iVar123 = (int)((ulong)uVar111 >> 0x20) << 4;
    iVar128 = (int)((ulong)uVar119 >> 0x20) << 4;
    iVar130 = (int)(uVar127 >> 0x20) << 4;
    iVar134 = (int)((ulong)uVar108 >> 0x20) << 4;
    uVar36 = (uint)uVar65 >> 4;
    uVar48 = (uint)uVar99 >> 4;
    uVar19 = (uVar31 & 0xfffffff0) >> 4;
    uVar53 = (uint)uVar18 >> 4;
    iVar112 = (int)((ulong)uVar65 >> 0x20) << 4;
    iVar116 = (int)((ulong)uVar99 >> 0x20) << 4;
    iVar117 = (int)(uVar31 >> 0x20) << 4;
    iVar121 = (int)((ulong)uVar18 >> 0x20) << 4;
    uVar12 = (uint)uVar77 >> 4;
    uVar24 = (uint)uVar89 >> 4;
    uVar43 = (uVar6 & 0xfffffff0) >> 4;
    uVar29 = (uint)uVar41 >> 4;
    iVar98 = (int)((ulong)uVar77 >> 0x20) << 4;
    iVar101 = (int)((ulong)uVar89 >> 0x20) << 4;
    iVar102 = (int)(uVar6 >> 0x20) << 4;
    iVar104 = (int)((ulong)uVar41 >> 0x20) << 4;
    bVar16 = (byte)((ulong)uVar132 >> 0x18);
    bVar4 = (byte)((ulong)uVar144 >> 0x18);
    bVar8 = (byte)((ulong)uVar125 >> 0x18);
    bVar20 = (byte)((ulong)uVar111 >> 0x18);
    bVar9 = (byte)((ulong)uVar119 >> 0x18);
    bVar10 = (byte)((ulong)uVar108 >> 0x18);
    bVar21 = (byte)((ulong)uVar65 >> 0x18);
    bVar11 = (byte)((ulong)uVar99 >> 0x18);
    bVar13 = (byte)((ulong)uVar18 >> 0x18);
    bVar22 = (byte)((ulong)uVar77 >> 0x18);
    bVar14 = (byte)((ulong)uVar89 >> 0x18);
    bVar15 = (byte)((ulong)uVar41 >> 0x18);
    uVar103 = CONCAT17((byte)((uint)iVar138 >> 0x18) | (byte)((ulong)uVar144 >> 0x38),
                       CONCAT16((byte)((uint)iVar138 >> 0x10) | (byte)((ulong)uVar144 >> 0x30),
                                CONCAT15((byte)((uint)iVar138 >> 8) | (byte)((ulong)uVar144 >> 0x28)
                                         ,CONCAT14((byte)iVar138 | (byte)((ulong)uVar144 >> 0x20),
                                                   CONCAT13((byte)((uint)iVar137 >> 0x18) |
                                                            (byte)((ulong)uVar132 >> 0x38),
                                                            CONCAT12((byte)((uint)iVar137 >> 0x10) |
                                                                     (byte)((ulong)uVar132 >> 0x30),
                                                                     CONCAT11((byte)((uint)iVar137
                                                                                    >> 8) |
                                                                              (byte)((ulong)uVar132
                                                                                    >> 0x28),
                                                                              (byte)iVar137 |
                                                                              (byte)((ulong)uVar132
                                                                                    >> 0x20))))))))
              & 0xf0f0f0f0f0f0f0f0;
    uVar114 = CONCAT17((byte)((uint)iVar142 >> 0x18) | (byte)((ulong)uVar125 >> 0x38),
                       CONCAT16((byte)((uint)iVar142 >> 0x10) | (byte)((ulong)uVar125 >> 0x30),
                                CONCAT15((byte)((uint)iVar142 >> 8) | (byte)((ulong)uVar125 >> 0x28)
                                         ,CONCAT14((byte)iVar142 | (byte)((ulong)uVar125 >> 0x20),
                                                   CONCAT13((byte)((uint)iVar141 >> 0x18) |
                                                            (byte)(uVar54 >> 0x38),
                                                            CONCAT12((byte)((uint)iVar141 >> 0x10) |
                                                                     (byte)(uVar54 >> 0x30),
                                                                     CONCAT11((byte)((uint)iVar141
                                                                                    >> 8) |
                                                                              (byte)(uVar54 >> 0x28)
                                                                              ,(byte)iVar141 |
                                                                               (byte)(uVar54 >> 0x20
                                                                                     )))))))) &
              0xf0f0f0f0f0f0f0f0;
    uVar88 = CONCAT17((byte)((uint)iVar128 >> 0x18) | (byte)((ulong)uVar119 >> 0x38),
                      CONCAT16((byte)((uint)iVar128 >> 0x10) | (byte)((ulong)uVar119 >> 0x30),
                               CONCAT15((byte)((uint)iVar128 >> 8) | (byte)((ulong)uVar119 >> 0x28),
                                        CONCAT14((byte)iVar128 | (byte)((ulong)uVar119 >> 0x20),
                                                 CONCAT13((byte)((uint)iVar123 >> 0x18) |
                                                          (byte)((ulong)uVar111 >> 0x38),
                                                          CONCAT12((byte)((uint)iVar123 >> 0x10) |
                                                                   (byte)((ulong)uVar111 >> 0x30),
                                                                   CONCAT11((byte)((uint)iVar123 >>
                                                                                  8) |
                                                                            (byte)((ulong)uVar111 >>
                                                                                  0x28),
                                                                            (byte)iVar123 |
                                                                            (byte)((ulong)uVar111 >>
                                                                                  0x20)))))))) &
             0xf0f0f0f0f0f0f0f0;
    uVar100 = CONCAT17((byte)((uint)iVar134 >> 0x18) | (byte)((ulong)uVar108 >> 0x38),
                       CONCAT16((byte)((uint)iVar134 >> 0x10) | (byte)((ulong)uVar108 >> 0x30),
                                CONCAT15((byte)((uint)iVar134 >> 8) | (byte)((ulong)uVar108 >> 0x28)
                                         ,CONCAT14((byte)iVar134 | (byte)((ulong)uVar108 >> 0x20),
                                                   CONCAT13((byte)((uint)iVar130 >> 0x18) |
                                                            (byte)(uVar127 >> 0x38),
                                                            CONCAT12((byte)((uint)iVar130 >> 0x10) |
                                                                     (byte)(uVar127 >> 0x30),
                                                                     CONCAT11((byte)((uint)iVar130
                                                                                    >> 8) |
                                                                              (byte)(uVar127 >> 0x28
                                                                                    ),(byte)iVar130
                                                                                      | (byte)(
                                                  uVar127 >> 0x20)))))))) & 0xf0f0f0f0f0f0f0f0;
    uVar55 = CONCAT17((byte)((uint)iVar116 >> 0x18) | (byte)((ulong)uVar99 >> 0x38),
                      CONCAT16((byte)((uint)iVar116 >> 0x10) | (byte)((ulong)uVar99 >> 0x30),
                               CONCAT15((byte)((uint)iVar116 >> 8) | (byte)((ulong)uVar99 >> 0x28),
                                        CONCAT14((byte)iVar116 | (byte)((ulong)uVar99 >> 0x20),
                                                 CONCAT13((byte)((uint)iVar112 >> 0x18) |
                                                          (byte)((ulong)uVar65 >> 0x38),
                                                          CONCAT12((byte)((uint)iVar112 >> 0x10) |
                                                                   (byte)((ulong)uVar65 >> 0x30),
                                                                   CONCAT11((byte)((uint)iVar112 >>
                                                                                  8) |
                                                                            (byte)((ulong)uVar65 >>
                                                                                  0x28),
                                                                            (byte)iVar112 |
                                                                            (byte)((ulong)uVar65 >>
                                                                                  0x20)))))))) &
             0xf0f0f0f0f0f0f0f0;
    uVar106 = CONCAT17((byte)((uint)iVar121 >> 0x18) | (byte)((ulong)uVar18 >> 0x38),
                       CONCAT16((byte)((uint)iVar121 >> 0x10) | (byte)((ulong)uVar18 >> 0x30),
                                CONCAT15((byte)((uint)iVar121 >> 8) | (byte)((ulong)uVar18 >> 0x28),
                                         CONCAT14((byte)iVar121 | (byte)((ulong)uVar18 >> 0x20),
                                                  CONCAT13((byte)((uint)iVar117 >> 0x18) |
                                                           (byte)(uVar31 >> 0x38),
                                                           CONCAT12((byte)((uint)iVar117 >> 0x10) |
                                                                    (byte)(uVar31 >> 0x30),
                                                                    CONCAT11((byte)((uint)iVar117 >>
                                                                                   8) |
                                                                             (byte)(uVar31 >> 0x28),
                                                                             (byte)iVar117 |
                                                                             (byte)(uVar31 >> 0x20))
                                                                   )))))) & 0xf0f0f0f0f0f0f0f0;
    uVar42 = CONCAT17(bVar4 >> 4 | bVar4,
                      CONCAT16((byte)((uint3)((uint3)((ulong)uVar144 >> 8) >> 4) >> 8) |
                               (byte)((ulong)uVar144 >> 0x10),
                               CONCAT15((byte)(uVar94 >> 8) | (byte)((ulong)uVar144 >> 8),
                                        CONCAT14((byte)uVar94 | (byte)uVar144,
                                                 CONCAT13(bVar16 >> 4 | bVar16,
                                                          CONCAT12((byte)(uVar82 >> 0x10) |
                                                                   (byte)((ulong)uVar132 >> 0x10),
                                                                   CONCAT11((byte)(uVar82 >> 8) |
                                                                            (byte)((ulong)uVar132 >>
                                                                                  8),(byte)uVar82 |
                                                                                     (byte)uVar132))
                                                         ))))) & 0xf0f0f0f0f0f0f0f;
    uVar54 = CONCAT17(bVar8 >> 4 | bVar8,
                      CONCAT16((byte)((uint3)((uint3)((ulong)uVar125 >> 8) >> 4) >> 8) |
                               (byte)((ulong)uVar125 >> 0x10),
                               CONCAT15((byte)(uVar122 >> 8) | (byte)((ulong)uVar125 >> 8),
                                        CONCAT14((byte)uVar122 | (byte)uVar125,
                                                 CONCAT13((byte)(uVar30 >> 0x18) |
                                                          (byte)(uVar54 >> 0x18),
                                                          CONCAT12((byte)(uVar30 >> 0x10) |
                                                                   (byte)(uVar54 >> 0x10),
                                                                   CONCAT11((byte)(uVar30 >> 8) |
                                                                            (byte)(uVar54 >> 8),
                                                                            (byte)uVar30 |
                                                                            (byte)uVar54))))))) &
             0xf0f0f0f0f0f0f0f;
    uVar105 = CONCAT12((byte)((uint)iVar98 >> 0x10) | (byte)((ulong)uVar77 >> 0x30),
                       CONCAT11((byte)((uint)iVar98 >> 8) | (byte)((ulong)uVar77 >> 0x28),
                                (byte)iVar98 | (byte)((ulong)uVar77 >> 0x20))) & 0xf0f0f0;
    uVar107 = CONCAT12((byte)((uint)iVar102 >> 0x10) | (byte)(uVar6 >> 0x30),
                       CONCAT11((byte)((uint)iVar102 >> 8) | (byte)(uVar6 >> 0x28),
                                (byte)iVar102 | (byte)(uVar6 >> 0x20))) & 0xf0f0f0;
    uVar30 = CONCAT17(bVar9 >> 4 | bVar9,
                      CONCAT16((byte)((uint3)((uint3)((ulong)uVar119 >> 8) >> 4) >> 8) |
                               (byte)((ulong)uVar119 >> 0x10),
                               CONCAT15((byte)(uVar70 >> 8) | (byte)((ulong)uVar119 >> 8),
                                        CONCAT14((byte)uVar70 | (byte)uVar119,
                                                 CONCAT13(bVar20 >> 4 | bVar20,
                                                          CONCAT12((byte)(uVar60 >> 0x10) |
                                                                   (byte)((ulong)uVar111 >> 0x10),
                                                                   CONCAT11((byte)(uVar60 >> 8) |
                                                                            (byte)((ulong)uVar111 >>
                                                                                  8),(byte)uVar60 |
                                                                                     (byte)uVar111))
                                                         ))))) & 0xf0f0f0f0f0f0f0f;
    uVar127 = CONCAT17(bVar10 >> 4 | bVar10,
                       CONCAT16((byte)((uint3)((uint3)((ulong)uVar108 >> 8) >> 4) >> 8) |
                                (byte)((ulong)uVar108 >> 0x10),
                                CONCAT15((byte)(uVar75 >> 8) | (byte)((ulong)uVar108 >> 8),
                                         CONCAT14((byte)uVar75 | (byte)uVar108,
                                                  CONCAT13((byte)(uVar7 >> 0x18) |
                                                           (byte)(uVar127 >> 0x18),
                                                           CONCAT12((byte)(uVar7 >> 0x10) |
                                                                    (byte)(uVar127 >> 0x10),
                                                                    CONCAT11((byte)(uVar7 >> 8) |
                                                                             (byte)(uVar127 >> 8),
                                                                             (byte)uVar7 |
                                                                             (byte)uVar127))))))) &
              0xf0f0f0f0f0f0f0f;
    uVar7 = CONCAT17(bVar11 >> 4 | bVar11,
                     CONCAT16((byte)((uint3)((uint3)((ulong)uVar99 >> 8) >> 4) >> 8) |
                              (byte)((ulong)uVar99 >> 0x10),
                              CONCAT15((byte)(uVar48 >> 8) | (byte)((ulong)uVar99 >> 8),
                                       CONCAT14((byte)uVar48 | (byte)uVar99,
                                                CONCAT13(bVar21 >> 4 | bVar21,
                                                         CONCAT12((byte)(uVar36 >> 0x10) |
                                                                  (byte)((ulong)uVar65 >> 0x10),
                                                                  CONCAT11((byte)(uVar36 >> 8) |
                                                                           (byte)((ulong)uVar65 >> 8
                                                                                 ),(byte)uVar36 |
                                                                                   (byte)uVar65)))))
                             )) & 0xf0f0f0f0f0f0f0f;
    uVar19 = CONCAT17(bVar13 >> 4 | bVar13,
                      CONCAT16((byte)((uint3)((uint3)((ulong)uVar18 >> 8) >> 4) >> 8) |
                               (byte)((ulong)uVar18 >> 0x10),
                               CONCAT15((byte)(uVar53 >> 8) | (byte)((ulong)uVar18 >> 8),
                                        CONCAT14((byte)uVar53 | (byte)uVar18,
                                                 CONCAT13((byte)(uVar19 >> 0x18) |
                                                          (byte)(uVar31 >> 0x18),
                                                          CONCAT12((byte)(uVar19 >> 0x10) |
                                                                   (byte)(uVar31 >> 0x10),
                                                                   CONCAT11((byte)(uVar19 >> 8) |
                                                                            (byte)(uVar31 >> 8),
                                                                            (byte)uVar19 |
                                                                            (byte)uVar31))))))) &
             0xf0f0f0f0f0f0f0f;
    uVar31 = CONCAT17(bVar14 >> 4 | bVar14,
                      CONCAT16((byte)((uint3)((uint3)((ulong)uVar89 >> 8) >> 4) >> 8) |
                               (byte)((ulong)uVar89 >> 0x10),
                               CONCAT15((byte)(uVar24 >> 8) | (byte)((ulong)uVar89 >> 8),
                                        CONCAT14((byte)uVar24 | (byte)uVar89,
                                                 CONCAT13(bVar22 >> 4 | bVar22,
                                                          CONCAT12((byte)(uVar12 >> 0x10) |
                                                                   (byte)((ulong)uVar77 >> 0x10),
                                                                   CONCAT11((byte)(uVar12 >> 8) |
                                                                            (byte)((ulong)uVar77 >>
                                                                                  8),(byte)uVar12 |
                                                                                     (byte)uVar77)))
                                                )))) & 0xf0f0f0f0f0f0f0f;
    uVar43 = CONCAT17(bVar15 >> 4 | bVar15,
                      CONCAT16((byte)((uint3)((uint3)((ulong)uVar41 >> 8) >> 4) >> 8) |
                               (byte)((ulong)uVar41 >> 0x10),
                               CONCAT15((byte)(uVar29 >> 8) | (byte)((ulong)uVar41 >> 8),
                                        CONCAT14((byte)uVar29 | (byte)uVar41,
                                                 CONCAT13((byte)(uVar43 >> 0x18) |
                                                          (byte)(uVar6 >> 0x18),
                                                          CONCAT12((byte)(uVar43 >> 0x10) |
                                                                   (byte)(uVar6 >> 0x10),
                                                                   CONCAT11((byte)(uVar43 >> 8) |
                                                                            (byte)(uVar6 >> 8),
                                                                            (byte)uVar43 |
                                                                            (byte)uVar6))))))) &
             0xf0f0f0f0f0f0f0f;
    bVar74 = (byte)uVar42 | (byte)uVar103;
    bVar78 = (byte)(uVar42 >> 8) | (byte)(uVar103 >> 8);
    bVar79 = (byte)(uVar42 >> 0x10) | (byte)(uVar103 >> 0x10);
    bVar80 = (byte)(uVar42 >> 0x18) | (byte)(uVar103 >> 0x18);
    uVar60 = CONCAT13(bVar80,CONCAT12(bVar79,CONCAT11(bVar78,bVar74)));
    bVar81 = (byte)(uVar42 >> 0x20) | (byte)(uVar103 >> 0x20);
    bVar83 = (byte)(uVar42 >> 0x28) | (byte)(uVar103 >> 0x28);
    bVar84 = (byte)(uVar42 >> 0x30) | (byte)(uVar103 >> 0x30);
    bVar85 = (byte)(uVar42 >> 0x38) | (byte)(uVar103 >> 0x38);
    uVar119 = CONCAT17(bVar85,CONCAT16(bVar84,CONCAT15(bVar83,CONCAT14(bVar81,uVar60))));
    bVar86 = (byte)uVar54 | (byte)uVar114;
    bVar90 = (byte)(uVar54 >> 8) | (byte)(uVar114 >> 8);
    bVar91 = (byte)(uVar54 >> 0x10) | (byte)(uVar114 >> 0x10);
    bVar92 = (byte)(uVar54 >> 0x18) | (byte)(uVar114 >> 0x18);
    uVar70 = CONCAT13(bVar92,CONCAT12(bVar91,CONCAT11(bVar90,bVar86)));
    bVar93 = (byte)(uVar54 >> 0x20) | (byte)(uVar114 >> 0x20);
    bVar95 = (byte)(uVar54 >> 0x28) | (byte)(uVar114 >> 0x28);
    bVar96 = (byte)(uVar54 >> 0x30) | (byte)(uVar114 >> 0x30);
    bVar97 = (byte)(uVar54 >> 0x38) | (byte)(uVar114 >> 0x38);
    uVar125 = CONCAT17(bVar97,CONCAT16(bVar96,CONCAT15(bVar95,CONCAT14(bVar93,uVar70))));
    bVar52 = (byte)uVar30 | (byte)uVar88;
    bVar56 = (byte)(uVar30 >> 8) | (byte)(uVar88 >> 8);
    bVar57 = (byte)(uVar30 >> 0x10) | (byte)(uVar88 >> 0x10);
    bVar58 = (byte)(uVar30 >> 0x18) | (byte)(uVar88 >> 0x18);
    uVar48 = CONCAT13(bVar58,CONCAT12(bVar57,CONCAT11(bVar56,bVar52)));
    bVar59 = (byte)(uVar30 >> 0x20) | (byte)(uVar88 >> 0x20);
    bVar61 = (byte)(uVar30 >> 0x28) | (byte)(uVar88 >> 0x28);
    bVar62 = (byte)(uVar30 >> 0x30) | (byte)(uVar88 >> 0x30);
    bVar63 = (byte)(uVar30 >> 0x38) | (byte)(uVar88 >> 0x38);
    uVar108 = CONCAT17(bVar63,CONCAT16(bVar62,CONCAT15(bVar61,CONCAT14(bVar59,uVar48))));
    bVar64 = (byte)uVar127 | (byte)uVar100;
    bVar66 = (byte)(uVar127 >> 8) | (byte)(uVar100 >> 8);
    bVar67 = (byte)(uVar127 >> 0x10) | (byte)(uVar100 >> 0x10);
    bVar68 = (byte)(uVar127 >> 0x18) | (byte)(uVar100 >> 0x18);
    uVar53 = CONCAT13(bVar68,CONCAT12(bVar67,CONCAT11(bVar66,bVar64)));
    bVar69 = (byte)(uVar127 >> 0x20) | (byte)(uVar100 >> 0x20);
    bVar71 = (byte)(uVar127 >> 0x28) | (byte)(uVar100 >> 0x28);
    bVar72 = (byte)(uVar127 >> 0x30) | (byte)(uVar100 >> 0x30);
    bVar73 = (byte)(uVar127 >> 0x38) | (byte)(uVar100 >> 0x38);
    uVar111 = CONCAT17(bVar73,CONCAT16(bVar72,CONCAT15(bVar71,CONCAT14(bVar69,uVar53))));
    bVar28 = (byte)uVar7 | (byte)uVar55;
    bVar32 = (byte)(uVar7 >> 8) | (byte)(uVar55 >> 8);
    bVar33 = (byte)(uVar7 >> 0x10) | (byte)(uVar55 >> 0x10);
    bVar34 = (byte)(uVar7 >> 0x18) | (byte)(uVar55 >> 0x18);
    uVar29 = CONCAT13(bVar34,CONCAT12(bVar33,CONCAT11(bVar32,bVar28)));
    bVar35 = (byte)(uVar7 >> 0x20) | (byte)(uVar55 >> 0x20);
    bVar37 = (byte)(uVar7 >> 0x28) | (byte)(uVar55 >> 0x28);
    bVar38 = (byte)(uVar7 >> 0x30) | (byte)(uVar55 >> 0x30);
    bVar39 = (byte)(uVar7 >> 0x38) | (byte)(uVar55 >> 0x38);
    uVar65 = CONCAT17(bVar39,CONCAT16(bVar38,CONCAT15(bVar37,CONCAT14(bVar35,uVar29))));
    bVar40 = (byte)uVar19 | (byte)uVar106;
    bVar44 = (byte)(uVar19 >> 8) | (byte)(uVar106 >> 8);
    bVar45 = (byte)(uVar19 >> 0x10) | (byte)(uVar106 >> 0x10);
    bVar46 = (byte)(uVar19 >> 0x18) | (byte)(uVar106 >> 0x18);
    uVar36 = CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar40)));
    bVar47 = (byte)(uVar19 >> 0x20) | (byte)(uVar106 >> 0x20);
    bVar49 = (byte)(uVar19 >> 0x28) | (byte)(uVar106 >> 0x28);
    bVar50 = (byte)(uVar19 >> 0x30) | (byte)(uVar106 >> 0x30);
    bVar51 = (byte)(uVar19 >> 0x38) | (byte)(uVar106 >> 0x38);
    uVar99 = CONCAT17(bVar51,CONCAT16(bVar50,CONCAT15(bVar49,CONCAT14(bVar47,uVar36))));
    bVar4 = (byte)uVar31 | (byte)uVar105;
    bVar8 = (byte)(uVar31 >> 8) | (byte)(uVar105 >> 8);
    bVar9 = (byte)(uVar31 >> 0x10) | (byte)(uVar105 >> 0x10);
    bVar10 = (byte)(uVar31 >> 0x18) |
             ((byte)((uint)iVar98 >> 0x18) | (byte)((ulong)uVar77 >> 0x38)) & 0xf0;
    uVar12 = CONCAT13(bVar10,CONCAT12(bVar9,CONCAT11(bVar8,bVar4)));
    bVar11 = (byte)(uVar31 >> 0x20) | (byte)iVar101 | (byte)((ulong)uVar89 >> 0x20) & 0xf0;
    bVar13 = (byte)(uVar31 >> 0x28) |
             ((byte)((uint)iVar101 >> 8) | (byte)((ulong)uVar89 >> 0x28)) & 0xf0;
    bVar14 = (byte)(uVar31 >> 0x30) |
             ((byte)((uint)iVar101 >> 0x10) | (byte)((ulong)uVar89 >> 0x30)) & 0xf0;
    bVar15 = (byte)(uVar31 >> 0x38) |
             ((byte)((uint)iVar101 >> 0x18) | (byte)((ulong)uVar89 >> 0x38)) & 0xf0;
    uVar18 = CONCAT17(bVar15,CONCAT16(bVar14,CONCAT15(bVar13,CONCAT14(bVar11,uVar12))));
    bVar16 = (byte)uVar43 | (byte)uVar107;
    bVar20 = (byte)(uVar43 >> 8) | (byte)(uVar107 >> 8);
    bVar21 = (byte)(uVar43 >> 0x10) | (byte)(uVar107 >> 0x10);
    bVar22 = (byte)(uVar43 >> 0x18) | ((byte)((uint)iVar102 >> 0x18) | (byte)(uVar6 >> 0x38)) & 0xf0
    ;
    uVar24 = CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar16)));
    bVar23 = (byte)(uVar43 >> 0x20) | (byte)iVar104 | (byte)((ulong)uVar41 >> 0x20) & 0xf0;
    bVar25 = (byte)(uVar43 >> 0x28) |
             ((byte)((uint)iVar104 >> 8) | (byte)((ulong)uVar41 >> 0x28)) & 0xf0;
    bVar26 = (byte)(uVar43 >> 0x30) |
             ((byte)((uint)iVar104 >> 0x10) | (byte)((ulong)uVar41 >> 0x30)) & 0xf0;
    bVar27 = (byte)(uVar43 >> 0x38) |
             ((byte)((uint)iVar104 >> 0x18) | (byte)((ulong)uVar41 >> 0x38)) & 0xf0;
    uVar41 = CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar23,uVar24))));
    uVar60 = uVar60 >> 2;
    uVar139 = (uint)((ulong)uVar119 >> 0x22);
    uVar70 = uVar70 >> 2;
    uVar143 = (uint)((ulong)uVar125 >> 0x22);
    uVar48 = uVar48 >> 2;
    uVar129 = (uint)((ulong)uVar108 >> 0x22);
    uVar53 = uVar53 >> 2;
    uVar135 = (uint)((ulong)uVar111 >> 0x22);
    uVar29 = uVar29 >> 2;
    uVar94 = (uint)((ulong)uVar65 >> 0x22);
    uVar36 = uVar36 >> 2;
    uVar122 = (uint)((ulong)uVar99 >> 0x22);
    uVar12 = uVar12 >> 2;
    uVar75 = (uint)((ulong)uVar18 >> 0x22);
    uVar24 = uVar24 >> 2;
    uVar82 = (uint)((ulong)uVar41 >> 0x22);
    bVar74 = (byte)uVar60 | bVar74;
    bVar78 = (byte)(uVar60 >> 8) | bVar78;
    bVar79 = (byte)(uVar60 >> 0x10) | bVar79;
    bVar80 = bVar80 >> 2 | bVar80;
    bVar81 = (byte)uVar139 | bVar81;
    bVar83 = (byte)(uVar139 >> 8) | bVar83;
    bVar84 = (byte)((uint3)((ulong)uVar119 >> 0x2a) >> 8) | bVar84;
    uVar124 = CONCAT16(bVar84,CONCAT15(bVar83,CONCAT14(bVar81,CONCAT13(bVar80,CONCAT12(bVar79,
                                                  CONCAT11(bVar78,bVar74))))));
    bVar85 = bVar85 >> 2 | bVar85;
    uVar89 = CONCAT17(bVar85,uVar124);
    bVar86 = (byte)uVar70 | bVar86;
    bVar90 = (byte)(uVar70 >> 8) | bVar90;
    bVar91 = (byte)(uVar70 >> 0x10) | bVar91;
    bVar92 = bVar92 >> 2 | bVar92;
    bVar93 = (byte)uVar143 | bVar93;
    bVar95 = (byte)(uVar143 >> 8) | bVar95;
    bVar96 = (byte)((uint3)((ulong)uVar125 >> 0x2a) >> 8) | bVar96;
    uVar131 = CONCAT16(bVar96,CONCAT15(bVar95,CONCAT14(bVar93,CONCAT13(bVar92,CONCAT12(bVar91,
                                                  CONCAT11(bVar90,bVar86))))));
    bVar97 = bVar97 >> 2 | bVar97;
    uVar119 = CONCAT17(bVar97,uVar131);
    bVar52 = (byte)uVar48 | bVar52;
    bVar56 = (byte)(uVar48 >> 8) | bVar56;
    bVar57 = (byte)(uVar48 >> 0x10) | bVar57;
    bVar58 = bVar58 >> 2 | bVar58;
    bVar59 = (byte)uVar129 | bVar59;
    bVar61 = (byte)(uVar129 >> 8) | bVar61;
    bVar62 = (byte)((uint3)((ulong)uVar108 >> 0x2a) >> 8) | bVar62;
    uVar113 = CONCAT16(bVar62,CONCAT15(bVar61,CONCAT14(bVar59,CONCAT13(bVar58,CONCAT12(bVar57,
                                                  CONCAT11(bVar56,bVar52))))));
    bVar63 = bVar63 >> 2 | bVar63;
    uVar77 = CONCAT17(bVar63,uVar113);
    bVar64 = (byte)uVar53 | bVar64;
    bVar66 = (byte)(uVar53 >> 8) | bVar66;
    bVar67 = (byte)(uVar53 >> 0x10) | bVar67;
    bVar68 = bVar68 >> 2 | bVar68;
    bVar69 = (byte)uVar135 | bVar69;
    bVar71 = (byte)(uVar135 >> 8) | bVar71;
    bVar72 = (byte)((uint3)((ulong)uVar111 >> 0x2a) >> 8) | bVar72;
    uVar118 = CONCAT16(bVar72,CONCAT15(bVar71,CONCAT14(bVar69,CONCAT13(bVar68,CONCAT12(bVar67,
                                                  CONCAT11(bVar66,bVar64))))));
    bVar73 = bVar73 >> 2 | bVar73;
    uVar108 = CONCAT17(bVar73,uVar118);
    bVar28 = (byte)uVar29 | bVar28;
    bVar32 = (byte)(uVar29 >> 8) | bVar32;
    bVar33 = (byte)(uVar29 >> 0x10) | bVar33;
    bVar34 = bVar34 >> 2 | bVar34;
    bVar35 = (byte)uVar94 | bVar35;
    bVar37 = (byte)(uVar94 >> 8) | bVar37;
    bVar38 = (byte)((uint3)((ulong)uVar65 >> 0x2a) >> 8) | bVar38;
    uVar109 = CONCAT16(bVar38,CONCAT15(bVar37,CONCAT14(bVar35,CONCAT13(bVar34,CONCAT12(bVar33,
                                                  CONCAT11(bVar32,bVar28))))));
    bVar39 = bVar39 >> 2 | bVar39;
    uVar65 = CONCAT17(bVar39,uVar109);
    bVar40 = (byte)uVar36 | bVar40;
    bVar44 = (byte)(uVar36 >> 8) | bVar44;
    bVar45 = (byte)(uVar36 >> 0x10) | bVar45;
    bVar46 = bVar46 >> 2 | bVar46;
    bVar47 = (byte)uVar122 | bVar47;
    bVar49 = (byte)(uVar122 >> 8) | bVar49;
    bVar50 = (byte)((uint3)((ulong)uVar99 >> 0x2a) >> 8) | bVar50;
    uVar110 = CONCAT16(bVar50,CONCAT15(bVar49,CONCAT14(bVar47,CONCAT13(bVar46,CONCAT12(bVar45,
                                                  CONCAT11(bVar44,bVar40))))));
    bVar51 = bVar51 >> 2 | bVar51;
    uVar99 = CONCAT17(bVar51,uVar110);
    bVar4 = (byte)uVar12 | bVar4;
    bVar8 = (byte)(uVar12 >> 8) | bVar8;
    bVar9 = (byte)(uVar12 >> 0x10) | bVar9;
    bVar10 = bVar10 >> 2 | bVar10;
    bVar11 = (byte)uVar75 | bVar11;
    bVar13 = (byte)(uVar75 >> 8) | bVar13;
    bVar14 = (byte)((uint3)((ulong)uVar18 >> 0x2a) >> 8) | bVar14;
    uVar76 = CONCAT16(bVar14,CONCAT15(bVar13,CONCAT14(bVar11,CONCAT13(bVar10,CONCAT12(bVar9,CONCAT11
                                                  (bVar8,bVar4))))));
    bVar15 = bVar15 >> 2 | bVar15;
    uVar18 = CONCAT17(bVar15,uVar76);
    bVar16 = (byte)uVar24 | bVar16;
    bVar20 = (byte)(uVar24 >> 8) | bVar20;
    bVar21 = (byte)(uVar24 >> 0x10) | bVar21;
    bVar22 = bVar22 >> 2 | bVar22;
    bVar23 = (byte)uVar82 | bVar23;
    bVar25 = (byte)(uVar82 >> 8) | bVar25;
    bVar26 = (byte)((uint3)((ulong)uVar41 >> 0x2a) >> 8) | bVar26;
    uVar87 = CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar23,CONCAT13(bVar22,CONCAT12(bVar21,
                                                  CONCAT11(bVar20,bVar16))))));
    bVar27 = bVar27 >> 2 | bVar27;
    uVar41 = CONCAT17(bVar27,uVar87);
    uVar127 = ((ulong)uVar124 & 0xfffffffe) >> 1;
    uVar60 = (uint)((ulong)uVar89 >> 0x21);
    uVar42 = ((ulong)uVar131 & 0xfffffffe) >> 1;
    uVar70 = (uint)((ulong)uVar119 >> 0x21);
    uVar19 = ((ulong)uVar113 & 0xfffffffe) >> 1;
    uVar48 = (uint)((ulong)uVar77 >> 0x21);
    uVar30 = ((ulong)uVar118 & 0xfffffffe) >> 1;
    uVar53 = (uint)((ulong)uVar108 >> 0x21);
    uVar6 = ((ulong)uVar109 & 0xfffffffe) >> 1;
    uVar12 = (uint)((ulong)uVar65 >> 0x21);
    uVar7 = ((ulong)uVar110 & 0xfffffffe) >> 1;
    uVar24 = (uint)((ulong)uVar99 >> 0x21);
    uVar31 = ((ulong)uVar76 & 0xfffffffe) >> 1;
    uVar29 = (uint)((ulong)uVar18 >> 0x21);
    uVar43 = ((ulong)uVar87 & 0xfffffffe) >> 1;
    uVar36 = (uint)((ulong)uVar41 >> 0x21);
    bVar4 = (byte)uVar31 | bVar4;
    bVar14 = (byte)((uint3)((ulong)uVar18 >> 0x29) >> 8) | bVar14;
    bVar15 = bVar15 >> 1 | bVar15;
    bVar16 = (byte)uVar43 | bVar16;
    bVar26 = (byte)((uint3)((ulong)uVar41 >> 0x29) >> 8) | bVar26;
    bVar27 = bVar27 >> 1 | bVar27;
    uVar127 = CONCAT17(bVar85 >> 1 | bVar85,
                       CONCAT16((byte)((uint3)((ulong)uVar89 >> 0x29) >> 8) | bVar84,
                                CONCAT15((byte)(uVar60 >> 8) | bVar83,
                                         CONCAT14((byte)uVar60 | bVar81,
                                                  CONCAT13((byte)(uVar127 >> 0x18) | bVar80,
                                                           CONCAT12((byte)(uVar127 >> 0x10) | bVar79
                                                                    ,CONCAT11((byte)(uVar127 >> 8) |
                                                                              bVar78,(byte)uVar127 |
                                                                                     bVar74))))))) &
              0x1111111111111111;
    uVar42 = CONCAT17(bVar97 >> 1 | bVar97,
                      CONCAT16((byte)((uint3)((ulong)uVar119 >> 0x29) >> 8) | bVar96,
                               CONCAT15((byte)(uVar70 >> 8) | bVar95,
                                        CONCAT14((byte)uVar70 | bVar93,
                                                 CONCAT13((byte)(uVar42 >> 0x18) | bVar92,
                                                          CONCAT12((byte)(uVar42 >> 0x10) | bVar91,
                                                                   CONCAT11((byte)(uVar42 >> 8) |
                                                                            bVar90,(byte)uVar42 |
                                                                                   bVar86))))))) &
             0x1111111111111111;
    uVar19 = CONCAT17(bVar63 >> 1 | bVar63,
                      CONCAT16((byte)((uint3)((ulong)uVar77 >> 0x29) >> 8) | bVar62,
                               CONCAT15((byte)(uVar48 >> 8) | bVar61,
                                        CONCAT14((byte)uVar48 | bVar59,
                                                 CONCAT13((byte)(uVar19 >> 0x18) | bVar58,
                                                          CONCAT12((byte)(uVar19 >> 0x10) | bVar57,
                                                                   CONCAT11((byte)(uVar19 >> 8) |
                                                                            bVar56,(byte)uVar19 |
                                                                                   bVar52))))))) &
             0x1111111111111111;
    uVar30 = CONCAT17(bVar73 >> 1 | bVar73,
                      CONCAT16((byte)((uint3)((ulong)uVar108 >> 0x29) >> 8) | bVar72,
                               CONCAT15((byte)(uVar53 >> 8) | bVar71,
                                        CONCAT14((byte)uVar53 | bVar69,
                                                 CONCAT13((byte)(uVar30 >> 0x18) | bVar68,
                                                          CONCAT12((byte)(uVar30 >> 0x10) | bVar67,
                                                                   CONCAT11((byte)(uVar30 >> 8) |
                                                                            bVar66,(byte)uVar30 |
                                                                                   bVar64))))))) &
             0x1111111111111111;
    uVar6 = CONCAT17(bVar39 >> 1 | bVar39,
                     CONCAT16((byte)((uint3)((ulong)uVar65 >> 0x29) >> 8) | bVar38,
                              CONCAT15((byte)(uVar12 >> 8) | bVar37,
                                       CONCAT14((byte)uVar12 | bVar35,
                                                CONCAT13((byte)(uVar6 >> 0x18) | bVar34,
                                                         CONCAT12((byte)(uVar6 >> 0x10) | bVar33,
                                                                  CONCAT11((byte)(uVar6 >> 8) |
                                                                           bVar32,(byte)uVar6 |
                                                                                  bVar28))))))) &
            0x1111111111111111;
    uVar7 = CONCAT17(bVar51 >> 1 | bVar51,
                     CONCAT16((byte)((uint3)((ulong)uVar99 >> 0x29) >> 8) | bVar50,
                              CONCAT15((byte)(uVar24 >> 8) | bVar49,
                                       CONCAT14((byte)uVar24 | bVar47,
                                                CONCAT13((byte)(uVar7 >> 0x18) | bVar46,
                                                         CONCAT12((byte)(uVar7 >> 0x10) | bVar45,
                                                                  CONCAT11((byte)(uVar7 >> 8) |
                                                                           bVar44,(byte)uVar7 |
                                                                                  bVar40))))))) &
            0x1111111111111111;
    uVar12 = CONCAT13((byte)(uVar31 >> 0x18) | bVar10,
                      CONCAT12((byte)(uVar31 >> 0x10) | bVar9,
                               CONCAT11((byte)(uVar31 >> 8) | bVar8,bVar4)));
    uVar1 = CONCAT14((byte)uVar29 | bVar11,uVar12);
    uVar5 = uVar1 & 0x1111111111;
    uVar24 = CONCAT13((byte)(uVar43 >> 0x18) | bVar22,
                      CONCAT12((byte)(uVar43 >> 0x10) | bVar21,
                               CONCAT11((byte)(uVar43 >> 8) | bVar20,bVar16)));
    uVar2 = CONCAT14((byte)uVar36 | bVar23,uVar24);
    uVar17 = uVar2 & 0x1111111111;
    uVar129 = (uint)(uVar127 >> 7) & 0x1ffffff;
    uVar135 = (uint)(uVar127 >> 0x27);
    uVar139 = (uint)(uVar42 >> 7) & 0x1ffffff;
    uVar143 = (uint)(uVar42 >> 0x27);
    uVar75 = (uint)(uVar19 >> 7) & 0x1ffffff;
    uVar82 = (uint)(uVar19 >> 0x27);
    uVar94 = (uint)(uVar30 >> 7) & 0x1ffffff;
    uVar122 = (uint)(uVar30 >> 0x27);
    uVar48 = (uint)(uVar6 >> 7) & 0x1ffffff;
    uVar53 = (uint)(uVar6 >> 0x27);
    uVar60 = (uint)(uVar7 >> 7) & 0x1ffffff;
    uVar70 = (uint)(uVar7 >> 0x27);
    uVar12 = (uVar12 & 0x11111111) >> 7;
    uVar29 = ((uint)(CONCAT17(bVar15,CONCAT16(bVar14,CONCAT15((byte)(uVar29 >> 8) | bVar13,uVar1)))
                    >> 0x20) & 0x11111111) >> 7;
    uVar24 = (uVar24 & 0x11111111) >> 7;
    uVar36 = ((uint)(CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15((byte)(uVar36 >> 8) | bVar25,uVar2)))
                    >> 0x20) & 0x11111111) >> 7;
    bVar8 = (byte)uVar82 | (byte)(uVar19 >> 0x20);
    uVar76 = CONCAT16((byte)(uVar82 >> 0x10) | (byte)(uVar19 >> 0x30),
                      (uint6)CONCAT14(bVar8,(uint)(byte)((byte)(uVar75 >> 0x10) |
                                                        (byte)(uVar19 >> 0x10)) << 0x10));
    bVar9 = (byte)uVar122 | (byte)(uVar30 >> 0x20);
    uVar87 = CONCAT16((byte)(uVar122 >> 0x10) | (byte)(uVar30 >> 0x30),
                      (uint6)CONCAT14(bVar9,(uint)(byte)((byte)(uVar94 >> 0x10) |
                                                        (byte)(uVar30 >> 0x10)) << 0x10));
    param_1[3] = CONCAT17((byte)(((uint)(((ulong)CONCAT11(bVar27,(byte)(uVar36 >> 0x10) |
                                                                 bVar26 & 0x11) << 0x30) >> 0x20) &
                                 0x11ffffff) >> 0xe) | (byte)uVar36 | (byte)(uVar17 >> 0x20),
                          CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar24 >> 0x10) |
                                                               (byte)(uVar17 >> 0x10)) << 0x10) >>
                                         0xe) | (byte)uVar24 | bVar16 & 0x11,
                                   CONCAT15((byte)(((uint)(((ulong)CONCAT11(bVar15,(byte)(uVar29 >>
                                                                                         0x10) |
                                                                                   bVar14 & 0x11) <<
                                                           0x30) >> 0x20) & 0x11ffffff) >> 0xe) |
                                            (byte)uVar29 | (byte)(uVar5 >> 0x20),
                                            CONCAT14((byte)((uint3)((uint3)(byte)((byte)(uVar12 >>
                                                                                        0x10) |
                                                                                 (byte)(uVar5 >> 
                                                  0x10)) << 0x10) >> 0xe) |
                                                  (byte)uVar12 | bVar4 & 0x11,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar70 >> 0x10) | (byte)(uVar7 >> 0x30)) << 0x30)
                                                  >> 0x2e) | (byte)uVar70 | (byte)(uVar7 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar60 >> 0x10) | (byte)(uVar7 >> 0x10)) << 0x10)
                                                  >> 0xe) | (byte)uVar60 | (byte)uVar7,
                                                  CONCAT11((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar53 >> 0x10) | (byte)(uVar6 >> 0x30)) << 0x30)
                                                  >> 0x2e) | (byte)uVar53 | (byte)(uVar6 >> 0x20),
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar48 >> 0x10
                                                                                     ) |
                                                                              (byte)(uVar6 >> 0x10))
                                                                << 0x10) >> 0xe) |
                                                  (byte)uVar48 | (byte)uVar6)))))));
    param_1[2] = CONCAT17((byte)(uint3)(uVar87 >> 0x2e) | bVar9,
                          CONCAT16((byte)(((ulong)uVar87 & 0xffffc000) >> 0xe) |
                                   (byte)uVar94 | (byte)uVar30,
                                   CONCAT15((byte)(uint3)(uVar76 >> 0x2e) | bVar8,
                                            CONCAT14((byte)(((ulong)uVar76 & 0xffffc000) >> 0xe) |
                                                     (byte)uVar75 | (byte)uVar19,
                                                     CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar143 >> 0x10) | (byte)(uVar42 >> 0x30)) << 0x30
                                                  ) >> 0x2e) |
                                                  (byte)uVar143 | (byte)(uVar42 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar139 >> 0x10) | (byte)(uVar42 >> 0x10)) << 0x10
                                                  ) >> 0xe) | (byte)uVar139 | (byte)uVar42,
                                                  CONCAT11((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar135 >> 0x10) | (byte)(uVar127 >> 0x30)) <<
                                                  0x30) >> 0x2e) |
                                                  (byte)uVar135 | (byte)(uVar127 >> 0x20),
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar129 >>
                                                                                     0x10) |
                                                                              (byte)(uVar127 >> 0x10
                                                                                    )) << 0x10) >>
                                                        0xe) | (byte)uVar129 | (byte)uVar127)))))));
    return;
  }
  lVar3 = 0;
  do {
    uVar12 = (uint)param_2[lVar3];
    uVar24 = (uint)((ulong)param_2[lVar3] >> 0x20);
    uVar12 = (uVar24 | uVar24 << 4) & 0xf0f0f0f0 | (uVar12 | uVar12 >> 4) & 0xf0f0f0f;
    uVar12 = uVar12 | uVar12 >> 2;
    uVar12 = (uVar12 | uVar12 >> 1) & 0x11111111;
    uVar12 = uVar12 | uVar12 >> 7;
    *(byte *)((long)param_1 + lVar3) = (byte)uVar12 | (byte)(uVar12 >> 0xe);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x20);
  return;
}


