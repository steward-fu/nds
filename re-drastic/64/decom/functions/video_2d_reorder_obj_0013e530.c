/*
 * Ghidra decompilation
 *
 * Function : video_2d_reorder_obj
 * Address  : 0013e530
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void video_2d_reorder_obj(long *param_1)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  bool bVar10;
  ushort uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ushort *puVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  long *plVar26;
  long extraout_x9;
  long *extraout_x9_00;
  uint extraout_w10;
  uint uVar27;
  ushort uVar28;
  ushort uVar29;
  ulong extraout_x11;
  int iVar30;
  ulong uVar31;
  ulong extraout_x12;
  uint uVar32;
  uint extraout_w13;
  ulong uVar33;
  ulong extraout_x14;
  int iVar34;
  ulong uVar35;
  ulong extraout_x15;
  uint uVar36;
  uint extraout_w18;
  ulong uVar37;
  ushort *puVar38;
  ulong uVar39;
  uint uVar40;
  ulong uVar41;
  byte bVar42;
  int iVar43;
  ulong uVar44;
  uint local_70;
  uint local_4c;
  long local_48;
  long local_38;
  uint local_2c;
  byte local_18 [16];
  long local_8;
  
  uVar2 = *(uint *)(param_1 + 0x12);
  puVar38 = (ushort *)param_1[6];
  local_8 = ___stack_chk_guard;
  lVar15 = param_1[3];
  if ((uVar2 >> 4 & 1) == 0) {
    local_2c = 0xffffffdf;
    local_4c = 5;
  }
  else {
    local_4c = (uVar2 >> 0x14 & 3) + 5;
    local_2c = ~(1 << local_4c);
  }
  local_48 = 0x400000;
  iVar30 = 0x400000;
  if (*(char *)((long)param_1 + 0xb7) == '\x01') {
    iVar30 = 0x600000;
    local_48 = 0x600000;
  }
  local_38 = 0;
  if ((int)uVar2 < 0) {
    local_38 = param_1[5];
  }
  plVar1 = param_1 + 17000;
  memset(param_1 + 0x41f0,0,0x3c0);
  *plVar1 = 0;
  param_1[0x4269] = 0;
  param_1[0x426a] = 0;
  param_1[0x426b] = 0;
  param_1[0x426c] = 0;
  param_1[0x426d] = 0;
  param_1[0x426e] = 0;
  param_1[0x426f] = 0;
  param_1[0x4270] = 0;
  param_1[0x4271] = 0;
  param_1[0x4272] = 0;
  param_1[0x4273] = 0;
  param_1[0x4274] = 0;
  param_1[0x4275] = 0;
  param_1[0x4276] = 0;
  param_1[0x4277] = 0;
  param_1[0x4278] = 0;
  param_1[0x4279] = 0;
  param_1[0x427a] = 0;
  param_1[0x427b] = 0;
  param_1[0x427c] = 0;
  param_1[0x427d] = 0;
  param_1[0x427e] = 0;
  param_1[0x427f] = 0;
  param_1[0x4280] = 0;
  if ((uVar2 & 0x60) == 0x20) {
    uVar25 = 0;
    uVar27 = 0;
    uVar23 = 0;
    iVar34 = 0;
    puVar16 = puVar38;
    uVar28 = 0;
    do {
      uVar5 = *puVar16;
      uVar3 = puVar16[1];
      uVar36 = uVar5 & 0xff;
      uVar29 = uVar28;
      if (((uVar36 < 0xc0 && (uVar3 & 0x13f | uVar5 & 0x3f) == 0) && ((uVar5 & 0xff00) == 0xc00)) &&
         ((uVar3 & 0xfe00) == 0xc000)) {
        uVar5 = puVar16[2];
        if ((uVar5 & 0xf000) == 0xf000) {
          uVar36 = uVar36 >> 6;
          uVar18 = uVar3 >> 6 & 7;
          uVar32 = (uVar5 & 0x3ff) - (uVar36 << 8 | uVar18 << 3);
          uVar29 = uVar5 >> 10 & 3;
          if ((iVar34 == 0) ||
             (bVar12 = uVar29 == uVar28, bVar10 = uVar32 == uVar27, uVar32 = uVar27, uVar29 = uVar28
             , bVar12 && bVar10)) {
            uVar27 = (1 << (ulong)uVar18) << (ulong)(uVar36 << 2);
            if ((uVar27 & uVar25) == 0) {
              uVar25 = uVar25 | uVar27;
              local_18[uVar23] = (byte)iVar34;
              uVar23 = (ulong)((int)uVar23 + 1);
            }
            uVar27 = uVar32;
            if (uVar25 == 0xfff) {
              lVar22 = *param_1;
              uVar25 = 0xff;
              if ((*(int *)(lVar22 + 0x10) == 6) &&
                 (uVar25 = 0, iVar30 != *(int *)(lVar22 + 0x18) * 0x4000)) {
                uVar25 = 0xff;
              }
              if ((*(int *)(lVar22 + 0x20) == 6) && (iVar30 == *(int *)(lVar22 + 0x28) * 0x4000)) {
                uVar25 = 1;
              }
              if ((*(int *)(lVar22 + 0x30) == 6) && (iVar30 == *(int *)(lVar22 + 0x38) * 0x4000)) {
                uVar25 = 2;
                if (*(int *)(lVar22 + 0x40) == 6) {
                  uVar25 = (iVar30 == *(int *)(lVar22 + 0x48) * 0x4000) + 2;
                }
              }
              else if ((*(int *)(lVar22 + 0x40) == 6) &&
                      (iVar30 == *(int *)(lVar22 + 0x48) * 0x4000)) {
                uVar25 = 3;
              }
              else if (uVar25 == 0xff) break;
              iVar30 = (uVar32 & 0x1f) + (uVar32 >> 5) * 0x100;
              param_1[0x4281] = 0;
              if (((uint)(iVar30 * 8) < 0x4001) &&
                 ((0x3f << (ulong)((uint)(iVar30 * 0x10) >> 0xe & 0x1f) &
                  ((byte)polygon_sort_list_13776[lVar22 + (ulong)uVar25 + 0x6e200] ^ 0xffffffff)) ==
                  0)) {
                param_1[0x4281] =
                     *(long *)(lVar22 + ((ulong)uVar25 + 0x8b104) * 8) +
                     (ulong)(uint)(iVar30 * 0x18) * 2;
              }
              param_1[0x4280] = param_1[1] + local_48 + (ulong)(uint)(iVar30 * 0x10);
              *(char *)(param_1 + 0x4282) = (char)uVar29;
              goto LAB_0013e654;
            }
          }
        }
      }
      iVar34 = iVar34 + 1;
      puVar16 = puVar16 + 4;
      uVar28 = uVar29;
    } while (iVar34 != 0x80);
  }
  uVar23 = 0;
LAB_0013e654:
  uVar28 = 0xffff;
  local_70 = 0xffff;
  plVar26 = param_1 + 0x76;
  uVar39 = 0;
  uVar25 = 0;
  local_18[uVar23] = 0xff;
  uVar5 = 0xffff;
  do {
    while( true ) {
      uVar3 = *puVar38;
      uVar23 = (ulong)uVar3;
      uVar27 = (uint)uVar3;
      if (local_18[uVar39] != uVar25) break;
      uVar39 = (ulong)((int)uVar39 + 1);
joined_r0x0013e8a8:
      uVar25 = uVar25 + 1;
      plVar26 = plVar26 + 0xb;
      puVar38 = puVar38 + 4;
      if (uVar25 == 0x80) goto LAB_0013e8ac;
    }
    if ((uVar3 >> 0xe == 3) || ((uVar3 & 0x300) == 0x200)) goto joined_r0x0013e8a8;
    uVar29 = puVar38[1];
    uVar36 = uVar3 & 0xff;
    lVar22 = (ulong)((uint)(uVar3 >> 0xe) << 2 | (uint)(uVar29 >> 0xe)) * 2;
    uVar31 = (ulong)uVar36;
    uVar32 = (uint)(byte)(&DAT_0021def1)[lVar22] * 2;
    if ((uVar3 & 0x200) == 0) {
      uVar32 = (uint)(byte)(&DAT_0021def1)[lVar22];
    }
    uVar18 = (uint)uVar29;
    if (0xbf < uVar36) {
      if (0xff < uVar32 + uVar36) {
        uVar35 = (ulong)(byte)(&obj_size_table_13328)[lVar22];
        uVar19 = uVar18 & 0x1ff;
        uVar41 = (ulong)puVar38[2];
        goto joined_r0x0013ec04;
      }
      goto joined_r0x0013e8a8;
    }
    uVar35 = (ulong)(byte)(&obj_size_table_13328)[lVar22];
    uVar19 = uVar29 & 0x1ff;
    uVar4 = puVar38[2];
    uVar41 = (ulong)uVar4;
    if ((uVar36 | uVar19) == 0) {
      if ((uVar3 == uVar28 && uVar18 == local_70) && uVar4 == uVar5) goto joined_r0x0013e8a8;
      uVar33 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar37 = uVar35;
      uVar40 = 0;
      local_70 = uVar18;
      uVar28 = uVar3;
      if ((uVar3 & 0x200) != 0) goto LAB_0013e92c;
    }
    else {
joined_r0x0013ec04:
      uVar37 = uVar35;
      uVar20 = uVar36;
      uVar40 = uVar36;
      uVar4 = uVar5;
      if ((uVar3 & 0x200) != 0) {
LAB_0013e92c:
        uVar20 = uVar40;
        uVar37 = (ulong)(uint)((int)uVar35 * 2);
      }
      if ((0xff < uVar19) && (uVar5 = uVar4, (int)uVar37 + uVar19 < 0x200)) goto joined_r0x0013e8a8;
      uVar33 = (long)((ulong)(uVar19 << 7) << 0x30) >> 0x37;
    }
    uVar19 = (uint)uVar37;
    iVar30 = (int)uVar33;
    iVar34 = (int)uVar35;
    sVar9 = (short)uVar36;
    *(short *)(plVar26 + 3) = sVar9;
    *(undefined *)((long)plVar26 + 0x23) = 0;
    *(undefined *)((long)plVar26 + 0x24) = 0;
    uVar44 = uVar41 >> 10 & 3;
    uVar11 = uVar3 >> 10 & 3;
    uVar40 = (uint)uVar41;
    uVar36 = uVar19;
    uVar18 = uVar32;
    uVar5 = uVar4;
    if ((uVar3 >> 8 & 1) != 0) {
      uVar36 = (uint)(uVar37 >> 1);
      uVar18 = uVar32 >> 1;
      lVar22 = param_1[6] + ((ulong)(uVar29 >> 9) & 0x1f) * 0x20;
      sVar6 = *(short *)(lVar22 + 6);
      uVar3 = *(ushort *)(lVar22 + 0x16);
      uVar29 = *(ushort *)(lVar22 + 0xe);
      sVar7 = *(short *)(lVar22 + 0x1e);
      *(short *)((long)plVar26 + 0x1a) = sVar6;
      *(ushort *)((long)plVar26 + 0x1c) = uVar3;
      *(ushort *)((long)plVar26 + 0x1e) = uVar29;
      *(short *)(plVar26 + 4) = sVar7;
      iVar24 = (int)(short)uVar3;
      if ((sVar6 != 0x100) || (sVar7 != 0x100 || (uVar3 | uVar29) != 0)) {
        sVar7 = *(short *)(lVar22 + 0xe);
        *(short *)((long)plVar26 + 0x1e) = sVar7;
        iVar34 = uVar36 << 8;
        *(undefined2 *)(plVar26 + 4) = *(undefined2 *)(lVar22 + 0x1e);
        iVar8 = uVar18 << 8;
        if ((uVar3 & 0x200) == 0) {
          iVar21 = uVar19 << 8;
          iVar14 = iVar34;
          iVar43 = iVar8;
          iVar8 = uVar32 << 8;
        }
        else {
          iVar14 = iVar34 >> 1;
          iVar43 = iVar8 >> 1;
          iVar21 = iVar34;
        }
        iVar14 = iVar14 - (int)sVar6 * uVar36;
        iVar43 = iVar43 - iVar24 * uVar36;
        if (iVar30 + 7 < 0 != SCARRY4(iVar30,7)) {
          iVar14 = iVar14 + (int)sVar6 * (-iVar30 & 0xfffffff8U);
          iVar43 = iVar43 + iVar24 * (-iVar30 & 0xfffffff8U);
        }
        *(short *)(plVar26 + 2) = (short)iVar14;
        *(short *)((long)plVar26 + 0x12) = (short)iVar43;
        *(short *)(plVar26 + 3) = sVar9 + (short)uVar18;
        video_2d_obj_affine_setup_edges
                  (iVar14,(long)sVar6,iVar21 + -1,(long)sVar7,plVar26 + -6,plVar26 + -4,plVar26 + -5
                  );
        video_2d_obj_affine_setup_edges
                  (iVar43,iVar24,iVar8 + -1,(long)*(short *)(extraout_x9 + 0x20),extraout_x9 + -0x18
                   ,extraout_x9 + -8,extraout_x9 + -0x10);
        uVar20 = 8;
        plVar26 = extraout_x9_00;
        uVar23 = extraout_x11;
        uVar31 = extraout_x12;
        uVar33 = extraout_x14;
        uVar35 = extraout_x15;
        uVar18 = extraout_w13;
        uVar36 = extraout_w18;
        uVar25 = extraout_w10;
        goto LAB_0013e970;
      }
      if ((uVar3 & 0x200) == 0) {
        uVar20 = 0;
        uVar18 = uVar32;
        uVar36 = uVar19;
        goto LAB_0013e970;
      }
      *(short *)(plVar26 + 3) = sVar9 + (short)(uVar32 >> 2);
      uVar20 = (uVar32 >> 2) + uVar20;
      uVar31 = (ulong)uVar20;
      uVar32 = (uint)(short)((short)uVar33 + (short)(uVar19 >> 2));
      uVar33 = (ulong)uVar32;
      if ((((0xbf < uVar20) && (uVar20 + uVar18 < 0x100)) || (0xff < (int)uVar32)) ||
         ((int)(uVar32 + uVar36) < 1)) goto joined_r0x0013e8a8;
      uVar20 = 0;
      uVar19 = 0;
      uVar32 = uVar36;
      if (uVar11 != 3) goto LAB_0013e97c;
LAB_0013e818:
      uVar13 = uVar40 & 0x3ff;
      if (uVar40 >> 0xc != 0) {
        *(char *)((long)plVar26 + 0x23) = (char)(uVar40 >> 0xc) * '\x02' + '\x01';
        if ((uVar2 & 0x40) == 0) {
          if ((uVar2 & 0x20) == 0) {
            uVar13 = ((uVar40 & 0xf) + (uVar13 >> 4) * 0x80) * 0x10;
            *(undefined2 *)((long)plVar26 + 0x14) = 0x100;
          }
          else {
            uVar13 = ((uVar40 & 0x1f) + (uVar13 >> 5) * 0x100) * 0x10;
            *(undefined2 *)((long)plVar26 + 0x14) = 0x200;
          }
        }
        else {
          uVar13 = uVar13 << (ulong)((uVar2 >> 0x16 & 1) + 7);
          *(short *)((long)plVar26 + 0x14) = (short)iVar34 * 2;
        }
        uVar36 = uVar32;
        if (uVar20 >> 3 == 0) {
          iVar30 = (int)uVar33;
          if ((uVar20 >> 2 & 1) == 0) {
            if (iVar30 + 7 < 0 != SCARRY4(iVar30,7)) {
              uVar36 = -iVar30 & 0xfffffff8;
              uVar32 = uVar32 - uVar36;
              uVar33 = (ulong)(uint)(int)(short)((short)uVar36 + (short)uVar33);
              uVar13 = uVar13 + uVar36 * 2;
            }
          }
          else {
            uVar13 = uVar13 + (iVar34 + -1) * 2;
            if (iVar30 + 7 < 0 != SCARRY4(iVar30,7)) {
              uVar36 = -iVar30 & 0xfffffff8;
              uVar32 = uVar32 - uVar36;
              uVar33 = (ulong)(uint)(int)(short)((short)uVar36 + (short)uVar33);
              uVar13 = uVar13 + uVar36 * -2;
            }
          }
          uVar36 = 0x107U - (int)uVar33 & 0xfffffff8;
          if ((int)uVar33 + uVar32 < 0x101) {
            uVar36 = uVar32;
          }
        }
        bVar17 = (byte)uVar20 | 2;
        bVar42 = 2;
LAB_0013e894:
        if (uVar36 != 0) goto LAB_0013ea30;
      }
      goto joined_r0x0013e8a8;
    }
    uVar20 = (uVar29 >> 0xc & 1) << 2;
    if ((uVar29 >> 0xd & 1) != 0) {
      *(short *)(plVar26 + 3) = sVar9 + -1 + (short)uVar32;
      *(undefined *)((long)plVar26 + 0x24) = 1;
    }
LAB_0013e970:
    uVar27 = (uint)uVar23;
    iVar34 = (int)uVar35;
    uVar19 = uVar20;
    uVar32 = uVar36;
    if (uVar11 == 3) goto LAB_0013e818;
LAB_0013e97c:
    uVar27 = (uint)uVar23;
    uVar23 = uVar23 >> 0xd;
    bVar17 = (byte)uVar23 & 1 | (byte)uVar19;
    uVar32 = (uVar40 & 0x3ff) << (ulong)local_4c;
    if (uVar11 == 1) {
      *(undefined *)((long)plVar26 + 0x23) = 0x80;
      bVar42 = 1;
    }
    else {
      uVar20 = (uint)uVar44;
      if (uVar11 == 2) {
        uVar20 = 4;
      }
      uVar44 = (ulong)uVar20;
      bVar42 = 0;
    }
    uVar20 = uVar19 & 4;
    if ((uVar2 & 0x10) == 0) {
      *(undefined2 *)((long)plVar26 + 0x14) = 0x400;
      iVar30 = ((uint)(uVar35 >> 3) & 0x1fffffff) - 1;
      if ((uVar23 & 1) == 0) {
        uVar13 = uVar32 + iVar30 * 0x20;
        if (uVar20 == 0) {
          uVar13 = uVar32;
        }
      }
      else {
        uVar13 = (uVar32 & local_2c) + iVar30 * 0x40;
        if (uVar20 == 0) {
          uVar13 = uVar32 & local_2c;
        }
      }
    }
    else {
      uVar40 = (uint)(uVar35 >> 3);
      iVar30 = (uVar40 & 0x1fffffff) - 1;
      if ((uVar23 & 1) == 0) {
        uVar13 = uVar32 + iVar30 * 0x20;
        if (uVar20 == 0) {
          uVar13 = uVar32;
        }
        *(short *)((long)plVar26 + 0x14) = (short)((uVar40 & 0x7ff) << 5);
      }
      else {
        uVar13 = uVar32 + iVar30 * 0x40;
        if (uVar20 == 0) {
          uVar13 = uVar32;
        }
        *(short *)((long)plVar26 + 0x14) = (short)((uVar40 & 0x3ff) << 6);
      }
    }
    if (uVar19 >> 3 != 0) goto LAB_0013e894;
    iVar30 = (int)uVar33;
    if (iVar30 + 7 < 0 != SCARRY4(iVar30,7)) {
      uVar32 = -iVar30 & 0xfffffff8;
      iVar30 = uVar32 << 3;
      if ((uVar23 & 1) == 0) {
        iVar30 = uVar32 << 2;
      }
      uVar33 = (ulong)(uint)(int)(short)((short)uVar32 + (short)uVar33);
      uVar36 = uVar36 - uVar32;
      if (uVar20 != 0) {
        iVar30 = -iVar30;
      }
      uVar13 = uVar13 + iVar30;
    }
    if ((int)uVar33 + uVar36 < 0x101) goto LAB_0013e894;
    uVar36 = 0x107U - (int)uVar33 & 0xfffffff8;
LAB_0013ea30:
    lVar22 = param_1[1];
    *(short *)((long)plVar26 + 0x16) = (short)uVar33;
    plVar26[1] = lVar22 + local_48 + (ulong)uVar13;
    *(byte *)((long)plVar26 + 0x22) = bVar17;
    *(char *)((long)plVar26 + 0x25) = (char)uVar36;
    if ((uVar27 >> 0xd & 1) == 0) {
      *plVar26 = lVar15 + 0x200 + (uVar41 >> 0xc) * 0x20;
    }
    else {
      lVar22 = local_38 + (uVar41 >> 0xc) * 0x200;
      if (local_38 == 0) {
        lVar22 = lVar15 + 0x200;
      }
      *plVar26 = lVar22;
    }
    if (0xbf < (int)uVar31) {
      uVar31 = (ulong)((int)uVar31 - 0x100);
      *(short *)(plVar26 + 3) = *(short *)(plVar26 + 3) + -0x100;
    }
    iVar30 = (int)uVar31;
    do {
      uVar27 = (uint)uVar31 & 0xff;
      if (uVar27 < 0xc0) {
        lVar22 = uVar44 * 0xc0 + 0x20c00 + (uVar31 & 0xff);
        bVar17 = *(byte *)((long)param_1 + lVar22 + 0x380);
        *(char *)((long)param_1 + (ulong)bVar17 + uVar44 * 0x6000 + (ulong)uVar27 * 0x80 + 0x2f80) =
             (char)uVar25;
        *(byte *)((long)param_1 + lVar22 + 0x380) = bVar17 + 1;
        *(byte *)((long)plVar1 + (ulong)uVar27) = bVar42 | *(byte *)((long)plVar1 + (ulong)uVar27);
      }
      uVar27 = (uint)uVar31 + 1;
      uVar31 = (ulong)uVar27;
    } while (uVar27 != iVar30 + uVar18);
    uVar25 = uVar25 + 1;
    puVar38 = puVar38 + 4;
    plVar26 = plVar26 + 0xb;
  } while (uVar25 != 0x80);
LAB_0013e8ac:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


