/*
 * Ghidra decompilation
 *
 * Function : remap_vram_body
 * Address  : 0012fb20
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void remap_vram_body(long *param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  uVar15 = (ulong)param_3;
  local_8 = ___stack_chk_guard;
  local_30 = 0x8000000080;
  uStack_28 = 0x8000000080;
  uVar14 = param_4 >> 3;
  local_20 = 0x1000000040;
  uStack_18 = 0x2000000010;
  local_10 = 0x10;
  uVar9 = (ulong)(uVar14 & 3);
  uVar16 = *(uint *)((long)&local_30 + uVar15 * 4);
  lVar10 = *param_1;
  if ((param_4 >> 7 & 1) == 0) {
    if (param_5 != 0) {
      uVar7 = *(uint *)(param_1 + uVar15 * 2 + 2);
      uVar13 = uVar7;
      if (uVar7 == 6) goto LAB_00130678;
      if (uVar7 < 7) {
        if (uVar7 == 4) {
          uVar13 = 6;
          goto LAB_00130568;
        }
        uVar13 = 6;
        if (uVar7 == 5) goto LAB_0012fce8;
        if (uVar7 < 2) goto LAB_0012fe54;
        if (uVar7 != 4) goto LAB_0012ff28;
      }
      else {
        if (uVar7 == 9) {
          uVar13 = 6;
          goto LAB_001305e4;
        }
        if (uVar7 < 10) {
          if (uVar7 == 7) {
            uVar13 = 6;
            goto LAB_0012fd68;
          }
          uVar13 = 6;
          if (uVar7 == 8) goto LAB_0012fe08;
        }
        else {
          uVar13 = 6;
          if (uVar7 == 10) goto LAB_0012fc90;
        }
      }
LAB_00130020:
      param_5 = 0;
    }
    uVar14 = 0xb;
    goto LAB_0012ffd0;
  }
  uVar13 = param_4 & 7;
  if (param_5 == 0) {
LAB_0012fba8:
    param_5 = (uint)uVar9;
    if (uVar13 != 3) {
      if (uVar13 < 4) {
        if (uVar13 == 1) {
          uVar13 = uVar16 >> 4;
          if (param_3 == 7) {
            map_vram_page_region_arm9(param_1,param_2,0x80,uVar13,uVar15);
            param_5 = 0x80;
            uVar14 = 10;
            map_vram_page_region_arm9(param_1,param_2,0x84,uVar13,uVar15);
            goto LAB_0012ffd0;
          }
          if (param_3 < 8) {
            if (param_3 < 4) {
              param_5 = param_5 << 3;
              goto LAB_0012ffb8;
            }
LAB_00130398:
            if (param_3 - 5 < 2) {
              param_5 = (uVar14 & 1) + (uVar14 & 2) * 2;
              goto LAB_001303b0;
            }
          }
          else if (param_3 == 8) {
            map_vram_page_region_arm9(param_1,param_2,0x82,uVar13,uVar15);
            map_vram_page_region_arm9(param_1,param_2,0x83,uVar13,uVar15);
            map_vram_page_region_arm9(param_1,param_2,0x86,uVar13,uVar15);
            param_5 = 0x82;
            uVar14 = 9;
            map_vram_page_region_arm9(param_1,param_2,0x87,uVar13,uVar15);
            goto LAB_0012ffd0;
          }
LAB_00130098:
          param_5 = 0;
        }
        else if (uVar13 == 2) {
          if (param_3 < 7) {
            if (4 < param_3) {
              param_5 = (uVar14 & 1) + 0x100 + (uVar14 & 2) * 2;
LAB_001303b0:
              map_vram_page_region_arm9(param_1,param_2,param_5,uVar16 >> 4,uVar15);
              uVar14 = 8;
              map_vram_page_region_arm9(param_1,param_2,param_5 + 3,uVar16 >> 4,uVar15);
              goto LAB_0012ffd0;
            }
            if (param_3 == 4) {
LAB_001306cc:
              param_5 = 0x100;
            }
            else {
              if (1 < param_3) {
                param_5 = (uVar14 & 1) * 8;
                unmap_memory_page_region
                          (*(undefined8 *)(lVar10 + 0xfba90),(param_5 + 0x1800) * 0x4000,
                           uVar16 << 10);
                uVar14 = param_5;
                do {
                  uVar9 = (ulong)uVar14;
                  lVar10 = uVar9 * 2;
                  uVar14 = uVar14 + 1;
                  param_1[uVar9 + 0x43a] = param_2;
                  *(ushort *)((long)param_1 + lVar10 + 0x2e4c) =
                       (ushort)(1 << (ulong)(param_3 & 0x1f)) |
                       *(ushort *)((long)param_1 + lVar10 + 0x2e4c);
                  param_2 = param_2 + 0x20000;
                } while (param_5 + (uVar16 >> 7) != uVar14);
                uVar14 = 7;
                goto LAB_0012ffd0;
              }
              param_5 = ((uVar14 & 1) + 0x20) * 8;
            }
          }
          else {
            if (param_3 == 7) {
              lVar12 = 0x84358;
              lVar10 = 0x2150;
              lVar11 = 0x2e2c;
              param_5 = 0;
              uVar14 = 1;
              goto LAB_001300f0;
            }
            if (param_3 != 8) goto LAB_00130098;
LAB_0012fc30:
            param_5 = 0x180;
          }
        }
        else {
          if (uVar13 != 0) goto LAB_0012ffb0;
          if (param_3 < 7) {
            if (param_3 < 5) {
              if (param_3 == 4) {
LAB_00130778:
                param_5 = 0x220;
              }
              else {
                param_5 = (param_3 + 0x40) * 8;
              }
            }
            else {
              param_5 = param_3 + 0x21f;
            }
          }
          else {
            param_5 = 0x226;
            if ((param_3 != 7) && (param_5 = 0x228, param_3 != 8)) {
              param_5 = 0;
            }
          }
        }
      }
      else {
        if (uVar13 == 5) {
          if (param_3 < 7) {
            if (4 < param_3) {
              lVar10 = 0x2170;
              lVar11 = 0x2e34;
              lVar12 = 0;
              uVar14 = 2;
              goto LAB_00130290;
            }
          }
          else if (1 < param_3 - 7) goto LAB_0012ffb0;
          goto LAB_001300c8;
        }
        if (uVar13 == 6) goto LAB_00130020;
        if (uVar13 == 4) {
          if (param_3 == 4) {
LAB_001306f0:
            uVar16 = uVar16 >> 1;
            lVar10 = 0x2130;
            lVar12 = 0x2f38;
            lVar11 = 0x2e24;
            param_5 = 0;
            uVar14 = 0;
LAB_001300f0:
            uVar13 = param_5;
            do {
              uVar9 = (ulong)uVar13;
              lVar1 = lVar11 + uVar9 * 2;
              uVar13 = uVar13 + 1;
              uVar5 = *(ushort *)((long)param_1 + lVar1);
              *(long *)((long)param_1 + lVar10 + uVar9 * 8) = param_2;
              *(ushort *)((long)param_1 + lVar1) = (ushort)(1 << (ulong)(param_3 & 0x1f)) | uVar5;
              param_2 = param_2 + 0x2000;
            } while (param_5 + (uVar16 >> 3) != uVar13);
            lVar10 = param_1[(ulong)uVar14 * 0x10284 + 0x5d3];
            *(undefined8 *)((long)param_1 + lVar12 + 0x18) =
                 *(undefined8 *)
                  (lVar10 + (ulong)((*(ushort *)((long)param_1 + lVar12 + 0x98) >> 0xd & 1) * 2) * 8
                  );
            *(undefined8 *)((long)param_1 + lVar12 + 200) =
                 *(undefined8 *)
                  (lVar10 + (ulong)((*(ushort *)((long)param_1 + lVar12 + 0x148) >> 0xd & 1) * 2 + 1
                                   ) * 8);
            *(undefined8 *)((long)param_1 + lVar12 + 0x178) = *(undefined8 *)(lVar10 + 0x10);
            *(undefined8 *)((long)param_1 + lVar12 + 0x228) = *(undefined8 *)(lVar10 + 0x18);
            goto LAB_0012ffd0;
          }
          if (param_3 < 5) {
            if (param_3 == 2) {
              map_vram_page_region_arm9(param_1,param_2,0x80,uVar16 >> 4,uVar15);
              param_5 = 0x80;
              uVar14 = 6;
              map_vram_page_region_arm9(param_1,param_2,0x88,uVar16 >> 4,uVar15);
              goto LAB_0012ffd0;
            }
            if (param_3 == 3) goto LAB_0012fc30;
            if (param_3 != 2) goto LAB_001300c8;
          }
          else {
            if (param_3 < 7) {
              param_5 = (uVar14 & 1) << 1;
              lVar10 = 0x2130;
              lVar12 = 0x2f38;
              lVar11 = 0x2e24;
              uVar14 = 0;
              goto LAB_001300f0;
            }
            param_5 = 0;
            uVar14 = 0xc;
            if (param_3 - 7 < 2) goto LAB_0012ffd0;
          }
        }
LAB_0012ffb0:
        param_5 = 0;
      }
LAB_0012ffb8:
      uVar14 = 6;
      map_vram_page_region_arm9(param_1,param_2,param_5,uVar16 >> 4,uVar15);
      goto LAB_0012ffd0;
    }
    if (param_3 < 7) {
      if (param_3 < 5) {
        if (param_3 != 4) {
          uVar13 = *(uint *)(param_1 + 0x8b10f);
          do {
            uVar14 = (int)uVar9 + 1;
            param_1[uVar9 + 0x430] = param_2;
            *(ushort *)((long)param_1 + uVar9 * 2 + 0x2e38) =
                 (ushort)(1 << (ulong)(param_3 & 0x1f)) |
                 *(ushort *)((long)param_1 + uVar9 * 2 + 0x2e38);
            param_2 = param_2 + 0x20000;
            uVar9 = (ulong)uVar14;
          } while (param_5 + (uVar16 >> 7) != uVar14);
          uVar7 = 0xff << (ulong)(param_3 << 3 & 0x1f);
          *(uint *)(param_1 + 0x6ad9a) =
               (uVar13 >> (ulong)(param_3 << 3 & 0x1f) & 0xff) << (ulong)(param_5 << 3) |
               *(uint *)(param_1 + 0x6ad9a);
          *(uint *)(param_1 + 0x6ad9b) = *(uint *)(param_1 + 0x6ad9b) | uVar7;
          uVar14 = 4;
          *(uint *)(param_1 + 0x8b10f) = uVar13 & (uVar7 ^ 0xffffffff);
          goto LAB_0012ffd0;
        }
LAB_001301d0:
        param_5 = 0;
      }
      else {
        param_5 = (uVar14 & 1) + (uVar14 & 2) * 2;
      }
      uVar13 = 1 << (ulong)(param_3 & 0x1f);
      uVar14 = param_5;
      do {
        uVar9 = (ulong)uVar14;
        lVar10 = uVar9 * 2;
        uVar14 = uVar14 + 1;
        param_1[uVar9 + 0x434] = param_2;
        *(ushort *)((long)param_1 + lVar10 + 0x2e40) =
             (ushort)uVar13 | *(ushort *)((long)param_1 + lVar10 + 0x2e40);
        param_2 = param_2 + 0x4000;
      } while (param_5 + (uVar16 >> 4) != uVar14);
      uVar14 = *(uint *)((long)param_1 + 0x45887c);
      if (param_3 == 4) {
        *(uint *)((long)param_1 + 0x356cd4) = uVar14 & 0xf | *(uint *)((long)param_1 + 0x356cd4);
        *(uint *)((long)param_1 + 0x45887c) = uVar14 & 0xffffff00;
        uVar14 = 5;
        *(undefined4 *)(param_1 + 0x6ad9c) = 0xf;
      }
      else {
        uVar7 = (param_3 - 4) * 8;
        *(uint *)((long)param_1 + 0x356cd4) =
             (uVar14 >> (ulong)(uVar7 & 0x1f) & 1) << (ulong)((param_5 & 3) << 3) |
             *(uint *)((long)param_1 + 0x356cd4);
        *(uint *)((long)param_1 + 0x45887c) = uVar14 & (0xff << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU)
        ;
        uVar14 = 5;
        *(uint *)(param_1 + 0x6ad9c) = *(uint *)(param_1 + 0x6ad9c) | uVar13;
      }
      goto LAB_0012ffd0;
    }
    if (param_3 != 7) {
      if (param_3 == 8) {
        lVar10 = 0x2178;
        lVar11 = 0x2e36;
        lVar12 = 1;
        uVar14 = 3;
LAB_00130290:
        uVar9 = 0;
        do {
          lVar2 = lVar11 + uVar9 * 2;
          lVar1 = uVar9 * 8;
          uVar13 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar13;
          uVar5 = *(ushort *)((long)param_1 + lVar2);
          *(long *)((long)param_1 + lVar10 + lVar1) = param_2;
          *(ushort *)((long)param_1 + lVar2) = (ushort)(1 << (ulong)(param_3 & 0x1f)) | uVar5;
          param_2 = param_2 + 0x2000;
        } while (uVar16 >> 4 != uVar13);
        param_5 = 0;
        param_1[lVar12 * 0x10284 + 0x5d4] = param_1[lVar12 + 0x42e];
        uVar16 = uVar16 >> 1;
        goto LAB_0012ffd0;
      }
      goto LAB_0012ffb0;
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + uVar15 * 2 + 2);
    if (uVar7 == 6) {
LAB_00130678:
      unmap_vram_page_region_arm9
                (param_1,*(undefined4 *)(param_1 + uVar15 * 2 + 3),
                 *(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 4,uVar15);
      uVar9 = (ulong)uVar14 & 3;
      goto LAB_0012fba8;
    }
    if (6 < uVar7) {
      if (uVar7 == 9) {
LAB_001305e4:
        unmap_vram_page_region_arm9
                  (param_1,*(undefined4 *)(param_1 + uVar15 * 2 + 3),
                   *(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 4,uVar15);
        unmap_vram_page_region_arm9
                  (param_1,*(int *)(param_1 + uVar15 * 2 + 3) + 1,
                   *(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 4,uVar15);
        unmap_vram_page_region_arm9
                  (param_1,*(int *)(param_1 + uVar15 * 2 + 3) + 4,
                   *(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 4,uVar15);
        unmap_vram_page_region_arm9
                  (param_1,*(int *)(param_1 + uVar15 * 2 + 3) + 5,
                   *(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 4,uVar15);
        uVar9 = (ulong)uVar14 & 3;
      }
      else if (uVar7 < 10) {
        if (uVar7 == 7) {
LAB_0012fd68:
          unmap_memory_page_region
                    (*(undefined8 *)(lVar10 + 0xfba90),
                     (*(int *)(param_1 + uVar15 * 2 + 3) + 0x1800) * 0x4000,
                     *(int *)((long)param_1 + uVar15 * 0x10 + 0x1c) << 10);
          uVar7 = *(uint *)(param_1 + uVar15 * 2 + 3);
          uVar9 = (ulong)uVar14 & 3;
          lVar11 = *(long *)(lVar10 + 0x15068);
          uVar8 = uVar7 + (*(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 7);
          do {
            lVar12 = (ulong)uVar7 * 2;
            uVar4 = ~(1 << (ulong)(param_3 & 0x1f)) & 0xffffU &
                    (uint)*(ushort *)((long)param_1 + lVar12 + 0x2e4c);
            *(short *)((long)param_1 + lVar12 + 0x2e4c) = (short)uVar4;
            if (uVar4 == 0) {
              param_1[(ulong)uVar7 + 0x43a] = lVar11;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar8);
        }
        else if (uVar7 == 8) {
LAB_0012fe08:
          unmap_vram_page_region_arm9
                    (param_1,*(undefined4 *)(param_1 + uVar15 * 2 + 3),
                     *(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 4,uVar15);
          unmap_vram_page_region_arm9
                    (param_1,*(int *)(param_1 + uVar15 * 2 + 3) + 3,
                     *(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 4,uVar15);
          uVar9 = (ulong)uVar14 & 3;
        }
      }
      else if (uVar7 == 10) {
LAB_0012fc90:
        unmap_vram_page_region_arm9
                  (param_1,*(undefined4 *)(param_1 + uVar15 * 2 + 3),
                   *(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 4,uVar15);
        unmap_vram_page_region_arm9
                  (param_1,*(int *)(param_1 + uVar15 * 2 + 3) + 4,
                   *(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 4,uVar15);
        uVar9 = (ulong)uVar14 & 3;
      }
      goto LAB_0012fba8;
    }
    if (uVar7 == 4) {
LAB_00130568:
      uVar7 = *(uint *)(param_1 + uVar15 * 2 + 3);
      uVar8 = uVar7 + (*(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 7);
      do {
        lVar11 = (ulong)uVar7 * 2;
        uVar4 = ~(1 << (ulong)(param_3 & 0x1f)) & 0xffffU &
                (uint)*(ushort *)((long)param_1 + lVar11 + 0x2e38);
        *(short *)((long)param_1 + lVar11 + 0x2e38) = (short)uVar4;
        if (uVar4 == 0) {
          param_1[(ulong)uVar7 + 0x430] = 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar8);
      *(uint *)(param_1 + 0x6ad9b) =
           *(uint *)(param_1 + 0x6ad9b) & (0xff << (ulong)((param_3 & 3) << 3) ^ 0xffffffffU);
      goto LAB_0012fba8;
    }
    if (uVar7 != 5) {
      if (uVar7 < 2) {
LAB_0012fe54:
        uVar6 = (ulong)uVar7;
        uVar7 = *(uint *)(param_1 + uVar15 * 2 + 3);
        lVar11 = *(long *)(lVar10 + 0x15068);
        uVar8 = uVar7 + (*(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 3);
        do {
          lVar12 = uVar6 * 8 + 0x2e24 + (ulong)uVar7 * 2;
          uVar4 = ~(1 << (ulong)(param_3 & 0x1f)) & 0xffffU &
                  (uint)*(ushort *)((long)param_1 + lVar12);
          *(short *)((long)param_1 + lVar12) = (short)uVar4;
          if (uVar4 == 0) {
            param_1[(ulong)uVar7 + uVar6 * 4 + 0x426] = lVar11;
          }
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
        lVar11 = param_1[uVar6 * 0x10284 + 0x5d3];
        param_1[uVar6 * 0x10284 + 0x5ea] =
             *(long *)(lVar11 + (ulong)((*(ushort *)(param_1 + uVar6 * 0x10284 + 0x5fa) >> 0xd & 1)
                                       * 2) * 8);
        param_1[uVar6 * 0x10284 + 0x600] =
             *(long *)(lVar11 + (ulong)((*(ushort *)(param_1 + uVar6 * 0x10284 + 0x610) >> 0xd & 1)
                                        * 2 + 1) * 8);
        param_1[uVar6 * 0x10284 + 0x616] = *(long *)(lVar11 + 0x10);
        param_1[uVar6 * 0x10284 + 0x62c] = *(long *)(lVar11 + 0x18);
      }
      else if (uVar7 != 4) {
LAB_0012ff28:
        uVar8 = *(uint *)(param_1 + uVar15 * 2 + 3);
        uVar6 = (ulong)(uVar7 - 2);
        lVar11 = *(long *)(lVar10 + 0x15068);
        uVar7 = uVar8 + (*(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 3);
        do {
          lVar12 = ((ulong)uVar8 + uVar6 + 0x171a) * 2;
          uVar4 = ~(1 << (ulong)(param_3 & 0x1f)) & 0xffffU &
                  (uint)*(ushort *)((long)param_1 + lVar12);
          *(short *)((long)param_1 + lVar12) = (short)uVar4;
          if (uVar4 == 0) {
            param_1[(ulong)uVar8 + uVar6 + 0x42e] = lVar11;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar7);
        param_1[uVar6 * 0x10284 + 0x5d4] = 0;
      }
      goto LAB_0012fba8;
    }
LAB_0012fce8:
    uVar7 = *(uint *)(param_1 + uVar15 * 2 + 3);
    uVar4 = ~(1 << (ulong)(param_3 & 0x1f));
    uVar8 = uVar7 + (*(uint *)((long)param_1 + uVar15 * 0x10 + 0x1c) >> 4);
    do {
      lVar11 = (ulong)uVar7 * 2;
      uVar3 = uVar4 & 0xffff & (uint)*(ushort *)((long)param_1 + lVar11 + 0x2e40);
      *(short *)((long)param_1 + lVar11 + 0x2e40) = (short)uVar3;
      if (uVar3 == 0) {
        param_1[(ulong)uVar7 + 0x434] = 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar8);
    if (param_3 != 4) {
      *(uint *)(param_1 + 0x6ad9c) = *(uint *)(param_1 + 0x6ad9c) & uVar4;
      goto LAB_0012fba8;
    }
    *(undefined4 *)(param_1 + 0x6ad9c) = 0;
    if (uVar13 == 3) goto LAB_001301d0;
    if (uVar13 < 4) {
      if (uVar13 != 1) {
        if (uVar13 != 2) {
          if (uVar13 != 0) goto LAB_0012ffb0;
          goto LAB_00130778;
        }
        goto LAB_001306cc;
      }
      goto LAB_00130398;
    }
    if (uVar13 != 5) {
      if (uVar13 == 6) goto LAB_00130020;
      if (uVar13 == 4) goto LAB_001306f0;
      goto LAB_0012ffb0;
    }
  }
LAB_001300c8:
  param_5 = 0;
  uVar14 = 0xc;
LAB_0012ffd0:
  lVar10 = local_8 - ___stack_chk_guard;
  param_1[uVar15 * 2 + 3] = CONCAT44(uVar16,param_5);
  param_1[uVar15 * 2 + 2] = CONCAT44(param_4,uVar14);
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar10,0);
  }
  return;
}


