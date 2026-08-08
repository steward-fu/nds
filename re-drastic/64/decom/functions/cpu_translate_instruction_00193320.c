/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_instruction
 * Address  : 00193320
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */

void cpu_translate_instruction(long param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  code *pcVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  
  puVar17 = *(uint **)(param_1 + 0x458);
  uVar9 = *puVar17;
  lVar15 = *(long *)(param_1 + 0x468);
  uVar14 = uVar9 >> 0x19 & 7;
  uVar6 = uVar9 >> 0x1c;
  if (uVar14 == 5) {
    if (uVar6 < 0xe) {
      puVar22 = *(uint **)(param_1 + 0x408);
      puVar17 = (uint *)((long)puVar22 + 3);
      if (-1 < (long)puVar22) {
        puVar17 = puVar22;
      }
      *puVar22 = (-(int)((long)puVar17 >> 2) & 0x7ffffU) << 5 | uVar6 ^ 1 | 0x54000000;
      *(uint **)(param_1 + 0x408) = puVar22 + 1;
      uVar14 = *(uint *)(param_1 + 0x448);
      if (*(char *)(param_1 + 0x479) != '\0') {
LAB_00193a6c:
        uVar14 = uVar14 | 1;
        goto LAB_00193a70;
      }
LAB_00193a48:
      if ((uVar9 >> 0x18 & 1) != 0) goto LAB_00193a78;
    }
    else {
      uVar14 = *(uint *)(param_1 + 0x448);
      puVar22 = (uint *)0x0;
      if (*(char *)(param_1 + 0x479) != '\0') goto LAB_00193a6c;
LAB_00193a70:
      if (uVar6 != 0xf) goto LAB_00193a48;
LAB_00193a78:
      cpu_translate_set_imm32_isra_0(param_1 + 0x408,0x1b,uVar14);
    }
    cpu_translate_direct_link(param_1);
joined_r0x001958e4:
    if (puVar22 == (uint *)0x0) {
      return;
    }
  }
  else {
    if (5 < uVar14) {
      if (uVar14 == 6) {
        lVar15 = *(long *)(lVar15 + 0x2250);
        if (0xd < uVar6) {
          if (lVar15 != 0) {
            return;
          }
          cpu_translate_raise_exception(param_1,1,5);
          return;
        }
        puVar22 = *(uint **)(param_1 + 0x408);
        puVar17 = (uint *)((long)puVar22 + 3);
        if (-1 < (long)puVar22) {
          puVar17 = puVar22;
        }
        uVar9 = 0x20;
        uVar14 = (-(int)((long)puVar17 >> 2) & 0x7ffffU) << 5 | uVar6 ^ 1 | 0x54000000;
        *puVar22 = uVar14;
        *(uint **)(param_1 + 0x408) = puVar22 + 1;
        if (lVar15 == 0) {
          cpu_translate_raise_exception(param_1,1,5);
          uVar14 = *puVar22;
          uVar9 = ((uint)(*(long *)(param_1 + 0x408) - (long)puVar22 >> 2) & 0x7ffff) << 5;
        }
        goto LAB_00193544;
      }
      puVar22 = (uint *)0x0;
      if (uVar6 < 0xe) {
        puVar22 = *(uint **)(param_1 + 0x408);
        puVar17 = (uint *)((long)puVar22 + 3);
        if (-1 < (long)puVar22) {
          puVar17 = puVar22;
        }
        *puVar22 = (-(int)((long)puVar17 >> 2) & 0x7ffffU) << 5 | uVar6 ^ 1 | 0x54000000;
        *(uint **)(param_1 + 0x408) = puVar22 + 1;
      }
      if ((uVar9 >> 0x18 & 1) == 0) {
        if (*(long *)(lVar15 + 0x2250) == 0) {
LAB_00193ac8:
          cpu_translate_raise_exception(param_1,1,5);
        }
        else if ((uVar9 >> 4 & 1) != 0) {
          if ((uVar9 & 0xe00000) != 0 || (uVar9 >> 8 & 0xf) != 0xf) goto LAB_00193ac8;
          uVar26 = uVar9 >> 5 & 7;
          uVar6 = uVar9 >> 0xc & 0xf;
          uVar5 = uVar9 >> 0x10 & 0xf;
          uVar14 = uVar9 & 0xf;
          if ((uVar9 >> 0x14 & 1) == 0) {
            iVar8 = uVar6 + 0xd;
            if (uVar6 == 0xf) {
              iVar8 = 0;
            }
            if (uVar5 == 7) {
              if ((uVar14 == 0 && uVar26 == 4) || (uVar14 == 8 && uVar26 == 2)) {
                cpu_translate_set_imm32_isra_0
                          (param_1 + 0x408,0,
                           (uint)*(byte *)(param_1 + 0x479) | *(uint *)(param_1 + 0x448));
                cpu_translate_set_imm32_isra_0(param_1 + 0x408,1);
                puVar10 = *(undefined4 **)(param_1 + 0x408);
                *puVar10 = 0xb9211381;
                lVar2 = (long)block_halt + -(long)(puVar10 + 1);
                lVar15 = -(long)(puVar10 + 1) + 0x18f657;
                if (-1 < lVar2) {
                  lVar15 = lVar2;
                }
                puVar10[1] = (uint)lVar15 >> 2 & 0x3ffffff | 0x14000000;
                *(undefined4 **)(param_1 + 0x408) = puVar10 + 2;
              }
            }
            else if (uVar5 == 9) {
              if (uVar14 == 1) {
                if (uVar26 == 0) {
                  puVar23 = *(uint **)(param_1 + 0x408);
                  puVar17 = puVar23;
                  if (iVar8 != 1) {
                    puVar17 = puVar23 + 1;
                    *puVar23 = iVar8 << 0x10 | 0x2a0003e1;
                    *(uint **)(param_1 + 0x408) = puVar17;
                  }
                  uVar14 = (uint)(((long)arm64_update_coprocessor_dtcm_control - (long)puVar17) / 4)
                  ;
                  goto LAB_00194658;
                }
                if (uVar26 == 1) {
                  puVar23 = *(uint **)(param_1 + 0x408);
                  puVar17 = puVar23;
                  if (iVar8 != 1) {
                    puVar17 = puVar23 + 1;
                    *puVar23 = iVar8 << 0x10 | 0x2a0003e1;
                    *(uint **)(param_1 + 0x408) = puVar17;
                  }
                  *puVar17 = (uint)(((long)arm64_update_coprocessor_itcm_control - (long)puVar17) /
                                   4) & 0x3ffffff | 0x94000000;
                  *(uint **)(param_1 + 0x408) = puVar17 + 1;
                }
              }
            }
            else if ((uVar5 == 1) && ((uVar26 | uVar14) == 0)) {
              puVar23 = *(uint **)(param_1 + 0x408);
              puVar17 = puVar23;
              if (iVar8 != 1) {
                puVar17 = puVar23 + 1;
                *puVar23 = iVar8 << 0x10 | 0x2a0003e1;
                *(uint **)(param_1 + 0x408) = puVar17;
              }
              lVar2 = (long)arm64_update_coprocessor_control + -(long)puVar17;
              lVar15 = -(long)puVar17 + 0x18f67b;
              if (-1 < lVar2) {
                lVar15 = lVar2;
              }
              uVar14 = (uint)lVar15 >> 2;
LAB_00194658:
              *puVar17 = uVar14 & 0x3ffffff | 0x94000000;
              *(uint **)(param_1 + 0x408) = puVar17 + 1;
              cpu_translate_store_pc_metadata(param_1,*(undefined4 *)(param_1 + 0x448));
            }
          }
          else {
            uVar9 = uVar6 + 0xd;
            if (uVar6 == 0xf) {
              uVar9 = 0;
            }
            if (uVar5 == 1) {
              uVar6 = uVar9 | uVar9 << 5;
              uVar5 = 0x1400;
              puVar17 = *(uint **)(param_1 + 0x408);
              if ((uVar26 | uVar14) == 0) goto LAB_00194f64;
            }
            else if (uVar5 == 9) {
              puVar17 = *(uint **)(param_1 + 0x408);
              if (uVar14 == 1) {
                if (uVar26 == 0) {
                  uVar6 = uVar9 | uVar9 << 5;
                  uVar5 = 0x1800;
                }
                else {
                  if (uVar26 != 1) goto LAB_001934c4;
                  uVar6 = uVar9 | uVar9 << 5;
                  uVar5 = 0x1c00;
                }
LAB_00194f64:
                *puVar17 = uVar9 | 0xf9512b80;
                puVar17[1] = uVar6 | uVar5 | 0xb9400000;
                *(uint **)(param_1 + 0x408) = puVar17 + 2;
                goto joined_r0x001958e4;
              }
            }
            else {
              if ((uVar5 == 0) && (uVar14 == 0)) {
                lVar15 = param_1 + 0x408;
                if (uVar26 == 1) {
                  cpu_translate_set_imm32_isra_0(lVar15,uVar9,0xf0d2112);
                }
                else if (uVar26 == 2) {
                  cpu_translate_set_imm32_isra_0(lVar15,uVar9,0x140180);
                }
                else {
                  cpu_translate_set_imm32_isra_0(lVar15,uVar9,0x41009561);
                }
                goto joined_r0x001958e4;
              }
              puVar17 = *(uint **)(param_1 + 0x408);
            }
LAB_001934c4:
            *puVar17 = uVar9 | 0x2a1f03e0;
            *(uint **)(param_1 + 0x408) = puVar17 + 1;
          }
        }
      }
      else {
        cpu_translate_raise_exception(param_1,2,3);
      }
      goto joined_r0x001958e4;
    }
    if ((uVar9 >> 0x1b & 1) == 0) {
      if ((uVar9 >> 0x19 & 6) == 0) {
        if (uVar14 != 1) goto LAB_00193674;
        puVar22 = (uint *)0x0;
        if (uVar6 < 0xe) {
          puVar22 = *(uint **)(param_1 + 0x408);
          puVar17 = (uint *)((long)puVar22 + 3);
          if (-1 < (long)puVar22) {
            puVar17 = puVar22;
          }
          *puVar22 = (-(int)((long)puVar17 >> 2) & 0x7ffffU) << 5 | uVar6 ^ 1 | 0x54000000;
          *(uint **)(param_1 + 0x408) = puVar22 + 1;
        }
        if (((uVar9 >> 0x17 & 3) == 2) && ((uVar9 >> 0x14 & 1) == 0)) {
          if ((uVar9 >> 0xc & 0xf) != 0xf) goto LAB_00193ac8;
          uVar14 = uVar9 >> 8 & 0xf;
          cpu_translate_set_imm32_isra_0
                    (param_1 + 0x408,0,
                     (uVar9 & 0xff) << (ulong)((0x10 - uVar14) * 2 & 0x1f) |
                     (uVar9 & 0xff) >> (ulong)(uVar14 * 2));
          cpu_translate_msr_op(param_1,uVar9);
        }
        else {
          cpu_translate_alu_op_imm(param_1,uVar9);
        }
      }
      else {
        puVar22 = (uint *)0x0;
        if (uVar6 < 0xe) {
          puVar22 = *(uint **)(param_1 + 0x408);
          puVar23 = (uint *)((long)puVar22 + 3);
          if (-1 < (long)puVar22) {
            puVar23 = puVar22;
          }
          *puVar22 = (-(int)((long)puVar23 >> 2) & 0x7ffffU) << 5 | uVar6 ^ 1 | 0x54000000;
          *(uint **)(param_1 + 0x408) = puVar22 + 1;
        }
        uVar14 = uVar9 >> 0x16 & 1;
        if ((uVar9 >> 0x19 & 1) == 0) {
          uVar6 = uVar9 & 0xfff;
          uVar20 = 0;
        }
        else {
          if ((uVar9 >> 4 & 1) != 0) {
            if (*(char *)(param_1 + 0x479) == '\0') goto LAB_00193ac8;
            lVar15 = param_1 + 0x408;
            if ((uVar9 >> 0x10 & 1) == 0) {
              cpu_translate_set_imm32_isra_0
                        (lVar15,0x1b,
                         puVar17[1] + (int)((long)((ulong)(uVar9 >> 5) << 0x35) >> 0x35) * 0x1000,
                         uVar14);
            }
            else {
              cpu_translate_set_imm32_isra_0(lVar15,0x1b,*(uint *)(param_1 + 0x448) | 1,uVar14);
              cpu_translate_set_imm32_isra_0(lVar15,0x1b,*(uint *)(param_1 + 0x448) | 1);
              puVar17 = *(uint **)(param_1 + 0x408);
              *puVar17 = (uVar9 >> 5 & 0x7ff) << 0xb | 0x11000360;
              *(uint **)(param_1 + 0x408) = puVar17 + 1;
              lVar2 = (long)block_indirect_branch + -(long)(puVar17 + 2);
              lVar15 = -(long)(puVar17 + 2) + 0x18cb3f;
              if (-1 < lVar2) {
                lVar15 = lVar2;
              }
              uVar14 = 0x32000000;
              if ((uVar9 >> 0x11 & 1) == 0) {
                uVar14 = 0x123e7400;
              }
              puVar17[1] = uVar14;
              puVar17[2] = (uint)lVar15 >> 2 & 0x3ffffff | 0x14000000;
              *(uint **)(param_1 + 0x408) = puVar17 + 3;
            }
            goto joined_r0x001958e4;
          }
          uVar20 = 2;
          uVar6 = 0;
        }
        cpu_translate_memory_op(param_1,uVar9,uVar9 >> 0x14 & 1,uVar14,0,0,0,uVar20,uVar6);
      }
      goto joined_r0x001958e4;
    }
    if (uVar14 != 4) {
LAB_00193674:
      puVar22 = (uint *)0x0;
      if (uVar6 < 0xe) {
        puVar22 = *(uint **)(param_1 + 0x408);
        puVar23 = (uint *)((long)puVar22 + 3);
        if (-1 < (long)puVar22) {
          puVar23 = puVar22;
        }
        *puVar22 = (-(int)((long)puVar23 >> 2) & 0x7ffffU) << 5 | uVar6 ^ 1 | 0x54000000;
        *(uint **)(param_1 + 0x408) = puVar22 + 1;
      }
      if ((uVar9 & 0x90) == 0x90) {
        if ((uVar9 & 0x60) == 0) {
          uVar14 = uVar9 & 0x1000000;
          if ((uVar9 >> 0x18 & 1) == 0) {
            uVar6 = uVar9 & 0xf;
            uVar26 = uVar9 >> 0x10 & 0xf;
            uVar1 = uVar9 >> 0xc & 0xf;
            uVar27 = uVar9 >> 8 & 0xf;
            uVar18 = uVar9 >> 0x14 & 1;
            uVar5 = uVar9 & 0x800000;
            if ((uVar9 >> 0x17 & 1) == 0) {
              iVar8 = uVar6 + 0xd;
              if (uVar6 == 0xf) {
                iVar8 = cpu_translate_map_src_reg_part_0(param_1,0);
              }
              iVar7 = uVar27 + 0xd;
              if (uVar27 == 0xf) {
                iVar7 = cpu_translate_map_src_reg_part_0(param_1,1);
              }
              uVar14 = uVar26 + 0xd;
              if (uVar26 == 0xf) {
                uVar14 = 0;
              }
              uVar6 = uVar18;
              if ((*(byte *)(*(long *)(param_1 + 0x458) + 0x19) & 3) == 0) {
                uVar6 = 0;
              }
              if (uVar6 != 0) {
                puVar10 = *(undefined4 **)(param_1 + 0x408);
                uVar5 = 1;
                *puVar10 = 0xd53b4203;
                *(undefined4 **)(param_1 + 0x408) = puVar10 + 1;
              }
              if ((uVar9 >> 0x15 & 1) == 0) {
                puVar13 = (undefined8 *)(*(uint **)(param_1 + 0x408) + 1);
                **(uint **)(param_1 + 0x408) = uVar14 | iVar8 << 5 | iVar7 << 0x10 | 0x1b007c00U;
                *(undefined8 **)(param_1 + 0x408) = puVar13;
              }
              else {
                iVar4 = uVar1 + 0xd;
                if (uVar1 == 0xf) {
                  iVar4 = cpu_translate_map_src_reg_part_0(param_1,2);
                }
                puVar13 = (undefined8 *)(*(uint **)(param_1 + 0x408) + 1);
                **(uint **)(param_1 + 0x408) =
                     iVar8 << 5 | iVar4 << 10 | uVar14 | iVar7 << 0x10 | 0x1b000000;
                *(undefined8 **)(param_1 + 0x408) = puVar13;
              }
              puVar11 = puVar13;
              if (uVar18 != 0) {
                puVar11 = (undefined8 *)((long)puVar13 + 4);
                *(uint *)puVar13 = uVar14 << 5 | uVar14 << 0x10 | uVar14 | 0x6a000000;
                *(undefined8 **)(param_1 + 0x408) = puVar11;
              }
              if (uVar5 != 0) {
                *puVar11 = 0x33007460d53b4200;
                *(undefined4 *)(puVar11 + 1) = 0xd51b4200;
                *(long *)(param_1 + 0x408) = (long)puVar11 + 0xc;
              }
            }
            else {
              iVar8 = uVar6 + 0xd;
              if (uVar6 == 0xf) {
                iVar8 = cpu_translate_map_src_reg_part_0(param_1,0);
              }
              iVar7 = uVar27 + 0xd;
              if (uVar27 == 0xf) {
                iVar7 = cpu_translate_map_src_reg_part_0(param_1,1);
              }
              uVar6 = uVar18;
              if ((*(byte *)(*(long *)(param_1 + 0x458) + 0x19) & 3) == 0) {
                uVar6 = 0;
              }
              if (uVar6 != 0) {
                puVar10 = *(undefined4 **)(param_1 + 0x408);
                uVar14 = 1;
                *puVar10 = 0xd53b4204;
                *(undefined4 **)(param_1 + 0x408) = puVar10 + 1;
              }
              if ((uVar9 >> 0x15 & 1) == 0) {
                uVar6 = uVar1 + 0xd;
                if (uVar1 == 0xf) {
                  uVar6 = 2;
                }
                uVar1 = iVar8 << 5 | iVar7 << 0x10 | uVar6;
                uVar5 = uVar26 + 0xd;
                if (uVar26 == 0xf) {
                  uVar5 = 3;
                }
                uVar26 = uVar1 | 0x9b207c00;
                if ((uVar9 & 0x400000) == 0) {
                  uVar26 = uVar1 | 0x9ba07c00;
                }
                puVar17 = *(uint **)(param_1 + 0x408) + 1;
                **(uint **)(param_1 + 0x408) = uVar26;
              }
              else {
                uVar6 = uVar1 + 0xd;
                if (uVar1 == 0xf) {
                  uVar6 = cpu_translate_map_src_reg_part_0(param_1,2);
                }
                uVar5 = uVar26 + 0xd;
                if (uVar26 == 0xf) {
                  uVar5 = cpu_translate_map_src_reg_part_0(param_1,3);
                }
                puVar23 = *(uint **)(param_1 + 0x408);
                uVar1 = iVar8 << 5 | iVar7 << 0x10 | uVar6 | uVar6 << 10;
                *puVar23 = uVar6 | uVar5 << 5 | 0xb3607c00;
                uVar26 = uVar1 | 0x9b200000;
                if ((uVar9 & 0x400000) == 0) {
                  uVar26 = uVar1 | 0x9ba00000;
                }
                puVar17 = puVar23 + 2;
                *(uint **)(param_1 + 0x408) = puVar23 + 1;
                puVar23[1] = uVar26;
              }
              puVar13 = (undefined8 *)(puVar17 + 1);
              *puVar17 = uVar6 << 5 | uVar5 | 0xd360fc00;
              *(undefined8 **)(param_1 + 0x408) = puVar13;
              if (uVar18 != 0) {
                puVar17[1] = uVar6 << 5 | uVar6 << 0x10 | uVar6 | 0xea000000;
                puVar13 = (undefined8 *)(puVar17 + 2);
                *(undefined8 **)(param_1 + 0x408) = puVar13;
              }
              if (uVar14 != 0) {
                *puVar13 = 0x33007480d53b4200;
                *(undefined4 *)(puVar13 + 1) = 0xd51b4200;
                *(long *)(param_1 + 0x408) = (long)puVar13 + 0xc;
              }
            }
          }
          else {
            uVar14 = uVar9 >> 0x15 & 0xf;
            if (uVar14 == 8) {
              uVar6 = uVar9 >> 0x10 & 0xf;
              uVar14 = uVar9 & 0xf;
              iVar8 = uVar6 + 0xd;
              uVar9 = uVar9 >> 0xc & 0xf;
              if (uVar6 == 0xf) {
                iVar8 = cpu_translate_map_src_reg_part_0(param_1,0);
              }
              iVar7 = uVar14 + 0xd;
              if (uVar14 == 0xf) {
                iVar7 = cpu_translate_map_src_reg_part_0(param_1,1);
              }
              puVar17 = *(uint **)(param_1 + 0x408);
              uVar5 = uVar9 + 0xd;
              if (uVar9 == 0xf) {
                uVar5 = 0;
              }
              puVar23 = puVar17 + 1;
              if (iVar8 != 0) {
                puVar23 = puVar17 + 2;
                *puVar17 = iVar8 << 0x10 | 0x2a0003e0;
                puVar17 = puVar17 + 1;
              }
              lVar2 = (long)arm64_load_memory32_unsigned + -(long)puVar17;
              lVar15 = -(long)puVar17 + 0x18cfe3;
              if (-1 < lVar2) {
                lVar15 = lVar2;
              }
              *puVar17 = (uint)lVar15 >> 2 & 0x3ffffff | 0x94000000;
              *(uint **)(param_1 + 0x408) = puVar23;
              pcVar16 = arm64_store_memory32_arm9;
              if (*(char *)(param_1 + 0x478) != '\x01') {
                pcVar16 = arm64_store_memory32_arm7;
              }
              if (uVar6 == uVar9 || uVar14 == uVar9) {
                puVar17[1] = 0xb8160120;
                *(uint **)(param_1 + 0x408) = puVar17 + 2;
                if (iVar8 != 0) {
                  puVar17[2] = iVar8 << 0x10 | 0x2a0003e0;
                  *(uint **)(param_1 + 0x408) = puVar17 + 3;
                }
                puVar23 = *(uint **)(param_1 + 0x408);
                puVar17 = puVar23;
                if (iVar7 != 1) {
                  puVar17 = puVar23 + 1;
                  *puVar23 = iVar7 << 0x10 | 0x2a0003e1;
                }
                lVar2 = (long)pcVar16 - (long)puVar17;
                lVar15 = lVar2 + 3;
                if (-1 < lVar2) {
                  lVar15 = lVar2;
                }
                uVar14 = (uint)lVar15;
                goto LAB_00194990;
              }
              if (uVar5 != 0) {
                puVar17[1] = uVar5 | 0x2a0003e0;
                *(uint **)(param_1 + 0x408) = puVar17 + 2;
              }
              puVar23 = *(uint **)(param_1 + 0x408);
              puVar17 = puVar23;
              if (iVar8 != 0) {
                puVar17 = puVar23 + 1;
                *puVar23 = iVar8 << 0x10 | 0x2a0003e0;
                *(uint **)(param_1 + 0x408) = puVar17;
              }
              puVar23 = puVar17;
              if (iVar7 != 1) {
                puVar23 = puVar17 + 1;
                *puVar17 = iVar7 << 0x10 | 0x2a0003e1;
              }
LAB_00194fe8:
              lVar2 = (long)pcVar16 - (long)puVar23;
              lVar15 = lVar2 + 3;
              if (-1 < lVar2) {
                lVar15 = lVar2;
              }
              *puVar23 = (uint)lVar15 >> 2 & 0x3ffffff | 0x94000000;
              *(uint **)(param_1 + 0x408) = puVar23 + 1;
              cpu_translate_store_pc_metadata(param_1,*(undefined4 *)(param_1 + 0x448));
            }
            else if (uVar14 == 10) {
              uVar6 = uVar9 >> 0x10 & 0xf;
              uVar14 = uVar9 & 0xf;
              iVar8 = uVar6 + 0xd;
              uVar9 = uVar9 >> 0xc & 0xf;
              if (uVar6 == 0xf) {
                iVar8 = cpu_translate_map_src_reg_part_0(param_1,0);
              }
              iVar7 = uVar14 + 0xd;
              if (uVar14 == 0xf) {
                iVar7 = cpu_translate_map_src_reg_part_0(param_1,1);
              }
              puVar17 = *(uint **)(param_1 + 0x408);
              uVar5 = uVar9 + 0xd;
              if (uVar9 == 0xf) {
                uVar5 = 0;
              }
              puVar23 = puVar17 + 1;
              if (iVar8 != 0) {
                puVar23 = puVar17 + 2;
                *puVar17 = iVar8 << 0x10 | 0x2a0003e0;
                puVar17 = puVar17 + 1;
              }
              lVar2 = (long)arm64_load_memory8_unsigned + -(long)puVar17;
              lVar15 = -(long)puVar17 + 0x18ce0b;
              if (-1 < lVar2) {
                lVar15 = lVar2;
              }
              *puVar17 = (uint)lVar15 >> 2 & 0x3ffffff | 0x94000000;
              *(uint **)(param_1 + 0x408) = puVar23;
              pcVar16 = arm64_store_memory8_arm9;
              if (*(char *)(param_1 + 0x478) != '\x01') {
                pcVar16 = arm64_store_memory8_arm7;
              }
              if (uVar6 != uVar9 && uVar14 != uVar9) {
                if (uVar5 != 0) {
                  puVar17[1] = uVar5 | 0x2a0003e0;
                  puVar23 = puVar17 + 2;
                  *(uint **)(param_1 + 0x408) = puVar23;
                }
                puVar17 = puVar23 + 1;
                puVar12 = puVar17;
                if (iVar8 != 0) {
                  puVar12 = puVar23 + 2;
                  *puVar23 = iVar8 << 0x10 | 0x2a0003e0;
                  *(uint **)(param_1 + 0x408) = puVar17;
                  puVar23 = puVar17;
                }
                if (iVar7 != 1) {
                  *puVar23 = iVar7 << 0x10 | 0x2a0003e1;
                  puVar23 = puVar12;
                }
                goto LAB_00194fe8;
              }
              puVar17[1] = 0xb8160120;
              puVar23 = puVar17 + 2;
              *(uint **)(param_1 + 0x408) = puVar23;
              if (iVar8 != 0) {
                puVar17[2] = iVar8 << 0x10 | 0x2a0003e0;
                puVar23 = puVar17 + 3;
                *(uint **)(param_1 + 0x408) = puVar23;
              }
              puVar17 = puVar23;
              if (iVar7 != 1) {
                puVar17 = puVar23 + 1;
                *puVar23 = iVar7 << 0x10 | 0x2a0003e1;
              }
              lVar2 = (long)pcVar16 - (long)puVar17;
              lVar15 = lVar2 + 3;
              if (-1 < lVar2) {
                lVar15 = lVar2;
              }
              uVar14 = (uint)lVar15;
LAB_00194990:
              *puVar17 = uVar14 >> 2 & 0x3ffffff | 0x94000000;
              *(uint **)(param_1 + 0x408) = puVar17 + 1;
              cpu_translate_store_pc_metadata(param_1,*(undefined4 *)(param_1 + 0x448));
              puVar17 = *(uint **)(param_1 + 0x408);
              *puVar17 = uVar5 | 0xb8560120;
              *(uint **)(param_1 + 0x408) = puVar17 + 1;
            }
            else {
              cpu_translate_raise_exception(param_1,1,5);
            }
          }
        }
        else {
          uVar6 = uVar9 >> 0x14 & 1;
          uVar5 = uVar9 >> 6 & 1;
          uVar14 = uVar9 >> 5 & 1;
          uVar26 = uVar5 & (uVar6 ^ 1);
          if ((uVar26 != 0) && (uVar6 = uVar14 ^ 1, (uVar9 >> 0xc & 1) != 0)) goto LAB_00193ac8;
          if ((uVar9 >> 0x16 & 1) == 0) {
            cpu_translate_memory_op(param_1,uVar9,uVar6,1,uVar14,uVar26,uVar5,1,0);
          }
          else {
            cpu_translate_memory_op
                      (param_1,uVar9,uVar6,1,uVar14,uVar26,uVar5,0,
                       (uVar9 >> 8 & 0xf) << 4 | uVar9 & 0xf);
          }
        }
      }
      else if (((uVar9 >> 0x17 & 3) == 2) && ((uVar9 >> 0x14 & 1) == 0)) {
        uVar14 = uVar9 & 0x80;
        if ((uVar9 >> 7 & 1) == 0) {
          if ((uVar9 >> 4 & 1) == 0) {
            if ((uVar9 >> 0x15 & 1) == 0) {
              cpu_translate_mrs_op(param_1,uVar9);
            }
            else {
              iVar8 = (uVar9 & 0xf) + 0xd;
              if (((uVar9 & 0xf) != 0xf) ||
                 (iVar8 = cpu_translate_map_src_reg_part_0(param_1,0), iVar8 != 0)) {
                puVar17 = *(uint **)(param_1 + 0x408);
                *puVar17 = iVar8 << 0x10 | 0x2a0003e0;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
              }
              cpu_translate_msr_op(param_1,uVar9);
            }
          }
          else {
            uVar5 = uVar9 >> 5 & 3;
            if (uVar5 == 2) {
              if (*(int *)(lVar15 + 0x210c) == 1) {
                uVar6 = uVar9 >> 0x10 & 0xf;
                uVar5 = uVar9 >> 0xc & 0xf;
                lVar15 = param_1 + 0x408;
                if ((uVar9 & 0xf) == 0xf) {
                  uVar26 = 0;
                  cpu_translate_set_imm32_isra_0(lVar15,0,puVar17[1]);
                }
                else {
                  uVar26 = (uVar9 & 0xf) + 0xd;
                }
                if (uVar6 == 0xf) {
                  cpu_translate_set_imm32_isra_0
                            (lVar15,1,*(undefined4 *)(*(long *)(param_1 + 0x458) + 4));
                  iVar8 = 1;
                }
                else {
                  iVar8 = uVar6 + 0xd;
                }
                if (uVar5 != 0xf) {
                  uVar14 = uVar5 + 0xd;
                }
                puVar23 = *(uint **)(param_1 + 0x408);
                puVar17 = puVar23;
                if ((uVar9 >> 0x16 & 1) != 0) {
                  puVar17 = puVar23 + 1;
                  *puVar23 = iVar8 << 0x10 | iVar8 << 5 | 0xb000001;
                  *(uint **)(param_1 + 0x408) = puVar17;
                }
                uVar5 = iVar8 << 0x10 | uVar26 << 5 | uVar14;
                uVar6 = uVar5 | 0xcb20c000;
                if ((uVar9 & 0x200000) == 0) {
                  uVar6 = uVar5 | 0x8b204000;
                }
                *puVar17 = uVar26 | uVar26 << 5 | 0x93407c00;
                puVar17[1] = uVar6;
                puVar17[2] = uVar14 << 5 | uVar14 << 0x10 | 0xcb20c000;
                puVar17[3] = -(int)((long)(puVar17 + 3) / 4 << 5) & 0xffffe0U | 0xb4000000;
                puVar17[4] = -(int)((long)(puVar17 + 4) / 4 << 5) & 0x7ffe0U | 0xb6f80000;
                *(uint **)(param_1 + 0x408) = puVar17 + 5;
                cpu_translate_set_imm32_isra_0(lVar15,uVar14,0x80000000);
                puVar23 = *(uint **)(param_1 + 0x408);
                *puVar23 = -(int)((long)puVar23 / 4) & 0x3ffffffU | 0x14000000;
                uVar9 = puVar17[4];
                *(uint **)(param_1 + 0x408) = puVar23 + 1;
                puVar17[4] = uVar9 & 0xfff80000 |
                             uVar9 & 0x1f |
                             ((uint)((long)(puVar23 + 1) - (long)(puVar17 + 4) >> 2) & 0x3fff) << 5;
                cpu_translate_set_imm32_isra_0(lVar15,uVar14,0x7fffffff);
                puVar13 = *(undefined8 **)(param_1 + 0x408);
                *puVar23 = (uint)((int)puVar13 - (int)puVar23) >> 2 & 0x3ffffff |
                           *puVar23 & 0xfc000000;
                *(undefined4 *)(puVar13 + 1) = 0xb923c381;
                *puVar13 = 0x32250021b963c381;
                uVar14 = puVar17[3];
                *(long *)(param_1 + 0x408) = (long)puVar13 + 0xc;
                puVar17[3] = uVar14 & 0xff000000 |
                             uVar14 & 0x1f |
                             ((uint)(((long)puVar13 + 0xc) - (long)(puVar17 + 3) >> 2) & 0x7ffff) <<
                             5;
              }
              else {
LAB_001953bc:
                cpu_translate_raise_exception(param_1,1,5);
              }
            }
            else if (uVar5 == 3) {
              if (*(int *)(lVar15 + 0x210c) != 1 || uVar6 != 0xe) goto LAB_001953bc;
              cpu_translate_raise_exception(param_1,3,4);
            }
            else {
              if (uVar5 == 1) {
                if (*(int *)(lVar15 + 0x210c) != 1) goto LAB_001953bc;
              }
              else if ((uVar9 >> 0x16 & 1) != 0) {
                if (*(int *)(lVar15 + 0x210c) == 1) {
                  uVar6 = uVar9 >> 0xc & 0xf;
                  if ((uVar9 & 0xf) == 0xf) {
                    iVar8 = 0;
                    cpu_translate_set_imm32_isra_0(param_1 + 0x408,0,puVar17[1]);
                  }
                  else {
                    iVar8 = (uVar9 & 0xf) + 0xd;
                  }
                  if (uVar6 == 0xf) {
                    cpu_translate_set_imm32_isra_0
                              (param_1 + 0x408,0,*(undefined4 *)(*(long *)(param_1 + 0x458) + 4));
                  }
                  else {
                    uVar14 = uVar6 + 0xd;
                  }
                  puVar17 = *(uint **)(param_1 + 0x408);
                  *puVar17 = uVar14 | iVar8 << 5 | 0x5ac01000;
                  *(uint **)(param_1 + 0x408) = puVar17 + 1;
                }
                goto joined_r0x001958e4;
              }
              cpu_translate_bx_op(param_1,uVar9);
            }
          }
        }
        else if (*(int *)(lVar15 + 0x210c) == 1) {
          uVar6 = uVar9 >> 0x15 & 3;
          uVar5 = uVar9 >> 0x10 & 0xf;
          uVar14 = uVar9 & 0xf;
          uVar26 = uVar9 >> 8 & 0xf;
          if (uVar6 == 1) {
            iVar8 = uVar14 + 0xd;
            if (uVar14 == 0xf) {
              iVar8 = 0;
              cpu_translate_set_imm32_isra_0(param_1 + 0x408,0,puVar17[1]);
            }
            if (uVar26 == 0xf) {
              cpu_translate_set_imm32_isra_0
                        (param_1 + 0x408,1,*(undefined4 *)(*(long *)(param_1 + 0x458) + 4));
              iVar7 = 1;
            }
            else {
              iVar7 = uVar26 + 0xd;
            }
            puVar17 = *(uint **)(param_1 + 0x408);
            uVar14 = uVar5 + 0xd;
            if (uVar5 == 0xf) {
              uVar14 = 0;
            }
            if ((uVar9 >> 6 & 1) == 0) {
              *puVar17 = iVar7 << 5 | 0x13003c00;
              *(uint **)(param_1 + 0x408) = puVar17 + 1;
            }
            else {
              *puVar17 = iVar7 << 5 | 0x13107c00;
              *(uint **)(param_1 + 0x408) = puVar17 + 1;
            }
            if ((uVar9 >> 5 & 1) == 0) {
              uVar9 = uVar9 >> 0xc & 0xf;
              iVar7 = uVar9 + 0xd;
              if (uVar9 == 0xf) {
                iVar7 = cpu_translate_map_src_reg_part_0(param_1,2);
              }
              puVar17 = *(uint **)(param_1 + 0x408);
              *puVar17 = iVar8 << 5 | 0x9b207c03;
              puVar17[1] = 0x9350bc63;
              puVar17[2] = uVar14 | iVar7 << 0x10 | 0x8b20c060;
              puVar17[3] = uVar14 << 5 | uVar14 << 0x10 | 0xcb20c000;
              *(undefined8 *)(puVar17 + 5) = 0x32250021b963c381;
              puVar17[7] = 0xb923c381;
              *(uint **)(param_1 + 0x408) = puVar17 + 8;
              puVar17[4] = ((uint)((long)(puVar17 + 8) - (long)(puVar17 + 4) >> 2) & 0x7ffff) << 5 |
                           0xb4000000;
            }
            else {
              puVar17[1] = uVar14 | iVar8 << 5 | 0x9b207c00;
              puVar17[2] = uVar14 | uVar14 << 5 | 0x9350bc00;
              *(uint **)(param_1 + 0x408) = puVar17 + 3;
            }
          }
          else if (uVar6 == 2) {
            iVar8 = uVar14 + 0xd;
            uVar6 = uVar9 >> 0xc & 0xf;
            if (uVar14 == 0xf) {
              iVar8 = cpu_translate_map_src_reg_part_0(param_1,0);
            }
            iVar7 = uVar26 + 0xd;
            if (uVar26 == 0xf) {
              iVar7 = cpu_translate_map_src_reg_part_0(param_1,1);
            }
            uVar14 = uVar6 + 0xd;
            if (uVar6 == 0xf) {
              uVar14 = 2;
            }
            uVar6 = uVar5 + 0xd;
            puVar17 = *(uint **)(param_1 + 0x408);
            if (uVar5 == 0xf) {
              uVar6 = 3;
            }
            uVar5 = iVar7 << 5 | 0x13117c01;
            if ((uVar9 & 0x40) == 0) {
              uVar5 = iVar7 << 5 | 0x13013c01;
            }
            *puVar17 = iVar8 << 5 | 0x13017c00;
            puVar17[1] = uVar5;
            puVar17[2] = uVar14 | uVar6 << 5 | 0xb3607c00;
            puVar17[3] = uVar14 | uVar14 << 10 | 0x9b210000;
            puVar17[4] = uVar6 | uVar14 << 5 | 0xd360fc00;
            *(uint **)(param_1 + 0x408) = puVar17 + 5;
          }
          else {
            iVar8 = uVar14 + 0xd;
            if (uVar14 == 0xf) {
              iVar8 = 0;
              cpu_translate_set_imm32_isra_0(param_1 + 0x408,0,puVar17[1]);
            }
            if (uVar26 == 0xf) {
              cpu_translate_set_imm32_isra_0
                        (param_1 + 0x408,1,*(undefined4 *)(*(long *)(param_1 + 0x458) + 4));
              iVar7 = 1;
            }
            else {
              iVar7 = uVar26 + 0xd;
            }
            puVar17 = *(uint **)(param_1 + 0x408);
            uVar14 = uVar5 + 0xd;
            if (uVar5 == 0xf) {
              uVar14 = 0;
            }
            if ((uVar9 >> 5 & 1) == 0) {
              *puVar17 = iVar8 << 5 | 0x13003c00;
              *(uint **)(param_1 + 0x408) = puVar17 + 1;
            }
            else {
              *puVar17 = iVar8 << 5 | 0x13107c00;
              *(uint **)(param_1 + 0x408) = puVar17 + 1;
            }
            if ((uVar9 >> 6 & 1) == 0) {
              puVar17[1] = iVar7 << 5 | 0x13003c01;
              *(uint **)(param_1 + 0x408) = puVar17 + 2;
            }
            else {
              puVar17[1] = iVar7 << 5 | 0x13107c01;
              *(uint **)(param_1 + 0x408) = puVar17 + 2;
            }
            if ((uVar9 >> 0x15 & 1) == 0) {
              uVar6 = uVar9 >> 0xc & 0xf;
              uVar9 = uVar6 + 0xd;
              if (uVar6 == 0xf) {
                uVar9 = cpu_translate_map_src_reg_part_0(param_1,2);
              }
              puVar17 = *(uint **)(param_1 + 0x408);
              *puVar17 = uVar9 | uVar9 << 5 | 0x13007c00;
              puVar17[1] = uVar14 | uVar9 << 10 | 0x9b210000;
              puVar17[2] = uVar14 << 5 | uVar14 << 0x10 | 0xcb20c000;
              *(undefined8 *)(puVar17 + 4) = 0x32250021b963c381;
              puVar17[6] = 0xb923c381;
              *(uint **)(param_1 + 0x408) = puVar17 + 7;
              puVar17[3] = ((uint)((long)(puVar17 + 7) - (long)(puVar17 + 3) >> 2) & 0x7ffff) << 5 |
                           0xb4000000;
            }
            else {
              puVar17[2] = uVar14 | 0x1b017c00;
              *(uint **)(param_1 + 0x408) = puVar17 + 3;
            }
          }
        }
        else {
          cpu_translate_raise_exception(param_1,1,5);
        }
      }
      else {
        uVar26 = uVar9 >> 0x15;
        uVar14 = uVar9 & 0xf;
        uVar6 = uVar26 & 0xf;
        iVar8 = uVar14 + 0xd;
        uVar1 = uVar9 >> 0xc & 0xf;
        uVar5 = uVar9 >> 5 & 3;
        iVar7 = 0xff;
        if (((uVar26 & 0xd) != 0xd) &&
           (uVar27 = uVar9 >> 0x10 & 0xf, iVar7 = uVar27 + 0xd, uVar27 == 0xf)) {
          cpu_translate_set_imm32_isra_0(param_1 + 0x408,0,puVar17[1]);
          iVar7 = 0;
        }
        uVar27 = 0xff;
        uVar18 = 0;
        if (uVar6 - 8 < 4) {
LAB_00193894:
          uVar19 = uVar18;
          if (uVar6 != 9 && (uVar26 & 0xe) != 0) {
            uVar21 = 1;
            uVar18 = 0;
            bVar3 = false;
            if (3 < uVar6 - 0xc) goto LAB_001938c0;
          }
          if ((*(byte *)(*(long *)(param_1 + 0x458) + 0x19) & 3) == 0) {
            bVar3 = false;
            uVar21 = 1;
            uVar18 = 0;
          }
          else {
            puVar10 = *(undefined4 **)(param_1 + 0x408);
            uVar21 = 1;
            *puVar10 = 0xd53b4202;
            uVar18 = 1;
            bVar3 = false;
            *(undefined4 **)(param_1 + 0x408) = puVar10 + 1;
          }
        }
        else {
          uVar27 = uVar1 + 0xd;
          uVar19 = 1;
          if (uVar1 == 0xf) {
            uVar27 = 0;
          }
          uVar18 = uVar9 >> 0x14 & 1;
          bVar3 = true;
          uVar21 = 0;
          if ((uVar9 >> 0x14 & 1) != 0) goto LAB_00193894;
        }
LAB_001938c0:
        uVar26 = uVar9 & 0x10;
        uVar25 = uVar27;
        if ((uVar9 >> 4 & 1) == 0) {
          uVar24 = uVar9 >> 7 & 0x1f;
          if ((uVar6 == 0xd && uVar1 == uVar14) && ((uVar5 | uVar24 | uVar21) == 0))
          goto joined_r0x001958e4;
          if (uVar14 == 0xf) {
            iVar8 = 1;
            cpu_translate_set_imm32_isra_0
                      (param_1 + 0x408,1,*(undefined4 *)(*(long *)(param_1 + 0x458) + 4));
          }
          puVar17 = *(uint **)(param_1 + 0x408);
          if (uVar18 == 0) {
LAB_00194084:
            if (uVar24 != 0 || uVar5 != 1) goto LAB_00193d00;
            iVar8 = 0x1f;
            uVar5 = uVar26;
LAB_0019409c:
            if (uVar6 == 8) {
              uVar6 = uVar24 << 10 | uVar5 << 0x16;
              uVar14 = iVar8 << 0x10;
              goto LAB_001952b8;
            }
            if (uVar6 < 9) {
              if (uVar6 == 4) {
                uVar5 = uVar5 << 0x16;
                uVar14 = iVar8 << 0x10;
                uVar24 = uVar24 << 10;
                goto LAB_00194c64;
              }
              if (uVar6 < 5) {
                if (uVar6 == 2) {
                  uVar5 = uVar5 << 0x16;
                  uVar14 = iVar8 << 0x10;
                  uVar24 = uVar24 << 10;
                  goto LAB_0019454c;
                }
                if (uVar6 == 3) {
                  if (uVar24 == 0) {
                    uVar14 = iVar8 << 5;
                    goto LAB_00193e2c;
                  }
                  goto LAB_0019425c;
                }
                if (uVar6 == 1) {
                  uVar5 = uVar5 << 0x16;
                  uVar14 = iVar8 << 0x10;
                  uVar24 = uVar24 << 10;
                  goto LAB_00193ee8;
                }
              }
              else {
                if (uVar6 == 6) {
                  puVar17 = *(uint **)(param_1 + 0x408);
                  uVar14 = iVar8 << 0x10;
                  puVar23 = puVar17;
                  if (uVar24 == 0) goto LAB_0019451c;
                  goto LAB_00195430;
                }
                if (uVar6 == 7) {
                  puVar17 = *(uint **)(param_1 + 0x408);
                  puVar23 = puVar17;
                  if (uVar24 == 0) {
                    uVar14 = iVar8 << 5;
                    goto LAB_0019399c;
                  }
                  goto LAB_00193d44;
                }
                if (uVar6 == 5) {
                  puVar17 = *(uint **)(param_1 + 0x408);
                  uVar14 = iVar8 << 0x10;
                  puVar23 = puVar17 + 1;
                  if (uVar24 == 0) goto LAB_00193eb4;
                  goto LAB_0019429c;
                }
              }
LAB_0019570c:
              uVar5 = uVar5 << 0x16;
              uVar14 = iVar8 << 0x10;
              uVar24 = uVar24 << 10;
LAB_00194b20:
              uVar24 = uVar27 | iVar7 << 5 | uVar5 | uVar14 | uVar24;
              if (uVar21 == 0) {
                *puVar17 = uVar24 | 0xa000000;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
              }
              else {
                *puVar17 = uVar24 | 0x6a000000;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
              }
            }
            else {
              if (uVar6 == 0xc) {
                uVar5 = uVar5 << 0x16;
                uVar14 = iVar8 << 0x10;
                uVar24 = uVar24 << 10;
                goto LAB_00194c14;
              }
              if (uVar6 < 0xd) {
                if (uVar6 == 10) {
                  uVar6 = uVar24 << 10 | uVar5 << 0x16;
                  uVar14 = iVar8 << 0x10;
                  goto LAB_001944f0;
                }
                if (uVar6 == 0xb) {
                  uVar6 = uVar24 << 10 | uVar5 << 0x16;
                  uVar14 = iVar8 << 0x10;
                  goto LAB_00193f5c;
                }
                if (uVar6 == 9) {
                  uVar6 = uVar24 << 10 | uVar5 << 0x16;
                  uVar14 = iVar8 << 0x10;
                  goto LAB_00193f94;
                }
                goto LAB_0019570c;
              }
              if (uVar6 == 0xe) {
                uVar5 = uVar5 << 0x16;
                uVar14 = iVar8 << 0x10;
                uVar24 = uVar24 << 10;
                goto LAB_00194584;
              }
              if (uVar6 == 0xf) {
                uVar25 = uVar27 | uVar24 << 10 | uVar5 << 0x16;
                uVar14 = iVar8 << 0x10;
                goto LAB_00193e74;
              }
              if (uVar6 != 0xd) goto LAB_0019570c;
              if ((uVar24 | uVar5) != 0) goto LAB_00194334;
LAB_00193f18:
              puVar17 = *(uint **)(param_1 + 0x408);
              uVar27 = iVar8 << 5 | iVar8 << 0x10 | uVar27;
              if (uVar21 == 0) {
                *puVar17 = uVar27 | 0xa000000;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
              }
              else {
                *puVar17 = uVar27 | 0x6a000000;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
              }
            }
          }
          else {
            if (uVar5 == 3) {
              if (uVar24 == 0) {
                *puVar17 = iVar8 << 5 | 0x33030002;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
                puVar17 = puVar17 + 1;
              }
              else {
                *puVar17 = (uVar24 - 1) * 0x400 | (uVar24 - 1) * 0x10000 | iVar8 << 5 | 0x53000003U;
                puVar17[1] = 0x33030062;
                puVar17 = puVar17 + 2;
                *(uint **)(param_1 + 0x408) = puVar17;
              }
            }
            else {
              if (uVar5 != 0) {
                if (uVar24 == 0) {
                  *puVar17 = iVar8 << 5 | 0x531f7c03;
                }
                else {
                  *puVar17 = (uVar24 - 1) * 0x400 | (uVar24 - 1) * 0x10000 |
                             iVar8 << 5 | 0x53000003U;
                }
                puVar17[1] = 0x33030062;
                puVar17 = puVar17 + 2;
                *(uint **)(param_1 + 0x408) = puVar17;
                goto LAB_00194084;
              }
              if (uVar24 != 0) {
                *puVar17 = (0x20 - uVar24) * 0x400 | (0x20 - uVar24) * 0x10000 |
                           iVar8 << 5 | 0x53000003U;
                puVar17[1] = 0x33030062;
                puVar17 = puVar17 + 2;
                *(uint **)(param_1 + 0x408) = puVar17;
              }
            }
LAB_00193d00:
            if (uVar24 == 0 && uVar5 == 2) {
              uVar24 = 0x1f;
              uVar5 = 2;
            }
            else {
              if (uVar5 != 3) goto LAB_0019409c;
              if (uVar24 == 0) {
                uVar14 = iVar8 << 5;
                iVar8 = 1;
                uVar24 = 1;
                *puVar17 = uVar14 | 0x123f7801;
                puVar17[1] = 0x1a1f0021;
                puVar17 = puVar17 + 2;
                *(uint **)(param_1 + 0x408) = puVar17;
              }
              bVar3 = (uVar6 - 2 & 0xfffffffd) == 0;
              if ((bVar3 || uVar6 == 10) || !bVar3 && uVar6 == 0xb) {
                *puVar17 = uVar24 << 10 | iVar8 << 0x10 | 0x2ac003e1;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
                goto LAB_00194a74;
              }
            }
            if (uVar6 == 8) {
              uVar6 = uVar24 << 10 | uVar5 << 0x16;
              uVar14 = iVar8 << 0x10;
              goto LAB_001952b8;
            }
            if (uVar6 < 9) {
              if (uVar6 == 4) {
                uVar5 = uVar5 << 0x16;
                uVar14 = iVar8 << 0x10;
                uVar24 = uVar24 << 10;
                goto LAB_00194c64;
              }
              if (uVar6 < 5) {
                if (uVar6 != 2) {
                  if (uVar6 != 3) {
                    if (uVar6 != 1) goto LAB_00195598;
                    uVar5 = uVar5 << 0x16;
                    uVar14 = iVar8 << 0x10;
                    uVar24 = uVar24 << 10;
                    goto LAB_00193ee8;
                  }
LAB_0019425c:
                  puVar17 = *(uint **)(param_1 + 0x408) + 1;
                  **(uint **)(param_1 + 0x408) =
                       uVar24 << 10 | uVar5 << 0x16 | iVar8 << 0x10 | 0x2a0003e1U;
                  uVar14 = 0x20;
                  *(uint **)(param_1 + 0x408) = puVar17;
                  goto LAB_00193e2c;
                }
                uVar5 = uVar5 << 0x16;
                uVar14 = iVar8 << 0x10;
                uVar24 = uVar24 << 10;
                goto LAB_0019454c;
              }
              if (uVar6 != 6) {
                if (uVar6 != 7) {
                  if (uVar6 == 5) {
                    puVar17 = *(uint **)(param_1 + 0x408);
                    uVar14 = iVar8 << 0x10;
                    puVar23 = puVar17 + 1;
LAB_0019429c:
                    *puVar17 = uVar14 | uVar24 << 10 | uVar5 << 0x16 | 0x2a0003e1;
                    uVar14 = 0x10000;
                    *(uint **)(param_1 + 0x408) = puVar23;
                    puVar17 = puVar23;
                    puVar23 = puVar23 + 1;
                    goto LAB_00193eb4;
                  }
LAB_00195598:
                  uVar5 = uVar5 << 0x16;
                  uVar14 = iVar8 << 0x10;
                  uVar24 = uVar24 << 10;
                  goto LAB_00194b20;
                }
                puVar23 = *(uint **)(param_1 + 0x408);
LAB_00193d44:
                puVar17 = puVar23 + 1;
                *puVar23 = uVar24 << 10 | uVar5 << 0x16 | iVar8 << 0x10 | 0x2a0003e1U;
                uVar14 = 0x20;
                *(uint **)(param_1 + 0x408) = puVar17;
                goto LAB_0019399c;
              }
              uVar14 = iVar8 << 0x10;
              puVar23 = *(uint **)(param_1 + 0x408);
LAB_00195430:
              puVar17 = puVar23 + 1;
              *puVar23 = uVar14 | uVar24 << 10 | uVar5 << 0x16 | 0x2a0003e1;
              uVar14 = 0x10000;
              *(uint **)(param_1 + 0x408) = puVar17;
LAB_0019451c:
              uVar14 = uVar27 | iVar7 << 5 | uVar14;
joined_r0x001939a8:
              if (uVar21 == 0) {
                *puVar17 = uVar14 | 0x5a000000;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
              }
              else {
                *puVar17 = uVar14 | 0x7a000000;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
              }
            }
            else {
              if (uVar6 == 0xc) {
                uVar5 = uVar5 << 0x16;
                uVar14 = iVar8 << 0x10;
                uVar24 = uVar24 << 10;
                goto LAB_00194c14;
              }
              if (uVar6 < 0xd) {
                if (uVar6 != 10) {
                  if (uVar6 != 0xb) {
                    if (uVar6 != 9) goto LAB_00195598;
                    uVar6 = uVar5 << 0x16 | uVar24 << 10;
                    uVar14 = iVar8 << 0x10;
                    goto LAB_00193f94;
                  }
                  uVar6 = uVar5 << 0x16 | uVar24 << 10;
                  uVar14 = iVar8 << 0x10;
                  goto LAB_00193f5c;
                }
                uVar6 = uVar24 << 10 | uVar5 << 0x16;
                uVar14 = iVar8 << 0x10;
                goto LAB_001944f0;
              }
              if (uVar6 != 0xe) {
                if (uVar6 != 0xf) {
                  if (uVar6 != 0xd) goto LAB_00195598;
LAB_00194334:
                  uVar14 = uVar24 << 10 | uVar5 << 0x16 | uVar27 | iVar8 << 0x10 | 0x2a0003e0;
                  puVar17 = *(uint **)(param_1 + 0x408);
                  goto joined_r0x00194354;
                }
                uVar25 = uVar5 << 0x16 | uVar24 << 10 | uVar27;
                uVar14 = iVar8 << 0x10;
                goto LAB_00193e74;
              }
              uVar5 = uVar5 << 0x16;
              uVar14 = iVar8 << 0x10;
              uVar24 = uVar24 << 10;
LAB_00194584:
              uVar24 = uVar27 | iVar7 << 5 | uVar5 | uVar14 | uVar24;
              if (uVar21 == 0) {
                *puVar17 = uVar24 | 0xa200000;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
              }
              else {
                *puVar17 = uVar24 | 0x6a200000;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
              }
            }
          }
        }
        else {
          uVar26 = uVar9 >> 8 & 0xf;
          iVar4 = uVar26 + 0xd;
          if (uVar26 == 0xf) {
            iVar4 = 4;
            cpu_translate_set_imm32_isra_0
                      (param_1 + 0x408,4,*(undefined4 *)(*(long *)(param_1 + 0x458) + 4));
          }
          if (uVar14 == 0xf) {
            cpu_translate_set_imm32_isra_0
                      (param_1 + 0x408,1,*(int *)(*(long *)(param_1 + 0x458) + 4) + 4);
            puVar23 = *(uint **)(param_1 + 0x408);
            if (uVar18 == 0) {
              uVar14 = 0x20;
              goto LAB_00194194;
            }
LAB_00193910:
            *puVar23 = iVar4 << 5 | 0x12001c03;
            *(uint **)(param_1 + 0x408) = puVar23 + 1;
            puVar17 = puVar23 + 2;
            if (uVar5 == 2) {
              pcVar16 = arm64_shift_reg_flags_asr;
            }
            else if (uVar5 == 3) {
              pcVar16 = arm64_shift_reg_flags_ror;
            }
            else if (uVar5 == 1) {
              pcVar16 = arm64_shift_reg_flags_lsr;
            }
            else {
              pcVar16 = arm64_shift_reg_flags_lsl;
            }
            lVar2 = (long)pcVar16 - (long)(puVar23 + 1);
            lVar15 = lVar2 + 3;
            if (-1 < lVar2) {
              lVar15 = lVar2;
            }
            uVar26 = 0;
            puVar23[1] = (uint)lVar15 >> 2 & 0x3ffffff | 0x94000000;
            *(uint **)(param_1 + 0x408) = puVar17;
LAB_00193970:
            if (uVar6 == 8) {
              uVar6 = 0;
              uVar14 = 0x10000;
LAB_001952b8:
              uVar14 = uVar14 | uVar6 | iVar7 << 5;
              if (uVar21 == 0) {
                *puVar17 = uVar14 | 0xa000003;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
              }
              else {
                *puVar17 = uVar14 | 0x6a000003;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
              }
            }
            else if (uVar6 < 9) {
              if (uVar6 == 4) {
                uVar24 = 0;
                uVar14 = 0x10000;
                uVar5 = 0;
LAB_00194c64:
                uVar24 = uVar27 | iVar7 << 5 | uVar5 | uVar14 | uVar24;
                if (uVar21 == 0) {
                  *puVar17 = uVar24 | 0xb000000;
                  *(uint **)(param_1 + 0x408) = puVar17 + 1;
                }
                else {
                  *puVar17 = uVar24 | 0x2b000000;
                  *(uint **)(param_1 + 0x408) = puVar17 + 1;
                }
              }
              else {
                if (4 < uVar6) {
                  if (uVar6 == 6) {
                    uVar14 = 0x10000;
                    goto LAB_0019451c;
                  }
                  uVar14 = 0x20;
                  if (uVar6 == 7) {
LAB_0019399c:
                    uVar14 = uVar27 | iVar7 << 0x10 | uVar14;
                    goto joined_r0x001939a8;
                  }
                  if (uVar6 == 5) {
                    uVar14 = 0x10000;
                    puVar23 = puVar17 + 1;
                    goto LAB_00193eb4;
                  }
LAB_00195a50:
                  uVar24 = 0;
                  uVar14 = 0x10000;
                  uVar5 = 0;
                  goto LAB_00194b20;
                }
                if (uVar6 == 2) {
                  uVar24 = 0;
                  uVar14 = 0x10000;
                  uVar5 = 0;
LAB_0019454c:
                  uVar24 = uVar27 | iVar7 << 5 | uVar5 | uVar14 | uVar24;
                  if (uVar21 == 0) {
                    *puVar17 = uVar24 | 0x4b000000;
                    *(uint **)(param_1 + 0x408) = puVar17 + 1;
                  }
                  else {
                    *puVar17 = uVar24 | 0x6b000000;
                    *(uint **)(param_1 + 0x408) = puVar17 + 1;
                  }
                }
                else {
                  uVar14 = 0x20;
                  if (uVar6 != 3) {
                    if (uVar6 == 1) {
                      uVar24 = 0;
                      uVar14 = 0x10000;
                      uVar5 = 0;
LAB_00193ee8:
                      uVar14 = uVar24 | iVar7 << 5 | uVar5 | uVar14 | uVar27 | 0x4a000000;
                      goto joined_r0x00194354;
                    }
                    goto LAB_00195a50;
                  }
LAB_00193e2c:
                  uVar14 = uVar27 | iVar7 << 0x10 | uVar14;
                  if (uVar21 == 0) {
                    *puVar17 = uVar14 | 0x4b000000;
                    *(uint **)(param_1 + 0x408) = puVar17 + 1;
                  }
                  else {
                    *puVar17 = uVar14 | 0x6b000000;
                    *(uint **)(param_1 + 0x408) = puVar17 + 1;
                  }
                }
              }
            }
            else if (uVar6 == 0xc) {
              uVar24 = 0;
              uVar14 = 0x10000;
              uVar5 = 0;
LAB_00194c14:
              uVar14 = uVar24 | iVar7 << 5 | uVar5 | uVar14 | uVar27 | 0x2a000000;
              if (uVar21 == 0) {
                *puVar17 = uVar14;
                *(uint **)(param_1 + 0x408) = puVar17 + 1;
              }
              else {
                *puVar17 = uVar14;
                puVar17[1] = uVar27 << 5 | uVar27 << 0x10 | uVar27 | 0x6a000000;
                *(uint **)(param_1 + 0x408) = puVar17 + 2;
              }
            }
            else if (uVar6 < 0xd) {
              if (uVar6 == 10) {
                uVar6 = 0;
                uVar14 = 0x10000;
LAB_001944f0:
                uVar14 = uVar14 | uVar6 | iVar7 << 5;
                if (uVar21 == 0) {
                  *puVar17 = uVar14 | 0x4b000003;
                  *(uint **)(param_1 + 0x408) = puVar17 + 1;
                }
                else {
                  *puVar17 = uVar14 | 0x6b000003;
                  *(uint **)(param_1 + 0x408) = puVar17 + 1;
                }
              }
              else if (uVar6 == 0xb) {
                uVar14 = 0x10000;
                uVar6 = 0;
LAB_00193f5c:
                uVar14 = uVar6 | uVar14 | iVar7 << 5;
                if (uVar21 == 0) {
                  *puVar17 = uVar14 | 0xb000003;
                  *(uint **)(param_1 + 0x408) = puVar17 + 1;
                }
                else {
                  *puVar17 = uVar14 | 0x2b000003;
                  *(uint **)(param_1 + 0x408) = puVar17 + 1;
                }
              }
              else {
                if (uVar6 != 9) goto LAB_00195a50;
                uVar14 = 0x10000;
                uVar6 = 0;
LAB_00193f94:
                uVar14 = iVar7 << 5 | 0x4a000003U | uVar6 | uVar14;
                if (uVar21 == 0) {
                  *puVar17 = uVar14;
                  *(uint **)(param_1 + 0x408) = puVar17 + 1;
                }
                else {
                  *puVar17 = uVar14;
                  puVar17[1] = 0x6a030063;
                  *(uint **)(param_1 + 0x408) = puVar17 + 2;
                }
              }
            }
            else {
              if (uVar6 == 0xe) {
                uVar24 = 0;
                uVar14 = 0x10000;
                uVar5 = 0;
                goto LAB_00194584;
              }
              if (uVar6 != 0xf) {
                if (uVar6 == 0xd) goto LAB_00193f10;
                goto LAB_00195a50;
              }
              uVar14 = 0x10000;
LAB_00193e74:
              uVar14 = uVar25 | uVar14 | 0x2a2003e0;
joined_r0x00194354:
              if (uVar21 == 0) {
                *puVar17 = uVar14;
                *(uint **)(param_1 + 0x408) = (uint *)((long)puVar17 + 4);
              }
              else {
                *puVar17 = uVar14;
                *(uint *)((long)puVar17 + 4) = uVar27 << 5 | uVar27 << 0x10 | uVar27 | 0x6a000000;
                *(uint **)(param_1 + 0x408) = (uint *)((long)puVar17 + 8);
              }
            }
          }
          else {
            puVar17 = *(uint **)(param_1 + 0x408);
            if (uVar18 != 0) {
              puVar23 = puVar17 + 1;
              *puVar17 = iVar8 * 0x10000 | 0x2a0003e1;
              goto LAB_00193910;
            }
            uVar14 = iVar8 * 0x20;
            puVar23 = puVar17;
LAB_00194194:
            uVar1 = uVar27;
            if (!bVar3 || uVar6 != 0xd) {
              uVar1 = 1;
            }
            uVar26 = (uint)(bVar3 && uVar6 == 0xd);
            uVar14 = uVar14 | iVar4 << 0x10 | uVar1;
            if (uVar5 != 2) {
              if (uVar5 == 3) {
                puVar17 = puVar23 + 1;
                *puVar23 = uVar14 | 0x1ac02c00;
                *(uint **)(param_1 + 0x408) = puVar17;
              }
              else {
                puVar12 = puVar23 + 2;
                puVar17 = (uint *)((long)puVar23 + 0xb);
                if (-1 < (long)puVar12) {
                  puVar17 = puVar12;
                }
                uVar24 = 0x2000;
                if (uVar5 == 1) {
                  uVar24 = 0x2400;
                }
                *puVar23 = iVar4 << 5 | 0x123b0803;
                puVar23[1] = uVar14 | uVar24 | 0x1ac00000;
                puVar23[2] = (-(int)((long)puVar17 >> 2) & 0x7ffffU) << 5 | 0x34000003;
                puVar17 = puVar23 + 3;
                *(uint **)(param_1 + 0x408) = puVar17;
                if (uVar1 != 0x1f) {
                  puVar23[3] = uVar1 | 0x2a1f03e0;
                  puVar17 = puVar23 + 4;
                  *(uint **)(param_1 + 0x408) = puVar17;
                }
                puVar23[2] = ((uint)((long)puVar17 - (long)puVar12 >> 2) & 0x7ffff) << 5 |
                             0x34000003;
              }
              goto LAB_00193970;
            }
            *puVar23 = iVar4 << 5 | 0x123b0803;
            puVar23[1] = uVar14 | 0x1ac02800;
            puVar23[3] = uVar1 | 0x131f7c20;
            *(uint **)(param_1 + 0x408) = puVar23 + 4;
            puVar23[2] = ((uint)((long)(puVar23 + 4) - (long)(puVar23 + 2) >> 2) & 0x7ffff) << 5 |
                         0x34000003;
LAB_00194a74:
            if (uVar6 == 8) {
              uVar6 = 0;
              uVar14 = 0x10000;
              puVar17 = *(uint **)(param_1 + 0x408);
              goto LAB_001952b8;
            }
            if (uVar6 < 9) {
              if (uVar6 == 4) {
                uVar24 = 0;
                uVar14 = 0x10000;
                uVar5 = 0;
                puVar17 = *(uint **)(param_1 + 0x408);
                goto LAB_00194c64;
              }
              if (uVar6 < 5) {
                if (uVar6 == 2) {
                  uVar24 = 0;
                  uVar14 = 0x10000;
                  uVar5 = 0;
                  puVar17 = *(uint **)(param_1 + 0x408);
                  goto LAB_0019454c;
                }
                if (uVar6 == 3) {
                  uVar14 = 0x20;
                  puVar17 = *(uint **)(param_1 + 0x408);
                  goto LAB_00193e2c;
                }
                if (uVar6 == 1) {
                  uVar24 = 0;
                  uVar14 = 0x10000;
                  uVar5 = 0;
                  puVar17 = *(uint **)(param_1 + 0x408);
                  goto LAB_00193ee8;
                }
LAB_00194b10:
                puVar17 = *(uint **)(param_1 + 0x408);
                uVar24 = 0;
                uVar14 = 0x10000;
                uVar5 = 0;
                goto LAB_00194b20;
              }
              if (uVar6 == 6) {
                uVar14 = 0x10000;
                puVar17 = *(uint **)(param_1 + 0x408);
                goto LAB_0019451c;
              }
              if (uVar6 == 7) {
                uVar14 = 0x20;
                puVar17 = *(uint **)(param_1 + 0x408);
                goto LAB_0019399c;
              }
              if (uVar6 != 5) goto LAB_00194b10;
              uVar14 = 0x10000;
              puVar17 = *(uint **)(param_1 + 0x408);
              puVar23 = *(uint **)(param_1 + 0x408) + 1;
LAB_00193eb4:
              uVar14 = uVar27 | iVar7 << 5 | uVar14;
              if (uVar21 == 0) {
                *puVar17 = uVar14 | 0x1a000000;
                *(uint **)(param_1 + 0x408) = puVar23;
              }
              else {
                *puVar17 = uVar14 | 0x3a000000;
                *(uint **)(param_1 + 0x408) = puVar23;
              }
            }
            else {
              if (uVar6 == 0xc) {
                uVar24 = 0;
                uVar14 = 0x10000;
                uVar5 = 0;
                puVar17 = *(uint **)(param_1 + 0x408);
                goto LAB_00194c14;
              }
              if (uVar6 < 0xd) {
                if (uVar6 != 10) {
                  if (uVar6 != 0xb) {
                    if (uVar6 != 9) goto LAB_00194b10;
                    uVar14 = 0x10000;
                    uVar6 = 0;
                    puVar17 = *(uint **)(param_1 + 0x408);
                    goto LAB_00193f94;
                  }
                  uVar14 = 0x10000;
                  uVar6 = 0;
                  puVar17 = *(uint **)(param_1 + 0x408);
                  goto LAB_00193f5c;
                }
                uVar6 = 0;
                uVar14 = 0x10000;
                puVar17 = *(uint **)(param_1 + 0x408);
                goto LAB_001944f0;
              }
              if (uVar6 == 0xe) {
                uVar24 = 0;
                uVar14 = 0x10000;
                uVar5 = 0;
                puVar17 = *(uint **)(param_1 + 0x408);
                goto LAB_00194584;
              }
              if (uVar6 == 0xf) {
                uVar14 = 0x10000;
                puVar17 = *(uint **)(param_1 + 0x408);
                goto LAB_00193e74;
              }
              if (uVar6 != 0xd) goto LAB_00194b10;
LAB_00193f10:
              if (uVar26 == 0) {
                iVar8 = 1;
                goto LAB_00193f18;
              }
            }
          }
        }
        if (uVar18 != 0) {
          puVar13 = *(undefined8 **)(param_1 + 0x408);
          *puVar13 = 0x33007441d53b4201;
          *(undefined4 *)(puVar13 + 1) = 0xd51b4201;
          *(long *)(param_1 + 0x408) = (long)puVar13 + 0xc;
        }
        if ((uVar19 != 0) && (*(short *)(*(long *)(param_1 + 0x458) + 0x14) < 0)) {
          puVar23 = *(uint **)(param_1 + 0x408);
          puVar17 = puVar23 + 1;
          if ((uVar9 >> 0x14 & 1) == 0) {
            if (*(char *)(param_1 + 0x479) == '\0') {
              *puVar23 = 0x123e7400;
              *(uint **)(param_1 + 0x408) = puVar17;
              puVar23 = puVar17;
            }
            else if (*(char *)(param_1 + 0x479) == '\x01') {
              *puVar23 = 0x32000000;
              *(uint **)(param_1 + 0x408) = puVar17;
              puVar23 = puVar17;
            }
            lVar2 = (long)block_indirect_branch + -(long)puVar23;
            lVar15 = -(long)puVar23 + 0x18cb3f;
            if (-1 < lVar2) {
              lVar15 = lVar2;
            }
            *puVar23 = (uint)lVar15 >> 2 & 0x3ffffff | 0x14000000;
            *(uint **)(param_1 + 0x408) = puVar23 + 1;
          }
          else {
            lVar2 = (long)arm64_spsr_restore + -(long)puVar23;
            lVar15 = -(long)puVar23 + 0x18f55b;
            if (-1 < lVar2) {
              lVar15 = lVar2;
            }
            *puVar23 = (uint)lVar15 >> 2 & 0x3ffffff | 0x14000000;
            *(uint **)(param_1 + 0x408) = puVar17;
          }
        }
      }
      goto joined_r0x001958e4;
    }
    if (0xd < uVar6) {
      cpu_translate_block_memory_op(param_1,uVar9);
      return;
    }
    puVar22 = *(uint **)(param_1 + 0x408);
    puVar17 = (uint *)((long)puVar22 + 3);
    if (-1 < (long)puVar22) {
      puVar17 = puVar22;
    }
    *puVar22 = (-(int)((long)puVar17 >> 2) & 0x7ffffU) << 5 | uVar6 ^ 1 | 0x54000000;
    *(uint **)(param_1 + 0x408) = puVar22 + 1;
    cpu_translate_block_memory_op(param_1,uVar9);
  }
  uVar14 = *puVar22;
  uVar9 = ((uint)(*(long *)(param_1 + 0x408) - (long)puVar22 >> 2) & 0x7ffff) << 5;
LAB_00193544:
  *puVar22 = uVar14 & 0xff00001f | uVar9;
  return;
}


