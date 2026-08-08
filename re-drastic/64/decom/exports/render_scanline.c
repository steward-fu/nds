/*
 * Ghidra decompilation
 *
 * Function : render_scanline
 * Address  : 001404a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline(long **param_1,undefined8 *param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint3 uVar3;
  uint3 uVar4;
  uint3 uVar5;
  uint3 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  short sVar13;
  short sVar14;
  undefined8 *puVar15;
  long *__src;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  size_t __n;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  undefined2 uVar24;
  uint uVar25;
  uint uVar27;
  undefined8 uVar26;
  uint uVar30;
  undefined8 uVar28;
  ulong uVar29;
  undefined8 uVar31;
  ulong uVar32;
  undefined8 uVar33;
  ulong uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint5 uVar39;
  undefined8 uVar40;
  uint5 uVar41;
  undefined8 uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  ushort uVar58;
  long alStack_1a20 [66];
  undefined8 local_1810 [32];
  undefined8 local_1710 [32];
  undefined8 local_1610 [32];
  undefined8 auStack_1510 [96];
  undefined8 auStack_1210 [96];
  undefined8 auStack_f10 [96];
  undefined auStack_c10 [3080];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar22 = param_3 & 0xffffffff;
  iVar8 = get_screen_bytes_per_pixel(&__stack_chk_guard,0);
  plVar18 = *param_1;
  uVar25 = *(uint *)(param_1 + 0x12);
  lVar20 = *plVar18;
  lVar23 = plVar18[1];
  lVar16 = lVar20 + 0xfd298;
  uVar27 = (uint)param_3;
  if ((*(char *)((long)param_1 + 0xb7) == '\0') && (*(int *)(lVar23 + 0x4a4) != 0)) {
    puVar11 = (undefined8 *)render_scanline_3d(plVar18,uVar22);
    if ((*(uint *)(lVar23 + 0x4a0) & 1) == 0) {
      if ((ulong)((long)puVar11 + (0xf - (long)param_2)) < 0x1f) {
        lVar16 = 0;
        do {
          uVar25 = *(uint *)((long)puVar11 + lVar16);
          *(uint *)((long)param_2 + lVar16) =
               (uVar25 >> 8 & 0x3f) << 10 | (uVar25 >> 0x10 & 0x3f) << 2 | (uVar25 & 0x3f) << 0x12;
          lVar16 = lVar16 + 4;
        } while (lVar16 != 0x400);
      }
      else {
        lVar16 = 0;
        do {
          uVar28 = ((undefined8 *)((long)puVar11 + lVar16))[1];
          uVar26 = *(undefined8 *)((long)puVar11 + lVar16);
          uVar25 = (uint)((ulong)uVar26 >> 0x20);
          uVar27 = (uint)((ulong)uVar28 >> 0x20);
          ((ulong *)((long)param_2 + lVar16))[1] =
               (ulong)CONCAT16((char)((uVar27 << 0x12) >> 0x10),
                               CONCAT15((char)(((uVar27 >> 8) << 10) >> 8),
                                        CONCAT14((char)((uVar27 >> 0x10) << 2),
                                                 (uint)CONCAT12((char)(((uint)uVar28 << 0x12) >>
                                                                      0x10),
                                                                CONCAT11((char)((uint)((int)((ulong)
                                                  uVar28 >> 8) << 10) >> 8),
                                                  (char)(((uint)uVar28 >> 0x10) << 2))))));
          *(ulong *)((long)param_2 + lVar16) =
               (ulong)CONCAT16((char)((uVar25 << 0x12) >> 0x10),
                               CONCAT15((char)(((uVar25 >> 8) << 10) >> 8),
                                        CONCAT14((char)((uVar25 >> 0x10) << 2),
                                                 (uint)CONCAT12((char)(((uint)uVar26 << 0x12) >>
                                                                      0x10),
                                                                CONCAT11((char)((uint)((int)((ulong)
                                                  uVar26 >> 8) << 10) >> 8),
                                                  (char)(((uint)uVar26 >> 0x10) << 2))))));
          lVar16 = lVar16 + 0x10;
        } while (lVar16 != 0x400);
      }
    }
    else {
      param_2 = param_2 + 0x100;
      puVar21 = puVar11 + 0x200;
      do {
        puVar19 = param_2 + -0x100;
        puVar15 = puVar11;
        if ((ulong)((long)puVar11 + (0x7ff - (long)puVar19)) < 0xfff) {
          do {
            uVar25 = *(uint *)puVar15;
            puVar1 = puVar19 + 1;
            *(uint *)puVar19 =
                 (uVar25 >> 8 & 0x3f) << 10 | (uVar25 >> 0x10 & 0x3f) << 2 | (uVar25 & 0x3f) << 0x12
            ;
            uVar25 = *(uint *)(puVar15 + 0x80);
            *(uint *)((long)puVar19 + 4) =
                 (uVar25 >> 8 & 0x3f) << 10 | (uVar25 >> 0x10 & 0x3f) << 2 | (uVar25 & 0x3f) << 0x12
            ;
            puVar15 = (undefined8 *)((long)puVar15 + 4);
            puVar19 = puVar1;
          } while (puVar1 != param_2);
        }
        else {
          do {
            uVar35 = (uint)*puVar15;
            uVar36 = (uint)((ulong)*puVar15 >> 0x20);
            uVar37 = (uint)puVar15[1];
            uVar38 = (uint)((ulong)puVar15[1] >> 0x20);
            uVar25 = (uint)puVar15[0x80];
            uVar27 = (uint)((ulong)puVar15[0x80] >> 0x20);
            uVar10 = (uint)puVar15[0x81];
            uVar30 = (uint)((ulong)puVar15[0x81] >> 0x20);
            uVar39 = CONCAT14((char)((uVar27 >> 0x10) << 2),(uVar25 >> 0x10) << 2) & 0xff000000ff;
            uVar41 = CONCAT14((char)((uVar30 >> 0x10) << 2),(uVar10 >> 0x10) << 2) & 0xff000000ff;
            uVar25 = (uint)CONCAT12((char)((uVar25 << 0x12) >> 0x10),
                                    CONCAT11((char)(((uVar25 >> 8) << 10) >> 8),(char)uVar39));
            uVar10 = (uint)CONCAT12((char)((uVar10 << 0x12) >> 0x10),
                                    CONCAT11((char)(((uVar10 >> 8) << 10) >> 8),(char)uVar41));
            *(uint *)puVar19 =
                 (uint)CONCAT12((char)((uVar35 << 0x12) >> 0x10),
                                CONCAT11((char)(((uVar35 >> 8) << 10) >> 8),
                                         (char)((uVar35 >> 0x10) << 2)));
            *(uint *)((long)puVar19 + 4) = uVar25;
            *(uint *)(puVar19 + 1) =
                 (uint)CONCAT12((char)((uVar36 << 0x12) >> 0x10),
                                CONCAT11((char)(((uVar36 >> 8) << 10) >> 8),
                                         (char)((uVar36 >> 0x10) << 2)));
            *(uint *)((long)puVar19 + 0xc) =
                 (uint)(uint3)(CONCAT16((char)((uVar27 << 0x12) >> 0x10),
                                        CONCAT15((char)(((uVar27 >> 8) << 10) >> 8),
                                                 CONCAT14((char)(uVar39 >> 0x20),uVar25))) >> 0x20);
            *(uint *)(puVar19 + 2) =
                 (uint)CONCAT12((char)((uVar37 << 0x12) >> 0x10),
                                CONCAT11((char)(((uVar37 >> 8) << 10) >> 8),
                                         (char)((uVar37 >> 0x10) << 2)));
            *(uint *)((long)puVar19 + 0x14) = uVar10;
            *(uint *)(puVar19 + 3) =
                 (uint)CONCAT12((char)((uVar38 << 0x12) >> 0x10),
                                CONCAT11((char)(((uVar38 >> 8) << 10) >> 8),
                                         (char)((uVar38 >> 0x10) << 2)));
            *(uint *)((long)puVar19 + 0x1c) =
                 (uint)(uint3)(CONCAT16((char)((uVar30 << 0x12) >> 0x10),
                                        CONCAT15((char)(((uVar30 >> 8) << 10) >> 8),
                                                 CONCAT14((char)(uVar41 >> 0x20),uVar10))) >> 0x20);
            puVar19 = puVar19 + 4;
            puVar15 = puVar15 + 2;
          } while (puVar19 != param_2);
        }
        puVar11 = puVar11 + 0x100;
        param_2 = param_2 + 0x100;
      } while (puVar11 != puVar21);
    }
  }
  else {
    bVar7 = false;
    uVar10 = *(uint *)(lVar23 + 0x4a0) & 1;
    if (param_4 != 0) {
      bVar7 = *(char *)(param_4 + 0x51) != '\0';
    }
    puVar21 = local_1810;
    puVar15 = local_1810;
    puVar11 = local_1810;
    if (uVar27 == 0xbf) {
      plVar18 = (long *)0x0;
      if ((*(int *)(lVar20 + 0xfd2c8) < 0) && (*(char *)(lVar20 + 0xfd2cc) == '\x04')) {
        plVar18 = (long *)dma_transfer_display(lVar16,lVar20 + 0xfd2a8,uVar22);
        uVar30 = *(uint *)(lVar20 + 0xfd2c8) & 0x7fffffff;
        *(uint *)(lVar20 + 0xfd2c8) = uVar30;
        *(uint *)(*(long *)(lVar20 + 0xfd2b8) + 8) = uVar30;
      }
      if ((*(int *)(lVar20 + 0xfd2f0) < 0) && (*(char *)(lVar20 + 0xfd2f4) == '\x04')) {
        plVar18 = (long *)dma_transfer_display(lVar16,lVar20 + 0xfd2d0,0xbf);
        uVar30 = *(uint *)(lVar20 + 0xfd2f0) & 0x7fffffff;
        *(uint *)(lVar20 + 0xfd2f0) = uVar30;
        *(uint *)(*(long *)(lVar20 + 0xfd2e0) + 8) = uVar30;
      }
      if ((*(int *)(lVar20 + 0xfd318) < 0) && (*(char *)(lVar20 + 0xfd31c) == '\x04')) {
        plVar18 = (long *)dma_transfer_display(lVar16,lVar20 + 0xfd2f8,0xbf);
        uVar30 = *(uint *)(lVar20 + 0xfd318) & 0x7fffffff;
        *(uint *)(lVar20 + 0xfd318) = uVar30;
        *(uint *)(*(long *)(lVar20 + 0xfd308) + 8) = uVar30;
      }
      if ((*(int *)(lVar20 + 0xfd340) < 0) && (*(char *)(lVar20 + 0xfd344) == '\x04')) {
        plVar18 = (long *)dma_transfer_display(lVar16,lVar20 + 0xfd320,0xbf);
        uVar30 = *(uint *)(lVar20 + 0xfd340) & 0x7fffffff;
        *(uint *)(lVar20 + 0xfd340) = uVar30;
        *(uint *)(*(long *)(lVar20 + 0xfd330) + 8) = uVar30;
      }
LAB_00140910:
      uVar25 = uVar25 >> 0x10 & 3;
      param_1[0x56] =
           (long *)CONCAT44((int)((ulong)param_1[0x56] >> 0x20) +
                            (int)*(short *)((long)param_1 + 0x2c4),
                            (int)param_1[0x56] + (int)*(short *)((long)param_1 + 0x2c2));
      param_1[0x6c] =
           (long *)CONCAT44((int)((ulong)param_1[0x6c] >> 0x20) +
                            (int)*(short *)((long)param_1 + 0x374),
                            (int)param_1[0x6c] + (int)*(short *)((long)param_1 + 0x372));
      if (!bVar7) goto LAB_00140950;
LAB_00140600:
      if (*(char *)(param_4 + 0x52) != '\0') {
        if (*(char *)(param_4 + 0x52) == '\x03') {
          __src = param_1[2] + (param_3 & 0xffffff) * 0x40;
          iVar9 = *(int *)(*param_1 + (ulong)*(byte *)(param_4 + 0x4f) * 2 + 2);
          *(long **)(param_4 + 0x40) = __src;
          if (iVar9 != 6) {
            __src = (long *)0x0;
            *(undefined8 *)(param_4 + 0x40) = 0;
          }
        }
        else {
          __src = plVar18;
          if (plVar18 == (long *)0x0) {
            __src = alStack_1a20;
            uVar24 = (undefined2)*(undefined4 *)(**param_1 + 0x1b0d8);
            plVar18 = __src;
            do {
              plVar17 = plVar18 + 2;
              plVar18[1] = CONCAT26(uVar24,CONCAT24(uVar24,CONCAT22(uVar24,uVar24)));
              *plVar18 = CONCAT26(uVar24,CONCAT24(uVar24,CONCAT22(uVar24,uVar24)));
              plVar18 = plVar17;
            } while (plVar17 != alStack_1a20 + 0x40);
          }
          *(long **)(param_4 + 0x40) = __src;
          plVar18 = __src;
        }
        if ((*(char *)(param_4 + 0x53) == '\0') && (uVar27 < *(byte *)(param_4 + 0x50))) {
          memcpy(*(void **)(param_4 + 0x38),__src,(ulong)*(ushort *)(param_4 + 0x4c) << 1);
        }
      }
      if (uVar25 != 2) {
        if (uVar25 != 3) {
          if (uVar25 != 1) {
            render_scanline_2d(param_1,local_1810,uVar22,param_4,uVar10);
            goto LAB_00140660;
          }
          goto LAB_00140968;
        }
        uVar10 = render_scanline_2d(param_1,local_1810,uVar22,param_4,uVar10);
        goto LAB_00140a20;
      }
      render_scanline_expand_6bit_split_asm(local_1810,param_1[2] + (param_3 & 0xffffff) * 0x40);
      if ((uVar10 != 0) &&
         (uVar12 = (ulong)(*(uint *)(param_1 + 0x12) >> 0x12) & 3,
         ((int)(uint)*(byte *)(param_4 + uVar12 + 0x20) >> (uVar27 >> 5 & 0x1f) & 1U) != 0)) {
        lVar16 = *(long *)(param_4 + uVar12 * 8) + (ulong)(uVar27 * 0x300) * 2;
        render_scanline_expand_6bit_split_asm(auStack_1510,lVar16);
        render_scanline_expand_6bit_split_asm(auStack_1210,lVar16 + 0x200);
        render_scanline_expand_6bit_split_asm(auStack_f10,lVar16 + 0x400);
        puVar21 = auStack_1210;
        puVar15 = auStack_f10;
        puVar11 = auStack_1510;
      }
      render_scanline_2d(param_1,auStack_c10,uVar22,param_4,uVar10);
LAB_0014067c:
      uVar43 = *(ushort *)((long)param_1 + 0xa6);
    }
    else {
      plVar18 = (long *)0x0;
      if ((*(int *)(lVar20 + 0xfd2c8) < 0) && (*(char *)(lVar20 + 0xfd2cc) == '\x04')) {
        plVar18 = (long *)dma_transfer_display(lVar16,lVar20 + 0xfd2a8,uVar22);
      }
      if ((*(int *)(lVar20 + 0xfd2f0) < 0) && (*(char *)(lVar20 + 0xfd2f4) == '\x04')) {
        plVar18 = (long *)dma_transfer_display(lVar16,lVar20 + 0xfd2d0,uVar22);
      }
      if ((*(int *)(lVar20 + 0xfd318) < 0) && (*(char *)(lVar20 + 0xfd31c) == '\x04')) {
        plVar18 = (long *)dma_transfer_display(lVar16,lVar20 + 0xfd2f8,uVar22);
      }
      if ((*(int *)(lVar20 + 0xfd340) < 0) && (*(char *)(lVar20 + 0xfd344) == '\x04')) {
        plVar18 = (long *)dma_transfer_display(lVar16,lVar20 + 0xfd320,uVar22);
      }
      if (uVar27 != 0) goto LAB_00140910;
      if (0xbf < *(ushort *)((long)param_1 + 0xae) >> 8) {
        *(byte *)((long)param_1 + 0xb4) = *(byte *)((long)param_1 + 0xb4) | 1;
      }
      if (0xbf < (*(ushort *)((long)param_1 + 0xae) & 0xff)) {
        *(byte *)((long)param_1 + 0xb4) = *(byte *)((long)param_1 + 0xb4) & 0xfe;
      }
      if (0xbf < *(ushort *)(param_1 + 0x16) >> 8) {
        *(byte *)((long)param_1 + 0xb4) = *(byte *)((long)param_1 + 0xb4) | 2;
      }
      if (0xbf < (*(ushort *)(param_1 + 0x16) & 0xff)) {
        *(byte *)((long)param_1 + 0xb4) = *(byte *)((long)param_1 + 0xb4) & 0xfd;
      }
      *(undefined *)((long)param_1 + 0x2ce) = 1;
      *(undefined *)((long)param_1 + 0x37e) = 1;
      param_1[0x56] = param_1[0x55];
      param_1[0x6c] = param_1[0x6b];
      uVar25 = uVar25 >> 0x10 & 3;
      if (bVar7) goto LAB_00140600;
LAB_00140950:
      if (uVar25 == 2) {
        render_scanline_expand_6bit_split_asm(local_1810,param_1[2] + (param_3 & 0xffffff) * 0x40);
        goto LAB_0014067c;
      }
      if (uVar25 == 3) {
LAB_00140a20:
        if (plVar18 == (long *)0x0) {
          uVar25 = *(uint *)(**param_1 + 0x1b0d8);
          memset(local_1810,(uVar25 & 0x1f) << 1,0x100);
          memset(local_1710,(uVar25 >> 5 & 0x1f) << 1,0x100);
          memset(local_1610,(uVar25 >> 10 & 0x1f) << 1,0x100);
        }
        else {
          render_scanline_expand_6bit_split_asm(local_1810,plVar18);
        }
        goto LAB_0014067c;
      }
      if (uVar25 != 1) {
LAB_00140660:
        memset(local_1810,0xff,0x300);
        goto LAB_0014067c;
      }
LAB_00140968:
      iVar9 = render_scanline_2d(param_1,local_1810,uVar22,param_4,uVar10);
      if (iVar9 == 0) goto LAB_0014067c;
      uVar43 = *(ushort *)((long)param_1 + 0xa6);
      puVar11 = auStack_1510;
      puVar21 = auStack_1210;
      puVar15 = auStack_f10;
    }
    uVar25 = (uint)uVar43;
    uVar44 = uVar43 >> 0xe;
    if (uVar10 == 0) {
      if (iVar8 == 2) {
        if (uVar44 == 1) {
          uVar25 = (uVar25 & 0x1f) * 2;
          if (0x1f < uVar25) {
            lVar16 = local_8 - ___stack_chk_guard;
            if (lVar16 == 0) {
              __n = 0x200;
              iVar8 = 0xff;
              goto LAB_0014112c;
            }
            goto LAB_001412f4;
          }
          if ((uVar43 & 0x1f) != 0) {
            sVar13 = (short)uVar25;
            sVar14 = 0x20 - sVar13;
            sVar13 = sVar13 * 0x3f + 0x10;
            puVar11 = param_2 + 0x40;
            puVar21 = local_1710;
            do {
              uVar42 = puVar21[-0x1f];
              uVar40 = puVar21[-0x20];
              uVar28 = puVar21[0x21];
              uVar26 = puVar21[0x20];
              uVar3 = CONCAT12((char)((ulong)uVar40 >> 8),(short)uVar40) & 0xff00ff;
              uVar4 = CONCAT12((char)((ulong)uVar42 >> 8),(short)uVar42) & 0xff00ff;
              uVar5 = CONCAT12((char)((ulong)uVar26 >> 8),(short)uVar26) & 0xff00ff;
              uVar33 = puVar21[1];
              uVar31 = *puVar21;
              uVar6 = CONCAT12((char)((ulong)uVar33 >> 8),(short)uVar33) & 0xff00ff;
              uVar12 = CONCAT62((int6)(((ulong)CONCAT22(sVar13 + (ushort)(byte)((ulong)uVar31 >>
                                                                               0x18) * sVar14,
                                                        sVar13 + (ushort)(byte)((ulong)uVar31 >>
                                                                               0x10) * sVar14) <<
                                       0x20) >> 0x10),sVar13 + (ushort)(byte)uVar31 * sVar14) &
                       0xffffffffffffffe0;
              uVar22 = CONCAT44((int)(uVar12 >> 0x20),
                                CONCAT22(sVar13 + (ushort)(byte)((ulong)uVar31 >> 8) * sVar14,
                                         (short)uVar12)) & 0xffffffffffe0ffff;
              uVar32 = CONCAT26((short)(uVar22 >> 0x30),
                                CONCAT24((short)(uVar12 >> 0x20),(int)uVar22)) & 0xffe0ffe0ffffffff;
              uVar12 = CONCAT62((int6)(((ulong)CONCAT22(sVar13 + (ushort)(byte)((ulong)uVar31 >>
                                                                               0x38) * sVar14,
                                                        sVar13 + (ushort)(byte)((ulong)uVar31 >>
                                                                               0x30) * sVar14) <<
                                       0x20) >> 0x10),
                                sVar13 + (ushort)(byte)((ulong)uVar31 >> 0x20) * sVar14) &
                       0xffffffffffffffe0;
              uVar22 = CONCAT44((int)(uVar12 >> 0x20),
                                CONCAT22(sVar13 + (ushort)(byte)((ulong)uVar31 >> 0x28) * sVar14,
                                         (short)uVar12)) & 0xffffffffffe0ffff;
              uVar34 = CONCAT26((short)(uVar22 >> 0x30),
                                CONCAT24((short)(uVar12 >> 0x20),(int)uVar22)) & 0xffe0ffe0ffffffff;
              uVar22 = CONCAT62((int6)(((ulong)CONCAT22(sVar13 + (ushort)(byte)((ulong)uVar33 >>
                                                                               0x18) * sVar14,
                                                        sVar13 + (ushort)(byte)((ulong)uVar33 >>
                                                                               0x10) * sVar14) <<
                                       0x20) >> 0x10),sVar13 + (short)uVar6 * sVar14) &
                       0xffffffffffffffe0;
              uVar12 = CONCAT44((int)(uVar22 >> 0x20),
                                CONCAT22(sVar13 + (ushort)(byte)(uVar6 >> 0x10) * sVar14,
                                         (short)uVar22)) & 0xffffffffffe0ffff;
              uVar22 = CONCAT26((short)(uVar12 >> 0x30),
                                CONCAT24((short)(uVar22 >> 0x20),(int)uVar12)) & 0xffe0ffe0ffffffff;
              uVar29 = CONCAT62((int6)(((ulong)CONCAT22(sVar13 + (ushort)(byte)((ulong)uVar33 >>
                                                                               0x38) * sVar14,
                                                        sVar13 + (ushort)(byte)((ulong)uVar33 >>
                                                                               0x30) * sVar14) <<
                                       0x20) >> 0x10),
                                sVar13 + (ushort)(byte)((ulong)uVar33 >> 0x20) * sVar14) &
                       0xffffffffffffffe0;
              uVar12 = CONCAT44((int)(uVar29 >> 0x20),
                                CONCAT22(sVar13 + (ushort)(byte)((ulong)uVar33 >> 0x28) * sVar14,
                                         (short)uVar29)) & 0xffffffffffe0ffff;
              uVar12 = CONCAT26((short)(uVar12 >> 0x30),
                                CONCAT24((short)(uVar29 >> 0x20),(int)uVar12)) & 0xffe0ffe0ffffffff;
              uVar43 = sVar13 + (short)uVar5 * sVar14;
              uVar44 = sVar13 + (ushort)(byte)(uVar5 >> 0x10) * sVar14;
              uVar45 = sVar13 + (ushort)(byte)((ulong)uVar26 >> 0x10) * sVar14;
              uVar46 = sVar13 + (ushort)(byte)((ulong)uVar26 >> 0x18) * sVar14;
              uVar47 = sVar13 + (ushort)(byte)((ulong)uVar26 >> 0x20) * sVar14;
              uVar48 = sVar13 + (ushort)(byte)((ulong)uVar26 >> 0x28) * sVar14;
              uVar49 = sVar13 + (ushort)(byte)((ulong)uVar26 >> 0x30) * sVar14;
              uVar50 = sVar13 + (ushort)(byte)((ulong)uVar26 >> 0x38) * sVar14;
              uVar51 = sVar13 + (ushort)(byte)uVar28 * sVar14;
              uVar52 = sVar13 + (ushort)(byte)((ulong)uVar28 >> 8) * sVar14;
              uVar53 = sVar13 + (ushort)(byte)((ulong)uVar28 >> 0x10) * sVar14;
              uVar54 = sVar13 + (ushort)(byte)((ulong)uVar28 >> 0x18) * sVar14;
              uVar55 = sVar13 + (ushort)(byte)((ulong)uVar28 >> 0x20) * sVar14;
              uVar56 = sVar13 + (ushort)(byte)((ulong)uVar28 >> 0x28) * sVar14;
              uVar57 = sVar13 + (ushort)(byte)((ulong)uVar28 >> 0x30) * sVar14;
              uVar58 = sVar13 + (ushort)(byte)((ulong)uVar28 >> 0x38) * sVar14;
              param_2[1] = CONCAT17((byte)(uVar34 >> 0x38) | (byte)(uVar50 >> 0xe) |
                                    (byte)((ushort)(((ushort)(sVar13 + (ushort)(byte)((ulong)uVar40
                                                                                     >> 0x38) *
                                                                       sVar14) >> 6) << 0xb) >> 8),
                                    CONCAT16((byte)(uVar34 >> 0x30) | (byte)(uVar50 >> 6),
                                             CONCAT15((byte)(uVar34 >> 0x28) | (byte)(uVar49 >> 0xe)
                                                      | (byte)((ushort)(((ushort)(sVar13 + (ushort)(
                                                  byte)((ulong)uVar40 >> 0x30) * sVar14) >> 6) <<
                                                  0xb) >> 8),
                                                  CONCAT14((byte)(uVar34 >> 0x20) |
                                                           (byte)(uVar49 >> 6),
                                                           CONCAT13((byte)(uVar34 >> 0x18) |
                                                                    (byte)(uVar48 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)(sVar13
                                                                                             + (
                                                  ushort)(byte)((ulong)uVar40 >> 0x28) * sVar14) >>
                                                  6) << 0xb) >> 8),
                                                  CONCAT12((byte)(uVar34 >> 0x10) |
                                                           (byte)(uVar48 >> 6),
                                                           CONCAT11((byte)(uVar34 >> 8) |
                                                                    (byte)(uVar47 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)(sVar13
                                                                                             + (
                                                  ushort)(byte)((ulong)uVar40 >> 0x20) * sVar14) >>
                                                  6) << 0xb) >> 8),
                                                  (byte)uVar34 | (byte)(uVar47 >> 6))))))));
              *param_2 = CONCAT17((byte)(uVar32 >> 0x38) | (byte)(uVar46 >> 0xe) |
                                  (byte)((ushort)(((ushort)(sVar13 + (ushort)(byte)((ulong)uVar40 >>
                                                                                   0x18) * sVar14)
                                                  >> 6) << 0xb) >> 8),
                                  CONCAT16((byte)(uVar32 >> 0x30) | (byte)(uVar46 >> 6),
                                           CONCAT15((byte)(uVar32 >> 0x28) | (byte)(uVar45 >> 0xe) |
                                                    (byte)((ushort)(((ushort)(sVar13 + (ushort)(byte
                                                  )((ulong)uVar40 >> 0x10) * sVar14) >> 6) << 0xb)
                                                  >> 8),CONCAT14((byte)(uVar32 >> 0x20) |
                                                                 (byte)(uVar45 >> 6),
                                                                 CONCAT13((byte)(uVar32 >> 0x18) |
                                                                          (byte)(uVar44 >> 0xe) |
                                                                          (byte)((ushort)(((ushort)(
                                                  sVar13 + (ushort)(byte)(uVar3 >> 0x10) * sVar14)
                                                  >> 6) << 0xb) >> 8),
                                                  CONCAT12((byte)(uVar32 >> 0x10) |
                                                           (byte)(uVar44 >> 6),
                                                           CONCAT11((byte)(uVar32 >> 8) |
                                                                    (byte)(uVar43 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)(sVar13
                                                                                             + (
                                                  short)uVar3 * sVar14) >> 6) << 0xb) >> 8),
                                                  (byte)uVar32 | (byte)(uVar43 >> 6))))))));
              param_2[3] = CONCAT17((byte)(uVar12 >> 0x38) | (byte)(uVar58 >> 0xe) |
                                    (byte)((ushort)(((ushort)(sVar13 + (ushort)(byte)((ulong)uVar42
                                                                                     >> 0x38) *
                                                                       sVar14) >> 6) << 0xb) >> 8),
                                    CONCAT16((byte)(uVar12 >> 0x30) | (byte)(uVar58 >> 6),
                                             CONCAT15((byte)(uVar12 >> 0x28) | (byte)(uVar57 >> 0xe)
                                                      | (byte)((ushort)(((ushort)(sVar13 + (ushort)(
                                                  byte)((ulong)uVar42 >> 0x30) * sVar14) >> 6) <<
                                                  0xb) >> 8),
                                                  CONCAT14((byte)(uVar12 >> 0x20) |
                                                           (byte)(uVar57 >> 6),
                                                           CONCAT13((byte)(uVar12 >> 0x18) |
                                                                    (byte)(uVar56 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)(sVar13
                                                                                             + (
                                                  ushort)(byte)((ulong)uVar42 >> 0x28) * sVar14) >>
                                                  6) << 0xb) >> 8),
                                                  CONCAT12((byte)(uVar12 >> 0x10) |
                                                           (byte)(uVar56 >> 6),
                                                           CONCAT11((byte)(uVar12 >> 8) |
                                                                    (byte)(uVar55 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)(sVar13
                                                                                             + (
                                                  ushort)(byte)((ulong)uVar42 >> 0x20) * sVar14) >>
                                                  6) << 0xb) >> 8),
                                                  (byte)uVar12 | (byte)(uVar55 >> 6))))))));
              param_2[2] = CONCAT17((byte)(uVar22 >> 0x38) | (byte)(uVar54 >> 0xe) |
                                    (byte)((ushort)(((ushort)(sVar13 + (ushort)(byte)((ulong)uVar42
                                                                                     >> 0x18) *
                                                                       sVar14) >> 6) << 0xb) >> 8),
                                    CONCAT16((byte)(uVar22 >> 0x30) | (byte)(uVar54 >> 6),
                                             CONCAT15((byte)(uVar22 >> 0x28) | (byte)(uVar53 >> 0xe)
                                                      | (byte)((ushort)(((ushort)(sVar13 + (ushort)(
                                                  byte)((ulong)uVar42 >> 0x10) * sVar14) >> 6) <<
                                                  0xb) >> 8),
                                                  CONCAT14((byte)(uVar22 >> 0x20) |
                                                           (byte)(uVar53 >> 6),
                                                           CONCAT13((byte)(uVar22 >> 0x18) |
                                                                    (byte)(uVar52 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)(sVar13
                                                                                             + (
                                                  ushort)(byte)(uVar4 >> 0x10) * sVar14) >> 6) <<
                                                  0xb) >> 8),
                                                  CONCAT12((byte)(uVar22 >> 0x10) |
                                                           (byte)(uVar52 >> 6),
                                                           CONCAT11((byte)(uVar22 >> 8) |
                                                                    (byte)(uVar51 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)(sVar13
                                                                                             + (
                                                  short)uVar4 * sVar14) >> 6) << 0xb) >> 8),
                                                  (byte)uVar22 | (byte)(uVar51 >> 6))))))));
              param_2 = param_2 + 4;
              puVar21 = puVar21 + 2;
            } while (param_2 != puVar11);
            goto LAB_001409c0;
          }
        }
        else if (uVar44 == 2) {
          uVar25 = (uVar25 & 0x1f) * 2;
          if (0x1f < uVar25) {
            lVar16 = local_8 - ___stack_chk_guard;
            if (lVar16 != 0) goto LAB_001412f4;
            __n = 0x200;
            goto LAB_00141128;
          }
          if ((uVar43 & 0x1f) != 0) {
            sVar13 = 0x20 - (short)uVar25;
            puVar11 = param_2 + 0x40;
            puVar21 = local_1710;
            do {
              uVar42 = puVar21[-0x1f];
              uVar40 = puVar21[-0x20];
              uVar28 = puVar21[0x21];
              uVar26 = puVar21[0x20];
              uVar3 = CONCAT12((char)((ulong)uVar40 >> 8),(short)uVar40) & 0xff00ff;
              uVar4 = CONCAT12((char)((ulong)uVar42 >> 8),(short)uVar42) & 0xff00ff;
              uVar5 = CONCAT12((char)((ulong)uVar26 >> 8),(short)uVar26) & 0xff00ff;
              uVar33 = puVar21[1];
              uVar31 = *puVar21;
              uVar6 = CONCAT12((char)((ulong)uVar33 >> 8),(short)uVar33) & 0xff00ff;
              uVar22 = CONCAT62((int6)(((ulong)CONCAT22((ushort)(byte)((ulong)uVar31 >> 0x18) *
                                                        sVar13 + 0x10,
                                                        (ushort)(byte)((ulong)uVar31 >> 0x10) *
                                                        sVar13 + 0x10) << 0x20) >> 0x10),
                                (ushort)(byte)uVar31 * sVar13 + 0x10) & 0xffffffffffffffe0;
              uVar12 = CONCAT44((int)(uVar22 >> 0x20),
                                CONCAT22((ushort)(byte)((ulong)uVar31 >> 8) * sVar13 + 0x10,
                                         (short)uVar22)) & 0xffffffffffe0ffff;
              uVar32 = CONCAT26((short)(uVar12 >> 0x30),
                                CONCAT24((short)(uVar22 >> 0x20),(int)uVar12)) & 0xffe0ffe0ffffffff;
              uVar22 = CONCAT62((int6)(((ulong)CONCAT22((ushort)(byte)((ulong)uVar31 >> 0x38) *
                                                        sVar13 + 0x10,
                                                        (ushort)(byte)((ulong)uVar31 >> 0x30) *
                                                        sVar13 + 0x10) << 0x20) >> 0x10),
                                (ushort)(byte)((ulong)uVar31 >> 0x20) * sVar13 + 0x10) &
                       0xffffffffffffffe0;
              uVar12 = CONCAT44((int)(uVar22 >> 0x20),
                                CONCAT22((ushort)(byte)((ulong)uVar31 >> 0x28) * sVar13 + 0x10,
                                         (short)uVar22)) & 0xffffffffffe0ffff;
              uVar34 = CONCAT26((short)(uVar12 >> 0x30),
                                CONCAT24((short)(uVar22 >> 0x20),(int)uVar12)) & 0xffe0ffe0ffffffff;
              uVar22 = CONCAT62((int6)(((ulong)CONCAT22((ushort)(byte)((ulong)uVar33 >> 0x18) *
                                                        sVar13 + 0x10,
                                                        (ushort)(byte)((ulong)uVar33 >> 0x10) *
                                                        sVar13 + 0x10) << 0x20) >> 0x10),
                                (short)uVar6 * sVar13 + 0x10) & 0xffffffffffffffe0;
              uVar12 = CONCAT44((int)(uVar22 >> 0x20),
                                CONCAT22((ushort)(byte)(uVar6 >> 0x10) * sVar13 + 0x10,(short)uVar22
                                        )) & 0xffffffffffe0ffff;
              uVar22 = CONCAT26((short)(uVar12 >> 0x30),
                                CONCAT24((short)(uVar22 >> 0x20),(int)uVar12)) & 0xffe0ffe0ffffffff;
              uVar29 = CONCAT62((int6)(((ulong)CONCAT22((ushort)(byte)((ulong)uVar33 >> 0x38) *
                                                        sVar13 + 0x10,
                                                        (ushort)(byte)((ulong)uVar33 >> 0x30) *
                                                        sVar13 + 0x10) << 0x20) >> 0x10),
                                (ushort)(byte)((ulong)uVar33 >> 0x20) * sVar13 + 0x10) &
                       0xffffffffffffffe0;
              uVar12 = CONCAT44((int)(uVar29 >> 0x20),
                                CONCAT22((ushort)(byte)((ulong)uVar33 >> 0x28) * sVar13 + 0x10,
                                         (short)uVar29)) & 0xffffffffffe0ffff;
              uVar12 = CONCAT26((short)(uVar12 >> 0x30),
                                CONCAT24((short)(uVar29 >> 0x20),(int)uVar12)) & 0xffe0ffe0ffffffff;
              uVar43 = (short)uVar5 * sVar13 + 0x10;
              uVar44 = (ushort)(byte)(uVar5 >> 0x10) * sVar13 + 0x10;
              uVar45 = (ushort)(byte)((ulong)uVar26 >> 0x10) * sVar13 + 0x10;
              uVar46 = (ushort)(byte)((ulong)uVar26 >> 0x18) * sVar13 + 0x10;
              uVar47 = (ushort)(byte)((ulong)uVar26 >> 0x20) * sVar13 + 0x10;
              uVar48 = (ushort)(byte)((ulong)uVar26 >> 0x28) * sVar13 + 0x10;
              uVar49 = (ushort)(byte)((ulong)uVar26 >> 0x30) * sVar13 + 0x10;
              uVar50 = (ushort)(byte)((ulong)uVar26 >> 0x38) * sVar13 + 0x10;
              uVar51 = (ushort)(byte)uVar28 * sVar13 + 0x10;
              uVar52 = (ushort)(byte)((ulong)uVar28 >> 8) * sVar13 + 0x10;
              uVar53 = (ushort)(byte)((ulong)uVar28 >> 0x10) * sVar13 + 0x10;
              uVar54 = (ushort)(byte)((ulong)uVar28 >> 0x18) * sVar13 + 0x10;
              uVar55 = (ushort)(byte)((ulong)uVar28 >> 0x20) * sVar13 + 0x10;
              uVar56 = (ushort)(byte)((ulong)uVar28 >> 0x28) * sVar13 + 0x10;
              uVar57 = (ushort)(byte)((ulong)uVar28 >> 0x30) * sVar13 + 0x10;
              uVar58 = (ushort)(byte)((ulong)uVar28 >> 0x38) * sVar13 + 0x10;
              param_2[1] = CONCAT17((byte)(uVar34 >> 0x38) | (byte)(uVar50 >> 0xe) |
                                    (byte)((ushort)(((ushort)((ushort)(byte)((ulong)uVar40 >> 0x38)
                                                              * sVar13 + 0x10) >> 6) << 0xb) >> 8),
                                    CONCAT16((byte)(uVar34 >> 0x30) | (byte)(uVar50 >> 6),
                                             CONCAT15((byte)(uVar34 >> 0x28) | (byte)(uVar49 >> 0xe)
                                                      | (byte)((ushort)(((ushort)((ushort)(byte)((
                                                  ulong)uVar40 >> 0x30) * sVar13 + 0x10) >> 6) <<
                                                  0xb) >> 8),
                                                  CONCAT14((byte)(uVar34 >> 0x20) |
                                                           (byte)(uVar49 >> 6),
                                                           CONCAT13((byte)(uVar34 >> 0x18) |
                                                                    (byte)(uVar48 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)((
                                                  ushort)(byte)((ulong)uVar40 >> 0x28) * sVar13 +
                                                  0x10) >> 6) << 0xb) >> 8),
                                                  CONCAT12((byte)(uVar34 >> 0x10) |
                                                           (byte)(uVar48 >> 6),
                                                           CONCAT11((byte)(uVar34 >> 8) |
                                                                    (byte)(uVar47 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)((
                                                  ushort)(byte)((ulong)uVar40 >> 0x20) * sVar13 +
                                                  0x10) >> 6) << 0xb) >> 8),
                                                  (byte)uVar34 | (byte)(uVar47 >> 6))))))));
              *param_2 = CONCAT17((byte)(uVar32 >> 0x38) | (byte)(uVar46 >> 0xe) |
                                  (byte)((ushort)(((ushort)((ushort)(byte)((ulong)uVar40 >> 0x18) *
                                                            sVar13 + 0x10) >> 6) << 0xb) >> 8),
                                  CONCAT16((byte)(uVar32 >> 0x30) | (byte)(uVar46 >> 6),
                                           CONCAT15((byte)(uVar32 >> 0x28) | (byte)(uVar45 >> 0xe) |
                                                    (byte)((ushort)(((ushort)((ushort)(byte)((ulong)
                                                  uVar40 >> 0x10) * sVar13 + 0x10) >> 6) << 0xb) >>
                                                  8),CONCAT14((byte)(uVar32 >> 0x20) |
                                                              (byte)(uVar45 >> 6),
                                                              CONCAT13((byte)(uVar32 >> 0x18) |
                                                                       (byte)(uVar44 >> 0xe) |
                                                                       (byte)((ushort)(((ushort)((
                                                  ushort)(byte)(uVar3 >> 0x10) * sVar13 + 0x10) >> 6
                                                  ) << 0xb) >> 8),
                                                  CONCAT12((byte)(uVar32 >> 0x10) |
                                                           (byte)(uVar44 >> 6),
                                                           CONCAT11((byte)(uVar32 >> 8) |
                                                                    (byte)(uVar43 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)((short
                                                  )uVar3 * sVar13 + 0x10U) >> 6) << 0xb) >> 8),
                                                  (byte)uVar32 | (byte)(uVar43 >> 6))))))));
              param_2[3] = CONCAT17((byte)(uVar12 >> 0x38) | (byte)(uVar58 >> 0xe) |
                                    (byte)((ushort)(((ushort)((ushort)(byte)((ulong)uVar42 >> 0x38)
                                                              * sVar13 + 0x10) >> 6) << 0xb) >> 8),
                                    CONCAT16((byte)(uVar12 >> 0x30) | (byte)(uVar58 >> 6),
                                             CONCAT15((byte)(uVar12 >> 0x28) | (byte)(uVar57 >> 0xe)
                                                      | (byte)((ushort)(((ushort)((ushort)(byte)((
                                                  ulong)uVar42 >> 0x30) * sVar13 + 0x10) >> 6) <<
                                                  0xb) >> 8),
                                                  CONCAT14((byte)(uVar12 >> 0x20) |
                                                           (byte)(uVar57 >> 6),
                                                           CONCAT13((byte)(uVar12 >> 0x18) |
                                                                    (byte)(uVar56 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)((
                                                  ushort)(byte)((ulong)uVar42 >> 0x28) * sVar13 +
                                                  0x10) >> 6) << 0xb) >> 8),
                                                  CONCAT12((byte)(uVar12 >> 0x10) |
                                                           (byte)(uVar56 >> 6),
                                                           CONCAT11((byte)(uVar12 >> 8) |
                                                                    (byte)(uVar55 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)((
                                                  ushort)(byte)((ulong)uVar42 >> 0x20) * sVar13 +
                                                  0x10) >> 6) << 0xb) >> 8),
                                                  (byte)uVar12 | (byte)(uVar55 >> 6))))))));
              param_2[2] = CONCAT17((byte)(uVar22 >> 0x38) | (byte)(uVar54 >> 0xe) |
                                    (byte)((ushort)(((ushort)((ushort)(byte)((ulong)uVar42 >> 0x18)
                                                              * sVar13 + 0x10) >> 6) << 0xb) >> 8),
                                    CONCAT16((byte)(uVar22 >> 0x30) | (byte)(uVar54 >> 6),
                                             CONCAT15((byte)(uVar22 >> 0x28) | (byte)(uVar53 >> 0xe)
                                                      | (byte)((ushort)(((ushort)((ushort)(byte)((
                                                  ulong)uVar42 >> 0x10) * sVar13 + 0x10) >> 6) <<
                                                  0xb) >> 8),
                                                  CONCAT14((byte)(uVar22 >> 0x20) |
                                                           (byte)(uVar53 >> 6),
                                                           CONCAT13((byte)(uVar22 >> 0x18) |
                                                                    (byte)(uVar52 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)((
                                                  ushort)(byte)(uVar4 >> 0x10) * sVar13 + 0x10) >> 6
                                                  ) << 0xb) >> 8),
                                                  CONCAT12((byte)(uVar22 >> 0x10) |
                                                           (byte)(uVar52 >> 6),
                                                           CONCAT11((byte)(uVar22 >> 8) |
                                                                    (byte)(uVar51 >> 0xe) |
                                                                    (byte)((ushort)(((ushort)((short
                                                  )uVar4 * sVar13 + 0x10U) >> 6) << 0xb) >> 8),
                                                  (byte)uVar22 | (byte)(uVar51 >> 6))))))));
              param_2 = param_2 + 4;
              puVar21 = puVar21 + 2;
            } while (param_2 != puVar11);
            goto LAB_001409c0;
          }
        }
        render_scanline_color_convert_direct_16_1x_asm(local_1810,param_2);
      }
      else if (uVar44 == 1) {
        uVar25 = uVar25 & 0x1f;
        if (0x1f < uVar25 * 2) {
          lVar16 = local_8 - ___stack_chk_guard;
          if (lVar16 != 0) goto LAB_001412f4;
          __n = 0x400;
          iVar8 = 0xff;
          goto LAB_0014112c;
        }
        if ((uVar43 & 0x1f) == 0) goto LAB_001409b4;
        render_scanline_color_convert_shade_32_1x_asm
                  (local_1810,param_2,uVar25 * -2 + 0x20,uVar25 * 0x7e + 0x10);
      }
      else if (uVar44 == 2) {
        if (0x1f < (uVar25 & 0x1f) * 2) {
          lVar16 = local_8 - ___stack_chk_guard;
          if (lVar16 != 0) goto LAB_001412f4;
          __n = 0x400;
LAB_00141128:
          iVar8 = 0;
LAB_0014112c:
          memset(param_2,iVar8,__n);
          return;
        }
        if ((uVar43 & 0x1f) == 0) {
          render_scanline_color_convert_direct_32_1x_asm();
        }
        else {
          render_scanline_color_convert_shade_32_1x_asm
                    (local_1810,param_2,(uVar25 & 0x1f) * -2 + 0x20,0x10);
        }
      }
      else {
LAB_001409b4:
        render_scanline_color_convert_direct_32_1x_asm(local_1810,param_2);
      }
    }
    else if (iVar8 == 2) {
      pvVar2 = (void *)((long)param_2 + (ulong)(*(uint *)(param_1 + 8) >> 2) * 2);
      if (uVar44 == 1) {
        uVar25 = uVar25 & 0x1f;
        if (uVar25 * 2 < 0x20) {
          if ((uVar43 & 0x1f) == 0) goto LAB_00140e00;
          iVar9 = uVar25 * -2 + 0x20;
          iVar8 = uVar25 * 0x7e + 0x10;
          render_scanline_color_convert_shade_16_2x_c(local_1810,puVar11,param_2,iVar9,iVar8);
          render_scanline_color_convert_shade_16_2x_c(puVar21,puVar15,pvVar2,iVar9,iVar8);
        }
        else {
          memset(param_2,0xff,0x400);
          memset(pvVar2,0xff,0x400);
        }
      }
      else if (uVar44 == 2) {
        if ((uVar25 & 0x1f) * 2 < 0x20) {
          if ((uVar43 & 0x1f) == 0) goto LAB_00140e00;
          iVar8 = (uVar25 & 0x1f) * -2 + 0x20;
          render_scanline_color_convert_shade_16_2x_c(local_1810,puVar11,param_2,iVar8,0x10);
          render_scanline_color_convert_shade_16_2x_c(puVar21,puVar15,pvVar2,iVar8,0x10);
        }
        else {
          memset(param_2,0,0x400);
          memset(pvVar2,0,0x400);
        }
      }
      else {
LAB_00140e00:
        render_scanline_color_convert_direct_16_2x_asm(local_1810,puVar11,param_2);
        render_scanline_color_convert_direct_16_2x_asm(puVar21,puVar15,pvVar2);
      }
    }
    else {
      pvVar2 = (void *)((long)param_2 + (ulong)(*(uint *)(param_1 + 8) >> 3) * 4);
      if (uVar44 == 1) {
        uVar25 = uVar25 & 0x1f;
        if (uVar25 * 2 < 0x20) {
          if ((uVar43 & 0x1f) == 0) goto LAB_001406b0;
          iVar9 = uVar25 * -2 + 0x20;
          iVar8 = uVar25 * 0x7e + 0x10;
          render_scanline_color_convert_shade_32_2x_asm(local_1810,puVar11,param_2,iVar9,iVar8);
          render_scanline_color_convert_shade_32_2x_asm(puVar21,puVar15,pvVar2,iVar9,iVar8);
        }
        else {
          memset(param_2,0xff,0x800);
          memset(pvVar2,0xff,0x800);
        }
      }
      else if (uVar44 == 2) {
        if ((uVar25 & 0x1f) * 2 < 0x20) {
          if ((uVar43 & 0x1f) == 0) goto LAB_001406b0;
          iVar8 = (uVar25 & 0x1f) * -2 + 0x20;
          render_scanline_color_convert_shade_32_2x_asm(local_1810,puVar11,param_2,iVar8,0x10);
          render_scanline_color_convert_shade_32_2x_asm(puVar21,puVar15,pvVar2,iVar8,0x10);
        }
        else {
          memset(param_2,0,0x800);
          memset(pvVar2,0,0x800);
        }
      }
      else {
LAB_001406b0:
        render_scanline_color_convert_direct_32_2x_asm(local_1810,puVar11,param_2);
        render_scanline_color_convert_direct_32_2x_asm(puVar21,puVar15,pvVar2);
      }
    }
  }
LAB_001409c0:
  lVar16 = local_8 - ___stack_chk_guard;
  if (lVar16 == 0) {
    return;
  }
LAB_001412f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar16,0);
}


