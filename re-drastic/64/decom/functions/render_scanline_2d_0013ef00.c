/*
 * Ghidra decompilation
 *
 * Function : render_scanline_2d
 * Address  : 0013ef00
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint render_scanline_2d(undefined8 *param_1,long param_2,ulong param_3,long param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  ushort uVar8;
  ulong uVar9;
  ushort uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 extraout_x10;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  undefined *puVar32;
  uint5 uVar33;
  uint7 uVar34;
  byte bVar37;
  uint5 uVar35;
  uint7 uVar36;
  uint3 uVar38;
  uint3 uVar39;
  uint5 uVar40;
  ulong uVar41;
  ulong uVar42;
  uint3 uVar43;
  uint3 uVar44;
  uint3 uVar45;
  uint3 uVar46;
  uint3 uVar47;
  uint3 uVar48;
  uint3 uVar49;
  uint3 uVar50;
  uint3 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  undefined *local_1c70;
  int local_1c48;
  undefined8 uStack_1bf0;
  long local_1be8;
  long lStack_1be0;
  undefined *local_1bd8;
  uint *apuStack_1bd0 [4];
  undefined auStack_1bb0 [480];
  undefined auStack_19d0 [544];
  uint auStack_17b0 [136];
  undefined auStack_1590 [544];
  undefined auStack_1370 [544];
  undefined8 auStack_1150 [2];
  undefined auStack_1140 [544];
  undefined auStack_f20 [272];
  undefined8 auStack_e10 [8];
  undefined8 local_dd0 [8];
  undefined auStack_d90 [128];
  undefined auStack_d10 [32];
  undefined auStack_cf0 [32];
  undefined auStack_cd0 [32];
  undefined auStack_cb0 [160];
  undefined auStack_c10 [32];
  undefined auStack_bf0 [3048];
  long local_8;
  
  uVar13 = *(uint *)(param_1 + 0x12);
  uVar30 = param_3 & 0xffffffff;
  local_8 = ___stack_chk_guard;
  uStack_1bf0._4_4_ = uVar13 >> 8 & 0xf;
  puVar32 = auStack_f20;
  if (*(char *)((long)param_1 + 0xb6) != '\0') {
    video_2d_reorder_obj();
    *(undefined *)((long)param_1 + 0xb6) = 0;
  }
  uVar8 = *(ushort *)(param_1 + 0x14);
  uVar10 = uVar8 >> 6;
  uVar16 = (uint)*(byte *)((long)param_1 + uVar30 + 0x21340);
  lVar27 = param_1[0x48];
  lVar19 = param_1[0x5e];
  lVar25 = (ulong)*(ushort *)((long)param_1 + 0x15a) << 0x37;
  uVar9 = lVar25 >> 0x37;
  lVar14 = param_1[0x4280];
  local_1c70 = (undefined *)0x0;
  uVar31 = uVar13 & 8;
  uVar29 = (uint)param_3;
  local_1be8 = lVar27;
  lStack_1be0 = lVar19;
  if (((uVar13 >> 3 & 1) == 0) ||
     ((uVar31 = uVar13 & 0x100, (uVar13 >> 8 & 1) == 0 &&
      ((param_4 == 0 || (*(char *)(param_4 + 0x51) != '\x02')))))) {
    render_scanline_bg(param_1,auStack_19d0,auStack_e10,uVar30);
  }
  else {
    local_1c70 = (undefined *)render_scanline_3d(*param_1,uVar30);
    render_scanline_bg(param_1,auStack_19d0,auStack_e10,uVar30);
    uVar31 = (uint)(param_5 != 0);
  }
  if ((uVar13 >> 0xc & 1) != 0) {
    uVar13 = render_scanline_obj_c
                       (param_1,auStack_1140,auStack_f20,auStack_d90,auStack_cf0,auStack_cd0,uVar30)
    ;
    uStack_1bf0._4_4_ = uVar13 | uStack_1bf0._4_4_;
  }
  if (lVar14 != 0) {
    uVar31 = uVar31 | 0x10;
    uStack_1bf0._4_4_ = uStack_1bf0._4_4_ | 0x10;
  }
  uVar13 = uVar31 | 4;
  if (lVar27 == 0) {
    uVar13 = uVar31;
  }
  uVar31 = uVar13 | 8;
  if (lVar19 == 0) {
    uVar31 = uVar13;
  }
  render_scanline_generate_window_masks
            (param_1,auStack_cb0,auStack_c10,auStack_d10,uStack_1bf0._4_4_,uVar30);
  uVar13 = (uStack_1bf0._4_4_ | uStack_1bf0._4_4_ << 8 | 0xf0f0) & (uint)uVar8;
  if ((uVar10 & 3) == 1) {
    if ((uVar13 & 0x3f) == 0) goto LAB_0013f0c0;
    if ((uVar13 & 0x3f00) == 0) {
      if (((uVar10 & 2) != 0) && (*(short *)((long)param_1 + 0xa2) != 0)) goto LAB_0013f0b4;
      goto LAB_0013f8c8;
    }
    uVar16 = uVar16 | 4;
    if (((uVar10 & 2) != 0) && (*(short *)((long)param_1 + 0xa2) != 0)) {
LAB_0013f0b4:
      uVar16 = uVar16 | 8;
      goto LAB_0013f0c0;
    }
  }
  else {
    if ((((uVar10 & 2) != 0) && ((uVar13 & 0x3f) != 0)) && (*(short *)((long)param_1 + 0xa2) != 0))
    goto LAB_0013f0b4;
LAB_0013f0c0:
    if ((uVar13 & 0x3f00) == 0) {
LAB_0013f8c8:
      uVar16 = uVar16 & 0xfffffffe;
    }
  }
  apuStack_1bd0[1] = (uint *)auStack_1590;
  apuStack_1bd0[0] = auStack_17b0;
  apuStack_1bd0[3] = (uint *)auStack_1150;
  apuStack_1bd0[2] = (uint *)auStack_1370;
  uVar31 = uStack_1bf0._4_4_ & uVar31;
  lVar19 = (param_3 & 0xffffff) * 0x200;
  local_1c48 = (int)(lVar25 >> 0x37);
  local_1bd8 = auStack_19d0;
  if (uVar31 == 0 || (param_5 != 0) == 0) {
    if (local_1c70 != (undefined *)0x0) {
      if (local_1c48 != 0) {
        render_scanline_horizontal_shift_3d(auStack_1bb0,local_1c70,uVar9 & 0xffffffff);
        local_1c70 = auStack_1bb0;
      }
      uVar12 = render_scanline_set_3d_visibility(auStack_e10,local_1c70);
      uVar16 = uVar16 | uVar12;
    }
    lVar27 = (param_3 & 0xffffff) * 0x200;
    lVar25 = lVar27 + 0x200;
    if (lVar14 != 0) {
      apuStack_1bd0[3] = (uint *)(lVar14 + lVar27);
      lVar27 = (ulong)*(byte *)(param_1 + 0x4282) + 4;
      if (auStack_e10 + lVar27 * 4 < (undefined8 *)(lVar14 + lVar25) &&
          apuStack_1bd0[3] < auStack_e10 + lVar27 * 4 + 4) {
        pbVar18 = auStack_1bb0 + lVar27 * 0x20 + 0xda0;
        puVar22 = (undefined8 *)apuStack_1bd0[3];
        do {
          uVar12 = *(uint *)puVar22;
          puVar6 = (uint *)((long)puVar22 + 4);
          puVar15 = puVar22 + 1;
          puVar7 = (uint *)((long)puVar22 + 0xc);
          puVar22 = puVar22 + 2;
          uVar12 = *puVar7 >> 9 & 0x400040 | *(uint *)puVar15 >> 0xb & 0x100010 |
                   *puVar6 >> 0xd & 0x40004 | uVar12 >> 0xf & 0x10001;
          *pbVar18 = (byte)uVar12 | (byte)(uVar12 >> 0xf);
          pbVar18 = pbVar18 + 1;
        } while (puVar22 != (undefined8 *)((long)apuStack_1bd0[3] + 0x200));
      }
      else {
        uVar66 = *apuStack_1bd0[3];
        uVar70 = *(uint *)((long)apuStack_1bd0[3] + 4);
        uVar74 = *(uint *)((long)apuStack_1bd0[3] + 8);
        uVar67 = *(uint *)((long)apuStack_1bd0[3] + 0x10);
        uVar71 = *(uint *)((long)apuStack_1bd0[3] + 0x14);
        uVar75 = *(uint *)((long)apuStack_1bd0[3] + 0x18);
        uVar78 = *(uint *)((long)apuStack_1bd0[3] + 0x1c);
        uVar68 = *(uint *)((long)apuStack_1bd0[3] + 0x20);
        uVar72 = *(uint *)((long)apuStack_1bd0[3] + 0x24);
        uVar76 = *(uint *)((long)apuStack_1bd0[3] + 0x28);
        uVar79 = *(uint *)((long)apuStack_1bd0[3] + 0x2c);
        uVar69 = *(uint *)((long)apuStack_1bd0[3] + 0x30);
        uVar73 = *(uint *)((long)apuStack_1bd0[3] + 0x34);
        uVar77 = *(uint *)((long)apuStack_1bd0[3] + 0x38);
        uVar80 = *(uint *)((long)apuStack_1bd0[3] + 0x3c);
        uVar12 = *(uint *)((long)apuStack_1bd0[3] + 0x40);
        uVar55 = *(uint *)((long)apuStack_1bd0[3] + 0x44);
        uVar59 = *(uint *)((long)apuStack_1bd0[3] + 0x48);
        uVar52 = *(uint *)((long)apuStack_1bd0[3] + 0x50);
        uVar56 = *(uint *)((long)apuStack_1bd0[3] + 0x54);
        uVar60 = *(uint *)((long)apuStack_1bd0[3] + 0x58);
        uVar63 = *(uint *)((long)apuStack_1bd0[3] + 0x5c);
        uVar53 = *(uint *)((long)apuStack_1bd0[3] + 0x60);
        uVar57 = *(uint *)((long)apuStack_1bd0[3] + 100);
        uVar61 = *(uint *)((long)apuStack_1bd0[3] + 0x68);
        uVar64 = *(uint *)((long)apuStack_1bd0[3] + 0x6c);
        uVar54 = *(uint *)((long)apuStack_1bd0[3] + 0x70);
        uVar58 = *(uint *)((long)apuStack_1bd0[3] + 0x74);
        uVar62 = *(uint *)((long)apuStack_1bd0[3] + 0x78);
        uVar65 = *(uint *)((long)apuStack_1bd0[3] + 0x7c);
        uVar40 = CONCAT14((char)(uVar54 >> 0xf),(uVar53 >> 0x1f) << 0x10) & 0x1ffffffff;
        uVar44 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x84) >> 0x1d),
                          (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x84) >> 0xd) & 4)) &
                 0x4ffff;
        uVar35 = CONCAT14((char)(*(uint *)((long)apuStack_1bd0[3] + 0xb0) >> 0xf),
                          (*(uint *)((long)apuStack_1bd0[3] + 0xa0) >> 0x1f) << 0x10) & 0x1ffffffff;
        uVar33 = CONCAT14((char)(*(uint *)((long)apuStack_1bd0[3] + 0xf0) >> 0xf),
                          (*(uint *)((long)apuStack_1bd0[3] + 0xe0) >> 0x1f) << 0x10) & 0x1ffffffff;
        uVar43 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x4c) >> 0x19),
                          (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x4c) >> 9) & 0x40)) &
                 0x40ffff;
        uVar39 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xc) >> 0x19),
                          (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xc) >> 9) & 0x40)) &
                 0x40ffff;
        uVar38 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x8c) >> 0x19),
                          (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x8c) >> 9) & 0x40)) &
                 0x40ffff;
        bVar37 = (byte)(uVar33 >> 0x20) |
                 (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xf4) >> 0xd) & 4 |
                 (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xf8) >> 0xb) & 0x10 |
                 (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xfc) >> 9) & 0x40;
        uVar34 = CONCAT16((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xf0) >> 0x1f) |
                          (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xf4) >> 0x1d) & 4 |
                          (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xf8) >> 0x1b) & 0x10 |
                          (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xfc) >> 0x19) & 0x40,
                          (uint6)CONCAT14(bVar37,(uint)(byte)((byte)(uVar33 >> 0x10) |
                                                              (byte)(*(uint *)((long)apuStack_1bd0
                                                                                     [3] + 0xe4) >>
                                                                    0x1d) & 4 |
                                                              (byte)(*(uint *)((long)apuStack_1bd0
                                                                                     [3] + 0xe8) >>
                                                                    0x1b) & 0x10 |
                                                             (byte)(*(uint *)((long)apuStack_1bd0[3]
                                                                             + 0xec) >> 0x19) & 0x40
                                                             ) << 0x10));
        auStack_e10[lVar27 * 4 + 1] =
             CONCAT17((byte)(uint3)(uVar34 >> 0x2f) | bVar37,
                      CONCAT16((byte)(((ulong)uVar34 & 0xffff8000) >> 0xf) |
                               (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xe0) >> 0xf) & 1 |
                               (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xe4) >> 0xd) & 4 |
                               (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xe8) >> 0xb) & 0x10 |
                               (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xec) >> 9) & 0x40,
                               CONCAT15((byte)((uint3)((uint3)(byte)((byte)(*(uint *)((long)
                                                  apuStack_1bd0[3] + 0xd0) >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xd4) >>
                                                        0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xd8) >>
                                                        0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xdc) >>
                                                        0x19) & 0x40) << 0x10) >> 0xf) |
                                        (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xd0) >> 0xf) & 1
                                        | (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xd4) >> 0xd) &
                                          4 | (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xd8) >> 0xb
                                                    ) & 0x10 |
                                        (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xdc) >> 9) & 0x40
                                        ,CONCAT14((byte)((uint3)((uint3)(byte)((byte)(*(uint *)((
                                                  long)apuStack_1bd0[3] + 0xc0) >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xc4) >>
                                                        0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 200) >>
                                                        0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xcc) >>
                                                        0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xc0) >>
                                                        0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xc4) >>
                                                        0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 200) >>
                                                        0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xcc) >>
                                                        9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(*(
                                                  uint *)((long)apuStack_1bd0[3] + 0xb0) >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xb4) >>
                                                        0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xb8) >>
                                                        0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xbc) >>
                                                        0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar35 >> 0x20) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xb4) >>
                                                        0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xb8) >>
                                                        0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xbc) >>
                                                        9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar35 >> 0x10) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xa4) >>
                                                        0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xa8) >>
                                                        0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xac) >>
                                                        0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xa0) >>
                                                        0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xa4) >>
                                                        0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xa8) >>
                                                        0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xac) >>
                                                        9) & 0x40,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(*(uint *)((long)apuStack_1bd0[3] + 0x90) >>
                                                       0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x94) >>
                                                        0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x98) >>
                                                        0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x9c) >>
                                                        0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x90) >>
                                                        0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x94) >>
                                                        0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x98) >>
                                                        0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x9c) >>
                                                        9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(*(uint *)((
                                                  long)apuStack_1bd0[3] + 0x80) >> 0x1f) |
                                                  (byte)(uVar44 >> 0x10) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x88) >>
                                                        0x1b) & 0x10 | (byte)(uVar38 >> 0x10)) <<
                                                  0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x80) >>
                                                        0xf) & 1 | (byte)uVar44 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x88) >>
                                                        0xb) & 0x10 | (byte)uVar38)))))));
        auStack_e10[lVar27 * 4] =
             CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar54 >> 0x1f) |
                                                   (byte)(uVar58 >> 0x1d) & 4 |
                                                   (byte)(uVar62 >> 0x1b) & 0x10 |
                                                  (byte)(uVar65 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                      (byte)(uVar40 >> 0x20) | (byte)(uVar58 >> 0xd) & 4 |
                      (byte)(uVar62 >> 0xb) & 0x10 | (byte)(uVar65 >> 9) & 0x40,
                      CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar40 >> 0x10) |
                                                                    (byte)(uVar57 >> 0x1d) & 4 |
                                                                    (byte)(uVar61 >> 0x1b) & 0x10 |
                                                                   (byte)(uVar64 >> 0x19) & 0x40) <<
                                                     0x10) >> 0xf) |
                               (byte)(uVar53 >> 0xf) & 1 | (byte)(uVar57 >> 0xd) & 4 |
                               (byte)(uVar61 >> 0xb) & 0x10 | (byte)(uVar64 >> 9) & 0x40,
                               CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar52 >> 0x1f)
                                                                             | (byte)(uVar56 >> 0x1d
                                                                                     ) & 4 |
                                                                             (byte)(uVar60 >> 0x1b)
                                                                             & 0x10 | (byte)(uVar63 
                                                  >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                        (byte)(uVar52 >> 0xf) & 1 | (byte)(uVar56 >> 0xd) & 4 |
                                        (byte)(uVar60 >> 0xb) & 0x10 | (byte)(uVar63 >> 9) & 0x40,
                                        CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar12 
                                                  >> 0x1f) | (byte)(uVar55 >> 0x1d) & 4 |
                                                  (byte)(uVar59 >> 0x1b) & 0x10 |
                                                  (byte)(uVar43 >> 0x10)) << 0x10) >> 0xf) |
                                                 (byte)(uVar12 >> 0xf) & 1 |
                                                 (byte)(uVar55 >> 0xd) & 4 |
                                                 (byte)(uVar59 >> 0xb) & 0x10 | (byte)uVar43,
                                                 CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(uVar69
                                                                                             >> 0x1f
                                                  ) | (byte)(uVar73 >> 0x1d) & 4 |
                                                  (byte)(uVar77 >> 0x1b) & 0x10 |
                                                  (byte)(uVar80 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar69 >> 0xf) & 1 |
                                                  (byte)(uVar73 >> 0xd) & 4 |
                                                  (byte)(uVar77 >> 0xb) & 0x10 |
                                                  (byte)(uVar80 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar68 >> 0x1f) | (byte)(uVar72 >> 0x1d) & 4 |
                                                  (byte)(uVar76 >> 0x1b) & 0x10 |
                                                  (byte)(uVar79 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar68 >> 0xf) & 1 |
                                                  (byte)(uVar72 >> 0xd) & 4 |
                                                  (byte)(uVar76 >> 0xb) & 0x10 |
                                                  (byte)(uVar79 >> 9) & 0x40,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar67 >> 0x1f) | (byte)(uVar71 >> 0x1d) & 4
                                                  | (byte)(uVar75 >> 0x1b) & 0x10 |
                                                  (byte)(uVar78 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar67 >> 0xf) & 1 |
                                                  (byte)(uVar71 >> 0xd) & 4 |
                                                  (byte)(uVar75 >> 0xb) & 0x10 |
                                                  (byte)(uVar78 >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar66 >> 0x1f
                                                                                     ) | (byte)(
                                                  uVar70 >> 0x1d) & 4 |
                                                  (byte)(uVar74 >> 0x1b) & 0x10 |
                                                  (byte)(uVar39 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(uVar66 >> 0xf) & 1 |
                                                  (byte)(uVar70 >> 0xd) & 4 |
                                                  (byte)(uVar74 >> 0xb) & 0x10 | (byte)uVar39)))))))
        ;
        uVar65 = *(uint *)((long)apuStack_1bd0[3] + 0x100);
        uVar72 = *(uint *)((long)apuStack_1bd0[3] + 0x108);
        uVar66 = *(uint *)((long)apuStack_1bd0[3] + 0x110);
        uVar69 = *(uint *)((long)apuStack_1bd0[3] + 0x114);
        uVar73 = *(uint *)((long)apuStack_1bd0[3] + 0x118);
        uVar76 = *(uint *)((long)apuStack_1bd0[3] + 0x11c);
        uVar67 = *(uint *)((long)apuStack_1bd0[3] + 0x120);
        uVar70 = *(uint *)((long)apuStack_1bd0[3] + 0x124);
        uVar74 = *(uint *)((long)apuStack_1bd0[3] + 0x128);
        uVar77 = *(uint *)((long)apuStack_1bd0[3] + 300);
        uVar68 = *(uint *)((long)apuStack_1bd0[3] + 0x130);
        uVar71 = *(uint *)((long)apuStack_1bd0[3] + 0x134);
        uVar75 = *(uint *)((long)apuStack_1bd0[3] + 0x138);
        uVar78 = *(uint *)((long)apuStack_1bd0[3] + 0x13c);
        uVar12 = *(uint *)((long)apuStack_1bd0[3] + 0x140);
        uVar55 = *(uint *)((long)apuStack_1bd0[3] + 0x144);
        uVar52 = *(uint *)((long)apuStack_1bd0[3] + 0x150);
        uVar56 = *(uint *)((long)apuStack_1bd0[3] + 0x154);
        uVar59 = *(uint *)((long)apuStack_1bd0[3] + 0x158);
        uVar62 = *(uint *)((long)apuStack_1bd0[3] + 0x15c);
        uVar53 = *(uint *)((long)apuStack_1bd0[3] + 0x160);
        uVar57 = *(uint *)((long)apuStack_1bd0[3] + 0x164);
        uVar60 = *(uint *)((long)apuStack_1bd0[3] + 0x168);
        uVar63 = *(uint *)((long)apuStack_1bd0[3] + 0x16c);
        uVar54 = *(uint *)((long)apuStack_1bd0[3] + 0x170);
        uVar58 = *(uint *)((long)apuStack_1bd0[3] + 0x174);
        uVar61 = *(uint *)((long)apuStack_1bd0[3] + 0x178);
        uVar64 = *(uint *)((long)apuStack_1bd0[3] + 0x17c);
        uVar43 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x104) >> 0x1d),
                          (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x104) >> 0xd) & 4)) &
                 0x4ffff;
        uVar34 = CONCAT16((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1b4) >> 0x1d),
                          (uint6)(CONCAT14((char)(*(uint *)((long)apuStack_1bd0[3] + 0x1b4) >> 0xd),
                                           (uint)(uint3)(((byte)(*(uint *)((long)apuStack_1bd0[3] +
                                                                          0x1a4) >> 0x1d) & 4) <<
                                                        0x10)) & 0x4ffffffff)) & 0x4ffffffffffff;
        uVar33 = CONCAT14((char)(*(uint *)((long)apuStack_1bd0[3] + 0x1f0) >> 0xf),
                          (*(uint *)((long)apuStack_1bd0[3] + 0x1e0) >> 0x1f) << 0x10) & 0x1ffffffff
        ;
        uVar45 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x148) >> 0x1b),
                          (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x148) >> 0xb) & 0x10))
                 & 0x10ffff;
        uVar44 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x188) >> 0x1b),
                          (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x188) >> 0xb) & 0x10))
                 & 0x10ffff;
        uVar38 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x14c) >> 0x19),
                          (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x14c) >> 9) & 0x40)) &
                 0x40ffff;
        uVar39 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x10c) >> 0x19),
                          (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x10c) >> 9) & 0x40)) &
                 0x40ffff;
        auStack_e10[lVar27 * 4 + 3] =
             CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1f0)
                                                         >> 0x1f) |
                                                   (byte)(*(uint *)((long)apuStack_1bd0[3] + 500) >>
                                                         0x1d) & 4 |
                                                   (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1f8)
                                                         >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1fc)
                                                        >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                      (byte)(uVar33 >> 0x20) |
                      (byte)(*(uint *)((long)apuStack_1bd0[3] + 500) >> 0xd) & 4 |
                      (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1f8) >> 0xb) & 0x10 |
                      (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1fc) >> 9) & 0x40,
                      CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar33 >> 0x10) |
                                                            (byte)(*(uint *)((long)apuStack_1bd0[3]
                                                                            + 0x1e4) >> 0x1d) & 4 |
                                                            (byte)(*(uint *)((long)apuStack_1bd0[3]
                                                                            + 0x1e8) >> 0x1b) & 0x10
                                                           | (byte)(*(uint *)((long)apuStack_1bd0[3]
                                                                             + 0x1ec) >> 0x19) &
                                                             0x40) << 0x10) >> 0xf) |
                               (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1e0) >> 0xf) & 1 |
                               (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1e4) >> 0xd) & 4 |
                               (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1e8) >> 0xb) & 0x10 |
                               (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1ec) >> 9) & 0x40,
                               CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(*(uint *)((long)
                                                  apuStack_1bd0[3] + 0x1d0) >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1d4)
                                                        >> 0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1d8)
                                                        >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1dc)
                                                        >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                        (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1d0) >> 0xf) & 1
                                        | (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1d4) >> 0xd) &
                                          4 | (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1d8) >>
                                                    0xb) & 0x10 |
                                        (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1dc) >> 9) &
                                        0x40,CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(*(
                                                  uint *)((long)apuStack_1bd0[3] + 0x1c0) >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1c4)
                                                        >> 0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1c8)
                                                        >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1cc)
                                                        >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1c0)
                                                        >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1c4)
                                                        >> 0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1c8)
                                                        >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1cc)
                                                        >> 9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar34 >> 0x30) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1b0)
                                                        >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1b8)
                                                        >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1bc)
                                                        >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar34 >> 0x20) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1b0)
                                                        >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1b8)
                                                        >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1bc)
                                                        >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar34 >> 0x10) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1a0)
                                                        >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1a8)
                                                        >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1ac)
                                                        >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1a4)
                                                        >> 0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1a0)
                                                        >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1a8)
                                                        >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1ac)
                                                        >> 9) & 0x40,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(*(uint *)((long)apuStack_1bd0[3] + 0x194) >>
                                                       0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 400) >>
                                                        0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x198)
                                                        >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x19c)
                                                        >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x194)
                                                        >> 0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 400) >>
                                                        0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x198)
                                                        >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x19c)
                                                        >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(*(uint *)((
                                                  long)apuStack_1bd0[3] + 0x184) >> 0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x180)
                                                        >> 0x1f) | (byte)(uVar44 >> 0x10) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x18c)
                                                        >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x184)
                                                        >> 0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x180)
                                                        >> 0xf) & 1 | (byte)uVar44 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x18c)
                                                        >> 9) & 0x40)))))));
        auStack_e10[lVar27 * 4 + 2] =
             CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar58 >> 0x1d) & 4 |
                                                   (byte)(uVar54 >> 0x1f) |
                                                   (byte)(uVar61 >> 0x1b) & 0x10 |
                                                  (byte)(uVar64 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                      (byte)(uVar58 >> 0xd) & 4 | (byte)(uVar54 >> 0xf) & 1 |
                      (byte)(uVar61 >> 0xb) & 0x10 | (byte)(uVar64 >> 9) & 0x40,
                      CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar57 >> 0x1d) & 4 |
                                                            (byte)(uVar53 >> 0x1f) |
                                                            (byte)(uVar60 >> 0x1b) & 0x10 |
                                                           (byte)(uVar63 >> 0x19) & 0x40) << 0x10)
                                     >> 0xf) |
                               (byte)(uVar57 >> 0xd) & 4 | (byte)(uVar53 >> 0xf) & 1 |
                               (byte)(uVar60 >> 0xb) & 0x10 | (byte)(uVar63 >> 9) & 0x40,
                               CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar56 >> 0x1d)
                                                                             & 4 | (byte)(uVar52 >>
                                                                                         0x1f) |
                                                                             (byte)(uVar59 >> 0x1b)
                                                                             & 0x10 | (byte)(uVar62 
                                                  >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                        (byte)(uVar56 >> 0xd) & 4 | (byte)(uVar52 >> 0xf) & 1 |
                                        (byte)(uVar59 >> 0xb) & 0x10 | (byte)(uVar62 >> 9) & 0x40,
                                        CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar55 
                                                  >> 0x1d) & 4 | (byte)(uVar12 >> 0x1f) |
                                                  (byte)(uVar45 >> 0x10) | (byte)(uVar38 >> 0x10))
                                                  << 0x10) >> 0xf) |
                                                 (byte)(uVar55 >> 0xd) & 4 |
                                                 (byte)(uVar12 >> 0xf) & 1 | (byte)uVar45 |
                                                 (byte)uVar38,
                                                 CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(uVar71
                                                                                             >> 0x1d
                                                  ) & 4 | (byte)(uVar68 >> 0x1f) |
                                                  (byte)(uVar75 >> 0x1b) & 0x10 |
                                                  (byte)(uVar78 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar71 >> 0xd) & 4 |
                                                  (byte)(uVar68 >> 0xf) & 1 |
                                                  (byte)(uVar75 >> 0xb) & 0x10 |
                                                  (byte)(uVar78 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar70 >> 0x1d) & 4 | (byte)(uVar67 >> 0x1f) |
                                                  (byte)(uVar74 >> 0x1b) & 0x10 |
                                                  (byte)(uVar77 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar70 >> 0xd) & 4 |
                                                  (byte)(uVar67 >> 0xf) & 1 |
                                                  (byte)(uVar74 >> 0xb) & 0x10 |
                                                  (byte)(uVar77 >> 9) & 0x40,
                                                  CONCAT11((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar69 >> 0x1d) & 4 | (byte)(uVar66 >> 0x1f) |
                                                  (byte)(uVar73 >> 0x1b) & 0x10 |
                                                  (byte)(uVar76 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar69 >> 0xd) & 4 |
                                                  (byte)(uVar66 >> 0xf) & 1 |
                                                  (byte)(uVar73 >> 0xb) & 0x10 |
                                                  (byte)(uVar76 >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar43 >> 0x10
                                                                                     ) | (byte)(
                                                  uVar65 >> 0x1f) | (byte)(uVar72 >> 0x1b) & 0x10 |
                                                  (byte)(uVar39 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)uVar43 | (byte)(uVar65 >> 0xf) & 1 |
                                                  (byte)(uVar72 >> 0xb) & 0x10 | (byte)uVar39)))))))
        ;
      }
      uVar16 = uVar16 | 0x20;
      apuStack_1bd0[3] = (uint *)((long)apuStack_1bd0[3] + -0x10);
    }
    lVar14 = 1;
    puVar22 = local_dd0;
    while( true ) {
      puVar15 = puVar22 + 4;
      lVar27 = (&uStack_1bf0)[lVar14];
      if (lVar27 != 0) {
        puVar4 = (undefined8 *)(lVar27 + lVar19);
        puVar17 = (undefined8 *)(lVar27 + lVar25);
        if ((puVar15 > puVar4 && puVar22 <= puVar17) && (puVar15 <= puVar4 || puVar17 != puVar22)) {
          puVar17 = puVar4;
          do {
            uVar12 = *(uint *)puVar17;
            puVar6 = (uint *)((long)puVar17 + 4);
            puVar21 = puVar17 + 1;
            puVar7 = (uint *)((long)puVar17 + 0xc);
            puVar17 = puVar17 + 2;
            uVar12 = *puVar7 >> 9 & 0x400040 | *(uint *)puVar21 >> 0xb & 0x100010 |
                     *puVar6 >> 0xd & 0x40004 | uVar12 >> 0xf & 0x10001;
            *(byte *)puVar22 = (byte)uVar12 | (byte)(uVar12 >> 0xf);
            puVar22 = (undefined8 *)((long)puVar22 + 1);
          } while (puVar4 + 0x40 != puVar17);
        }
        else {
          uVar65 = *(uint *)puVar4;
          uVar72 = *(uint *)(puVar4 + 1);
          uVar66 = *(uint *)(puVar4 + 2);
          uVar69 = *(uint *)((long)puVar4 + 0x14);
          uVar73 = *(uint *)(puVar4 + 3);
          uVar76 = *(uint *)((long)puVar4 + 0x1c);
          uVar67 = *(uint *)(puVar4 + 4);
          uVar70 = *(uint *)((long)puVar4 + 0x24);
          uVar74 = *(uint *)(puVar4 + 5);
          uVar77 = *(uint *)((long)puVar4 + 0x2c);
          uVar68 = *(uint *)(puVar4 + 6);
          uVar71 = *(uint *)((long)puVar4 + 0x34);
          uVar75 = *(uint *)(puVar4 + 7);
          uVar78 = *(uint *)((long)puVar4 + 0x3c);
          uVar12 = *(uint *)(puVar4 + 8);
          uVar55 = *(uint *)((long)puVar4 + 0x44);
          uVar58 = *(uint *)(puVar4 + 9);
          uVar52 = *(uint *)(puVar4 + 10);
          uVar56 = *(uint *)((long)puVar4 + 0x54);
          uVar59 = *(uint *)(puVar4 + 0xb);
          uVar62 = *(uint *)((long)puVar4 + 0x5c);
          uVar53 = *(uint *)(puVar4 + 0xc);
          uVar57 = *(uint *)((long)puVar4 + 100);
          uVar60 = *(uint *)(puVar4 + 0xd);
          uVar63 = *(uint *)((long)puVar4 + 0x6c);
          uVar54 = *(uint *)(puVar4 + 0xe);
          uVar61 = *(uint *)(puVar4 + 0xf);
          uVar64 = *(uint *)((long)puVar4 + 0x7c);
          uVar46 = CONCAT12((byte)(*(uint *)((long)puVar4 + 4) >> 0x1d),
                            (ushort)((byte)(*(uint *)((long)puVar4 + 4) >> 0xd) & 4)) & 0x4ffff;
          uVar45 = CONCAT12((byte)(*(uint *)((long)puVar4 + 0x84) >> 0x1d),
                            (ushort)((byte)(*(uint *)((long)puVar4 + 0x84) >> 0xd) & 4)) & 0x4ffff;
          uVar34 = CONCAT16((byte)(*(uint *)((long)puVar4 + 0x74) >> 0x1d),
                            (uint6)(CONCAT14((char)(*(uint *)((long)puVar4 + 0x74) >> 0xd),
                                             (uint)(uint3)(((byte)(uVar57 >> 0x1d) & 4) << 0x10)) &
                                   0x4ffffffff)) & 0x4ffffffffffff;
          uVar35 = CONCAT14((char)(*(uint *)(puVar4 + 0x16) >> 0xf),
                            (*(uint *)(puVar4 + 0x14) >> 0x1f) << 0x10) & 0x1ffffffff;
          uVar33 = CONCAT14((char)(*(uint *)(puVar4 + 0x1e) >> 0xf),
                            (*(uint *)(puVar4 + 0x1c) >> 0x1f) << 0x10) & 0x1ffffffff;
          uVar48 = CONCAT12((byte)(*(uint *)(puVar4 + 0x11) >> 0x1b),
                            (ushort)((byte)(*(uint *)(puVar4 + 0x11) >> 0xb) & 0x10)) & 0x10ffff;
          uVar47 = CONCAT12((byte)(*(uint *)(puVar4 + 0x19) >> 0x1b),
                            (ushort)((byte)(*(uint *)(puVar4 + 0x19) >> 0xb) & 0x10)) & 0x10ffff;
          uVar43 = CONCAT12((byte)(*(uint *)((long)puVar4 + 0xc) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)puVar4 + 0xc) >> 9) & 0x40)) & 0x40ffff;
          uVar44 = CONCAT12((byte)(*(uint *)((long)puVar4 + 0x4c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)puVar4 + 0x4c) >> 9) & 0x40)) & 0x40ffff
          ;
          uVar39 = CONCAT12((byte)(*(uint *)((long)puVar4 + 0x8c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)puVar4 + 0x8c) >> 9) & 0x40)) & 0x40ffff
          ;
          uVar38 = CONCAT12((byte)(*(uint *)((long)puVar4 + 0xcc) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)puVar4 + 0xcc) >> 9) & 0x40)) & 0x40ffff
          ;
          puVar22[1] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(*(uint *)(puVar4 + 0x1e) >> 0x1f
                                                                   ) | (byte)(*(uint *)((long)puVar4
                                                                                       + 0xf4) >>
                                                                             0x1d) & 4 |
                                                             (byte)(*(uint *)(puVar4 + 0x1f) >> 0x1b
                                                                   ) & 0x10 |
                                                            (byte)(*(uint *)((long)puVar4 + 0xfc) >>
                                                                  0x19) & 0x40) << 0x30) >> 0x2f) |
                                (byte)(uVar33 >> 0x20) |
                                (byte)(*(uint *)((long)puVar4 + 0xf4) >> 0xd) & 4 |
                                (byte)(*(uint *)(puVar4 + 0x1f) >> 0xb) & 0x10 |
                                (byte)(*(uint *)((long)puVar4 + 0xfc) >> 9) & 0x40,
                                CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar33 >> 0x10)
                                                                              | (byte)(*(uint *)((
                                                  long)puVar4 + 0xe4) >> 0x1d) & 4 |
                                                  (byte)(*(uint *)(puVar4 + 0x1d) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0xec) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                         (byte)(*(uint *)(puVar4 + 0x1c) >> 0xf) & 1 |
                                         (byte)(*(uint *)((long)puVar4 + 0xe4) >> 0xd) & 4 |
                                         (byte)(*(uint *)(puVar4 + 0x1d) >> 0xb) & 0x10 |
                                         (byte)(*(uint *)((long)puVar4 + 0xec) >> 9) & 0x40,
                                         CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(*(uint
                                                                                                *)(
                                                  puVar4 + 0x1a) >> 0x1f) |
                                                  (byte)(*(uint *)((long)puVar4 + 0xd4) >> 0x1d) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x1b) >> 0x1b) & 0x10
                                                  | (byte)(*(uint *)((long)puVar4 + 0xdc) >> 0x19) &
                                                    0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(puVar4 + 0x1a) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)puVar4 + 0xd4) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x1b) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0xdc) >> 9) & 0x40
                                                  ,CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(*(uint *)(puVar4 + 0x18) >> 0x1f) |
                                                  (byte)(*(uint *)((long)puVar4 + 0xc4) >> 0x1d) & 4
                                                  | (byte)(uVar47 >> 0x10) | (byte)(uVar38 >> 0x10))
                                                  << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(puVar4 + 0x18) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)puVar4 + 0xc4) >> 0xd) & 4
                                                  | (byte)uVar47 | (byte)uVar38,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(*(
                                                  uint *)(puVar4 + 0x16) >> 0x1f) |
                                                  (byte)(*(uint *)((long)puVar4 + 0xb4) >> 0x1d) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x17) >> 0x1b) & 0x10
                                                  | (byte)(*(uint *)((long)puVar4 + 0xbc) >> 0x19) &
                                                    0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar35 >> 0x20) |
                                                  (byte)(*(uint *)((long)puVar4 + 0xb4) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x17) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0xbc) >> 9) & 0x40
                                                  ,CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar35 >> 0x10) |
                                                  (byte)(*(uint *)((long)puVar4 + 0xa4) >> 0x1d) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x15) >> 0x1b) & 0x10
                                                  | (byte)(*(uint *)((long)puVar4 + 0xac) >> 0x19) &
                                                    0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(puVar4 + 0x14) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)puVar4 + 0xa4) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x15) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0xac) >> 9) & 0x40
                                                  ,CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(*(uint *)(puVar4 + 0x12) >> 0x1f) |
                                                  (byte)(*(uint *)((long)puVar4 + 0x94) >> 0x1d) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x13) >> 0x1b) & 0x10
                                                  | (byte)(*(uint *)((long)puVar4 + 0x9c) >> 0x19) &
                                                    0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(puVar4 + 0x12) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)puVar4 + 0x94) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x13) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0x9c) >> 9) & 0x40
                                                  ,(byte)((uint3)((uint3)(byte)((byte)(*(uint *)(
                                                  puVar4 + 0x10) >> 0x1f) | (byte)(uVar45 >> 0x10) |
                                                  (byte)(uVar48 >> 0x10) | (byte)(uVar39 >> 0x10))
                                                  << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(puVar4 + 0x10) >> 0xf) & 1 |
                                                  (byte)uVar45 | (byte)uVar48 | (byte)uVar39)))))));
          *puVar22 = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar54 >> 0x1f) |
                                                           (byte)(uVar34 >> 0x30) |
                                                           (byte)(uVar61 >> 0x1b) & 0x10 |
                                                          (byte)(uVar64 >> 0x19) & 0x40) << 0x30) >>
                                           0x2f) |
                              (byte)(uVar54 >> 0xf) & 1 | (byte)(uVar34 >> 0x20) |
                              (byte)(uVar61 >> 0xb) & 0x10 | (byte)(uVar64 >> 9) & 0x40,
                              CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar53 >> 0x1f) |
                                                                            (byte)(uVar34 >> 0x10) |
                                                                            (byte)(uVar60 >> 0x1b) &
                                                                            0x10 | (byte)(uVar63 >>
                                                                                         0x19) &
                                                                                   0x40) << 0x10) >>
                                                     0xf) |
                                       (byte)(uVar53 >> 0xf) & 1 | (byte)(uVar57 >> 0xd) & 4 |
                                       (byte)(uVar60 >> 0xb) & 0x10 | (byte)(uVar63 >> 9) & 0x40,
                                       CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar52 
                                                  >> 0x1f) | (byte)(uVar56 >> 0x1d) & 4 |
                                                  (byte)(uVar59 >> 0x1b) & 0x10 |
                                                  (byte)(uVar62 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                (byte)(uVar52 >> 0xf) & 1 |
                                                (byte)(uVar56 >> 0xd) & 4 |
                                                (byte)(uVar59 >> 0xb) & 0x10 |
                                                (byte)(uVar62 >> 9) & 0x40,
                                                CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)
                                                  (uVar12 >> 0x1f) | (byte)(uVar55 >> 0x1d) & 4 |
                                                  (byte)(uVar58 >> 0x1b) & 0x10 |
                                                  (byte)(uVar44 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(uVar12 >> 0xf) & 1 |
                                                  (byte)(uVar55 >> 0xd) & 4 |
                                                  (byte)(uVar58 >> 0xb) & 0x10 | (byte)uVar44,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar68 >> 0x1f) | (byte)(uVar71 >> 0x1d) & 4 |
                                                  (byte)(uVar75 >> 0x1b) & 0x10 |
                                                  (byte)(uVar78 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar68 >> 0xf) & 1 |
                                                  (byte)(uVar71 >> 0xd) & 4 |
                                                  (byte)(uVar75 >> 0xb) & 0x10 |
                                                  (byte)(uVar78 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar67 >> 0x1f) | (byte)(uVar70 >> 0x1d) & 4 |
                                                  (byte)(uVar74 >> 0x1b) & 0x10 |
                                                  (byte)(uVar77 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar67 >> 0xf) & 1 |
                                                  (byte)(uVar70 >> 0xd) & 4 |
                                                  (byte)(uVar74 >> 0xb) & 0x10 |
                                                  (byte)(uVar77 >> 9) & 0x40,
                                                  CONCAT11((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar66 >> 0x1f) | (byte)(uVar69 >> 0x1d) & 4 |
                                                  (byte)(uVar73 >> 0x1b) & 0x10 |
                                                  (byte)(uVar76 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar66 >> 0xf) & 1 |
                                                  (byte)(uVar69 >> 0xd) & 4 |
                                                  (byte)(uVar73 >> 0xb) & 0x10 |
                                                  (byte)(uVar76 >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar65 >> 0x1f
                                                                                     ) | (byte)(
                                                  uVar46 >> 0x10) | (byte)(uVar72 >> 0x1b) & 0x10 |
                                                  (byte)(uVar43 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(uVar65 >> 0xf) & 1 | (byte)uVar46 |
                                                  (byte)(uVar72 >> 0xb) & 0x10 | (byte)uVar43)))))))
          ;
          uVar12 = *(uint *)(puVar4 + 0x28);
          uVar58 = *(uint *)(puVar4 + 0x29);
          uVar52 = *(uint *)(puVar4 + 0x2a);
          uVar55 = *(uint *)((long)puVar4 + 0x154);
          uVar59 = *(uint *)(puVar4 + 0x2b);
          uVar62 = *(uint *)((long)puVar4 + 0x15c);
          uVar53 = *(uint *)(puVar4 + 0x2c);
          uVar56 = *(uint *)((long)puVar4 + 0x164);
          uVar60 = *(uint *)(puVar4 + 0x2d);
          uVar63 = *(uint *)((long)puVar4 + 0x16c);
          uVar54 = *(uint *)(puVar4 + 0x2e);
          uVar57 = *(uint *)((long)puVar4 + 0x174);
          uVar61 = *(uint *)(puVar4 + 0x2f);
          uVar64 = *(uint *)((long)puVar4 + 0x17c);
          uVar65 = *(uint *)(puVar4 + 0x20);
          uVar69 = *(uint *)((long)puVar4 + 0x104);
          uVar73 = *(uint *)(puVar4 + 0x21);
          uVar66 = *(uint *)(puVar4 + 0x22);
          uVar70 = *(uint *)((long)puVar4 + 0x114);
          uVar74 = *(uint *)(puVar4 + 0x23);
          uVar77 = *(uint *)((long)puVar4 + 0x11c);
          uVar67 = *(uint *)(puVar4 + 0x24);
          uVar71 = *(uint *)((long)puVar4 + 0x124);
          uVar75 = *(uint *)(puVar4 + 0x25);
          uVar78 = *(uint *)((long)puVar4 + 300);
          uVar68 = *(uint *)(puVar4 + 0x26);
          uVar72 = *(uint *)((long)puVar4 + 0x134);
          uVar76 = *(uint *)(puVar4 + 0x27);
          uVar79 = *(uint *)((long)puVar4 + 0x13c);
          uVar46 = CONCAT12((byte)(*(uint *)((long)puVar4 + 0x144) >> 0x1d),
                            (ushort)((byte)(*(uint *)((long)puVar4 + 0x144) >> 0xd) & 4)) & 0x4ffff;
          uVar33 = CONCAT14((char)(uVar68 >> 0xf),(uVar67 >> 0x1f) << 0x10) & 0x1ffffffff;
          uVar36 = CONCAT16((byte)(*(uint *)((long)puVar4 + 0x1b4) >> 0x1d),
                            (uint6)(CONCAT14((char)(*(uint *)((long)puVar4 + 0x1b4) >> 0xd),
                                             (uint)(uint3)(((byte)(*(uint *)((long)puVar4 + 0x1a4)
                                                                  >> 0x1d) & 4) << 0x10)) &
                                   0x4ffffffff)) & 0x4ffffffffffff;
          uVar34 = CONCAT16((byte)(*(uint *)((long)puVar4 + 500) >> 0x1d),
                            (uint6)(CONCAT14((char)(*(uint *)((long)puVar4 + 500) >> 0xd),
                                             (uint)(uint3)(((byte)(*(uint *)((long)puVar4 + 0x1e4)
                                                                  >> 0x1d) & 4) << 0x10)) &
                                   0x4ffffffff)) & 0x4ffffffffffff;
          uVar47 = CONCAT12((byte)(*(uint *)(puVar4 + 0x31) >> 0x1b),
                            (ushort)((byte)(*(uint *)(puVar4 + 0x31) >> 0xb) & 0x10)) & 0x10ffff;
          uVar45 = CONCAT12((byte)(*(uint *)(puVar4 + 0x39) >> 0x1b),
                            (ushort)((byte)(*(uint *)(puVar4 + 0x39) >> 0xb) & 0x10)) & 0x10ffff;
          uVar39 = CONCAT12((byte)(*(uint *)((long)puVar4 + 0x18c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)puVar4 + 0x18c) >> 9) & 0x40)) &
                   0x40ffff;
          uVar44 = CONCAT12((byte)(*(uint *)((long)puVar4 + 0x10c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)puVar4 + 0x10c) >> 9) & 0x40)) &
                   0x40ffff;
          uVar43 = CONCAT12((byte)(*(uint *)((long)puVar4 + 0x14c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)puVar4 + 0x14c) >> 9) & 0x40)) &
                   0x40ffff;
          uVar38 = CONCAT12((byte)(*(uint *)((long)puVar4 + 0x1cc) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)puVar4 + 0x1cc) >> 9) & 0x40)) &
                   0x40ffff;
          puVar22[3] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar34 >> 0x30) |
                                                             (byte)(*(uint *)(puVar4 + 0x3e) >> 0x1f
                                                                   ) | (byte)(*(uint *)(puVar4 + 
                                                  0x3f) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0x1fc) >> 0x19) &
                                                  0x40) << 0x30) >> 0x2f) |
                                (byte)(uVar34 >> 0x20) | (byte)(*(uint *)(puVar4 + 0x3e) >> 0xf) & 1
                                | (byte)(*(uint *)(puVar4 + 0x3f) >> 0xb) & 0x10 |
                                (byte)(*(uint *)((long)puVar4 + 0x1fc) >> 9) & 0x40,
                                CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar34 >> 0x10)
                                                                              | (byte)(*(uint *)(
                                                  puVar4 + 0x3c) >> 0x1f) |
                                                  (byte)(*(uint *)(puVar4 + 0x3d) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0x1ec) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                         (byte)(*(uint *)((long)puVar4 + 0x1e4) >> 0xd) & 4 |
                                         (byte)(*(uint *)(puVar4 + 0x3c) >> 0xf) & 1 |
                                         (byte)(*(uint *)(puVar4 + 0x3d) >> 0xb) & 0x10 |
                                         (byte)(*(uint *)((long)puVar4 + 0x1ec) >> 9) & 0x40,
                                         CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(*(uint
                                                                                                *)((
                                                  long)puVar4 + 0x1d4) >> 0x1d) & 4 |
                                                  (byte)(*(uint *)(puVar4 + 0x3a) >> 0x1f) |
                                                  (byte)(*(uint *)(puVar4 + 0x3b) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0x1dc) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)puVar4 + 0x1d4) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x3a) >> 0xf) & 1 |
                                                  (byte)(*(uint *)(puVar4 + 0x3b) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0x1dc) >> 9) &
                                                  0x40,CONCAT14((byte)(ushort)((uint3)((uint3)(byte)
                                                  ((byte)(*(uint *)((long)puVar4 + 0x1c4) >> 0x1d) &
                                                   4 | (byte)(*(uint *)(puVar4 + 0x38) >> 0x1f) |
                                                   (byte)(uVar45 >> 0x10) | (byte)(uVar38 >> 0x10))
                                                  << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)puVar4 + 0x1c4) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x38) >> 0xf) & 1 |
                                                  (byte)uVar45 | (byte)uVar38,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar36 >> 0x30) |
                                                  (byte)(*(uint *)(puVar4 + 0x36) >> 0x1f) |
                                                  (byte)(*(uint *)(puVar4 + 0x37) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0x1bc) >> 0x19) &
                                                  0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar36 >> 0x20) |
                                                  (byte)(*(uint *)(puVar4 + 0x36) >> 0xf) & 1 |
                                                  (byte)(*(uint *)(puVar4 + 0x37) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0x1bc) >> 9) &
                                                  0x40,CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar36 >> 0x10) |
                                                  (byte)(*(uint *)(puVar4 + 0x34) >> 0x1f) |
                                                  (byte)(*(uint *)(puVar4 + 0x35) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0x1ac) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)puVar4 + 0x1a4) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x34) >> 0xf) & 1 |
                                                  (byte)(*(uint *)(puVar4 + 0x35) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0x1ac) >> 9) &
                                                  0x40,CONCAT11((byte)(ushort)((uint3)((uint3)(byte)
                                                  ((byte)(*(uint *)((long)puVar4 + 0x194) >> 0x1d) &
                                                   4 | (byte)(*(uint *)(puVar4 + 0x32) >> 0x1f) |
                                                   (byte)(*(uint *)(puVar4 + 0x33) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0x19c) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)puVar4 + 0x194) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x32) >> 0xf) & 1 |
                                                  (byte)(*(uint *)(puVar4 + 0x33) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar4 + 0x19c) >> 9) &
                                                  0x40,(byte)((uint3)((uint3)(byte)((byte)(*(uint *)
                                                  ((long)puVar4 + 0x184) >> 0x1d) & 4 |
                                                  (byte)(*(uint *)(puVar4 + 0x30) >> 0x1f) |
                                                  (byte)(uVar47 >> 0x10) | (byte)(uVar39 >> 0x10))
                                                  << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)puVar4 + 0x184) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar4 + 0x30) >> 0xf) & 1 |
                                                  (byte)uVar47 | (byte)uVar39)))))));
          puVar22[2] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar57 >> 0x1d) & 4 |
                                                             (byte)(uVar54 >> 0x1f) |
                                                             (byte)(uVar61 >> 0x1b) & 0x10 |
                                                            (byte)(uVar64 >> 0x19) & 0x40) << 0x30)
                                             >> 0x2f) |
                                (byte)(uVar57 >> 0xd) & 4 | (byte)(uVar54 >> 0xf) & 1 |
                                (byte)(uVar61 >> 0xb) & 0x10 | (byte)(uVar64 >> 9) & 0x40,
                                CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar56 >> 0x1d)
                                                                              & 4 | (byte)(uVar53 >>
                                                                                          0x1f) |
                                                                              (byte)(uVar60 >> 0x1b)
                                                                              & 0x10 | (byte)(uVar63
                                                                                             >> 0x19
                                                  ) & 0x40) << 0x10) >> 0xf) |
                                         (byte)(uVar56 >> 0xd) & 4 | (byte)(uVar53 >> 0xf) & 1 |
                                         (byte)(uVar60 >> 0xb) & 0x10 | (byte)(uVar63 >> 9) & 0x40,
                                         CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar55
                                                                                             >> 0x1d
                                                  ) & 4 | (byte)(uVar52 >> 0x1f) |
                                                  (byte)(uVar59 >> 0x1b) & 0x10 |
                                                  (byte)(uVar62 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar55 >> 0xd) & 4 |
                                                  (byte)(uVar52 >> 0xf) & 1 |
                                                  (byte)(uVar59 >> 0xb) & 0x10 |
                                                  (byte)(uVar62 >> 9) & 0x40,
                                                  CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar46 >> 0x10) | (byte)(uVar12 >> 0x1f) |
                                                  (byte)(uVar58 >> 0x1b) & 0x10 |
                                                  (byte)(uVar43 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)uVar46 | (byte)(uVar12 >> 0xf) & 1 |
                                                  (byte)(uVar58 >> 0xb) & 0x10 | (byte)uVar43,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar72 >> 0x1d) & 4 | (byte)(uVar68 >> 0x1f) |
                                                  (byte)(uVar76 >> 0x1b) & 0x10 |
                                                  (byte)(uVar79 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar72 >> 0xd) & 4 | (byte)(uVar33 >> 0x20)
                                                  | (byte)(uVar76 >> 0xb) & 0x10 |
                                                  (byte)(uVar79 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar71 >> 0x1d) & 4 | (byte)(uVar33 >> 0x10) |
                                                  (byte)(uVar75 >> 0x1b) & 0x10 |
                                                  (byte)(uVar78 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar71 >> 0xd) & 4 |
                                                  (byte)(uVar67 >> 0xf) & 1 |
                                                  (byte)(uVar75 >> 0xb) & 0x10 |
                                                  (byte)(uVar78 >> 9) & 0x40,
                                                  CONCAT11((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar70 >> 0x1d) & 4 | (byte)(uVar66 >> 0x1f) |
                                                  (byte)(uVar74 >> 0x1b) & 0x10 |
                                                  (byte)(uVar77 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar70 >> 0xd) & 4 |
                                                  (byte)(uVar66 >> 0xf) & 1 |
                                                  (byte)(uVar74 >> 0xb) & 0x10 |
                                                  (byte)(uVar77 >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar69 >> 0x1d
                                                                                     ) & 4 |
                                                                               (byte)(uVar65 >> 0x1f
                                                                                     ) | (byte)(
                                                  uVar73 >> 0x1b) & 0x10 | (byte)(uVar44 >> 0x10))
                                                  << 0x10) >> 0xf) |
                                                  (byte)(uVar69 >> 0xd) & 4 |
                                                  (byte)(uVar65 >> 0xf) & 1 |
                                                  (byte)(uVar73 >> 0xb) & 0x10 | (byte)uVar44)))))))
          ;
        }
        apuStack_1bd0[lVar14] = (uint *)(puVar4 + -2);
      }
      if (lVar14 == 2) break;
      lVar14 = 2;
      puVar22 = puVar15;
    }
    if ((uVar16 & 2) == 0) {
      puVar32 = (undefined *)0x0;
    }
    render_scanline_apply_windows(param_1,auStack_e10,auStack_cb0,uStack_1bf0._4_4_);
    render_scanline_disable_blank_layers_asm(auStack_e10,(long)&uStack_1bf0 + 4);
    render_scanline_2d_composite
              (param_1,param_2,auStack_1bb0,&local_1bd8,local_1c70,puVar32,uStack_1bf0._4_4_,uVar13,
               uVar16,uVar29);
    if ((param_4 != 0) && (cVar11 = *(char *)(param_4 + 0x51), cVar11 != '\0')) {
LAB_0013f6b0:
      if (uVar29 < *(byte *)(param_4 + 0x50)) {
        lVar14 = *(long *)(param_4 + 0x40);
        uVar13 = *(int *)(param_4 + 0x48) + *(ushort *)(param_4 + 0x4c) * uVar29;
        lVar25 = *(long *)(param_4 + 0x28) + (ulong)(ushort)uVar13 * 2;
        if (param_5 == 0) {
LAB_0013f7c8:
          if (cVar11 != '\x02') {
            if (*(char *)(param_4 + 0x53) == '\0') {
              render_scanline_capture_direct_asm(param_4,lVar25,param_2);
            }
            else {
              render_scanline_capture_blended(param_4,lVar25,lVar14,param_2);
            }
            goto LAB_0013f7f0;
          }
        }
        else {
          lVar19 = *(long *)(param_4 + 0x30) + (ulong)((uVar13 & 0xffff) * 3) * 2;
          if (local_1c70 == (undefined *)0x0) {
            puVar28 = (undefined *)0x0;
            puVar32 = (undefined *)0x0;
            puVar20 = (undefined *)0x0;
            lVar27 = param_2;
            lVar26 = param_2;
            lVar24 = param_2;
          }
          else {
            puVar32 = local_1c70 + 0x800;
            puVar20 = local_1c70 + 0x400;
            puVar28 = local_1c70 + 0xc00;
            lVar27 = param_2 + 0x300;
            lVar26 = param_2 + 0x900;
            lVar24 = param_2 + 0x600;
          }
          lVar1 = lVar19 + 0x200;
          lVar2 = lVar19 + 0x400;
          if (((int)(uint)*(byte *)(param_4 + (ulong)*(byte *)(param_4 + 0x4f) + 0x20) >>
               (uVar29 >> 5 & 0x1f) & 1U) == 0) {
            if (cVar11 == '\x02') {
              if (puVar20 != (undefined *)0x0) {
                if (*(char *)(param_4 + 0x53) == '\0') {
                  render_scanline_capture_direct_3d_asm(param_4,lVar19,puVar20);
                }
                else {
                  render_scanline_capture_blended_3d(param_4,lVar19,lVar14);
                }
                goto LAB_0013f760;
              }
LAB_00140354:
              if (puVar32 != (undefined *)0x0) {
                if (*(char *)(param_4 + 0x53) == '\0') {
                  render_scanline_capture_direct_3d_asm(param_4,lVar1,puVar32);
                }
                else {
                  render_scanline_capture_blended_3d(param_4,lVar1,lVar14,puVar32);
                }
                goto LAB_0013f790;
              }
            }
            else {
              if (*(char *)(param_4 + 0x53) == '\0') {
                render_scanline_capture_direct_asm(param_4);
              }
              else {
                render_scanline_capture_blended(param_4,lVar19,lVar14,lVar27);
              }
LAB_0013f760:
              if (*(char *)(param_4 + 0x51) == '\x02') goto LAB_00140354;
              if (*(char *)(param_4 + 0x53) == '\0') {
                render_scanline_capture_direct_asm(param_4,lVar1,lVar24);
              }
              else {
                render_scanline_capture_blended(param_4,lVar1,lVar14,lVar24);
              }
LAB_0013f790:
              if (*(char *)(param_4 + 0x51) != '\x02') {
                lVar19 = lVar14;
                if (*(char *)(param_4 + 0x53) == '\0') goto LAB_001402b8;
LAB_0013f7b8:
                render_scanline_capture_blended(param_4,lVar2,lVar19,lVar26);
                cVar11 = *(char *)(param_4 + 0x51);
                goto LAB_0013f7c8;
              }
            }
            if (puVar28 != (undefined *)0x0) {
              cVar11 = *(char *)(param_4 + 0x53);
              lVar19 = lVar14;
joined_r0x00140340:
              if (cVar11 == '\0') {
                render_scanline_capture_direct_3d_asm(param_4,lVar2,puVar28);
                cVar11 = *(char *)(param_4 + 0x51);
              }
              else {
                render_scanline_capture_blended_3d(param_4,lVar2,lVar19,puVar28);
                cVar11 = *(char *)(param_4 + 0x51);
              }
              goto LAB_0013f7c8;
            }
          }
          else {
            lVar5 = *(long *)(param_4 + (ulong)*(byte *)(param_4 + 0x4f) * 8) +
                    (ulong)(uVar29 * 0x300) * 2;
            if (cVar11 != '\x02') {
              if (*(char *)(param_4 + 0x53) == '\0') {
                render_scanline_capture_direct_asm(param_4);
              }
              else {
                render_scanline_capture_blended(param_4,lVar19,lVar5,lVar27);
              }
LAB_00140250:
              if (*(char *)(param_4 + 0x51) == '\x02') goto LAB_00140398;
              if (*(char *)(param_4 + 0x53) == '\0') {
                render_scanline_capture_direct_asm(param_4,lVar1,lVar24);
              }
              else {
                render_scanline_capture_blended(param_4,lVar1,lVar5 + 0x200,lVar24);
              }
LAB_00140280:
              if (*(char *)(param_4 + 0x51) == '\x02') goto LAB_00140334;
              lVar19 = lVar5 + 0x400;
              if (*(char *)(param_4 + 0x53) != '\0') goto LAB_0013f7b8;
LAB_001402b8:
              render_scanline_capture_direct_asm(param_4,lVar2,lVar26);
              cVar11 = *(char *)(param_4 + 0x51);
              goto LAB_0013f7c8;
            }
            if (puVar20 != (undefined *)0x0) {
              if (*(char *)(param_4 + 0x53) == '\0') {
                render_scanline_capture_direct_3d_asm(param_4,lVar19,puVar20);
              }
              else {
                render_scanline_capture_blended_3d(param_4,lVar19,lVar5);
              }
              goto LAB_00140250;
            }
LAB_00140398:
            if (puVar32 != (undefined *)0x0) {
              if (*(char *)(param_4 + 0x53) == '\0') {
                render_scanline_capture_direct_3d_asm(param_4,lVar1,puVar32);
              }
              else {
                render_scanline_capture_blended_3d(param_4,lVar1,lVar5 + 0x200,puVar32);
              }
              goto LAB_00140280;
            }
LAB_00140334:
            if (puVar28 != (undefined *)0x0) {
              cVar11 = *(char *)(param_4 + 0x53);
              lVar19 = lVar5 + 0x400;
              goto joined_r0x00140340;
            }
          }
        }
        if (local_1c70 != (undefined *)0x0) {
          if (*(char *)(param_4 + 0x53) == '\0') {
            render_scanline_capture_direct_3d_asm(param_4,lVar25,local_1c70);
          }
          else {
            render_scanline_capture_blended_3d(param_4,lVar25,lVar14,local_1c70);
          }
        }
      }
    }
LAB_0013f7f0:
    if (uVar31 == 0) goto LAB_0013f7f4;
  }
  else {
    render_scanline_apply_windows
              (param_1,auStack_e10,auStack_cb0,uStack_1bf0._4_4_ & (uVar31 ^ 0xffffffff));
    uStack_1bf0._4_4_ = uStack_1bf0._4_4_ & ~uVar31;
    render_scanline_disable_blank_layers_asm(auStack_e10,(long)&uStack_1bf0 + 4);
    puVar22 = (undefined8 *)(lVar14 + (param_3 & 0xffffff) * 0x200);
    uStack_1bf0._4_4_ = uStack_1bf0._4_4_ | uVar31;
    lVar25 = 0;
    lVar27 = param_2;
    do {
      if (local_1c70 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        uVar12 = uVar16;
      }
      else {
        puVar20 = local_1c70 + lVar25 * 0x400;
        if (local_1c48 != 0) {
          render_scanline_horizontal_shift_3d
                    (auStack_1bb0,local_1c70 + lVar25 * 0x400,uVar9 & 0xffffffff);
          puVar20 = auStack_1bb0;
        }
        uVar12 = render_scanline_set_3d_visibility(auStack_e10,puVar20);
        uVar12 = uVar16 | uVar12;
      }
      lVar26 = (ulong)(uVar29 * 0x300) + (ulong)((int)lVar25 * 0x100 - 0x100);
      if (lVar14 != 0) {
        apuStack_1bd0[3] = (uint *)puVar22;
        if ((lVar25 != 0) &&
           (apuStack_1bd0[3] = (uint *)(param_1[0x4281] + lVar26 * 2), param_1[0x4281] == 0)) {
          apuStack_1bd0[3] = (uint *)puVar22;
        }
        lVar24 = (ulong)*(byte *)(param_1 + 0x4282) + 4;
        if (apuStack_1bd0[3] < auStack_e10 + lVar24 * 4 + 4 &&
            auStack_e10 + lVar24 * 4 < (undefined8 *)((long)apuStack_1bd0[3] + 0x200)) {
          pbVar18 = auStack_1bb0 + lVar24 * 0x20 + 0xda0;
          puVar15 = (undefined8 *)apuStack_1bd0[3];
          do {
            uVar52 = *(uint *)puVar15;
            puVar6 = (uint *)((long)puVar15 + 4);
            puVar4 = puVar15 + 1;
            puVar7 = (uint *)((long)puVar15 + 0xc);
            puVar15 = puVar15 + 2;
            uVar52 = *puVar7 >> 9 & 0x400040 | *(uint *)puVar4 >> 0xb & 0x100010 |
                     *puVar6 >> 0xd & 0x40004 | uVar52 >> 0xf & 0x10001;
            *pbVar18 = (byte)uVar52 | (byte)(uVar52 >> 0xf);
            pbVar18 = pbVar18 + 1;
          } while (puVar15 != (undefined8 *)((long)apuStack_1bd0[3] + 0x200));
        }
        else {
          uVar66 = *apuStack_1bd0[3];
          uVar70 = *(uint *)((long)apuStack_1bd0[3] + 4);
          uVar74 = *(uint *)((long)apuStack_1bd0[3] + 8);
          uVar67 = *(uint *)((long)apuStack_1bd0[3] + 0x10);
          uVar71 = *(uint *)((long)apuStack_1bd0[3] + 0x14);
          uVar75 = *(uint *)((long)apuStack_1bd0[3] + 0x18);
          uVar78 = *(uint *)((long)apuStack_1bd0[3] + 0x1c);
          uVar68 = *(uint *)((long)apuStack_1bd0[3] + 0x20);
          uVar72 = *(uint *)((long)apuStack_1bd0[3] + 0x24);
          uVar76 = *(uint *)((long)apuStack_1bd0[3] + 0x28);
          uVar69 = *(uint *)((long)apuStack_1bd0[3] + 0x30);
          uVar73 = *(uint *)((long)apuStack_1bd0[3] + 0x34);
          uVar77 = *(uint *)((long)apuStack_1bd0[3] + 0x38);
          uVar79 = *(uint *)((long)apuStack_1bd0[3] + 0x3c);
          uVar52 = *(uint *)((long)apuStack_1bd0[3] + 0x40);
          uVar56 = *(uint *)((long)apuStack_1bd0[3] + 0x44);
          uVar60 = *(uint *)((long)apuStack_1bd0[3] + 0x48);
          uVar53 = *(uint *)((long)apuStack_1bd0[3] + 0x50);
          uVar57 = *(uint *)((long)apuStack_1bd0[3] + 0x54);
          uVar61 = *(uint *)((long)apuStack_1bd0[3] + 0x58);
          uVar64 = *(uint *)((long)apuStack_1bd0[3] + 0x5c);
          uVar54 = *(uint *)((long)apuStack_1bd0[3] + 0x60);
          uVar58 = *(uint *)((long)apuStack_1bd0[3] + 100);
          uVar62 = *(uint *)((long)apuStack_1bd0[3] + 0x68);
          uVar55 = *(uint *)((long)apuStack_1bd0[3] + 0x70);
          uVar59 = *(uint *)((long)apuStack_1bd0[3] + 0x74);
          uVar63 = *(uint *)((long)apuStack_1bd0[3] + 0x78);
          uVar65 = *(uint *)((long)apuStack_1bd0[3] + 0x7c);
          uVar38 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xe4) >> 0x1d),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xe4) >> 0xd) & 4)) &
                   0x400ff;
          uVar35 = CONCAT14((char)(uVar55 >> 0xf),(uVar54 >> 0x1f) << 0x10) & 0x1ffffffff;
          uVar30 = (ulong)CONCAT16((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xb4) >> 0x1d),
                                   (uint6)(CONCAT14((char)(*(uint *)((long)apuStack_1bd0[3] + 0xb4)
                                                          >> 0xd),
                                                    (uint)(uint3)(((byte)(*(uint *)((long)
                                                  apuStack_1bd0[3] + 0xa4) >> 0x1d) & 4) << 0x10)) &
                                          0x4ffffffff)) & 0xff04ffffffffffff;
          uVar33 = CONCAT14((char)(*(uint *)((long)apuStack_1bd0[3] + 0xf0) >> 0xf),
                            (*(uint *)((long)apuStack_1bd0[3] + 0xe0) >> 0x1f) << 0x10) &
                   0x100ffffff;
          uVar50 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x88) >> 0x1b),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x88) >> 0xb) & 0x10)
                           ) & 0x10ffff;
          uVar49 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 200) >> 0x1b),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 200) >> 0xb) & 0x10))
                   & 0x10ffff;
          uVar47 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x4c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x4c) >> 9) & 0x40))
                   & 0x40ffff;
          uVar48 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x6c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x6c) >> 9) & 0x40))
                   & 0x40ffff;
          uVar45 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xc) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xc) >> 9) & 0x40)) &
                   0x40ffff;
          uVar46 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x2c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x2c) >> 9) & 0x40))
                   & 0x40ffff;
          uVar43 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x8c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x8c) >> 9) & 0x40))
                   & 0x40ffff;
          uVar44 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xac) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xac) >> 9) & 0x40))
                   & 0x40ffff;
          uVar39 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xec) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xec) >> 9) & 0x40))
                   & 0x40ffff;
          bVar37 = (byte)(uVar33 >> 0x20) |
                   (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xf4) >> 0xd) & 4 |
                   (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xf8) >> 0xb) & 0x10 |
                   (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xfc) >> 9) & 0x40;
          uVar34 = CONCAT16((byte)(*(uint *)((long)apuStack_1bd0[3] + 0xf0) >> 0x1f) |
                            (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xf4) >> 0x1d) & 4 |
                            (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xf8) >> 0x1b) & 0x10 |
                            (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xfc) >> 0x19) & 0x40,
                            (uint6)CONCAT14(bVar37,(uint)(byte)((byte)(uVar33 >> 0x10) |
                                                                (byte)(uVar38 >> 0x10) |
                                                                (byte)(*(uint *)((long)apuStack_1bd0
                                                                                       [3] + 0xe8)
                                                                      >> 0x1b) & 0x10 |
                                                               (byte)(uVar39 >> 0x10)) << 0x10));
          auStack_e10[lVar24 * 4 + 1] =
               CONCAT17((byte)(uint3)(uVar34 >> 0x2f) | bVar37,
                        CONCAT16((byte)(((ulong)uVar34 & 0xffff8000) >> 0xf) |
                                 (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xe0) >> 0xf) & 1 |
                                 (byte)uVar38 |
                                 (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xe8) >> 0xb) & 0x10 |
                                 (byte)uVar39,
                                 CONCAT15((byte)((uint3)((uint3)(byte)((byte)(*(uint *)((long)
                                                  apuStack_1bd0[3] + 0xd0) >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xd4) >>
                                                        0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xd8) >>
                                                        0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xdc) >>
                                                        0x19) & 0x40) << 0x10) >> 0xf) |
                                          (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xd0) >> 0xf) &
                                          1 | (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xd4) >> 0xd
                                                    ) & 4 |
                                          (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xd8) >> 0xb) &
                                          0x10 | (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xdc) >>
                                                       9) & 0x40,
                                          CONCAT14((byte)((uint3)((uint3)(byte)((byte)(*(uint *)((
                                                  long)apuStack_1bd0[3] + 0xc0) >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xc4) >>
                                                        0x1d) & 4 | (byte)(uVar49 >> 0x10) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xcc) >>
                                                        0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xc0) >>
                                                        0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xc4) >>
                                                        0xd) & 4 | (byte)uVar49 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xcc) >>
                                                        9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar30 >> 0x30) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xb0) >>
                                                        0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xb8) >>
                                                        0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xbc) >>
                                                        0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar30 >> 0x20) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xb0) >>
                                                        0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xb8) >>
                                                        0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xbc) >>
                                                        9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar30 >> 0x10) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xa0) >>
                                                        0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xa8) >>
                                                        0x1b) & 0x10 | (byte)(uVar44 >> 0x10)) <<
                                                  0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xa4) >>
                                                        0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xa0) >>
                                                        0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0xa8) >>
                                                        0xb) & 0x10 | (byte)uVar44,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(*(uint *)((long)apuStack_1bd0[3] + 0x94) >>
                                                       0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x90) >>
                                                        0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x98) >>
                                                        0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x9c) >>
                                                        0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x94) >>
                                                        0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x90) >>
                                                        0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x98) >>
                                                        0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x9c) >>
                                                        9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(*(uint *)((
                                                  long)apuStack_1bd0[3] + 0x84) >> 0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x80) >>
                                                        0x1f) | (byte)(uVar50 >> 0x10) |
                                                  (byte)(uVar43 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x84) >>
                                                        0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x80) >>
                                                        0xf) & 1 | (byte)uVar50 | (byte)uVar43))))))
                       );
          auStack_e10[lVar24 * 4] =
               CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar59 >> 0x1d) & 4 |
                                                     (byte)(uVar55 >> 0x1f) |
                                                     (byte)(uVar63 >> 0x1b) & 0x10 |
                                                    (byte)(uVar65 >> 0x19) & 0x40) << 0x30) >> 0x2f)
                        | (byte)(uVar59 >> 0xd) & 4 | (byte)(uVar35 >> 0x20) |
                          (byte)(uVar63 >> 0xb) & 0x10 | (byte)(uVar65 >> 9) & 0x40,
                        CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar58 >> 0x1d) & 4 |
                                                                      (byte)(uVar35 >> 0x10) |
                                                                      (byte)(uVar62 >> 0x1b) & 0x10
                                                                     | (byte)(uVar48 >> 0x10)) <<
                                                       0x10) >> 0xf) |
                                 (byte)(uVar58 >> 0xd) & 4 | (byte)(uVar54 >> 0xf) & 1 |
                                 (byte)(uVar62 >> 0xb) & 0x10 | (byte)uVar48,
                                 CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar57 >> 0x1d
                                                                                     ) & 4 |
                                                                               (byte)(uVar53 >> 0x1f
                                                                                     ) | (byte)(
                                                  uVar61 >> 0x1b) & 0x10 |
                                                  (byte)(uVar64 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                          (byte)(uVar57 >> 0xd) & 4 | (byte)(uVar53 >> 0xf) & 1 |
                                          (byte)(uVar61 >> 0xb) & 0x10 | (byte)(uVar64 >> 9) & 0x40,
                                          CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar56 >> 0x1d) & 4 | (byte)(uVar52 >> 0x1f) |
                                                  (byte)(uVar60 >> 0x1b) & 0x10 |
                                                  (byte)(uVar47 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(uVar56 >> 0xd) & 4 |
                                                  (byte)(uVar52 >> 0xf) & 1 |
                                                  (byte)(uVar60 >> 0xb) & 0x10 | (byte)uVar47,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar73 >> 0x1d) & 4 | (byte)(uVar69 >> 0x1f) |
                                                  (byte)(uVar77 >> 0x1b) & 0x10 |
                                                  (byte)(uVar79 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar73 >> 0xd) & 4 |
                                                  (byte)(uVar69 >> 0xf) & 1 |
                                                  (byte)(uVar77 >> 0xb) & 0x10 |
                                                  (byte)(uVar79 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar72 >> 0x1d) & 4 | (byte)(uVar68 >> 0x1f) |
                                                  (byte)(uVar76 >> 0x1b) & 0x10 |
                                                  (byte)(uVar46 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(uVar72 >> 0xd) & 4 |
                                                  (byte)(uVar68 >> 0xf) & 1 |
                                                  (byte)(uVar76 >> 0xb) & 0x10 | (byte)uVar46,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar71 >> 0x1d) & 4 | (byte)(uVar67 >> 0x1f)
                                                  | (byte)(uVar75 >> 0x1b) & 0x10 |
                                                  (byte)(uVar78 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar71 >> 0xd) & 4 |
                                                  (byte)(uVar67 >> 0xf) & 1 |
                                                  (byte)(uVar75 >> 0xb) & 0x10 |
                                                  (byte)(uVar78 >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar70 >> 0x1d
                                                                                     ) & 4 |
                                                                               (byte)(uVar66 >> 0x1f
                                                                                     ) | (byte)(
                                                  uVar74 >> 0x1b) & 0x10 | (byte)(uVar45 >> 0x10))
                                                  << 0x10) >> 0xf) |
                                                  (byte)(uVar70 >> 0xd) & 4 |
                                                  (byte)(uVar66 >> 0xf) & 1 |
                                                  (byte)(uVar74 >> 0xb) & 0x10 | (byte)uVar45)))))))
          ;
          uVar65 = *(uint *)((long)apuStack_1bd0[3] + 0x100);
          uVar72 = *(uint *)((long)apuStack_1bd0[3] + 0x108);
          uVar66 = *(uint *)((long)apuStack_1bd0[3] + 0x110);
          uVar69 = *(uint *)((long)apuStack_1bd0[3] + 0x114);
          uVar73 = *(uint *)((long)apuStack_1bd0[3] + 0x118);
          uVar76 = *(uint *)((long)apuStack_1bd0[3] + 0x11c);
          uVar67 = *(uint *)((long)apuStack_1bd0[3] + 0x120);
          uVar70 = *(uint *)((long)apuStack_1bd0[3] + 0x124);
          uVar74 = *(uint *)((long)apuStack_1bd0[3] + 0x128);
          uVar68 = *(uint *)((long)apuStack_1bd0[3] + 0x130);
          uVar71 = *(uint *)((long)apuStack_1bd0[3] + 0x134);
          uVar75 = *(uint *)((long)apuStack_1bd0[3] + 0x138);
          uVar77 = *(uint *)((long)apuStack_1bd0[3] + 0x13c);
          uVar52 = *(uint *)((long)apuStack_1bd0[3] + 0x140);
          uVar59 = *(uint *)((long)apuStack_1bd0[3] + 0x148);
          uVar53 = *(uint *)((long)apuStack_1bd0[3] + 0x150);
          uVar56 = *(uint *)((long)apuStack_1bd0[3] + 0x154);
          uVar60 = *(uint *)((long)apuStack_1bd0[3] + 0x158);
          uVar63 = *(uint *)((long)apuStack_1bd0[3] + 0x15c);
          uVar54 = *(uint *)((long)apuStack_1bd0[3] + 0x160);
          uVar57 = *(uint *)((long)apuStack_1bd0[3] + 0x164);
          uVar61 = *(uint *)((long)apuStack_1bd0[3] + 0x168);
          uVar55 = *(uint *)((long)apuStack_1bd0[3] + 0x170);
          uVar58 = *(uint *)((long)apuStack_1bd0[3] + 0x174);
          uVar62 = *(uint *)((long)apuStack_1bd0[3] + 0x178);
          uVar64 = *(uint *)((long)apuStack_1bd0[3] + 0x17c);
          uVar49 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x144) >> 0x1d),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x144) >> 0xd) & 4))
                   & 0x400ff;
          uVar50 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x104) >> 0x1d),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x104) >> 0xd) & 4))
                   & 0x400ff;
          uVar33 = CONCAT14((char)(uVar68 >> 0xf),(uVar67 >> 0x1f) << 0x10) & 0x1ffffffff;
          uVar41 = (ulong)CONCAT16((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1b4) >> 0x1d),
                                   (uint6)(CONCAT14((char)(*(uint *)((long)apuStack_1bd0[3] + 0x1b4)
                                                          >> 0xd),
                                                    (uint)(uint3)(((byte)(*(uint *)((long)
                                                  apuStack_1bd0[3] + 0x1a4) >> 0x1d) & 4) << 0x10))
                                          & 0x4ffffffff)) & 0xff04ffffffffffff;
          uVar38 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1e4) >> 0x1d),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1e4) >> 0xd) & 4))
                   & 0x400ff;
          uVar30 = (ulong)CONCAT16((byte)(*(uint *)((long)apuStack_1bd0[3] + 500) >> 0x1d),
                                   (uint6)(CONCAT14((char)(*(uint *)((long)apuStack_1bd0[3] + 500)
                                                          >> 0xd),(uint)uVar38) & 0x400ffffff)) &
                   0xff04ffffffffffff;
          uVar48 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1c8) >> 0x1b),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1c8) >> 0xb) & 0x10
                                    )) & 0x10ffff;
          uVar51 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x188) >> 0x1b),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x188) >> 0xb) & 0x10
                                    )) & 0x10ffff;
          uVar46 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x10c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x10c) >> 9) & 0x40))
                   & 0x40ffff;
          uVar47 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 300) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 300) >> 9) & 0x40)) &
                   0x40ffff;
          uVar44 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x14c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x14c) >> 9) & 0x40))
                   & 0x40ffff;
          uVar45 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x16c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x16c) >> 9) & 0x40))
                   & 0x40ffff;
          uVar39 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x18c) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x18c) >> 9) & 0x40))
                   & 0x40ffff;
          uVar43 = CONCAT12((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1ac) >> 0x19),
                            (ushort)((byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1ac) >> 9) & 0x40))
                   & 0x40ffff;
          auStack_e10[lVar24 * 4 + 3] =
               CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar30 >> 0x30) |
                                                     (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1f0
                                                                     ) >> 0x1f) |
                                                     (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1f8
                                                                     ) >> 0x1b) & 0x10 |
                                                    (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1fc)
                                                          >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                        (byte)(uVar30 >> 0x20) |
                        (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1f0) >> 0xf) & 1 |
                        (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1f8) >> 0xb) & 0x10 |
                        (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1fc) >> 9) & 0x40,
                        CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar30 >> 0x10) |
                                                                      (byte)(*(uint *)((long)
                                                  apuStack_1bd0[3] + 0x1e0) >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1e8)
                                                        >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1ec)
                                                        >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                 (byte)uVar38 |
                                 (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1e0) >> 0xf) & 1 |
                                 (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1e8) >> 0xb) & 0x10 |
                                 (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1ec) >> 9) & 0x40,
                                 CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(*(uint *)((
                                                  long)apuStack_1bd0[3] + 0x1d4) >> 0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1d0)
                                                        >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1d8)
                                                        >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1dc)
                                                        >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                          (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1d4) >> 0xd) &
                                          4 | (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1d0) >>
                                                    0xf) & 1 |
                                          (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1d8) >> 0xb) &
                                          0x10 | (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1dc) >>
                                                       9) & 0x40,
                                          CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(*(
                                                  uint *)((long)apuStack_1bd0[3] + 0x1c4) >> 0x1d) &
                                                  4 | (byte)(*(uint *)((long)apuStack_1bd0[3] +
                                                                      0x1c0) >> 0x1f) |
                                                  (byte)(uVar48 >> 0x10) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1cc)
                                                        >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1c4)
                                                        >> 0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1c0)
                                                        >> 0xf) & 1 | (byte)uVar48 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1cc)
                                                        >> 9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar41 >> 0x30) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1b0)
                                                        >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1b8)
                                                        >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1bc)
                                                        >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar41 >> 0x20) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1b0)
                                                        >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1b8)
                                                        >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1bc)
                                                        >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar41 >> 0x10) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1a0)
                                                        >> 0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1a8)
                                                        >> 0x1b) & 0x10 | (byte)(uVar43 >> 0x10)) <<
                                                  0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1a4)
                                                        >> 0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1a0)
                                                        >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x1a8)
                                                        >> 0xb) & 0x10 | (byte)uVar43,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(*(uint *)((long)apuStack_1bd0[3] + 0x194) >>
                                                       0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 400) >>
                                                        0x1f) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x198)
                                                        >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x19c)
                                                        >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x194)
                                                        >> 0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 400) >>
                                                        0xf) & 1 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x198)
                                                        >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x19c)
                                                        >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(*(uint *)((
                                                  long)apuStack_1bd0[3] + 0x184) >> 0x1d) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x180)
                                                        >> 0x1f) | (byte)(uVar51 >> 0x10) |
                                                  (byte)(uVar39 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x184)
                                                        >> 0xd) & 4 |
                                                  (byte)(*(uint *)((long)apuStack_1bd0[3] + 0x180)
                                                        >> 0xf) & 1 | (byte)uVar51 | (byte)uVar39)))
                                                  ))));
          auStack_e10[lVar24 * 4 + 2] =
               CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar58 >> 0x1d) & 4 |
                                                     (byte)(uVar55 >> 0x1f) |
                                                     (byte)(uVar62 >> 0x1b) & 0x10 |
                                                    (byte)(uVar64 >> 0x19) & 0x40) << 0x30) >> 0x2f)
                        | (byte)(uVar58 >> 0xd) & 4 | (byte)(uVar55 >> 0xf) & 1 |
                          (byte)(uVar62 >> 0xb) & 0x10 | (byte)(uVar64 >> 9) & 0x40,
                        CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar57 >> 0x1d) & 4 |
                                                                      (byte)(uVar54 >> 0x1f) |
                                                                      (byte)(uVar61 >> 0x1b) & 0x10
                                                                     | (byte)(uVar45 >> 0x10)) <<
                                                       0x10) >> 0xf) |
                                 (byte)(uVar57 >> 0xd) & 4 | (byte)(uVar54 >> 0xf) & 1 |
                                 (byte)(uVar61 >> 0xb) & 0x10 | (byte)uVar45,
                                 CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar56 >> 0x1d
                                                                                     ) & 4 |
                                                                               (byte)(uVar53 >> 0x1f
                                                                                     ) | (byte)(
                                                  uVar60 >> 0x1b) & 0x10 |
                                                  (byte)(uVar63 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                          (byte)(uVar56 >> 0xd) & 4 | (byte)(uVar53 >> 0xf) & 1 |
                                          (byte)(uVar60 >> 0xb) & 0x10 | (byte)(uVar63 >> 9) & 0x40,
                                          CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar49 >> 0x10) | (byte)(uVar52 >> 0x1f) |
                                                  (byte)(uVar59 >> 0x1b) & 0x10 |
                                                  (byte)(uVar44 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)uVar49 | (byte)(uVar52 >> 0xf) & 1 |
                                                  (byte)(uVar59 >> 0xb) & 0x10 | (byte)uVar44,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar71 >> 0x1d) & 4 | (byte)(uVar68 >> 0x1f) |
                                                  (byte)(uVar75 >> 0x1b) & 0x10 |
                                                  (byte)(uVar77 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar71 >> 0xd) & 4 | (byte)(uVar33 >> 0x20)
                                                  | (byte)(uVar75 >> 0xb) & 0x10 |
                                                  (byte)(uVar77 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar70 >> 0x1d) & 4 | (byte)(uVar33 >> 0x10) |
                                                  (byte)(uVar74 >> 0x1b) & 0x10 |
                                                  (byte)(uVar47 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(uVar70 >> 0xd) & 4 |
                                                  (byte)(uVar67 >> 0xf) & 1 |
                                                  (byte)(uVar74 >> 0xb) & 0x10 | (byte)uVar47,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar69 >> 0x1d) & 4 | (byte)(uVar66 >> 0x1f)
                                                  | (byte)(uVar73 >> 0x1b) & 0x10 |
                                                  (byte)(uVar76 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar69 >> 0xd) & 4 |
                                                  (byte)(uVar66 >> 0xf) & 1 |
                                                  (byte)(uVar73 >> 0xb) & 0x10 |
                                                  (byte)(uVar76 >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar50 >> 0x10
                                                                                     ) | (byte)(
                                                  uVar65 >> 0x1f) | (byte)(uVar72 >> 0x1b) & 0x10 |
                                                  (byte)(uVar46 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)uVar50 | (byte)(uVar65 >> 0xf) & 1 |
                                                  (byte)(uVar72 >> 0xb) & 0x10 | (byte)uVar46)))))))
          ;
        }
        uVar12 = uVar12 | 0x20;
        apuStack_1bd0[3] = (uint *)((long)apuStack_1bd0[3] + -0x10);
      }
      lVar24 = 1;
      puVar15 = local_dd0;
      plVar23 = param_1 + 0x49;
      while( true ) {
        puVar4 = puVar15 + 4;
        if ((&uStack_1bf0)[lVar24] != 0) {
          puVar17 = (undefined8 *)(*plVar23 + lVar26 * 2);
          if ((int)lVar25 == 0 || *plVar23 == 0) {
            puVar17 = (undefined8 *)((&uStack_1bf0)[lVar24] + lVar19);
          }
          puVar21 = puVar17;
          if (puVar17 < puVar4 && puVar15 < puVar17 + 0x40) {
            do {
              puVar3 = puVar21 + 2;
              uVar52 = *(uint *)((long)puVar21 + 0xc) >> 9 & 0x400040 |
                       *(uint *)(puVar21 + 1) >> 0xb & 0x100010 |
                       *(uint *)((long)puVar21 + 4) >> 0xd & 0x40004 |
                       *(uint *)puVar21 >> 0xf & 0x10001;
              *(byte *)puVar15 = (byte)uVar52 | (byte)(uVar52 >> 0xf);
              puVar15 = (undefined8 *)((long)puVar15 + 1);
              puVar21 = puVar3;
            } while (puVar3 != puVar17 + 0x40);
          }
          else {
            uVar66 = *(uint *)puVar17;
            uVar76 = *(uint *)((long)puVar17 + 0xc);
            uVar67 = *(uint *)(puVar17 + 2);
            uVar70 = *(uint *)((long)puVar17 + 0x14);
            uVar73 = *(uint *)(puVar17 + 3);
            uVar77 = *(uint *)((long)puVar17 + 0x1c);
            uVar68 = *(uint *)(puVar17 + 4);
            uVar71 = *(uint *)((long)puVar17 + 0x24);
            uVar74 = *(uint *)(puVar17 + 5);
            uVar78 = *(uint *)((long)puVar17 + 0x2c);
            uVar69 = *(uint *)(puVar17 + 6);
            uVar72 = *(uint *)((long)puVar17 + 0x34);
            uVar75 = *(uint *)(puVar17 + 7);
            uVar79 = *(uint *)((long)puVar17 + 0x3c);
            uVar52 = *(uint *)(puVar17 + 8);
            uVar56 = *(uint *)((long)puVar17 + 0x44);
            uVar62 = *(uint *)((long)puVar17 + 0x4c);
            uVar53 = *(uint *)(puVar17 + 10);
            uVar57 = *(uint *)((long)puVar17 + 0x54);
            uVar59 = *(uint *)(puVar17 + 0xb);
            uVar63 = *(uint *)((long)puVar17 + 0x5c);
            uVar54 = *(uint *)(puVar17 + 0xc);
            uVar58 = *(uint *)((long)puVar17 + 100);
            uVar60 = *(uint *)(puVar17 + 0xd);
            uVar64 = *(uint *)((long)puVar17 + 0x6c);
            uVar55 = *(uint *)(puVar17 + 0xe);
            uVar61 = *(uint *)(puVar17 + 0xf);
            uVar65 = *(uint *)((long)puVar17 + 0x7c);
            uVar38 = CONCAT12((byte)(*(uint *)((long)puVar17 + 4) >> 0x1d),
                              (ushort)((byte)(*(uint *)((long)puVar17 + 4) >> 0xd) & 4)) & 0x400ff;
            uVar43 = CONCAT12((byte)(*(uint *)((long)puVar17 + 0xc4) >> 0x1d),
                              (ushort)((byte)(*(uint *)((long)puVar17 + 0xc4) >> 0xd) & 4)) &
                     0x400ff;
            uVar30 = (ulong)CONCAT16((byte)(*(uint *)((long)puVar17 + 0x74) >> 0x1d),
                                     (uint6)(CONCAT14((char)(*(uint *)((long)puVar17 + 0x74) >> 0xd)
                                                      ,(uint)(uint3)(((byte)(uVar58 >> 0x1d) & 4) <<
                                                                    0x10)) & 0x4ffffffff)) &
                     0xff04ffffffffffff;
            uVar40 = CONCAT14((char)(uVar69 >> 0xf),(uVar68 >> 0x1f) << 0x10) & 0x1ffffffff;
            uVar35 = CONCAT14((char)(*(uint *)(puVar17 + 0x16) >> 0xf),
                              (*(uint *)(puVar17 + 0x14) >> 0x1f) << 0x10) & 0x1ffffffff;
            uVar45 = CONCAT12((byte)(*(uint *)((long)puVar17 + 0x84) >> 0x1d),
                              (ushort)((byte)(*(uint *)((long)puVar17 + 0x84) >> 0xd) & 4)) &
                     0x400ff;
            uVar33 = CONCAT14((char)(*(uint *)(puVar17 + 0x1e) >> 0xf),
                              (*(uint *)(puVar17 + 0x1c) >> 0x1f) << 0x10) & 0x1ffffffff;
            uVar44 = CONCAT12((byte)(*(uint *)(puVar17 + 9) >> 0x1b),
                              (ushort)((byte)(*(uint *)(puVar17 + 9) >> 0xb) & 0x10)) & 0x10ffff;
            uVar39 = CONCAT12((byte)(*(uint *)(puVar17 + 1) >> 0x1b),
                              (ushort)((byte)(*(uint *)(puVar17 + 1) >> 0xb) & 0x10)) & 0x10ffff;
            puVar15[1] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(*(uint *)(puVar17 + 0x1e) >>
                                                                     0x1f) |
                                                               (byte)(*(uint *)((long)puVar17 + 0xf4
                                                                               ) >> 0x1d) & 4 |
                                                               (byte)(*(uint *)(puVar17 + 0x1f) >>
                                                                     0x1b) & 0x10 |
                                                              (byte)(*(uint *)((long)puVar17 + 0xfc)
                                                                    >> 0x19) & 0x40) << 0x30) >>
                                               0x2f) |
                                  (byte)(uVar33 >> 0x20) |
                                  (byte)(*(uint *)((long)puVar17 + 0xf4) >> 0xd) & 4 |
                                  (byte)(*(uint *)(puVar17 + 0x1f) >> 0xb) & 0x10 |
                                  (byte)(*(uint *)((long)puVar17 + 0xfc) >> 9) & 0x40,
                                  CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar33 >>
                                                                                      0x10) |
                                                                                (byte)(*(uint *)((
                                                  long)puVar17 + 0xe4) >> 0x1d) & 4 |
                                                  (byte)(*(uint *)(puVar17 + 0x1d) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0xec) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                           (byte)(*(uint *)(puVar17 + 0x1c) >> 0xf) & 1 |
                                           (byte)(*(uint *)((long)puVar17 + 0xe4) >> 0xd) & 4 |
                                           (byte)(*(uint *)(puVar17 + 0x1d) >> 0xb) & 0x10 |
                                           (byte)(*(uint *)((long)puVar17 + 0xec) >> 9) & 0x40,
                                           CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(*(
                                                  uint *)(puVar17 + 0x1a) >> 0x1f) |
                                                  (byte)(*(uint *)((long)puVar17 + 0xd4) >> 0x1d) &
                                                  4 | (byte)(*(uint *)(puVar17 + 0x1b) >> 0x1b) &
                                                      0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0xdc) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(puVar17 + 0x1a) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)puVar17 + 0xd4) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar17 + 0x1b) >> 0xb) & 0x10
                                                  | (byte)(*(uint *)((long)puVar17 + 0xdc) >> 9) &
                                                    0x40,CONCAT14((byte)(ushort)((uint3)((uint3)(
                                                  byte)((byte)(*(uint *)(puVar17 + 0x18) >> 0x1f) |
                                                        (byte)(uVar43 >> 0x10) |
                                                        (byte)(*(uint *)(puVar17 + 0x19) >> 0x1b) &
                                                        0x10 | (byte)(*(uint *)((long)puVar17 + 0xcc
                                                                               ) >> 0x19) & 0x40) <<
                                                  0x10) >> 0xf) |
                                                  (byte)(*(uint *)(puVar17 + 0x18) >> 0xf) & 1 |
                                                  (byte)uVar43 |
                                                  (byte)(*(uint *)(puVar17 + 0x19) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0xcc) >> 9) &
                                                  0x40,CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  *(uint *)(puVar17 + 0x16) >> 0x1f) |
                                                  (byte)(*(uint *)((long)puVar17 + 0xb4) >> 0x1d) &
                                                  4 | (byte)(*(uint *)(puVar17 + 0x17) >> 0x1b) &
                                                      0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0xbc) >> 0x19) &
                                                  0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar35 >> 0x20) |
                                                  (byte)(*(uint *)((long)puVar17 + 0xb4) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar17 + 0x17) >> 0xb) & 0x10
                                                  | (byte)(*(uint *)((long)puVar17 + 0xbc) >> 9) &
                                                    0x40,CONCAT12((byte)((uint3)((uint3)(byte)((byte
                                                  )(uVar35 >> 0x10) |
                                                  (byte)(*(uint *)((long)puVar17 + 0xa4) >> 0x1d) &
                                                  4 | (byte)(*(uint *)(puVar17 + 0x15) >> 0x1b) &
                                                      0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0xac) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(puVar17 + 0x14) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)puVar17 + 0xa4) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar17 + 0x15) >> 0xb) & 0x10
                                                  | (byte)(*(uint *)((long)puVar17 + 0xac) >> 9) &
                                                    0x40,CONCAT11((byte)(ushort)((uint3)((uint3)(
                                                  byte)((byte)(*(uint *)(puVar17 + 0x12) >> 0x1f) |
                                                        (byte)(*(uint *)((long)puVar17 + 0x94) >>
                                                              0x1d) & 4 |
                                                        (byte)(*(uint *)(puVar17 + 0x13) >> 0x1b) &
                                                        0x10 | (byte)(*(uint *)((long)puVar17 + 0x9c
                                                                               ) >> 0x19) & 0x40) <<
                                                  0x10) >> 0xf) |
                                                  (byte)(*(uint *)(puVar17 + 0x12) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x94) >> 0xd) & 4
                                                  | (byte)(*(uint *)(puVar17 + 0x13) >> 0xb) & 0x10
                                                  | (byte)(*(uint *)((long)puVar17 + 0x9c) >> 9) &
                                                    0x40,(byte)(ushort)((uint3)((uint3)(byte)((byte)
                                                  (*(uint *)(puVar17 + 0x10) >> 0x1f) |
                                                  (byte)(uVar45 >> 0x10) |
                                                  (byte)(*(uint *)(puVar17 + 0x11) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x8c) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(puVar17 + 0x10) >> 0xf) & 1 |
                                                  (byte)uVar45 |
                                                  (byte)(*(uint *)(puVar17 + 0x11) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x8c) >> 9) &
                                                  0x40)))))));
            *puVar15 = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar55 >> 0x1f) |
                                                             (byte)(uVar30 >> 0x30) |
                                                             (byte)(uVar61 >> 0x1b) & 0x10 |
                                                            (byte)(uVar65 >> 0x19) & 0x40) << 0x30)
                                             >> 0x2f) |
                                (byte)(uVar55 >> 0xf) & 1 | (byte)(uVar30 >> 0x20) |
                                (byte)(uVar61 >> 0xb) & 0x10 | (byte)(uVar65 >> 9) & 0x40,
                                CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar54 >> 0x1f)
                                                                              | (byte)(uVar30 >>
                                                                                      0x10) |
                                                                              (byte)(uVar60 >> 0x1b)
                                                                              & 0x10 | (byte)(uVar64
                                                                                             >> 0x19
                                                  ) & 0x40) << 0x10) >> 0xf) |
                                         (byte)(uVar54 >> 0xf) & 1 | (byte)(uVar58 >> 0xd) & 4 |
                                         (byte)(uVar60 >> 0xb) & 0x10 | (byte)(uVar64 >> 9) & 0x40,
                                         CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar53
                                                                                             >> 0x1f
                                                  ) | (byte)(uVar57 >> 0x1d) & 4 |
                                                  (byte)(uVar59 >> 0x1b) & 0x10 |
                                                  (byte)(uVar63 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar53 >> 0xf) & 1 |
                                                  (byte)(uVar57 >> 0xd) & 4 |
                                                  (byte)(uVar59 >> 0xb) & 0x10 |
                                                  (byte)(uVar63 >> 9) & 0x40,
                                                  CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar52 >> 0x1f) | (byte)(uVar56 >> 0x1d) & 4
                                                  | (byte)(uVar44 >> 0x10) |
                                                  (byte)(uVar62 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar52 >> 0xf) & 1 |
                                                  (byte)(uVar56 >> 0xd) & 4 | (byte)uVar44 |
                                                  (byte)(uVar62 >> 9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar69 >> 0x1f) | (byte)(uVar72 >> 0x1d) & 4 |
                                                  (byte)(uVar75 >> 0x1b) & 0x10 |
                                                  (byte)(uVar79 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar40 >> 0x20) | (byte)(uVar72 >> 0xd) & 4
                                                  | (byte)(uVar75 >> 0xb) & 0x10 |
                                                  (byte)(uVar79 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar40 >> 0x10) | (byte)(uVar71 >> 0x1d) & 4 |
                                                  (byte)(uVar74 >> 0x1b) & 0x10 |
                                                  (byte)(uVar78 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar68 >> 0xf) & 1 |
                                                  (byte)(uVar71 >> 0xd) & 4 |
                                                  (byte)(uVar74 >> 0xb) & 0x10 |
                                                  (byte)(uVar78 >> 9) & 0x40,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar67 >> 0x1f) | (byte)(uVar70 >> 0x1d) & 4
                                                  | (byte)(uVar73 >> 0x1b) & 0x10 |
                                                  (byte)(uVar77 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar67 >> 0xf) & 1 |
                                                  (byte)(uVar70 >> 0xd) & 4 |
                                                  (byte)(uVar73 >> 0xb) & 0x10 |
                                                  (byte)(uVar77 >> 9) & 0x40,
                                                  (byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar66
                                                                                             >> 0x1f
                                                  ) | (byte)(uVar38 >> 0x10) |
                                                  (byte)(uVar39 >> 0x10) |
                                                  (byte)(uVar76 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar66 >> 0xf) & 1 | (byte)uVar38 |
                                                  (byte)uVar39 | (byte)(uVar76 >> 9) & 0x40)))))));
            uVar67 = *(uint *)(puVar17 + 0x20);
            uVar74 = *(uint *)(puVar17 + 0x21);
            uVar78 = *(uint *)((long)puVar17 + 0x10c);
            uVar68 = *(uint *)(puVar17 + 0x22);
            uVar71 = *(uint *)((long)puVar17 + 0x114);
            uVar75 = *(uint *)(puVar17 + 0x23);
            uVar79 = *(uint *)((long)puVar17 + 0x11c);
            uVar69 = *(uint *)(puVar17 + 0x24);
            uVar72 = *(uint *)((long)puVar17 + 0x124);
            uVar76 = *(uint *)(puVar17 + 0x25);
            uVar80 = *(uint *)((long)puVar17 + 300);
            uVar70 = *(uint *)(puVar17 + 0x26);
            uVar73 = *(uint *)((long)puVar17 + 0x134);
            uVar77 = *(uint *)(puVar17 + 0x27);
            uVar81 = *(uint *)((long)puVar17 + 0x13c);
            uVar52 = *(uint *)(puVar17 + 0x28);
            uVar56 = *(uint *)((long)puVar17 + 0x144);
            uVar59 = *(uint *)(puVar17 + 0x29);
            uVar63 = *(uint *)((long)puVar17 + 0x14c);
            uVar53 = *(uint *)(puVar17 + 0x2a);
            uVar57 = *(uint *)((long)puVar17 + 0x154);
            uVar60 = *(uint *)(puVar17 + 0x2b);
            uVar64 = *(uint *)((long)puVar17 + 0x15c);
            uVar54 = *(uint *)(puVar17 + 0x2c);
            uVar58 = *(uint *)((long)puVar17 + 0x164);
            uVar61 = *(uint *)(puVar17 + 0x2d);
            uVar65 = *(uint *)((long)puVar17 + 0x16c);
            uVar55 = *(uint *)(puVar17 + 0x2e);
            uVar62 = *(uint *)(puVar17 + 0x2f);
            uVar66 = *(uint *)((long)puVar17 + 0x17c);
            uVar38 = CONCAT12((byte)(*(uint *)((long)puVar17 + 0x104) >> 0x1d),
                              (ushort)((byte)(*(uint *)((long)puVar17 + 0x104) >> 0xd) & 4)) &
                     0x400ff;
            uVar33 = CONCAT14((char)(uVar70 >> 0xf),(uVar69 >> 0x1f) << 0x10) & 0x1ffffffff;
            uVar42 = (ulong)CONCAT16((byte)(*(uint *)((long)puVar17 + 0x174) >> 0x1d),
                                     (uint6)(CONCAT14((char)(*(uint *)((long)puVar17 + 0x174) >> 0xd
                                                            ),(uint)(uint3)(((byte)(uVar58 >> 0x1d)
                                                                            & 4) << 0x10)) &
                                            0x4ffffffff)) & 0xff04ffffffffffff;
            uVar41 = (ulong)CONCAT16((byte)(*(uint *)((long)puVar17 + 0x1b4) >> 0x1d),
                                     (uint6)(CONCAT14((char)(*(uint *)((long)puVar17 + 0x1b4) >> 0xd
                                                            ),(uint)(uint3)(((byte)(*(uint *)((long)
                                                  puVar17 + 0x1a4) >> 0x1d) & 4) << 0x10)) &
                                            0x4ffffffff)) & 0xff04ffffffffffff;
            uVar30 = (ulong)CONCAT16((byte)(*(uint *)((long)puVar17 + 500) >> 0x1d),
                                     (uint6)(CONCAT14((char)(*(uint *)((long)puVar17 + 500) >> 0xd),
                                                      (uint)(uint3)(((byte)(*(uint *)((long)puVar17
                                                                                     + 0x1e4) >>
                                                                           0x1d) & 4) << 0x10)) &
                                            0x4ffffffff)) & 0xff04ffffffffffff;
            puVar15[3] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar30 >> 0x30) |
                                                               (byte)(*(uint *)(puVar17 + 0x3e) >>
                                                                     0x1f) |
                                                               (byte)(*(uint *)(puVar17 + 0x3f) >>
                                                                     0x1b) & 0x10 |
                                                              (byte)(*(uint *)((long)puVar17 + 0x1fc
                                                                              ) >> 0x19) & 0x40) <<
                                                0x30) >> 0x2f) |
                                  (byte)(uVar30 >> 0x20) |
                                  (byte)(*(uint *)(puVar17 + 0x3e) >> 0xf) & 1 |
                                  (byte)(*(uint *)(puVar17 + 0x3f) >> 0xb) & 0x10 |
                                  (byte)(*(uint *)((long)puVar17 + 0x1fc) >> 9) & 0x40,
                                  CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar30 >>
                                                                                      0x10) |
                                                                                (byte)(*(uint *)(
                                                  puVar17 + 0x3c) >> 0x1f) |
                                                  (byte)(*(uint *)(puVar17 + 0x3d) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x1ec) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                           (byte)(*(uint *)((long)puVar17 + 0x1e4) >> 0xd) & 4 |
                                           (byte)(*(uint *)(puVar17 + 0x3c) >> 0xf) & 1 |
                                           (byte)(*(uint *)(puVar17 + 0x3d) >> 0xb) & 0x10 |
                                           (byte)(*(uint *)((long)puVar17 + 0x1ec) >> 9) & 0x40,
                                           CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(*(
                                                  uint *)((long)puVar17 + 0x1d4) >> 0x1d) & 4 |
                                                  (byte)(*(uint *)(puVar17 + 0x3a) >> 0x1f) |
                                                  (byte)(*(uint *)(puVar17 + 0x3b) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x1dc) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)puVar17 + 0x1d4) >> 0xd) &
                                                  4 | (byte)(*(uint *)(puVar17 + 0x3a) >> 0xf) & 1 |
                                                  (byte)(*(uint *)(puVar17 + 0x3b) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x1dc) >> 9) &
                                                  0x40,CONCAT14((byte)(ushort)((uint3)((uint3)(byte)
                                                  ((byte)(*(uint *)((long)puVar17 + 0x1c4) >> 0x1d)
                                                   & 4 | (byte)(*(uint *)(puVar17 + 0x38) >> 0x1f) |
                                                   (byte)(*(uint *)(puVar17 + 0x39) >> 0x1b) & 0x10
                                                  | (byte)(*(uint *)((long)puVar17 + 0x1cc) >> 0x19)
                                                    & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)puVar17 + 0x1c4) >> 0xd) &
                                                  4 | (byte)(*(uint *)(puVar17 + 0x38) >> 0xf) & 1 |
                                                  (byte)(*(uint *)(puVar17 + 0x39) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x1cc) >> 9) &
                                                  0x40,CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar41 >> 0x30) |
                                                  (byte)(*(uint *)(puVar17 + 0x36) >> 0x1f) |
                                                  (byte)(*(uint *)(puVar17 + 0x37) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x1bc) >> 0x19) &
                                                  0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar41 >> 0x20) |
                                                  (byte)(*(uint *)(puVar17 + 0x36) >> 0xf) & 1 |
                                                  (byte)(*(uint *)(puVar17 + 0x37) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x1bc) >> 9) &
                                                  0x40,CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar41 >> 0x10) |
                                                  (byte)(*(uint *)(puVar17 + 0x34) >> 0x1f) |
                                                  (byte)(*(uint *)(puVar17 + 0x35) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x1ac) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)puVar17 + 0x1a4) >> 0xd) &
                                                  4 | (byte)(*(uint *)(puVar17 + 0x34) >> 0xf) & 1 |
                                                  (byte)(*(uint *)(puVar17 + 0x35) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x1ac) >> 9) &
                                                  0x40,CONCAT11((byte)(ushort)((uint3)((uint3)(byte)
                                                  ((byte)(*(uint *)((long)puVar17 + 0x194) >> 0x1d)
                                                   & 4 | (byte)(*(uint *)(puVar17 + 0x32) >> 0x1f) |
                                                   (byte)(*(uint *)(puVar17 + 0x33) >> 0x1b) & 0x10
                                                  | (byte)(*(uint *)((long)puVar17 + 0x19c) >> 0x19)
                                                    & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)puVar17 + 0x194) >> 0xd) &
                                                  4 | (byte)(*(uint *)(puVar17 + 0x32) >> 0xf) & 1 |
                                                  (byte)(*(uint *)(puVar17 + 0x33) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x19c) >> 9) &
                                                  0x40,(byte)(ushort)((uint3)((uint3)(byte)((byte)(*
                                                  (uint *)((long)puVar17 + 0x184) >> 0x1d) & 4 |
                                                  (byte)(*(uint *)(puVar17 + 0x30) >> 0x1f) |
                                                  (byte)(*(uint *)(puVar17 + 0x31) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x18c) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)((long)puVar17 + 0x184) >> 0xd) &
                                                  4 | (byte)(*(uint *)(puVar17 + 0x30) >> 0xf) & 1 |
                                                  (byte)(*(uint *)(puVar17 + 0x31) >> 0xb) & 0x10 |
                                                  (byte)(*(uint *)((long)puVar17 + 0x18c) >> 9) &
                                                  0x40)))))));
            puVar15[2] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar42 >> 0x30) |
                                                               (byte)(uVar55 >> 0x1f) |
                                                               (byte)(uVar62 >> 0x1b) & 0x10 |
                                                              (byte)(uVar66 >> 0x19) & 0x40) << 0x30
                                                ) >> 0x2f) |
                                  (byte)(uVar42 >> 0x20) | (byte)(uVar55 >> 0xf) & 1 |
                                  (byte)(uVar62 >> 0xb) & 0x10 | (byte)(uVar66 >> 9) & 0x40,
                                  CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar42 >>
                                                                                      0x10) |
                                                                                (byte)(uVar54 >>
                                                                                      0x1f) |
                                                                                (byte)(uVar61 >>
                                                                                      0x1b) & 0x10 |
                                                                               (byte)(uVar65 >> 0x19
                                                                                     ) & 0x40) <<
                                                                 0x10) >> 0xf) |
                                           (byte)(uVar58 >> 0xd) & 4 | (byte)(uVar54 >> 0xf) & 1 |
                                           (byte)(uVar61 >> 0xb) & 0x10 | (byte)(uVar65 >> 9) & 0x40
                                           ,CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar57 >> 0x1d) & 4 | (byte)(uVar53 >> 0x1f) |
                                                  (byte)(uVar60 >> 0x1b) & 0x10 |
                                                  (byte)(uVar64 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar57 >> 0xd) & 4 |
                                                  (byte)(uVar53 >> 0xf) & 1 |
                                                  (byte)(uVar60 >> 0xb) & 0x10 |
                                                  (byte)(uVar64 >> 9) & 0x40,
                                                  CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar56 >> 0x1d) & 4 | (byte)(uVar52 >> 0x1f)
                                                  | (byte)(uVar59 >> 0x1b) & 0x10 |
                                                  (byte)(uVar63 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar56 >> 0xd) & 4 |
                                                  (byte)(uVar52 >> 0xf) & 1 |
                                                  (byte)(uVar59 >> 0xb) & 0x10 |
                                                  (byte)(uVar63 >> 9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar73 >> 0x1d) & 4 | (byte)(uVar70 >> 0x1f) |
                                                  (byte)(uVar77 >> 0x1b) & 0x10 |
                                                  (byte)(uVar81 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar73 >> 0xd) & 4 | (byte)(uVar33 >> 0x20)
                                                  | (byte)(uVar77 >> 0xb) & 0x10 |
                                                  (byte)(uVar81 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar72 >> 0x1d) & 4 | (byte)(uVar33 >> 0x10) |
                                                  (byte)(uVar76 >> 0x1b) & 0x10 |
                                                  (byte)(uVar80 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar72 >> 0xd) & 4 |
                                                  (byte)(uVar69 >> 0xf) & 1 |
                                                  (byte)(uVar76 >> 0xb) & 0x10 |
                                                  (byte)(uVar80 >> 9) & 0x40,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar71 >> 0x1d) & 4 | (byte)(uVar68 >> 0x1f)
                                                  | (byte)(uVar75 >> 0x1b) & 0x10 |
                                                  (byte)(uVar79 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar71 >> 0xd) & 4 |
                                                  (byte)(uVar68 >> 0xf) & 1 |
                                                  (byte)(uVar75 >> 0xb) & 0x10 |
                                                  (byte)(uVar79 >> 9) & 0x40,
                                                  (byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar38
                                                                                             >> 0x10
                                                  ) | (byte)(uVar67 >> 0x1f) |
                                                  (byte)(uVar74 >> 0x1b) & 0x10 |
                                                  (byte)(uVar78 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)uVar38 | (byte)(uVar67 >> 0xf) & 1 |
                                                  (byte)(uVar74 >> 0xb) & 0x10 |
                                                  (byte)(uVar78 >> 9) & 0x40)))))));
          }
          apuStack_1bd0[lVar24] = (uint *)(puVar17 + -2);
        }
        plVar23 = plVar23 + 0x16;
        if (lVar24 == 2) break;
        lVar24 = 2;
        puVar15 = puVar4;
      }
      if ((uVar12 >> 1 & 1) != 0) {
        if (lVar25 == 3) {
          render_scanline_apply_windows(param_1,auStack_e10,auStack_cb0,uVar31 & uStack_1bf0._4_4_);
          render_scanline_2d_composite
                    (param_1,param_2 + 0x900,auStack_1bb0,&local_1bd8,puVar20,puVar32,
                     uStack_1bf0._4_4_,uVar13,uVar12,uVar29);
          break;
        }
        memcpy(auStack_bf0,puVar32,0x100);
      }
      lVar25 = lVar25 + 1;
      render_scanline_apply_windows(param_1,auStack_e10,auStack_cb0,uVar31 & uStack_1bf0._4_4_);
      render_scanline_2d_composite
                (param_1,lVar27,auStack_1bb0,&local_1bd8,puVar20,extraout_x10,uStack_1bf0._4_4_,
                 uVar13,uVar12,uVar29);
      lVar27 = lVar27 + 0x300;
    } while (lVar25 != 4);
    if ((param_4 != 0) && (cVar11 = *(char *)(param_4 + 0x51), cVar11 != '\0')) goto LAB_0013f6b0;
  }
  uVar31 = param_5;
LAB_0013f7f4:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return uVar31;
}


