/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_block_memory_op
 * Address  : 00191640
 * Program  : drastic64
 */


/* WARNING: Removing unreachable block (ram,0x00191dd0) */
/* WARNING: Removing unreachable block (ram,0x00191df0) */
/* WARNING: Removing unreachable block (ram,0x00191e24) */
/* WARNING: Removing unreachable block (ram,0x00191e3c) */
/* WARNING: Removing unreachable block (ram,0x00191e5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cpu_translate_block_memory_op(uint *param_1,uint param_2)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  uint local_30;
  byte local_10 [8];
  long local_8;
  
  uVar22 = (ulong)(param_2 >> 0x10) & 0xf;
  local_8 = ___stack_chk_guard;
  iVar8 = (uint)(byte)(&bit_count)[param_2 & 0xff] +
          (uint)(byte)(&bit_count)[(ulong)(param_2 >> 8) & 0xff];
  iVar20 = (int)uVar22;
  local_30 = iVar20 + 0xd;
  uVar12 = iVar8 * 4;
  uVar18 = param_2 & 0xffff;
  uVar24 = param_2 >> 0x15 & 1;
  if (iVar20 == 0xf) {
    cpu_translate_set_imm32_isra_0
              (param_1 + 0x102,0,*(undefined4 *)(*(long *)(param_1 + 0x116) + 4),0);
    local_30 = 0;
  }
  if (iVar8 == 0) goto LAB_001918a8;
  uVar9 = param_2 & 0x400000;
  uVar11 = local_30;
  if (iVar8 == 1) {
    if (uVar9 == 0) {
      uVar24 = param_2 & 0xf01f0000 | (0x1f - (int)LZCOUNT(uVar18)) * 0x1000;
      uVar18 = param_2 & 0x1000000;
      if ((param_2 >> 0x15 & 1) == 0) {
        uVar9 = uVar24 | 0x4000000;
        uVar11 = uVar18;
        if ((uVar18 != 0) && (uVar11 = uVar12, (param_2 >> 0x17 & 1) != 0)) {
          uVar9 = uVar24 | 0x4800000;
        }
LAB_00191f8c:
        uVar9 = param_2 & 0x200000 | uVar9 | 0x1000000;
        uVar12 = uVar11;
      }
      else {
        uVar9 = uVar24 | 0x4000000;
        if ((param_2 & 0x800000) != 0) {
          uVar9 = uVar24 | 0x4800000;
        }
        uVar11 = uVar12;
        if (uVar18 != 0) goto LAB_00191f8c;
      }
      cpu_translate_memory_op(param_1,uVar9 | uVar12,param_2 >> 0x14 & 1,0,0,0,0,0,uVar12);
      goto LAB_001918a8;
    }
    puVar4 = *(uint **)(param_1 + 0x102);
LAB_001918e4:
    if ((param_2 & 0x108000) == 0x108000) {
      bVar3 = false;
    }
    else {
      *puVar4 = local_30 | 0xb8164120;
      *(undefined8 *)(puVar4 + 1) = 0xb8160120b9610780;
      *(uint **)(param_1 + 0x102) = puVar4 + 3;
      cpu_translate_set_imm32_isra_0(param_1 + 0x102,1,0);
      puVar4 = *(uint **)(param_1 + 0x102);
      puVar4[1] = 0xb8564120;
      lVar15 = (long)arm64_set_cpu_mode + -(long)puVar4;
      lVar10 = -(long)puVar4 + 0x18f7f7;
      if (-1 < lVar15) {
        lVar10 = lVar15;
      }
      *puVar4 = (uint)lVar10 >> 2 & 0x3ffffff | 0x94000000;
      puVar4 = puVar4 + 2;
      bVar3 = true;
      *(uint **)(param_1 + 0x102) = puVar4;
      uVar11 = 0;
    }
  }
  else {
    bVar3 = false;
    puVar4 = *(uint **)(param_1 + 0x102);
    if (uVar9 != 0) goto LAB_001918e4;
  }
  uVar19 = 1 << uVar22;
  if (((((uVar18 & uVar19) != 0) && ((param_2 & 0x100000) != 0)) &&
      ((uVar18 & (uVar19 ^ 0xffffffff)) != 0)) && ((-uVar19 & uVar18) == uVar19)) {
    uVar24 = 0;
  }
  uVar19 = param_2 >> 0x17 & 3;
  if (uVar19 == 2) {
    iVar23 = iVar8 * -4;
    uVar19 = uVar12;
LAB_00191c4c:
    puVar5 = puVar4 + 1;
    *puVar4 = uVar11 << 5 | uVar19 << 10 | 0x51000000;
    puVar6 = puVar4 + 2;
    *(uint **)(param_1 + 0x102) = puVar5;
  }
  else if (uVar19 == 3) {
    uVar19 = 0x1000;
    iVar23 = 4;
LAB_00191b94:
    puVar5 = puVar4 + 1;
    *puVar4 = uVar19 | uVar11 << 5 | 0x11000000;
    puVar6 = puVar4 + 2;
    *(uint **)(param_1 + 0x102) = puVar5;
  }
  else {
    if (uVar19 == 0) {
      iVar23 = iVar8 * -4 + 4;
      if (iVar23 != 0) {
        if (iVar23 < 0) {
          uVar19 = -iVar23;
          goto LAB_00191c4c;
        }
        uVar19 = iVar23 * 0x400;
        goto LAB_00191b94;
      }
    }
    puVar17 = puVar4 + 1;
    iVar23 = 0;
    puVar5 = puVar4;
    puVar6 = puVar17;
    if (uVar11 != 0) {
      puVar6 = puVar4 + 2;
      *puVar4 = uVar11 << 0x10 | 0x2a0003e0;
      *(uint **)(param_1 + 0x102) = puVar17;
      puVar5 = puVar17;
    }
  }
  if ((param_2 & 0x100000) == 0) {
    *puVar5 = 0xd1048121;
    *(uint **)(param_1 + 0x102) = puVar6;
    uVar22 = 0;
    iVar20 = 0;
    uVar16 = 0;
    if (uVar18 == 0) {
      puVar4 = puVar6 + 1;
    }
    else {
LAB_001919f0:
      do {
        if ((uVar18 & 1) != 0) {
          bVar7 = (char)iVar20 + 0xd;
          if (iVar20 == 0xf) {
            cpu_translate_set_imm32_isra_0
                      (param_1 + 0x102,2,*(undefined4 *)(*(long *)(param_1 + 0x116) + 4));
            bVar7 = 2;
          }
          local_10[uVar22] = bVar7;
          iVar21 = (int)uVar22;
          uVar22 = (ulong)(uVar18 & 1);
          if (iVar21 != 0) {
            puVar4 = *(uint **)(param_1 + 0x102);
            *puVar4 = (uint)local_10[0] | (int)(uVar16 >> 2) << 0xf |
                      (uint)local_10[1] << 10 | 0x29000020;
            uVar16 = (ulong)((int)uVar16 + 8);
            *(uint **)(param_1 + 0x102) = puVar4 + 1;
            uVar18 = uVar18 >> 1;
            iVar20 = iVar20 + 1;
            uVar22 = 0;
            iVar21 = 0;
            if (uVar18 == 0) break;
            goto LAB_001919f0;
          }
        }
        iVar21 = (int)uVar22;
        uVar18 = uVar18 >> 1;
        iVar20 = iVar20 + 1;
      } while (uVar18 != 0);
      puVar6 = *(uint **)(param_1 + 0x102);
      puVar5 = puVar6 + 1;
      puVar4 = puVar5;
      if (iVar21 != 0) {
        puVar4 = puVar6 + 2;
        *puVar6 = ((uint)(uVar16 >> 2) & 0xfff) << 10 | (uint)local_10[0] | 0xb9000020;
        *(uint **)(param_1 + 0x102) = puVar5;
        puVar6 = puVar5;
      }
    }
    puVar5 = puVar4;
    if (uVar24 != 0) {
      iVar20 = uVar12 - iVar23;
      if ((param_2 & 0x800000) == 0) {
        iVar20 = -(uVar12 + iVar23);
      }
      puVar5 = puVar4 + 1;
      if (iVar20 < 0) {
        *puVar6 = iVar20 * -0x400 | local_30 | 0x51000000;
        puVar6 = puVar4;
      }
      else {
        *puVar6 = local_30 | iVar20 << 10 | 0x11000000;
        puVar6 = puVar4;
      }
    }
    lVar15 = *(long *)(arm64_store_block_functions + (ulong)(iVar8 - 1) * 8) - (long)puVar6;
    lVar10 = lVar15 + 3;
    if (-1 < lVar15) {
      lVar10 = lVar15;
    }
    *puVar6 = (uint)lVar10 >> 2 & 0x3ffffff | 0x94000000;
    *(uint **)(param_1 + 0x102) = puVar5;
    cpu_translate_store_pc_metadata(param_1,param_1[0x112]);
    if (bVar3) {
      puVar14 = *(undefined4 **)(param_1 + 0x102);
      *puVar14 = 0xb8560121;
      lVar15 = (long)arm64_set_cpu_mode + -(long)(puVar14 + 1);
      lVar10 = -(long)(puVar14 + 1) + 0x18f7f7;
      if (-1 < lVar15) {
        lVar10 = lVar15;
      }
      puVar14[1] = (uint)lVar10 >> 2 & 0x3ffffff | 0x94000000;
      *(undefined4 **)(param_1 + 0x102) = puVar14 + 2;
    }
  }
  else {
    if (uVar24 == 0) {
      iVar20 = 0xff;
      puVar4 = puVar6;
    }
    else {
      iVar21 = uVar12 - iVar23;
      if ((param_2 & 0x800000) == 0) {
        iVar21 = -(uVar12 + iVar23);
      }
      puVar4 = puVar6 + 1;
      if (iVar21 < 0) {
        *puVar5 = iVar21 * -0x400 | local_30 | 0x51000000;
        *(uint **)(param_1 + 0x102) = puVar6;
        puVar5 = puVar6;
      }
      else {
        *puVar5 = local_30 | iVar21 << 10 | 0x11000000;
        *(uint **)(param_1 + 0x102) = puVar6;
        puVar5 = puVar6;
      }
    }
    puVar13 = (&arm64_load_block_functions)[iVar8 - 1];
    if (*(char *)(param_1 + 0x11e) == '\x01') {
      puVar17 = puVar5 + 2;
      *puVar5 = 0x12261c01;
      puVar6 = (uint *)((long)puVar5 + 0xb);
      if (-1 < (long)puVar17) {
        puVar6 = puVar17;
      }
      lVar15 = (long)puVar13 - (long)param_1;
      lVar10 = lVar15 + 3;
      if (-1 < lVar15) {
        lVar10 = lVar15;
      }
      puVar5[1] = ((uint)((long)puVar5 + (0xc - (long)puVar4) >> 2) & 0x7ffff) << 5 | 0x34000001;
      puVar5[2] = -(int)((long)puVar6 >> 2) & 0x3ffffffU | 0x14000000;
      puVar5[3] = 0x8b204140;
      puVar4 = puVar5 + 4;
      *(uint **)(param_1 + 0x106) = puVar4;
      *param_1 = (uint)lVar10 >> 2 & 0x3ffffff | 0x94000000;
      lVar15 = (long)puVar4 - (long)(param_1 + 1);
      lVar10 = lVar15 + 3;
      if (-1 < lVar15) {
        lVar10 = lVar15;
      }
      lVar15 = *(long *)(param_1 + 0x104) + -8;
      param_1[1] = (uint)lVar10 >> 2 & 0x3ffffff | 0x14000000;
      *(uint **)(param_1 + 0x102) = param_1 + 2;
      *(long *)(param_1 + 0x104) = lVar15;
      lVar10 = 0;
      do {
        while (uVar12 = param_1[lVar10], (uVar12 >> 0x1a & 0x1f) != 5) {
          *(uint *)(lVar15 + lVar10 * 4) = uVar12;
          lVar10 = lVar10 + 1;
          if (1 < (uint)lVar10) goto LAB_00191e64;
        }
        *(uint *)(lVar15 + lVar10 * 4) =
             uVar12 & 0xfc000000 | uVar12 + (int)((long)param_1 - lVar15 >> 2) & 0x3ffffff;
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < 2);
LAB_00191e64:
      puVar5[2] = (uint)((int)lVar15 - (int)puVar17) >> 2 & 0x3ffffff | puVar5[2] & 0xfc000000;
      *(uint **)(param_1 + 0x102) = puVar4;
    }
    else {
      lVar15 = (long)puVar13 - (long)puVar5;
      lVar10 = lVar15 + 3;
      if (-1 < lVar15) {
        lVar10 = lVar15;
      }
      *puVar5 = (uint)lVar10 >> 2 & 0x3ffffff | 0x94000000;
      *(uint **)(param_1 + 0x102) = puVar4;
    }
    if (uVar18 != 0) {
      uVar12 = 0;
      iVar8 = 0;
      uVar22 = 0;
LAB_00191794:
      do {
        if ((uVar18 & 1) != 0) {
          bVar7 = (char)iVar8 + 0xd;
          if (iVar8 == 0xf) {
            bVar7 = 0;
          }
          uVar11 = uVar24;
          if (iVar20 != iVar8) {
            uVar11 = 0;
          }
          bVar2 = 1;
          if (uVar11 == 0) {
            bVar2 = bVar7;
          }
          local_10[uVar12] = bVar2;
          bVar1 = uVar12 != 0;
          uVar12 = uVar18 & 1;
          if (bVar1) {
            puVar4 = *(uint **)(param_1 + 0x102);
            *puVar4 = (uint)local_10[0] | (int)(uVar22 >> 2) << 0xf |
                      (uint)local_10[1] << 10 | 0x29400000;
            uVar22 = (ulong)((int)uVar22 + 8);
            *(uint **)(param_1 + 0x102) = puVar4 + 1;
            uVar18 = uVar18 >> 1;
            iVar8 = iVar8 + 1;
            uVar12 = 0;
            if (uVar18 == 0) break;
            goto LAB_00191794;
          }
        }
        uVar18 = uVar18 >> 1;
        iVar8 = iVar8 + 1;
      } while (uVar18 != 0);
      if (uVar12 != 0) {
        puVar4 = *(uint **)(param_1 + 0x102);
        *puVar4 = ((uint)(uVar22 >> 2) & 0xfff) << 10 | (uint)local_10[0] | 0xb9400000;
        *(uint **)(param_1 + 0x102) = puVar4 + 1;
      }
    }
    if (bVar3) {
      puVar14 = *(undefined4 **)(param_1 + 0x102);
      *puVar14 = 0xb8560121;
      lVar15 = (long)arm64_set_cpu_mode + -(long)(puVar14 + 1);
      lVar10 = -(long)(puVar14 + 1) + 0x18f7f7;
      if (-1 < lVar15) {
        lVar10 = lVar15;
      }
      puVar14[1] = (uint)lVar10 >> 2 & 0x3ffffff | 0x94000000;
      *(undefined4 **)(param_1 + 0x102) = puVar14 + 2;
    }
    if ((param_2 >> 0xf & 1) != 0) {
      puVar6 = *(uint **)(param_1 + 0x102);
      puVar4 = puVar6 + 1;
      if (uVar9 == 0) {
        puVar5 = puVar4;
        if (*(char *)(param_1 + 0x11e) != '\x01') {
          if (*(char *)((long)param_1 + 0x479) == '\0') {
            puVar5 = puVar6 + 2;
            *puVar6 = 0x123e7400;
            puVar6 = puVar4;
          }
          else if (*(char *)((long)param_1 + 0x479) == '\x01') {
            puVar5 = puVar6 + 2;
            *puVar6 = 0x32000000;
            puVar6 = puVar4;
          }
        }
        lVar15 = (long)block_indirect_branch + -(long)puVar6;
        lVar10 = -(long)puVar6 + 0x18cb3f;
        if (-1 < lVar15) {
          lVar10 = lVar15;
        }
        *puVar6 = (uint)lVar10 >> 2 & 0x3ffffff | 0x14000000;
        *(uint **)(param_1 + 0x102) = puVar5;
      }
      else {
        lVar15 = (long)arm64_spsr_restore + -(long)puVar6;
        lVar10 = -(long)puVar6 + 0x18f55b;
        if (-1 < lVar15) {
          lVar10 = lVar15;
        }
        *puVar6 = (uint)lVar10 >> 2 & 0x3ffffff | 0x14000000;
        *(uint **)(param_1 + 0x102) = puVar4;
      }
    }
  }
LAB_001918a8:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


