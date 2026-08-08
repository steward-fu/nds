/*
 * Ghidra decompilation
 *
 * Function : render_scanline_2d_composite
 * Address  : 0013c6d0
 * Program  : drastic64
 */


/* WARNING: Removing unreachable block (ram,0x0013ce60) */

void render_scanline_2d_composite
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
               long param_6,uint param_7,uint param_8,uint param_9)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint local_3c;
  
  lVar3 = param_3 + 0x10c0;
  local_3c = param_9 & 8;
  if ((param_9 & 7) == 0) {
    render_scanline_priority_encode_single_asm(param_1,param_3 + 0xda0,lVar3);
    if (local_3c == 0) {
      render_scanline_select_pixels(param_1,param_2,lVar3,param_4,param_5,0,param_7);
      return;
    }
    lVar4 = param_3 + 0x1480;
    render_scanline_select_pixels(param_1,param_3 + 0x1180,lVar3,param_4,param_5,0,param_7);
    render_scanline_select_blend_enable_asm(lVar4,lVar3,param_7,param_8 & 0x3f);
    if ((ulong)((param_3 + 0xfaf) - lVar4) < 0x1f) {
      *(ulong *)(param_3 + 0x1480) =
           *(ulong *)(param_3 + 0x1480) & (*(ulong *)(param_3 + 4000) ^ 0xffffffffffffffff);
      *(ulong *)(param_3 + 0x1488) =
           *(ulong *)(param_3 + 0x1488) & (*(ulong *)(param_3 + 0xfa8) ^ 0xffffffffffffffff);
      *(ulong *)(param_3 + 0x1490) =
           *(ulong *)(param_3 + 0x1490) & (*(ulong *)(param_3 + 0xfb0) ^ 0xffffffffffffffff);
      *(ulong *)(param_3 + 0x1498) =
           *(ulong *)(param_3 + 0x1498) & (*(ulong *)(param_3 + 0xfb8) ^ 0xffffffffffffffff);
    }
    else {
      uVar20 = *(undefined8 *)(param_3 + 0xfa8);
      uVar19 = *(undefined8 *)(param_3 + 4000);
      uVar18 = *(undefined8 *)(param_3 + 0xfb8);
      uVar17 = *(undefined8 *)(param_3 + 0xfb0);
      uVar24 = *(undefined8 *)(param_3 + 0x1488);
      uVar23 = *(undefined8 *)(param_3 + 0x1480);
      uVar22 = *(undefined8 *)(param_3 + 0x1498);
      uVar21 = *(undefined8 *)(param_3 + 0x1490);
      *(ulong *)(param_3 + 0x1488) =
           CONCAT17((byte)((ulong)uVar24 >> 0x38) & ~(byte)((ulong)uVar20 >> 0x38),
                    CONCAT16((byte)((ulong)uVar24 >> 0x30) & ~(byte)((ulong)uVar20 >> 0x30),
                             CONCAT15((byte)((ulong)uVar24 >> 0x28) & ~(byte)((ulong)uVar20 >> 0x28)
                                      ,CONCAT14((byte)((ulong)uVar24 >> 0x20) &
                                                ~(byte)((ulong)uVar20 >> 0x20),
                                                CONCAT13((byte)((ulong)uVar24 >> 0x18) &
                                                         ~(byte)((ulong)uVar20 >> 0x18),
                                                         CONCAT12((byte)((ulong)uVar24 >> 0x10) &
                                                                  ~(byte)((ulong)uVar20 >> 0x10),
                                                                  CONCAT11((byte)((ulong)uVar24 >> 8
                                                                                 ) & ~(byte)((ulong)
                                                  uVar20 >> 8),(byte)uVar24 & ~(byte)uVar20)))))));
      *(ulong *)(param_3 + 0x1480) =
           CONCAT17((byte)((ulong)uVar23 >> 0x38) & ~(byte)((ulong)uVar19 >> 0x38),
                    CONCAT16((byte)((ulong)uVar23 >> 0x30) & ~(byte)((ulong)uVar19 >> 0x30),
                             CONCAT15((byte)((ulong)uVar23 >> 0x28) & ~(byte)((ulong)uVar19 >> 0x28)
                                      ,CONCAT14((byte)((ulong)uVar23 >> 0x20) &
                                                ~(byte)((ulong)uVar19 >> 0x20),
                                                CONCAT13((byte)((ulong)uVar23 >> 0x18) &
                                                         ~(byte)((ulong)uVar19 >> 0x18),
                                                         CONCAT12((byte)((ulong)uVar23 >> 0x10) &
                                                                  ~(byte)((ulong)uVar19 >> 0x10),
                                                                  CONCAT11((byte)((ulong)uVar23 >> 8
                                                                                 ) & ~(byte)((ulong)
                                                  uVar19 >> 8),(byte)uVar23 & ~(byte)uVar19)))))));
      *(ulong *)(param_3 + 0x1498) =
           CONCAT17((byte)((ulong)uVar22 >> 0x38) & ~(byte)((ulong)uVar18 >> 0x38),
                    CONCAT16((byte)((ulong)uVar22 >> 0x30) & ~(byte)((ulong)uVar18 >> 0x30),
                             CONCAT15((byte)((ulong)uVar22 >> 0x28) & ~(byte)((ulong)uVar18 >> 0x28)
                                      ,CONCAT14((byte)((ulong)uVar22 >> 0x20) &
                                                ~(byte)((ulong)uVar18 >> 0x20),
                                                CONCAT13((byte)((ulong)uVar22 >> 0x18) &
                                                         ~(byte)((ulong)uVar18 >> 0x18),
                                                         CONCAT12((byte)((ulong)uVar22 >> 0x10) &
                                                                  ~(byte)((ulong)uVar18 >> 0x10),
                                                                  CONCAT11((byte)((ulong)uVar22 >> 8
                                                                                 ) & ~(byte)((ulong)
                                                  uVar18 >> 8),(byte)uVar22 & ~(byte)uVar18)))))));
      *(ulong *)(param_3 + 0x1490) =
           CONCAT17((byte)((ulong)uVar21 >> 0x38) & ~(byte)((ulong)uVar17 >> 0x38),
                    CONCAT16((byte)((ulong)uVar21 >> 0x30) & ~(byte)((ulong)uVar17 >> 0x30),
                             CONCAT15((byte)((ulong)uVar21 >> 0x28) & ~(byte)((ulong)uVar17 >> 0x28)
                                      ,CONCAT14((byte)((ulong)uVar21 >> 0x20) &
                                                ~(byte)((ulong)uVar17 >> 0x20),
                                                CONCAT13((byte)((ulong)uVar21 >> 0x18) &
                                                         ~(byte)((ulong)uVar17 >> 0x18),
                                                         CONCAT12((byte)((ulong)uVar21 >> 0x10) &
                                                                  ~(byte)((ulong)uVar17 >> 0x10),
                                                                  CONCAT11((byte)((ulong)uVar21 >> 8
                                                                                 ) & ~(byte)((ulong)
                                                  uVar17 >> 8),(byte)uVar21 & ~(byte)uVar17)))))));
    }
    render_scanline_shade_asm(param_1,param_2,param_3 + 0x1180,lVar4);
    return;
  }
  lVar4 = param_3 + 0x11c0;
  uVar5 = param_3 + 0x13c0;
  lVar13 = param_3 + 0x1480;
  uVar6 = param_3 + 0x1b80;
  uVar15 = 0;
  if (param_7 != 0) {
    uVar16 = param_7 & param_8 >> 8;
    uVar15 = uVar16 & (1 << (ulong)(*(byte *)(param_1 + 0x84) & 0x1f) ^ 0xffffffffU);
    if ((*(byte *)(param_1 + 0x84) & 4) != 0) {
      uVar15 = uVar16;
    }
  }
  render_scanline_priority_encode_double_asm(param_1,param_3 + 0xda0,uVar5,lVar13);
  lVar9 = param_6;
  if ((param_9 & 8) != 0) {
    lVar9 = 0;
  }
  render_scanline_select_pixels(param_1,param_3 + 0x1540,uVar5,param_4,param_5,lVar9,param_7);
  render_scanline_select_pixels(param_1,param_3 + 0x1840,lVar13,param_4,param_5,0,uVar15);
  render_scanline_select_blend_enable_asm(param_3 + 0x1b40,uVar5,param_7,param_8 & 0x3f);
  render_scanline_select_blend_enable_asm(param_3 + 0x1b60,lVar13,param_7,param_8 >> 8 & 0x3f);
  uVar20 = *(undefined8 *)(param_3 + 0xfa8);
  uVar19 = *(undefined8 *)(param_3 + 4000);
  uVar18 = *(undefined8 *)(param_3 + 0xfb8);
  uVar17 = *(undefined8 *)(param_3 + 0xfb0);
  uVar24 = *(undefined8 *)(param_3 + 0x1b48);
  uVar23 = *(undefined8 *)(param_3 + 0x1b40);
  uVar22 = *(undefined8 *)(param_3 + 7000);
  uVar21 = *(undefined8 *)(param_3 + 0x1b50);
  *(ulong *)(param_3 + 0x1b48) =
       CONCAT17((byte)((ulong)uVar24 >> 0x38) & ~(byte)((ulong)uVar20 >> 0x38),
                CONCAT16((byte)((ulong)uVar24 >> 0x30) & ~(byte)((ulong)uVar20 >> 0x30),
                         CONCAT15((byte)((ulong)uVar24 >> 0x28) & ~(byte)((ulong)uVar20 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar24 >> 0x20) &
                                           ~(byte)((ulong)uVar20 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar24 >> 0x18) &
                                                    ~(byte)((ulong)uVar20 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar24 >> 0x10) &
                                                             ~(byte)((ulong)uVar20 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar24 >> 8) &
                                                                      ~(byte)((ulong)uVar20 >> 8),
                                                                      (byte)uVar24 & ~(byte)uVar20))
                                                   )))));
  *(ulong *)(param_3 + 0x1b40) =
       CONCAT17((byte)((ulong)uVar23 >> 0x38) & ~(byte)((ulong)uVar19 >> 0x38),
                CONCAT16((byte)((ulong)uVar23 >> 0x30) & ~(byte)((ulong)uVar19 >> 0x30),
                         CONCAT15((byte)((ulong)uVar23 >> 0x28) & ~(byte)((ulong)uVar19 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar23 >> 0x20) &
                                           ~(byte)((ulong)uVar19 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar23 >> 0x18) &
                                                    ~(byte)((ulong)uVar19 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar23 >> 0x10) &
                                                             ~(byte)((ulong)uVar19 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar23 >> 8) &
                                                                      ~(byte)((ulong)uVar19 >> 8),
                                                                      (byte)uVar23 & ~(byte)uVar19))
                                                   )))));
  *(ulong *)(param_3 + 7000) =
       CONCAT17((byte)((ulong)uVar22 >> 0x38) & ~(byte)((ulong)uVar18 >> 0x38),
                CONCAT16((byte)((ulong)uVar22 >> 0x30) & ~(byte)((ulong)uVar18 >> 0x30),
                         CONCAT15((byte)((ulong)uVar22 >> 0x28) & ~(byte)((ulong)uVar18 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar22 >> 0x20) &
                                           ~(byte)((ulong)uVar18 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar22 >> 0x18) &
                                                    ~(byte)((ulong)uVar18 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar22 >> 0x10) &
                                                             ~(byte)((ulong)uVar18 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar22 >> 8) &
                                                                      ~(byte)((ulong)uVar18 >> 8),
                                                                      (byte)uVar22 & ~(byte)uVar18))
                                                   )))));
  *(ulong *)(param_3 + 0x1b50) =
       CONCAT17((byte)((ulong)uVar21 >> 0x38) & ~(byte)((ulong)uVar17 >> 0x38),
                CONCAT16((byte)((ulong)uVar21 >> 0x30) & ~(byte)((ulong)uVar17 >> 0x30),
                         CONCAT15((byte)((ulong)uVar21 >> 0x28) & ~(byte)((ulong)uVar17 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar21 >> 0x20) &
                                           ~(byte)((ulong)uVar17 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar21 >> 0x18) &
                                                    ~(byte)((ulong)uVar17 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar21 >> 0x10) &
                                                             ~(byte)((ulong)uVar17 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar21 >> 8) &
                                                                      ~(byte)((ulong)uVar17 >> 8),
                                                                      (byte)uVar21 & ~(byte)uVar17))
                                                   )))));
  uVar15 = param_9 & 5;
  if (uVar15 == 4) {
    uVar10 = (param_3 + 0x1b6f) - uVar6;
    bVar2 = (param_3 + 0x1b4f) - uVar6 < 0x1f;
    if ((bVar2 || uVar10 < 0x1e) || !bVar2 && uVar10 == 0x1e) {
      *(ulong *)(param_3 + 0x1b88) = *(ulong *)(param_3 + 0x1b68) & *(ulong *)(param_3 + 0x1b48);
      *(ulong *)(param_3 + 0x1b80) = *(ulong *)(param_3 + 0x1b60) & *(ulong *)(param_3 + 0x1b40);
      *(ulong *)(param_3 + 0x1b98) = *(ulong *)(param_3 + 0x1b78) & *(ulong *)(param_3 + 7000);
      *(ulong *)(param_3 + 0x1b90) = *(ulong *)(param_3 + 0x1b70) & *(ulong *)(param_3 + 0x1b50);
    }
    else {
      uVar24 = *(undefined8 *)(param_3 + 0x1b48);
      uVar23 = *(undefined8 *)(param_3 + 0x1b40);
      uVar22 = *(undefined8 *)(param_3 + 7000);
      uVar21 = *(undefined8 *)(param_3 + 0x1b50);
      uVar20 = *(undefined8 *)(param_3 + 0x1b68);
      uVar19 = *(undefined8 *)(param_3 + 0x1b60);
      uVar18 = *(undefined8 *)(param_3 + 0x1b78);
      uVar17 = *(undefined8 *)(param_3 + 0x1b70);
      *(ulong *)(param_3 + 0x1b88) =
           CONCAT17((byte)((ulong)uVar20 >> 0x38) & (byte)((ulong)uVar24 >> 0x38),
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) & (byte)((ulong)uVar24 >> 0x30),
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) & (byte)((ulong)uVar24 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) &
                                               (byte)((ulong)uVar24 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar20 >> 0x18) &
                                                        (byte)((ulong)uVar24 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar20 >> 0x10) &
                                                                 (byte)((ulong)uVar24 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar20 >> 8)
                                                                          & (byte)((ulong)uVar24 >>
                                                                                  8),
                                                                          (byte)uVar20 &
                                                                          (byte)uVar24)))))));
      *(ulong *)(param_3 + 0x1b80) =
           CONCAT17((byte)((ulong)uVar19 >> 0x38) & (byte)((ulong)uVar23 >> 0x38),
                    CONCAT16((byte)((ulong)uVar19 >> 0x30) & (byte)((ulong)uVar23 >> 0x30),
                             CONCAT15((byte)((ulong)uVar19 >> 0x28) & (byte)((ulong)uVar23 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar19 >> 0x20) &
                                               (byte)((ulong)uVar23 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar19 >> 0x18) &
                                                        (byte)((ulong)uVar23 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar19 >> 0x10) &
                                                                 (byte)((ulong)uVar23 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar19 >> 8)
                                                                          & (byte)((ulong)uVar23 >>
                                                                                  8),
                                                                          (byte)uVar19 &
                                                                          (byte)uVar23)))))));
      *(ulong *)(param_3 + 0x1b98) =
           CONCAT17((byte)((ulong)uVar18 >> 0x38) & (byte)((ulong)uVar22 >> 0x38),
                    CONCAT16((byte)((ulong)uVar18 >> 0x30) & (byte)((ulong)uVar22 >> 0x30),
                             CONCAT15((byte)((ulong)uVar18 >> 0x28) & (byte)((ulong)uVar22 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar18 >> 0x20) &
                                               (byte)((ulong)uVar22 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar18 >> 0x18) &
                                                        (byte)((ulong)uVar22 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar18 >> 0x10) &
                                                                 (byte)((ulong)uVar22 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar18 >> 8)
                                                                          & (byte)((ulong)uVar22 >>
                                                                                  8),
                                                                          (byte)uVar18 &
                                                                          (byte)uVar22)))))));
      *(ulong *)(param_3 + 0x1b90) =
           CONCAT17((byte)((ulong)uVar17 >> 0x38) & (byte)((ulong)uVar21 >> 0x38),
                    CONCAT16((byte)((ulong)uVar17 >> 0x30) & (byte)((ulong)uVar21 >> 0x30),
                             CONCAT15((byte)((ulong)uVar17 >> 0x28) & (byte)((ulong)uVar21 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar17 >> 0x20) &
                                               (byte)((ulong)uVar21 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar17 >> 0x18) &
                                                        (byte)((ulong)uVar21 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar17 >> 0x10) &
                                                                 (byte)((ulong)uVar21 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar17 >> 8)
                                                                          & (byte)((ulong)uVar21 >>
                                                                                  8),
                                                                          (byte)uVar17 &
                                                                          (byte)uVar21)))))));
    }
