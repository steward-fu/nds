/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_memory_op
 * Address  : 00190a00
 * Program  : drastic64
 */


void cpu_translate_memory_op
               (uint *param_1,ulong param_2,uint param_3,int param_4,int param_5,uint param_6,
               int param_7,uint param_8,int param_9)

{
  unkbyte9 *pVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  bool bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  code *pcVar20;
  long lVar21;
  uint uVar22;
  code *pcVar23;
  ulong uVar24;
  code *pcVar25;
  code *pcVar26;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  
  uVar24 = param_2 & 0xffffffff;
  uVar22 = (uint)(uVar24 >> 0x10) & 0xf;
  uVar9 = (uint)(uVar24 >> 0xc) & 0xf;
  if (((uint)(param_2 >> 0x1c) & 0xf) == 0xf) {
    return;
  }
  uVar18 = param_3 & 1;
  if (uVar22 != 0xf) {
    uVar18 = 0;
  }
  if (uVar18 == 0) {
    if (((((param_6 ^ 1) & (uint)(uVar22 == 0xd)) != 0) && (*(char *)(param_1 + 0x11e) == '\x01'))
       && (*(char *)(*(long *)(*(long *)(param_1 + 0x11a) + 0x2250) + 0x3c) != '\0')) {
      iVar7 = cpu_translate_setup_memory_address(param_1,param_2,param_8);
      if (param_3 == 0) {
        uVar22 = uVar9 + 0xd;
        if (uVar9 == 0xf) {
          uVar22 = cpu_translate_map_src_reg_part_0(param_1,2);
        }
        puVar16 = *(uint **)(param_1 + 0x102);
        if (param_5 == 0) {
          if (param_4 == 0) {
            uVar9 = 0xb8204940;
          }
          else {
            uVar9 = 0x38204940;
          }
        }
        else {
          uVar9 = 0x78204940;
        }
        *puVar16 = uVar22 | iVar7 << 0x10 | uVar9;
        *(uint **)(param_1 + 0x102) = puVar16 + 1;
        return;
      }
      puVar16 = *(uint **)(param_1 + 0x102);
      uVar22 = uVar9 + 0xd;
      if (uVar9 == 0xf) {
        uVar22 = 0;
      }
      uVar22 = uVar22 | iVar7 << 0x10;
      puVar19 = puVar16 + 1;
      if (param_5 == 0) {
        if (param_4 == 0) {
          *puVar16 = uVar22 | 0xb8604940;
          *(uint **)(param_1 + 0x102) = puVar19;
        }
        else if (param_7 == 0) {
          *puVar16 = uVar22 | 0x38604940;
          *(uint **)(param_1 + 0x102) = puVar19;
        }
        else {
          *puVar16 = uVar22 | 0x38e04940;
          *(uint **)(param_1 + 0x102) = puVar19;
        }
      }
      else if (param_7 == 0) {
        *puVar16 = uVar22 | 0x78604940;
        *(uint **)(param_1 + 0x102) = puVar19;
      }
      else {
        *puVar16 = uVar22 | 0x78e04940;
        *(uint **)(param_1 + 0x102) = puVar19;
      }
      if (-1 < *(short *)(*(long *)(param_1 + 0x116) + 0x14)) {
        return;
      }
      lVar21 = (long)block_indirect_branch + -(long)puVar19;
      lVar11 = -(long)puVar19 + 0x18cb3f;
      if (-1 < lVar21) {
        lVar11 = lVar21;
      }
      puVar16[1] = (uint)lVar11 >> 2 & 0x3ffffff | 0x14000000;
      *(uint **)(param_1 + 0x102) = puVar16 + 2;
      return;
    }
  }
  else if ((((param_6 | param_8) == 0) && (((uint)param_2 & 0x1200000) == 0x1000000)) &&
          (*(char *)(param_1 + 0x11e) == '\x01')) {
    iVar7 = -param_9;
    if ((param_2 & 0x800000) != 0) {
      iVar7 = param_9;
    }
    uVar22 = *(int *)(*(long *)(param_1 + 0x116) + 4) + iVar7;
    if ((uVar22 < 0x4000000) &&
       (((param_5 != 0 && ((uVar22 & 1) == 0)) || ((param_4 != 0 || ((uVar22 & 3) == 0)))))) {
      uVar18 = uVar9 + 0xd;
      if (uVar9 == 0xf) {
        uVar18 = 0;
      }
      lVar11 = *(long *)(param_1 + 0x11a);
      if (uVar22 < 0x2000000) {
        lVar21 = *(long *)(lVar11 + 0x2088);
        if (7 < (byte)nds_system[lVar21 + ((ulong)(uVar22 >> 2) & 0x1fff) + 0xfdc038]) {
LAB_00190e60:
          if ((1 << ((ulong)(uVar22 >> 2) & 0x1f) &
              *(uint *)(lVar21 + (((ulong)(uVar22 >> 7) & 0x7fff) + 0x536800) * 4 + 0x138)) == 0)
          goto LAB_00190e88;
        }
        cpu_translate_set_imm32_isra_0(param_1 + 0x102,1,uVar22);
        puVar16 = *(uint **)(param_1 + 0x102);
        if (param_5 == 0) {
          puVar19 = puVar16 + 1;
          if (param_4 == 0) {
            *puVar16 = uVar18 | 0xb8614940;
            *(uint **)(param_1 + 0x102) = puVar19;
          }
          else if (param_7 == 0) {
            *puVar16 = uVar18 | 0x38614940;
            *(uint **)(param_1 + 0x102) = puVar19;
          }
          else {
            *puVar16 = uVar18 | 0x38e14940;
            *(uint **)(param_1 + 0x102) = puVar19;
          }
        }
        else if (param_7 == 0) {
          *puVar16 = uVar18 | 0x78614940;
          *(uint **)(param_1 + 0x102) = puVar16 + 1;
        }
        else {
          *puVar16 = uVar18 | 0x78e14940;
          *(uint **)(param_1 + 0x102) = puVar16 + 1;
        }
      }
      else {
        if (uVar22 < 0x3000000) {
          lVar21 = *(long *)(lVar11 + 0x2088);
          goto LAB_00190e60;
        }
LAB_00190e88:
        lVar21 = lVar11 + 0x23d0;
        if (param_5 == 0) {
          if (param_4 == 0) {
            cpu_block_fill_allocation(lVar11,uVar22,4);
            uVar9 = load_memory32(lVar21,uVar22);
          }
          else {
            cpu_block_fill_allocation(lVar11,uVar22 & 0xfffffffe,2);
            if (param_7 == 0) {
              uVar9 = load_memory8(lVar21,uVar22);
              uVar9 = uVar9 & 0xff;
            }
            else {
              cVar5 = load_memory8(lVar21,uVar22);
              uVar9 = (uint)cVar5;
            }
          }
        }
        else {
          cpu_block_fill_allocation(lVar11,uVar22,2);
          if (param_7 == 0) {
            uVar9 = load_memory16(lVar21,uVar22);
            uVar9 = uVar9 & 0xffff;
          }
          else {
            sVar6 = load_memory16(lVar21,uVar22);
            uVar9 = (uint)sVar6;
          }
        }
        cpu_translate_set_imm32_isra_0(param_1 + 0x102,uVar18,uVar9);
      }
      goto LAB_00190da4;
    }
  }
  iVar7 = cpu_translate_setup_memory_address(param_1,uVar24,param_8);
  if (param_3 == 0) {
    if (uVar9 == 0xf) {
      cpu_translate_set_imm32_isra_0
                (param_1 + 0x102,1,*(undefined4 *)(*(long *)(param_1 + 0x116) + 4));
      puVar16 = *(uint **)(param_1 + 0x102);
    }
    else {
      puVar16 = *(uint **)(param_1 + 0x102) + 1;
      **(uint **)(param_1 + 0x102) = (uVar9 + 0xd) * 0x10000 | 0x2a0003e1;
      *(uint **)(param_1 + 0x102) = puVar16;
    }
    puVar19 = puVar16 + 1;
    puVar15 = puVar19;
    if (iVar7 != 0) {
      puVar15 = puVar16 + 2;
      *puVar16 = iVar7 << 0x10 | 0x2a0003e0;
      *(uint **)(param_1 + 0x102) = puVar19;
      puVar16 = puVar19;
    }
    if (param_6 == 0) {
      if (param_5 == 0) {
        if (param_4 == 0) {
          pcVar20 = arm64_store_memory32_arm7;
          pcVar10 = arm64_store_memory32_arm9;
        }
        else {
          pcVar20 = arm64_store_memory8_arm7;
          pcVar10 = arm64_store_memory8_arm9;
        }
      }
      else {
        pcVar20 = arm64_store_memory16_arm7;
        pcVar10 = arm64_store_memory16_arm9;
      }
      if (*(char *)(param_1 + 0x11e) != '\x01') {
        pcVar10 = pcVar20;
      }
      lVar21 = (long)pcVar10 - (long)puVar16;
      lVar11 = lVar21 + 3;
      if (-1 < lVar21) {
        lVar11 = lVar21;
      }
      *puVar16 = (uint)lVar11 >> 2 & 0x3ffffff | 0x94000000;
      *(uint **)(param_1 + 0x102) = puVar15;
      cpu_translate_store_pc_metadata(param_1,param_1[0x112]);
      return;
    }
    pcVar10 = arm64_store_memory32_arm9;
    if (*(char *)(param_1 + 0x11e) != '\x01') {
      pcVar10 = arm64_store_memory32_arm7;
    }
    lVar21 = (long)pcVar10 - (long)puVar15;
    lVar11 = lVar21 + 3;
    if (-1 < lVar21) {
      lVar11 = lVar21;
    }
    *puVar16 = 0xb8160120;
    puVar16[1] = (uint)lVar11 >> 2 & 0x3ffffff | 0x94000000;
    *(undefined8 *)(puVar16 + 2) = 0x11001000b8560120;
    puVar16 = puVar16 + 4;
    *(uint **)(param_1 + 0x102) = puVar16;
    if (uVar9 == 0xe) {
      cpu_translate_set_imm32_isra_0
                (param_1 + 0x102,0,*(undefined4 *)(*(long *)(param_1 + 0x116) + 4));
      uVar9 = 0x2a0003e1;
      puVar16 = *(uint **)(param_1 + 0x102);
    }
    else {
      uVar9 = (uVar9 + 0xe) * 0x10000 | 0x2a0003e1;
    }
    *puVar16 = uVar9;
    lVar21 = (long)pcVar10 - (long)(puVar16 + 1);
    lVar11 = lVar21 + 3;
    if (-1 < lVar21) {
      lVar11 = lVar21;
    }
    puVar16[1] = (uint)lVar11 >> 2 & 0x3ffffff | 0x94000000;
    *(uint **)(param_1 + 0x102) = puVar16 + 2;
    cpu_translate_store_pc_metadata(param_1,param_1[0x112]);
    return;
  }
  uVar22 = uVar9 + 0xd;
  if (uVar9 == 0xf) {
    uVar22 = 0;
  }
  uVar18 = (param_6 ^ 1) & 1;
  if (*(char *)(param_1 + 0x11e) != '\x01') {
    uVar18 = 0;
  }
  if (uVar18 == 0) {
    if (iVar7 == 0) {
      puVar14 = *(uint **)(param_1 + 0x102);
      puVar19 = (uint *)0x0;
      pcVar25 = arm64_load_memory32_unsigned;
      pcVar26 = arm64_load_memory16_unsigned;
      puVar16 = (uint *)0x0;
      pcVar10 = arm64_load_memory16_signed;
      pcVar20 = arm64_load_memory8_unsigned;
      pcVar23 = arm64_load_memory8_signed;
    }
    else {
      pcVar25 = arm64_load_memory32_unsigned;
      pcVar26 = arm64_load_memory16_unsigned;
      puVar19 = (uint *)0x0;
      pcVar10 = arm64_load_memory16_signed;
      puVar16 = (uint *)0x0;
      pcVar20 = arm64_load_memory8_unsigned;
      pcVar23 = arm64_load_memory8_signed;
      puVar15 = *(uint **)(param_1 + 0x102);
LAB_00191044:
      puVar14 = puVar15 + 1;
      *puVar15 = iVar7 << 0x10 | 0x2a0003e0;
      *(uint **)(param_1 + 0x102) = puVar14;
    }
    if (param_6 == 0) goto LAB_00191060;
    lVar21 = (long)arm64_load_memory64 + -(long)puVar14;
    lVar11 = -(long)puVar14 + 0x18d07f;
    if (-1 < lVar21) {
      lVar11 = lVar21;
    }
    uVar18 = (uint)lVar11 >> 2 & 0x3ffffff | 0x94000000;
    if (uVar9 == 0xf) {
      uVar8 = 0x1d;
      puVar17 = puVar14 + 1;
      *puVar14 = uVar18;
LAB_00190bf4:
      puVar15 = puVar17 + 1;
      *puVar17 = uVar8 | 0x2a0003e0;
      *(uint **)(param_1 + 0x102) = puVar15;
    }
    else {
      if (uVar9 != 0xe) {
        uVar8 = uVar9 + 0xe;
        puVar17 = puVar14 + 2;
        *puVar14 = uVar18;
        puVar14[1] = uVar9 + 0xd | 0x2a0103e0;
        goto LAB_00190bf4;
      }
      *puVar14 = uVar18;
      puVar14[1] = 0x2a0103fb;
      puVar15 = puVar14 + 2;
      *(uint **)(param_1 + 0x102) = puVar15;
    }
    if (puVar16 == (uint *)0x0) goto LAB_00190da4;
  }
  else {
    uVar8 = uVar22 | iVar7 << 0x10;
    uVar18 = iVar7 << 5;
    puVar16 = *(uint **)(param_1 + 0x102);
    if (param_5 == 0) {
      if (param_4 != 0) {
        *puVar16 = uVar18 | 0x12261401;
        puVar19 = (uint *)((long)puVar16 + 0xb);
        if (-1 < (long)(puVar16 + 2)) {
          puVar19 = puVar16 + 2;
        }
        uVar18 = 0x38604940;
        puVar16[2] = -(int)((long)puVar19 >> 2) & 0x3ffffffU | 0x14000000;
        uVar13 = 0x38e04940;
        goto LAB_001911d4;
      }
      *puVar16 = uVar18 | 0x12261c01;
      puVar19 = (uint *)((long)puVar16 + 0xb);
      if (-1 < (long)(puVar16 + 2)) {
        puVar19 = puVar16 + 2;
      }
      puVar16[1] = 0x34000041;
      puVar16[2] = -(int)((long)puVar19 >> 2) & 0x3ffffffU | 0x14000000;
      puVar16[3] = uVar8 | 0xb8604940;
    }
    else {
      *puVar16 = uVar18 | 0x12261801;
      puVar19 = (uint *)((long)puVar16 + 0xb);
      if (-1 < (long)(puVar16 + 2)) {
        puVar19 = puVar16 + 2;
      }
      uVar18 = 0x78604940;
      puVar16[2] = -(int)((long)puVar19 >> 2) & 0x3ffffffU | 0x14000000;
      uVar13 = 0x78e04940;
LAB_001911d4:
      if (param_7 == 0) {
        uVar13 = uVar18;
      }
      *(uint **)(param_1 + 0x102) = puVar16 + 3;
      puVar16[1] = 0x34000041;
      puVar16[3] = uVar8 | uVar13;
    }
    puVar19 = puVar16 + 4;
    puVar16 = puVar16 + 2;
    *(uint **)(param_1 + 0x102) = param_1;
    *(uint **)(param_1 + 0x106) = puVar19;
    if (iVar7 != 0) {
      pcVar25 = arm64_load_ext32_unsigned;
      pcVar26 = arm64_load_ext16_unsigned;
      pcVar10 = arm64_load_ext16_signed;
      pcVar20 = arm64_load_ext8_unsigned;
      pcVar23 = arm64_load_ext8_signed;
      puVar15 = param_1;
      goto LAB_00191044;
    }
    pcVar25 = arm64_load_ext32_unsigned;
    pcVar26 = arm64_load_ext16_unsigned;
    pcVar10 = arm64_load_ext16_signed;
    pcVar20 = arm64_load_ext8_unsigned;
    pcVar23 = arm64_load_ext8_signed;
    puVar14 = param_1;
LAB_00191060:
    puVar15 = puVar14 + 1;
    if (param_5 == 0) {
      if (param_4 != 0) {
        if (param_7 == 0) {
          lVar21 = (long)pcVar20 - (long)puVar14;
          lVar11 = lVar21 + 3;
          if (-1 < lVar21) {
            lVar11 = lVar21;
          }
          uVar9 = (uint)lVar11;
        }
        else {
          lVar21 = (long)pcVar23 - (long)puVar14;
          lVar11 = lVar21 + 3;
          if (-1 < lVar21) {
            lVar11 = lVar21;
          }
          uVar9 = (uint)lVar11;
        }
        goto LAB_00191110;
      }
      lVar21 = (long)pcVar25 - (long)puVar14;
      lVar11 = lVar21 + 3;
      if (-1 < lVar21) {
        lVar11 = lVar21;
      }
      *puVar14 = (uint)lVar11 >> 2 & 0x3ffffff | 0x94000000;
      *(uint **)(param_1 + 0x102) = puVar15;
    }
    else if (param_7 == 0) {
      lVar21 = (long)pcVar26 - (long)puVar14;
      lVar11 = lVar21 + 3;
      if (-1 < lVar21) {
        lVar11 = lVar21;
      }
      *puVar14 = (uint)lVar11 >> 2 & 0x3ffffff | 0x94000000;
      *(uint **)(param_1 + 0x102) = puVar15;
    }
    else {
      lVar21 = (long)pcVar10 - (long)puVar14;
      lVar11 = lVar21 + 3;
      if (-1 < lVar21) {
        lVar11 = lVar21;
      }
      uVar9 = (uint)lVar11;
LAB_00191110:
      *puVar14 = uVar9 >> 2 & 0x3ffffff | 0x94000000;
      *(uint **)(param_1 + 0x102) = puVar15;
    }
    if (puVar16 == (uint *)0x0) {
      if (uVar22 != 0) {
        puVar14[1] = uVar22 | 0x2a0003e0;
        *(uint **)(param_1 + 0x102) = puVar14 + 2;
      }
      goto LAB_00190da4;
    }
  }
  puVar14 = puVar15 + 1;
  if (uVar22 != 0) {
    puVar14 = puVar15 + 2;
    *puVar15 = uVar22 | 0x2a0003e0;
    puVar15 = puVar15 + 1;
  }
  lVar21 = (long)puVar19 - (long)puVar15;
  lVar11 = lVar21 + 3;
  if (-1 < lVar21) {
    lVar11 = lVar21;
  }
  uVar24 = (long)puVar14 - (long)param_1 >> 2;
  lVar21 = *(long *)(param_1 + 0x104);
  puVar19 = (uint *)(lVar21 + (uVar24 & 0xffffffff) * -4);
  *puVar15 = (uint)lVar11 >> 2 & 0x3ffffff | 0x14000000;
  *(uint **)(param_1 + 0x102) = puVar14;
  *(uint **)(param_1 + 0x104) = puVar19;
  uVar9 = (uint)uVar24;
  if (uVar9 != 0) {
    bVar4 = param_1 < (uint *)(lVar21 + (uVar24 & 0xffffffff) * -4 + 0x10);
    iVar7 = (int)((long)param_1 - (long)puVar19 >> 2);
    if ((bVar4 && puVar19 < param_1 + 4 || uVar9 - 1 < 3) ||
        (!bVar4 || puVar19 >= param_1 + 4) && uVar9 - 1 == 3) {
      lVar11 = 0;
      do {
        uVar22 = param_1[lVar11];
        while ((uVar22 >> 0x1a & 0x1f) != 5) {
          puVar19[lVar11] = uVar22;
          lVar11 = lVar11 + 1;
          if (uVar9 <= (uint)lVar11) goto LAB_00190d84;
          uVar22 = param_1[lVar11];
        }
        puVar19[lVar11] = uVar22 & 0xfc000000 | uVar22 + iVar7 & 0x3ffffff;
        lVar11 = lVar11 + 1;
      } while ((uint)lVar11 < uVar9);
    }
    else {
      lVar11 = 0;
      do {
        pVar1 = (unkbyte9 *)((long)param_1 + lVar11);
        uVar2 = *(undefined8 *)((long)pVar1 + 8);
        bVar32 = (byte)((ulong)uVar2 >> 0x18);
        bVar33 = (byte)((ulong)uVar2 >> 0x38);
        uVar12 = *(undefined8 *)pVar1;
        bVar30 = (byte)((ulong)uVar12 >> 0x18);
        bVar31 = (byte)((ulong)uVar12 >> 0x38);
        auVar27._0_5_ = CONCAT14(bVar31 >> 2,(uint)(bVar30 >> 2 & 0x1f)) & 0x1fffffffff;
        auVar27._5_3_ = 0;
        auVar27[8] = bVar32 >> 2 & 0x1f;
        auVar27._9_3_ = 0;
        auVar27[12] = bVar33 >> 2 & 0x1f;
        auVar27._13_3_ = 0;
        uVar22 = iVar7 + (int)uVar12 & 0x3ffffff;
        uVar18 = iVar7 + (int)((ulong)uVar12 >> 0x20) & 0x3ffffff;
        uVar8 = iVar7 + (int)uVar2 & 0x3ffffff;
        uVar13 = iVar7 + (int)((ulong)uVar2 >> 0x20) & 0x3ffffff;
        auVar28._8_4_ = 5;
        auVar28._0_8_ = 0x500000005;
        auVar28._12_4_ = 5;
        auVar28 = NEON_cmeq(auVar27,auVar28,4);
        auVar29[9] = (char)((ulong)uVar2 >> 8);
        auVar29._0_9_ = *pVar1;
        auVar29[10] = (char)((ulong)uVar2 >> 0x10);
        auVar29[11] = bVar32;
        auVar29[12] = (char)((ulong)uVar2 >> 0x20);
        auVar29[13] = (char)((ulong)uVar2 >> 0x28);
        auVar29[14] = (char)((ulong)uVar2 >> 0x30);
        auVar29[15] = bVar33;
        auVar3[3] = (byte)(uVar22 >> 0x18) | bVar30 & 0xfc;
        auVar3._0_3_ = (int3)uVar22;
        auVar3[4] = (char)uVar18;
        auVar3[5] = (char)(uVar18 >> 8);
        auVar3[6] = (char)(uVar18 >> 0x10);
        auVar3[7] = (byte)(uVar18 >> 0x18) | bVar31 & 0xfc;
        auVar3[8] = (char)uVar8;
        auVar3[9] = (char)(uVar8 >> 8);
        auVar3[10] = (char)(uVar8 >> 0x10);
        auVar3[11] = (byte)(uVar8 >> 0x18) | bVar32 & 0xfc;
        auVar3[12] = (char)uVar13;
        auVar3[13] = (char)(uVar13 >> 8);
        auVar3[14] = (char)(uVar13 >> 0x10);
        auVar3[15] = (byte)(uVar13 >> 0x18) | bVar33 & 0xfc;
        auVar29 = NEON_bsl(auVar28,auVar3,auVar29,1);
        ((undefined8 *)((long)puVar19 + lVar11))[1] = auVar29._8_8_;
        *(undefined8 *)((long)puVar19 + lVar11) = auVar29._0_8_;
        lVar11 = lVar11 + 0x10;
      } while (lVar11 != ((ulong)((uVar9 >> 2) - 1) + 1) * 0x10);
      uVar22 = uVar9 & 0xfffffffc;
      if ((uVar24 & 3) != 0) {
        uVar18 = uVar22 + 1;
        uVar13 = param_1[uVar22];
        uVar8 = uVar13 & 0xfc000000 | uVar13 + iVar7 & 0x3ffffff;
        if ((uVar13 >> 0x1a & 0x1f) != 5) {
          uVar8 = uVar13;
        }
        puVar19[uVar22] = uVar8;
        if (uVar18 < uVar9) {
          uVar13 = param_1[uVar18];
          uVar22 = uVar22 + 2;
          uVar8 = uVar13 & 0xfc000000 | uVar13 + iVar7 & 0x3ffffff;
          if ((uVar13 >> 0x1a & 0x1f) != 5) {
            uVar8 = uVar13;
          }
          puVar19[uVar18] = uVar8;
          if (uVar22 < uVar9) {
            uVar18 = param_1[uVar22];
            uVar9 = uVar18 & 0xfc000000 | uVar18 + iVar7 & 0x3ffffff;
            if ((uVar18 >> 0x1a & 0x1f) != 5) {
              uVar9 = uVar18;
            }
            puVar19[uVar22] = uVar9;
          }
        }
      }
    }
  }
LAB_00190d84:
  uVar12 = *(undefined8 *)(param_1 + 0x106);
  *puVar16 = (uint)((int)puVar19 - (int)puVar16) >> 2 & 0x3ffffff | *puVar16 & 0xfc000000;
  *(undefined8 *)(param_1 + 0x102) = uVar12;
LAB_00190da4:
  if (-1 < *(short *)(*(long *)(param_1 + 0x116) + 0x14)) {
    return;
  }
  puVar19 = *(uint **)(param_1 + 0x102);
  puVar16 = puVar19 + 1;
  puVar15 = puVar16;
  if (*(char *)(param_1 + 0x11e) != '\x01') {
    if (*(char *)((long)param_1 + 0x479) == '\0') {
      puVar15 = puVar19 + 2;
      *puVar19 = 0x123e7400;
      puVar19 = puVar16;
    }
    else if (*(char *)((long)param_1 + 0x479) == '\x01') {
      puVar15 = puVar19 + 2;
      *puVar19 = 0x32000000;
      puVar19 = puVar16;
    }
  }
  lVar21 = (long)block_indirect_branch + -(long)puVar19;
  lVar11 = -(long)puVar19 + 0x18cb3f;
  if (-1 < lVar21) {
    lVar11 = lVar21;
  }
  *puVar19 = (uint)lVar11 >> 2 & 0x3ffffff | 0x14000000;
  *(uint **)(param_1 + 0x102) = puVar15;
  return;
}