LAB_0013cc80:
    if ((param_9 >> 4 & 1) != 0) {
      if (uVar5 < param_3 + 0x1b90U && uVar6 < param_3 + 0x13d0U) {
        param_9 = param_9 & 0xffffffef;
        *(ulong *)(param_3 + 0x1b80) =
             *(ulong *)(param_3 + 0x1b80) & (*(ulong *)(param_3 + 0x13c0) ^ 0xffffffffffffffff);
        *(ulong *)(param_3 + 0x1b88) =
             *(ulong *)(param_3 + 0x1b88) & (*(ulong *)(param_3 + 0x13c8) ^ 0xffffffffffffffff);
        *(ulong *)(param_3 + 0x1b90) =
             *(ulong *)(param_3 + 0x1b90) & (*(ulong *)(param_3 + 0x13d0) ^ 0xffffffffffffffff);
        *(ulong *)(param_3 + 0x1b98) =
             *(ulong *)(param_3 + 0x1b98) & (*(ulong *)(param_3 + 0x13d8) ^ 0xffffffffffffffff);
      }
      else {
        uVar20 = *(undefined8 *)(param_3 + 0x13c8);
        uVar19 = *(undefined8 *)(param_3 + 0x13c0);
        param_9 = param_9 & 0xffffffef;
        uVar18 = *(undefined8 *)(param_3 + 0x13d8);
        uVar17 = *(undefined8 *)(param_3 + 0x13d0);
        uVar24 = *(undefined8 *)(param_3 + 0x1b88);
        uVar23 = *(undefined8 *)(param_3 + 0x1b80);
        uVar22 = *(undefined8 *)(param_3 + 0x1b98);
        uVar21 = *(undefined8 *)(param_3 + 0x1b90);
        *(ulong *)(param_3 + 0x1b88) =
             CONCAT17((byte)((ulong)uVar24 >> 0x38) & ~(byte)((ulong)uVar20 >> 0x38),
                      CONCAT16((byte)((ulong)uVar24 >> 0x30) & ~(byte)((ulong)uVar20 >> 0x30),
                               CONCAT15((byte)((ulong)uVar24 >> 0x28) &
                                        ~(byte)((ulong)uVar20 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar24 >> 0x20) &
                                                 ~(byte)((ulong)uVar20 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar24 >> 0x18) &
                                                          ~(byte)((ulong)uVar20 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar24 >> 0x10) &
                                                                   ~(byte)((ulong)uVar20 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar24 >>
                                                                                  8) &
                                                                            ~(byte)((ulong)uVar20 >>
                                                                                   8),
                                                                            (byte)uVar24 &
                                                                            ~(byte)uVar20)))))));
        *(ulong *)(param_3 + 0x1b80) =
             CONCAT17((byte)((ulong)uVar23 >> 0x38) & ~(byte)((ulong)uVar19 >> 0x38),
                      CONCAT16((byte)((ulong)uVar23 >> 0x30) & ~(byte)((ulong)uVar19 >> 0x30),
                               CONCAT15((byte)((ulong)uVar23 >> 0x28) &
                                        ~(byte)((ulong)uVar19 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar23 >> 0x20) &
                                                 ~(byte)((ulong)uVar19 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar23 >> 0x18) &
                                                          ~(byte)((ulong)uVar19 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar23 >> 0x10) &
                                                                   ~(byte)((ulong)uVar19 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar23 >>
                                                                                  8) &
                                                                            ~(byte)((ulong)uVar19 >>
                                                                                   8),
                                                                            (byte)uVar23 &
                                                                            ~(byte)uVar19)))))));
        *(ulong *)(param_3 + 0x1b98) =
             CONCAT17((byte)((ulong)uVar22 >> 0x38) & ~(byte)((ulong)uVar18 >> 0x38),
                      CONCAT16((byte)((ulong)uVar22 >> 0x30) & ~(byte)((ulong)uVar18 >> 0x30),
                               CONCAT15((byte)((ulong)uVar22 >> 0x28) &
                                        ~(byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar22 >> 0x20) &
                                                 ~(byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar22 >> 0x18) &
                                                          ~(byte)((ulong)uVar18 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar22 >> 0x10) &
                                                                   ~(byte)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar22 >>
                                                                                  8) &
                                                                            ~(byte)((ulong)uVar18 >>
                                                                                   8),
                                                                            (byte)uVar22 &
                                                                            ~(byte)uVar18)))))));
        *(ulong *)(param_3 + 0x1b90) =
             CONCAT17((byte)((ulong)uVar21 >> 0x38) & ~(byte)((ulong)uVar17 >> 0x38),
                      CONCAT16((byte)((ulong)uVar21 >> 0x30) & ~(byte)((ulong)uVar17 >> 0x30),
                               CONCAT15((byte)((ulong)uVar21 >> 0x28) &
                                        ~(byte)((ulong)uVar17 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar21 >> 0x20) &
                                                 ~(byte)((ulong)uVar17 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar21 >> 0x18) &
                                                          ~(byte)((ulong)uVar17 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar21 >> 0x10) &
                                                                   ~(byte)((ulong)uVar17 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar21 >>
                                                                                  8) &
                                                                            ~(byte)((ulong)uVar17 >>
                                                                                   8),
                                                                            (byte)uVar21 &
                                                                            ~(byte)uVar17)))))));
      }
    }
    uVar10 = uVar6;
    if ((param_9 >> 5 & 1) == 0) {
      local_3c = param_9 & 8;
      uVar16 = param_9;
    }
    else {
      if (param_3 + 0x1440U < param_3 + 0x1b90U && uVar6 < param_3 + 0x1450U) {
        *(ulong *)(param_3 + 0x1b80) =
             *(ulong *)(param_3 + 0x1b80) & (*(ulong *)(param_3 + 0x1440) ^ 0xffffffffffffffff);
        *(ulong *)(param_3 + 0x1b88) =
             *(ulong *)(param_3 + 0x1b88) & (*(ulong *)(param_3 + 0x1448) ^ 0xffffffffffffffff);
        *(ulong *)(param_3 + 0x1b90) =
             *(ulong *)(param_3 + 0x1b90) & (*(ulong *)(param_3 + 0x1450) ^ 0xffffffffffffffff);
        *(ulong *)(param_3 + 0x1b98) =
             *(ulong *)(param_3 + 0x1b98) & (*(ulong *)(param_3 + 0x1458) ^ 0xffffffffffffffff);
      }
      else {
        uVar20 = *(undefined8 *)(param_3 + 0x1448);
        uVar19 = *(undefined8 *)(param_3 + 0x1440);
        uVar18 = *(undefined8 *)(param_3 + 0x1458);
        uVar17 = *(undefined8 *)(param_3 + 0x1450);
        uVar24 = *(undefined8 *)(param_3 + 0x1b88);
        uVar23 = *(undefined8 *)(param_3 + 0x1b80);
        uVar22 = *(undefined8 *)(param_3 + 0x1b98);
        uVar21 = *(undefined8 *)(param_3 + 0x1b90);
        *(ulong *)(param_3 + 0x1b88) =
             CONCAT17((byte)((ulong)uVar24 >> 0x38) & ~(byte)((ulong)uVar20 >> 0x38),
                      CONCAT16((byte)((ulong)uVar24 >> 0x30) & ~(byte)((ulong)uVar20 >> 0x30),
                               CONCAT15((byte)((ulong)uVar24 >> 0x28) &
                                        ~(byte)((ulong)uVar20 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar24 >> 0x20) &
                                                 ~(byte)((ulong)uVar20 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar24 >> 0x18) &
                                                          ~(byte)((ulong)uVar20 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar24 >> 0x10) &
                                                                   ~(byte)((ulong)uVar20 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar24 >>
                                                                                  8) &
                                                                            ~(byte)((ulong)uVar20 >>
                                                                                   8),
                                                                            (byte)uVar24 &
                                                                            ~(byte)uVar20)))))));
        *(ulong *)(param_3 + 0x1b80) =
             CONCAT17((byte)((ulong)uVar23 >> 0x38) & ~(byte)((ulong)uVar19 >> 0x38),
                      CONCAT16((byte)((ulong)uVar23 >> 0x30) & ~(byte)((ulong)uVar19 >> 0x30),
                               CONCAT15((byte)((ulong)uVar23 >> 0x28) &
                                        ~(byte)((ulong)uVar19 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar23 >> 0x20) &
                                                 ~(byte)((ulong)uVar19 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar23 >> 0x18) &
                                                          ~(byte)((ulong)uVar19 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar23 >> 0x10) &
                                                                   ~(byte)((ulong)uVar19 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar23 >>
                                                                                  8) &
                                                                            ~(byte)((ulong)uVar19 >>
                                                                                   8),
                                                                            (byte)uVar23 &
                                                                            ~(byte)uVar19)))))));
        *(ulong *)(param_3 + 0x1b98) =
             CONCAT17((byte)((ulong)uVar22 >> 0x38) & ~(byte)((ulong)uVar18 >> 0x38),
                      CONCAT16((byte)((ulong)uVar22 >> 0x30) & ~(byte)((ulong)uVar18 >> 0x30),
                               CONCAT15((byte)((ulong)uVar22 >> 0x28) &
                                        ~(byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar22 >> 0x20) &
                                                 ~(byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar22 >> 0x18) &
                                                          ~(byte)((ulong)uVar18 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar22 >> 0x10) &
                                                                   ~(byte)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar22 >>
                                                                                  8) &
                                                                            ~(byte)((ulong)uVar18 >>
                                                                                   8),
                                                                            (byte)uVar22 &
                                                                            ~(byte)uVar18)))))));
        *(ulong *)(param_3 + 0x1b90) =
             CONCAT17((byte)((ulong)uVar21 >> 0x38) & ~(byte)((ulong)uVar17 >> 0x38),
                      CONCAT16((byte)((ulong)uVar21 >> 0x30) & ~(byte)((ulong)uVar17 >> 0x30),
                               CONCAT15((byte)((ulong)uVar21 >> 0x28) &
                                        ~(byte)((ulong)uVar17 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar21 >> 0x20) &
                                                 ~(byte)((ulong)uVar17 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar21 >> 0x18) &
                                                          ~(byte)((ulong)uVar17 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar21 >> 0x10) &
                                                                   ~(byte)((ulong)uVar17 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar21 >>
                                                                                  8) &
                                                                            ~(byte)((ulong)uVar17 >>
                                                                                   8),
                                                                            (byte)uVar21 &
                                                                            ~(byte)uVar17)))))));
      }
      uVar16 = param_9 & 0xffffffdf;
      local_3c = param_9 & 8;
    }
  }
  else {
    if (uVar15 == 5) {
      bVar2 = param_3 + 0x1440U < param_3 + 0x1b90U;
      bVar8 = uVar6 < param_3 + 0x1450U;
      uVar10 = (param_3 + 0x1b6f) - uVar6;
      uVar11 = (param_3 + 0x1b4f) - uVar6;
      bVar1 = (param_3 + 0xecf) - uVar6 < 0x1f;
      if (((bVar2 && bVar8 || uVar10 < 0x1e) || (!bVar2 || !bVar8) && uVar10 == 0x1e) ||
          ((bVar1 || uVar11 < 0x1e) || !bVar1 && uVar11 == 0x1e)) {
        *(uint *)(param_3 + 0x1b80) =
             (*(uint *)(param_3 + 0xec0) & *(uint *)(param_3 + 0x1440) | *(uint *)(param_3 + 0x1b40)
             ) & *(uint *)(param_3 + 0x1b60);
        *(uint *)(param_3 + 0x1b84) =
             (*(uint *)(param_3 + 0xec4) & *(uint *)(param_3 + 0x1444) | *(uint *)(param_3 + 0x1b44)
             ) & *(uint *)(param_3 + 0x1b64);
        *(uint *)(param_3 + 0x1b88) =
             (*(uint *)(param_3 + 0xec8) & *(uint *)(param_3 + 0x1448) | *(uint *)(param_3 + 0x1b48)
             ) & *(uint *)(param_3 + 0x1b68);
        *(uint *)(param_3 + 0x1b8c) =
             (*(uint *)(param_3 + 0xecc) & *(uint *)(param_3 + 0x144c) | *(uint *)(param_3 + 0x1b4c)
             ) & *(uint *)(param_3 + 0x1b6c);
        *(uint *)(param_3 + 0x1b90) =
             (*(uint *)(param_3 + 0xed0) & *(uint *)(param_3 + 0x1450) | *(uint *)(param_3 + 0x1b50)
             ) & *(uint *)(param_3 + 0x1b70);
        *(uint *)(param_3 + 0x1b94) =
             (*(uint *)(param_3 + 0xed4) & *(uint *)(param_3 + 0x1454) | *(uint *)(param_3 + 0x1b54)
             ) & *(uint *)(param_3 + 0x1b74);
        *(uint *)(param_3 + 0x1b98) =
             (*(uint *)(param_3 + 0xed8) & *(uint *)(param_3 + 0x1458) | *(uint *)(param_3 + 7000))
             & *(uint *)(param_3 + 0x1b78);
        *(uint *)(param_3 + 0x1b9c) =
             (*(uint *)(param_3 + 0xedc) & *(uint *)(param_3 + 0x145c) | *(uint *)(param_3 + 0x1b5c)
             ) & *(uint *)(param_3 + 0x1b7c);
        param_9 = param_9 & 0xfffffffe;
      }
      else {
        uVar20 = *(undefined8 *)(param_3 + 0xec8);
        uVar19 = *(undefined8 *)(param_3 + 0xec0);
        param_9 = param_9 & 0xfffffffe;
        uVar18 = *(undefined8 *)(param_3 + 0xed8);
        uVar17 = *(undefined8 *)(param_3 + 0xed0);
        uVar30 = *(undefined8 *)(param_3 + 0x1448);
        uVar28 = *(undefined8 *)(param_3 + 0x1440);
        uVar24 = *(undefined8 *)(param_3 + 0x1458);
        uVar21 = *(undefined8 *)(param_3 + 0x1450);
        uVar31 = *(undefined8 *)(param_3 + 0x1b48);
        uVar29 = *(undefined8 *)(param_3 + 0x1b40);
        uVar25 = *(undefined8 *)(param_3 + 7000);
        uVar22 = *(undefined8 *)(param_3 + 0x1b50);
        uVar32 = *(undefined8 *)(param_3 + 0x1b68);
        uVar27 = *(undefined8 *)(param_3 + 0x1b60);
        uVar26 = *(undefined8 *)(param_3 + 0x1b78);
        uVar23 = *(undefined8 *)(param_3 + 0x1b70);
        *(ulong *)(param_3 + 0x1b88) =
             CONCAT17(((byte)((ulong)uVar20 >> 0x38) & (byte)((ulong)uVar30 >> 0x38) |
                      (byte)((ulong)uVar31 >> 0x38)) & (byte)((ulong)uVar32 >> 0x38),
                      CONCAT16(((byte)((ulong)uVar20 >> 0x30) & (byte)((ulong)uVar30 >> 0x30) |
                               (byte)((ulong)uVar31 >> 0x30)) & (byte)((ulong)uVar32 >> 0x30),
                               CONCAT15(((byte)((ulong)uVar20 >> 0x28) &
                                         (byte)((ulong)uVar30 >> 0x28) |
                                        (byte)((ulong)uVar31 >> 0x28)) &
                                        (byte)((ulong)uVar32 >> 0x28),
                                        CONCAT14(((byte)((ulong)uVar20 >> 0x20) &
                                                  (byte)((ulong)uVar30 >> 0x20) |
                                                 (byte)((ulong)uVar31 >> 0x20)) &
                                                 (byte)((ulong)uVar32 >> 0x20),
                                                 CONCAT13(((byte)((ulong)uVar20 >> 0x18) &
                                                           (byte)((ulong)uVar30 >> 0x18) |
                                                          (byte)((ulong)uVar31 >> 0x18)) &
                                                          (byte)((ulong)uVar32 >> 0x18),
                                                          CONCAT12(((byte)((ulong)uVar20 >> 0x10) &
                                                                    (byte)((ulong)uVar30 >> 0x10) |
                                                                   (byte)((ulong)uVar31 >> 0x10)) &
                                                                   (byte)((ulong)uVar32 >> 0x10),
                                                                   CONCAT11(((byte)((ulong)uVar20 >>
                                                                                   8) &
                                                                             (byte)((ulong)uVar30 >>
                                                                                   8) |
                                                                            (byte)((ulong)uVar31 >>
                                                                                  8)) &
                                                                            (byte)((ulong)uVar32 >>
                                                                                  8),((byte)uVar20 &
                                                                                      (byte)uVar30 |
                                                                                     (byte)uVar31) &
                                                                                     (byte)uVar32)))
                                                ))));
        *(ulong *)(param_3 + 0x1b80) =
             CONCAT17(((byte)((ulong)uVar19 >> 0x38) & (byte)((ulong)uVar28 >> 0x38) |
                      (byte)((ulong)uVar29 >> 0x38)) & (byte)((ulong)uVar27 >> 0x38),
                      CONCAT16(((byte)((ulong)uVar19 >> 0x30) & (byte)((ulong)uVar28 >> 0x30) |
                               (byte)((ulong)uVar29 >> 0x30)) & (byte)((ulong)uVar27 >> 0x30),
                               CONCAT15(((byte)((ulong)uVar19 >> 0x28) &
                                         (byte)((ulong)uVar28 >> 0x28) |
                                        (byte)((ulong)uVar29 >> 0x28)) &
                                        (byte)((ulong)uVar27 >> 0x28),
                                        CONCAT14(((byte)((ulong)uVar19 >> 0x20) &
                                                  (byte)((ulong)uVar28 >> 0x20) |
                                                 (byte)((ulong)uVar29 >> 0x20)) &
                                                 (byte)((ulong)uVar27 >> 0x20),
                                                 CONCAT13(((byte)((ulong)uVar19 >> 0x18) &
                                                           (byte)((ulong)uVar28 >> 0x18) |
                                                          (byte)((ulong)uVar29 >> 0x18)) &
                                                          (byte)((ulong)uVar27 >> 0x18),
                                                          CONCAT12(((byte)((ulong)uVar19 >> 0x10) &
                                                                    (byte)((ulong)uVar28 >> 0x10) |
                                                                   (byte)((ulong)uVar29 >> 0x10)) &
                                                                   (byte)((ulong)uVar27 >> 0x10),
                                                                   CONCAT11(((byte)((ulong)uVar19 >>
                                                                                   8) &
                                                                             (byte)((ulong)uVar28 >>
                                                                                   8) |
                                                                            (byte)((ulong)uVar29 >>
                                                                                  8)) &
                                                                            (byte)((ulong)uVar27 >>
                                                                                  8),((byte)uVar19 &
                                                                                      (byte)uVar28 |
                                                                                     (byte)uVar29) &
                                                                                     (byte)uVar27)))
                                                ))));
        *(ulong *)(param_3 + 0x1b98) =
             CONCAT17(((byte)((ulong)uVar18 >> 0x38) & (byte)((ulong)uVar24 >> 0x38) |
                      (byte)((ulong)uVar25 >> 0x38)) & (byte)((ulong)uVar26 >> 0x38),
                      CONCAT16(((byte)((ulong)uVar18 >> 0x30) & (byte)((ulong)uVar24 >> 0x30) |
                               (byte)((ulong)uVar25 >> 0x30)) & (byte)((ulong)uVar26 >> 0x30),
                               CONCAT15(((byte)((ulong)uVar18 >> 0x28) &
                                         (byte)((ulong)uVar24 >> 0x28) |
                                        (byte)((ulong)uVar25 >> 0x28)) &
                                        (byte)((ulong)uVar26 >> 0x28),
                                        CONCAT14(((byte)((ulong)uVar18 >> 0x20) &
                                                  (byte)((ulong)uVar24 >> 0x20) |
                                                 (byte)((ulong)uVar25 >> 0x20)) &
                                                 (byte)((ulong)uVar26 >> 0x20),
                                                 CONCAT13(((byte)((ulong)uVar18 >> 0x18) &
                                                           (byte)((ulong)uVar24 >> 0x18) |
                                                          (byte)((ulong)uVar25 >> 0x18)) &
                                                          (byte)((ulong)uVar26 >> 0x18),
                                                          CONCAT12(((byte)((ulong)uVar18 >> 0x10) &
                                                                    (byte)((ulong)uVar24 >> 0x10) |
                                                                   (byte)((ulong)uVar25 >> 0x10)) &
                                                                   (byte)((ulong)uVar26 >> 0x10),
                                                                   CONCAT11(((byte)((ulong)uVar18 >>
                                                                                   8) &
                                                                             (byte)((ulong)uVar24 >>
                                                                                   8) |
                                                                            (byte)((ulong)uVar25 >>
                                                                                  8)) &
                                                                            (byte)((ulong)uVar26 >>
                                                                                  8),((byte)uVar18 &
                                                                                      (byte)uVar24 |
                                                                                     (byte)uVar25) &
                                                                                     (byte)uVar26)))
                                                ))));
        *(ulong *)(param_3 + 0x1b90) =
             CONCAT17(((byte)((ulong)uVar17 >> 0x38) & (byte)((ulong)uVar21 >> 0x38) |
                      (byte)((ulong)uVar22 >> 0x38)) & (byte)((ulong)uVar23 >> 0x38),
                      CONCAT16(((byte)((ulong)uVar17 >> 0x30) & (byte)((ulong)uVar21 >> 0x30) |
                               (byte)((ulong)uVar22 >> 0x30)) & (byte)((ulong)uVar23 >> 0x30),
                               CONCAT15(((byte)((ulong)uVar17 >> 0x28) &
                                         (byte)((ulong)uVar21 >> 0x28) |
                                        (byte)((ulong)uVar22 >> 0x28)) &
                                        (byte)((ulong)uVar23 >> 0x28),
                                        CONCAT14(((byte)((ulong)uVar17 >> 0x20) &
                                                  (byte)((ulong)uVar21 >> 0x20) |
                                                 (byte)((ulong)uVar22 >> 0x20)) &
                                                 (byte)((ulong)uVar23 >> 0x20),
                                                 CONCAT13(((byte)((ulong)uVar17 >> 0x18) &
                                                           (byte)((ulong)uVar21 >> 0x18) |
                                                          (byte)((ulong)uVar22 >> 0x18)) &
                                                          (byte)((ulong)uVar23 >> 0x18),
                                                          CONCAT12(((byte)((ulong)uVar17 >> 0x10) &
                                                                    (byte)((ulong)uVar21 >> 0x10) |
                                                                   (byte)((ulong)uVar22 >> 0x10)) &
                                                                   (byte)((ulong)uVar23 >> 0x10),
                                                                   CONCAT11(((byte)((ulong)uVar17 >>
                                                                                   8) &
                                                                             (byte)((ulong)uVar21 >>
                                                                                   8) |
                                                                            (byte)((ulong)uVar22 >>
                                                                                  8)) &
                                                                            (byte)((ulong)uVar23 >>
                                                                                  8),((byte)uVar17 &
                                                                                      (byte)uVar21 |
                                                                                     (byte)uVar22) &
                                                                                     (byte)uVar23)))
                                                ))));
      }
      goto LAB_0013cc80;
    }
    uVar10 = 0;
    uVar16 = param_9;
    if (uVar15 == 1) {
      uVar10 = (param_3 + 0x1b6f) - uVar6;
      bVar2 = (param_3 + 0xecf) - uVar6 < 0x1f;
      if (((bVar2 || uVar10 < 0x1e) || !bVar2 && uVar10 == 0x1e) ||
          param_3 + 0x1440U < param_3 + 0x1b90U && uVar6 < param_3 + 0x1450U) {
        *(uint *)(param_3 + 0x1b80) =
             *(uint *)(param_3 + 0x1b60) & *(uint *)(param_3 + 0xec0) & *(uint *)(param_3 + 0x1440);
        *(uint *)(param_3 + 0x1b84) =
             *(uint *)(param_3 + 0x1b64) & *(uint *)(param_3 + 0xec4) & *(uint *)(param_3 + 0x1444);
        *(uint *)(param_3 + 0x1b88) =
             *(uint *)(param_3 + 0x1b68) & *(uint *)(param_3 + 0xec8) & *(uint *)(param_3 + 0x1448);
        *(uint *)(param_3 + 0x1b8c) =
             *(uint *)(param_3 + 0x1b6c) & *(uint *)(param_3 + 0xecc) & *(uint *)(param_3 + 0x144c);
        *(uint *)(param_3 + 0x1b90) =
             *(uint *)(param_3 + 0x1b70) & *(uint *)(param_3 + 0xed0) & *(uint *)(param_3 + 0x1450);
        *(uint *)(param_3 + 0x1b94) =
             *(uint *)(param_3 + 0x1b74) & *(uint *)(param_3 + 0xed4) & *(uint *)(param_3 + 0x1454);
        *(uint *)(param_3 + 0x1b98) =
             *(uint *)(param_3 + 0x1b78) & *(uint *)(param_3 + 0xed8) & *(uint *)(param_3 + 0x1458);
        *(uint *)(param_3 + 0x1b9c) =
             *(uint *)(param_3 + 0x1b7c) & *(uint *)(param_3 + 0xedc) & *(uint *)(param_3 + 0x145c);
      }
      else {
        uVar28 = *(undefined8 *)(param_3 + 0xec8);
        uVar25 = *(undefined8 *)(param_3 + 0xec0);
        uVar23 = *(undefined8 *)(param_3 + 0xed8);
        uVar21 = *(undefined8 *)(param_3 + 0xed0);
        uVar20 = *(undefined8 *)(param_3 + 0x1b68);
        uVar19 = *(undefined8 *)(param_3 + 0x1b60);
        uVar18 = *(undefined8 *)(param_3 + 0x1b78);
        uVar17 = *(undefined8 *)(param_3 + 0x1b70);
        uVar29 = *(undefined8 *)(param_3 + 0x1448);
        uVar26 = *(undefined8 *)(param_3 + 0x1440);
        uVar24 = *(undefined8 *)(param_3 + 0x1458);
        uVar22 = *(undefined8 *)(param_3 + 0x1450);
        *(ulong *)(param_3 + 0x1b88) =
             CONCAT17((byte)((ulong)uVar20 >> 0x38) & (byte)((ulong)uVar28 >> 0x38) &
                      (byte)((ulong)uVar29 >> 0x38),
                      CONCAT16((byte)((ulong)uVar20 >> 0x30) & (byte)((ulong)uVar28 >> 0x30) &
                               (byte)((ulong)uVar29 >> 0x30),
                               CONCAT15((byte)((ulong)uVar20 >> 0x28) &
                                        (byte)((ulong)uVar28 >> 0x28) &
                                        (byte)((ulong)uVar29 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar20 >> 0x20) &
                                                 (byte)((ulong)uVar28 >> 0x20) &
                                                 (byte)((ulong)uVar29 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar20 >> 0x18) &
                                                          (byte)((ulong)uVar28 >> 0x18) &
                                                          (byte)((ulong)uVar29 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar20 >> 0x10) &
                                                                   (byte)((ulong)uVar28 >> 0x10) &
                                                                   (byte)((ulong)uVar29 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar20 >>
                                                                                  8) &
                                                                            (byte)((ulong)uVar28 >>
                                                                                  8) &
                                                                            (byte)((ulong)uVar29 >>
                                                                                  8),(byte)uVar20 &
                                                                                     (byte)uVar28 &
                                                                                     (byte)uVar29)))
                                                ))));
        *(ulong *)(param_3 + 0x1b80) =
             CONCAT17((byte)((ulong)uVar19 >> 0x38) & (byte)((ulong)uVar25 >> 0x38) &
                      (byte)((ulong)uVar26 >> 0x38),
                      CONCAT16((byte)((ulong)uVar19 >> 0x30) & (byte)((ulong)uVar25 >> 0x30) &
                               (byte)((ulong)uVar26 >> 0x30),
                               CONCAT15((byte)((ulong)uVar19 >> 0x28) &
                                        (byte)((ulong)uVar25 >> 0x28) &
                                        (byte)((ulong)uVar26 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar19 >> 0x20) &
                                                 (byte)((ulong)uVar25 >> 0x20) &
                                                 (byte)((ulong)uVar26 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar19 >> 0x18) &
                                                          (byte)((ulong)uVar25 >> 0x18) &
                                                          (byte)((ulong)uVar26 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar19 >> 0x10) &
                                                                   (byte)((ulong)uVar25 >> 0x10) &
                                                                   (byte)((ulong)uVar26 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar19 >>
                                                                                  8) &
                                                                            (byte)((ulong)uVar25 >>
                                                                                  8) &
                                                                            (byte)((ulong)uVar26 >>
                                                                                  8),(byte)uVar19 &
                                                                                     (byte)uVar25 &
                                                                                     (byte)uVar26)))
                                                ))));
        *(ulong *)(param_3 + 0x1b98) =
             CONCAT17((byte)((ulong)uVar18 >> 0x38) & (byte)((ulong)uVar23 >> 0x38) &
                      (byte)((ulong)uVar24 >> 0x38),
                      CONCAT16((byte)((ulong)uVar18 >> 0x30) & (byte)((ulong)uVar23 >> 0x30) &
                               (byte)((ulong)uVar24 >> 0x30),
                               CONCAT15((byte)((ulong)uVar18 >> 0x28) &
                                        (byte)((ulong)uVar23 >> 0x28) &
                                        (byte)((ulong)uVar24 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar18 >> 0x20) &
                                                 (byte)((ulong)uVar23 >> 0x20) &
                                                 (byte)((ulong)uVar24 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar18 >> 0x18) &
                                                          (byte)((ulong)uVar23 >> 0x18) &
                                                          (byte)((ulong)uVar24 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar18 >> 0x10) &
                                                                   (byte)((ulong)uVar23 >> 0x10) &
                                                                   (byte)((ulong)uVar24 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar18 >>
                                                                                  8) &
                                                                            (byte)((ulong)uVar23 >>
                                                                                  8) &
                                                                            (byte)((ulong)uVar24 >>
                                                                                  8),(byte)uVar18 &
                                                                                     (byte)uVar23 &
                                                                                     (byte)uVar24)))
                                                ))));
        *(ulong *)(param_3 + 0x1b90) =
             CONCAT17((byte)((ulong)uVar17 >> 0x38) & (byte)((ulong)uVar21 >> 0x38) &
                      (byte)((ulong)uVar22 >> 0x38),
                      CONCAT16((byte)((ulong)uVar17 >> 0x30) & (byte)((ulong)uVar21 >> 0x30) &
                               (byte)((ulong)uVar22 >> 0x30),
                               CONCAT15((byte)((ulong)uVar17 >> 0x28) &
                                        (byte)((ulong)uVar21 >> 0x28) &
                                        (byte)((ulong)uVar22 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar17 >> 0x20) &
                                                 (byte)((ulong)uVar21 >> 0x20) &
                                                 (byte)((ulong)uVar22 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar17 >> 0x18) &
                                                          (byte)((ulong)uVar21 >> 0x18) &
                                                          (byte)((ulong)uVar22 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar17 >> 0x10) &
                                                                   (byte)((ulong)uVar21 >> 0x10) &
                                                                   (byte)((ulong)uVar22 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar17 >>
                                                                                  8) &
                                                                            (byte)((ulong)uVar21 >>
                                                                                  8) &
                                                                            (byte)((ulong)uVar22 >>
                                                                                  8),(byte)uVar17 &
                                                                                     (byte)uVar21 &
                                                                                     (byte)uVar22)))
                                                ))));
      }
      param_9 = param_9 & 0xfffffffe | 4;
      goto LAB_0013cc80;
    }
  }
  uVar15 = uVar16 & 4;
  if (local_3c == 0) {
    if (uVar15 != 0) {
      render_scanline_color_effects_setup_blend_base_asm
                (*(undefined2 *)(param_1 + 0xa4),lVar3,lVar4);
      uVar15 = 1;
    }
    if (((uVar16 >> 1 & 1) == 0) || (param_6 == 0)) goto LAB_0013c8d8;
LAB_0013c994:
    bVar2 = (param_3 + 0x1b6f) - uVar6 < 0x1f;
    uVar10 = (param_3 + 0xeef) - uVar6;
    if (uVar6 < param_3 + 0x1450U && param_3 + 0x1440U < param_3 + 0x1b90U ||
        ((bVar2 || uVar10 < 0x1e) || !bVar2 && uVar10 == 0x1e)) {
      *(uint *)(param_3 + 0x1b80) =
           *(uint *)(param_3 + 0xee0) & *(uint *)(param_3 + 0x1b60) & *(uint *)(param_3 + 0x1440);
      *(uint *)(param_3 + 0x1b84) =
           *(uint *)(param_3 + 0x1b64) & *(uint *)(param_3 + 0xee4) & *(uint *)(param_3 + 0x1444);
      *(uint *)(param_3 + 0x1b88) =
           *(uint *)(param_3 + 0x1b68) & *(uint *)(param_3 + 0xee8) & *(uint *)(param_3 + 0x1448);
      *(uint *)(param_3 + 0x1b8c) =
           *(uint *)(param_3 + 0xeec) & *(uint *)(param_3 + 0x1b6c) & *(uint *)(param_3 + 0x144c);
      *(uint *)(param_3 + 0x1b90) =
           *(uint *)(param_3 + 0x1b70) & *(uint *)(param_3 + 0xef0) & *(uint *)(param_3 + 0x1450);
      *(uint *)(param_3 + 0x1b94) =
           *(uint *)(param_3 + 0x1b74) & *(uint *)(param_3 + 0xef4) & *(uint *)(param_3 + 0x1454);
      *(uint *)(param_3 + 0x1b98) =
           *(uint *)(param_3 + 0x1b78) & *(uint *)(param_3 + 0xef8) & *(uint *)(param_3 + 0x1458);
      *(uint *)(param_3 + 0x1b9c) =
           *(uint *)(param_3 + 0x1b7c) & *(uint *)(param_3 + 0xefc) & *(uint *)(param_3 + 0x145c);
    }
    else {
      uVar28 = *(undefined8 *)(param_3 + 0xee8);
      uVar25 = *(undefined8 *)(param_3 + 0xee0);
      uVar18 = *(undefined8 *)(param_3 + 0xef8);
      uVar17 = *(undefined8 *)(param_3 + 0xef0);
      uVar20 = *(undefined8 *)(param_3 + 0x1448);
      uVar19 = *(undefined8 *)(param_3 + 0x1440);
      uVar23 = *(undefined8 *)(param_3 + 0x1458);
      uVar21 = *(undefined8 *)(param_3 + 0x1450);
      uVar29 = *(undefined8 *)(param_3 + 0x1b68);
      uVar26 = *(undefined8 *)(param_3 + 0x1b60);
      uVar24 = *(undefined8 *)(param_3 + 0x1b78);
      uVar22 = *(undefined8 *)(param_3 + 0x1b70);
      *(ulong *)(param_3 + 0x1b88) =
           CONCAT17((byte)((ulong)uVar20 >> 0x38) & (byte)((ulong)uVar28 >> 0x38) &
                    (byte)((ulong)uVar29 >> 0x38),
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) & (byte)((ulong)uVar28 >> 0x30) &
                             (byte)((ulong)uVar29 >> 0x30),
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) & (byte)((ulong)uVar28 >> 0x28)
                                      & (byte)((ulong)uVar29 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) &
                                               (byte)((ulong)uVar28 >> 0x20) &
                                               (byte)((ulong)uVar29 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar20 >> 0x18) &
                                                        (byte)((ulong)uVar28 >> 0x18) &
                                                        (byte)((ulong)uVar29 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar20 >> 0x10) &
                                                                 (byte)((ulong)uVar28 >> 0x10) &
                                                                 (byte)((ulong)uVar29 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar20 >> 8)
                                                                          & (byte)((ulong)uVar28 >>
                                                                                  8) &
                                                                          (byte)((ulong)uVar29 >> 8)
                                                                          ,(byte)uVar20 &
                                                                           (byte)uVar28 &
                                                                           (byte)uVar29)))))));
      *(ulong *)(param_3 + 0x1b80) =
           CONCAT17((byte)((ulong)uVar19 >> 0x38) & (byte)((ulong)uVar25 >> 0x38) &
                    (byte)((ulong)uVar26 >> 0x38),
                    CONCAT16((byte)((ulong)uVar19 >> 0x30) & (byte)((ulong)uVar25 >> 0x30) &
                             (byte)((ulong)uVar26 >> 0x30),
                             CONCAT15((byte)((ulong)uVar19 >> 0x28) & (byte)((ulong)uVar25 >> 0x28)
                                      & (byte)((ulong)uVar26 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar19 >> 0x20) &
                                               (byte)((ulong)uVar25 >> 0x20) &
                                               (byte)((ulong)uVar26 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar19 >> 0x18) &
                                                        (byte)((ulong)uVar25 >> 0x18) &
                                                        (byte)((ulong)uVar26 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar19 >> 0x10) &
                                                                 (byte)((ulong)uVar25 >> 0x10) &
                                                                 (byte)((ulong)uVar26 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar19 >> 8)
                                                                          & (byte)((ulong)uVar25 >>
                                                                                  8) &
                                                                          (byte)((ulong)uVar26 >> 8)
                                                                          ,(byte)uVar19 &
                                                                           (byte)uVar25 &
                                                                           (byte)uVar26)))))));
      *(ulong *)(param_3 + 0x1b98) =
           CONCAT17((byte)((ulong)uVar18 >> 0x38) & (byte)((ulong)uVar23 >> 0x38) &
                    (byte)((ulong)uVar24 >> 0x38),
                    CONCAT16((byte)((ulong)uVar18 >> 0x30) & (byte)((ulong)uVar23 >> 0x30) &
                             (byte)((ulong)uVar24 >> 0x30),
                             CONCAT15((byte)((ulong)uVar18 >> 0x28) & (byte)((ulong)uVar23 >> 0x28)
                                      & (byte)((ulong)uVar24 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar18 >> 0x20) &
                                               (byte)((ulong)uVar23 >> 0x20) &
                                               (byte)((ulong)uVar24 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar18 >> 0x18) &
                                                        (byte)((ulong)uVar23 >> 0x18) &
                                                        (byte)((ulong)uVar24 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar18 >> 0x10) &
                                                                 (byte)((ulong)uVar23 >> 0x10) &
                                                                 (byte)((ulong)uVar24 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar18 >> 8)
                                                                          & (byte)((ulong)uVar23 >>
                                                                                  8) &
                                                                          (byte)((ulong)uVar24 >> 8)
                                                                          ,(byte)uVar18 &
                                                                           (byte)uVar23 &
                                                                           (byte)uVar24)))))));
      *(ulong *)(param_3 + 0x1b90) =
           CONCAT17((byte)((ulong)uVar17 >> 0x38) & (byte)((ulong)uVar21 >> 0x38) &
                    (byte)((ulong)uVar22 >> 0x38),
                    CONCAT16((byte)((ulong)uVar17 >> 0x30) & (byte)((ulong)uVar21 >> 0x30) &
                             (byte)((ulong)uVar22 >> 0x30),
                             CONCAT15((byte)((ulong)uVar17 >> 0x28) & (byte)((ulong)uVar21 >> 0x28)
                                      & (byte)((ulong)uVar22 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar17 >> 0x20) &
                                               (byte)((ulong)uVar21 >> 0x20) &
                                               (byte)((ulong)uVar22 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar17 >> 0x18) &
                                                        (byte)((ulong)uVar21 >> 0x18) &
                                                        (byte)((ulong)uVar22 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar17 >> 0x10) &
                                                                 (byte)((ulong)uVar21 >> 0x10) &
                                                                 (byte)((ulong)uVar22 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar17 >> 8)
                                                                          & (byte)((ulong)uVar21 >>
                                                                                  8) &
                                                                          (byte)((ulong)uVar22 >> 8)
                                                                          ,(byte)uVar17 &
                                                                           (byte)uVar21 &
                                                                           (byte)uVar22)))))));
    }
    if ((param_8 >> 6 & 2) == 0 && param_5 != 0) {
      if (uVar6 < param_3 + 0x13d0U && uVar5 < param_3 + 0x1b90U || bVar2) {
        *(uint *)(param_3 + 0x1b80) =
             *(uint *)(param_3 + 0x1b80) | *(uint *)(param_3 + 0x13c0) & *(uint *)(param_3 + 0x1b60)
        ;
        *(uint *)(param_3 + 0x1b84) =
             *(uint *)(param_3 + 0x1b84) | *(uint *)(param_3 + 0x13c4) & *(uint *)(param_3 + 0x1b64)
        ;
        *(uint *)(param_3 + 0x1b88) =
             *(uint *)(param_3 + 0x1b88) | *(uint *)(param_3 + 0x13c8) & *(uint *)(param_3 + 0x1b68)
        ;
        *(uint *)(param_3 + 0x1b8c) =
             *(uint *)(param_3 + 0x1b8c) | *(uint *)(param_3 + 0x1b6c) & *(uint *)(param_3 + 0x13cc)
        ;
        *(uint *)(param_3 + 0x1b90) =
             *(uint *)(param_3 + 0x1b90) | *(uint *)(param_3 + 0x13d0) & *(uint *)(param_3 + 0x1b70)
        ;
        *(uint *)(param_3 + 0x1b94) =
             *(uint *)(param_3 + 0x1b94) | *(uint *)(param_3 + 0x13d4) & *(uint *)(param_3 + 0x1b74)
        ;
        *(uint *)(param_3 + 0x1b98) =
             *(uint *)(param_3 + 0x1b98) | *(uint *)(param_3 + 0x13d8) & *(uint *)(param_3 + 0x1b78)
        ;
        *(uint *)(param_3 + 0x1b9c) =
             *(uint *)(param_3 + 0x1b9c) | *(uint *)(param_3 + 0x1b7c) & *(uint *)(param_3 + 0x13dc)
        ;
      }
      else {
        uVar20 = *(undefined8 *)(param_3 + 0x13c8);
        uVar19 = *(undefined8 *)(param_3 + 0x13c0);
        uVar18 = *(undefined8 *)(param_3 + 0x13d8);
        uVar17 = *(undefined8 *)(param_3 + 0x13d0);
        uVar28 = *(undefined8 *)(param_3 + 0x1b68);
        uVar25 = *(undefined8 *)(param_3 + 0x1b60);
        uVar23 = *(undefined8 *)(param_3 + 0x1b78);
        uVar21 = *(undefined8 *)(param_3 + 0x1b70);
        uVar29 = *(undefined8 *)(param_3 + 0x1b88);
        uVar26 = *(undefined8 *)(param_3 + 0x1b80);
        uVar24 = *(undefined8 *)(param_3 + 0x1b98);
        uVar22 = *(undefined8 *)(param_3 + 0x1b90);
        *(ulong *)(param_3 + 0x1b88) =
             CONCAT17((byte)((ulong)uVar20 >> 0x38) & (byte)((ulong)uVar28 >> 0x38) |
                      (byte)((ulong)uVar29 >> 0x38),
                      CONCAT16((byte)((ulong)uVar20 >> 0x30) & (byte)((ulong)uVar28 >> 0x30) |
                               (byte)((ulong)uVar29 >> 0x30),
                               CONCAT15((byte)((ulong)uVar20 >> 0x28) &
                                        (byte)((ulong)uVar28 >> 0x28) |
                                        (byte)((ulong)uVar29 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar20 >> 0x20) &
                                                 (byte)((ulong)uVar28 >> 0x20) |
                                                 (byte)((ulong)uVar29 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar20 >> 0x18) &
                                                          (byte)((ulong)uVar28 >> 0x18) |
                                                          (byte)((ulong)uVar29 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar20 >> 0x10) &
                                                                   (byte)((ulong)uVar28 >> 0x10) |
                                                                   (byte)((ulong)uVar29 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar20 >>
                                                                                  8) &
                                                                            (byte)((ulong)uVar28 >>
                                                                                  8) |
                                                                            (byte)((ulong)uVar29 >>
                                                                                  8),(byte)uVar20 &
                                                                                     (byte)uVar28 |
                                                                                     (byte)uVar29)))
                                                ))));
        *(ulong *)(param_3 + 0x1b80) =
             CONCAT17((byte)((ulong)uVar19 >> 0x38) & (byte)((ulong)uVar25 >> 0x38) |
                      (byte)((ulong)uVar26 >> 0x38),
                      CONCAT16((byte)((ulong)uVar19 >> 0x30) & (byte)((ulong)uVar25 >> 0x30) |
                               (byte)((ulong)uVar26 >> 0x30),
                               CONCAT15((byte)((ulong)uVar19 >> 0x28) &
                                        (byte)((ulong)uVar25 >> 0x28) |
                                        (byte)((ulong)uVar26 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar19 >> 0x20) &
                                                 (byte)((ulong)uVar25 >> 0x20) |
                                                 (byte)((ulong)uVar26 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar19 >> 0x18) &
                                                          (byte)((ulong)uVar25 >> 0x18) |
                                                          (byte)((ulong)uVar26 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar19 >> 0x10) &
                                                                   (byte)((ulong)uVar25 >> 0x10) |
                                                                   (byte)((ulong)uVar26 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar19 >>
                                                                                  8) &
                                                                            (byte)((ulong)uVar25 >>
                                                                                  8) |
                                                                            (byte)((ulong)uVar26 >>
                                                                                  8),(byte)uVar19 &
                                                                                     (byte)uVar25 |
                                                                                     (byte)uVar26)))
                                                ))));
        *(ulong *)(param_3 + 0x1b98) =
             CONCAT17((byte)((ulong)uVar18 >> 0x38) & (byte)((ulong)uVar23 >> 0x38) |
                      (byte)((ulong)uVar24 >> 0x38),
                      CONCAT16((byte)((ulong)uVar18 >> 0x30) & (byte)((ulong)uVar23 >> 0x30) |
                               (byte)((ulong)uVar24 >> 0x30),
                               CONCAT15((byte)((ulong)uVar18 >> 0x28) &
                                        (byte)((ulong)uVar23 >> 0x28) |
                                        (byte)((ulong)uVar24 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar18 >> 0x20) &
                                                 (byte)((ulong)uVar23 >> 0x20) |
                                                 (byte)((ulong)uVar24 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar18 >> 0x18) &
                                                          (byte)((ulong)uVar23 >> 0x18) |
                                                          (byte)((ulong)uVar24 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar18 >> 0x10) &
                                                                   (byte)((ulong)uVar23 >> 0x10) |
                                                                   (byte)((ulong)uVar24 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar18 >>
                                                                                  8) &
                                                                            (byte)((ulong)uVar23 >>
                                                                                  8) |
                                                                            (byte)((ulong)uVar24 >>
                                                                                  8),(byte)uVar18 &
                                                                                     (byte)uVar23 |
                                                                                     (byte)uVar24)))
                                                ))));
        *(ulong *)(param_3 + 0x1b90) =
             CONCAT17((byte)((ulong)uVar17 >> 0x38) & (byte)((ulong)uVar21 >> 0x38) |
                      (byte)((ulong)uVar22 >> 0x38),
                      CONCAT16((byte)((ulong)uVar17 >> 0x30) & (byte)((ulong)uVar21 >> 0x30) |
                               (byte)((ulong)uVar22 >> 0x30),
                               CONCAT15((byte)((ulong)uVar17 >> 0x28) &
                                        (byte)((ulong)uVar21 >> 0x28) |
                                        (byte)((ulong)uVar22 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar17 >> 0x20) &
                                                 (byte)((ulong)uVar21 >> 0x20) |
                                                 (byte)((ulong)uVar22 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar17 >> 0x18) &
                                                          (byte)((ulong)uVar21 >> 0x18) |
                                                          (byte)((ulong)uVar22 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar17 >> 0x10) &
                                                                   (byte)((ulong)uVar21 >> 0x10) |
                                                                   (byte)((ulong)uVar22 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar17 >>
                                                                                  8) &
                                                                            (byte)((ulong)uVar21 >>
                                                                                  8) |
                                                                            (byte)((ulong)uVar22 >>
                                                                                  8),(byte)uVar17 &
                                                                                     (byte)uVar21 |
                                                                                     (byte)uVar22)))
                                                ))));
      }
    }
    if (uVar15 == 0) {
      render_scanline_color_effects_setup_alpha_base_asm(lVar3,lVar4,param_6,uVar6);
    }
    else {
      render_scanline_color_effects_setup_alpha_asm(lVar3,lVar4,param_6,uVar6);
    }
  }
  else {
    cVar7 = (char)*(ushort *)(param_1 + 0xa2) * '\x02';
    if (0x10 < *(ushort *)(param_1 + 0xa2)) {
      cVar7 = ' ';
    }
    if ((param_8 >> 6 & 1) == 0) {
      puVar14 = (uint *)(param_3 + 0x1b40);
      lVar13 = lVar4;
      do {
        uVar12 = *puVar14;
        lVar9 = 0;
        do {
          if ((uVar12 & 1) == 0) {
            *(undefined *)(lVar13 + -0x100 + lVar9) = 0x20;
            *(undefined *)(lVar13 + 0x100 + lVar9) = 0;
          }
          else {
            *(char *)(lVar13 + -0x100 + lVar9) = ' ' - cVar7;
            *(char *)(lVar13 + 0x100 + lVar9) = cVar7;
          }
          *(undefined *)(lVar13 + lVar9) = 0;
          lVar9 = lVar9 + 1;
          uVar12 = uVar12 >> 1;
        } while (lVar9 != 0x20);
        lVar13 = lVar13 + 0x20;
        puVar14 = puVar14 + 1;
      } while (lVar13 != param_3 + 0x12c0);
      local_3c = 1;
    }
    else {
      puVar14 = (uint *)(param_3 + 0x1b40);
      lVar13 = lVar3;
      do {
        uVar12 = *puVar14;
        lVar9 = 0;
        do {
          if ((uVar12 & 1) == 0) {
            *(undefined *)(lVar13 + lVar9) = 0x20;
          }
          else {
            *(char *)(lVar13 + lVar9) = ' ' - cVar7;
          }
          *(undefined *)(lVar13 + 0x100 + lVar9) = 0;
          lVar9 = lVar9 + 1;
          uVar12 = uVar12 >> 1;
        } while (lVar9 != 0x20);
        lVar13 = lVar13 + 0x20;
        puVar14 = puVar14 + 1;
      } while (lVar4 != lVar13);
      local_3c = 0;
    }
    if (uVar15 != 0) {
      render_scanline_color_effects_setup_blend_asm
                (*(undefined2 *)(param_1 + 0xa4),lVar3,lVar4,uVar10);
    }
    if (((uVar16 >> 1 & 1) != 0) && (param_6 != 0)) {
      uVar15 = 1;
      goto LAB_0013c994;
    }
  }
  if (local_3c != 0) {
    render_scanline_color_effects_apply_offset_c
              (param_2,param_3 + 0x1540,lVar3,lVar4,param_3 + 0x12c0);
    return;
  }
LAB_0013c8d8:
  render_scanline_color_effects_apply_asm(param_2,param_3 + 0x1540,lVar3,lVar4);
  return;
}


