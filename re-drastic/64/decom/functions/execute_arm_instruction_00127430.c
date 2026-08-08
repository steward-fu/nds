/*
 * Ghidra decompilation
 *
 * Function : execute_arm_instruction
 * Address  : 00127430
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */

ulong execute_arm_instruction(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  
  uVar12 = param_2 >> 0x1c & 0xf;
  uVar7 = (uint)uVar12;
  uVar16 = param_2 & 0xffffffff;
  uVar13 = (uint)param_2;
  if (uVar7 == 0xe) {
LAB_00127474:
    uVar10 = (uint)(uVar16 >> 0x19);
  }
  else {
    uVar10 = (uint)(param_2 >> 0x1d) & 7;
    if (uVar10 == 4) {
      uVar10 = *(uint *)(param_1 + 0x23c0) >> 0x1d & 1 &
               (*(uint *)(param_1 + 0x23c0) ^ 0x40000000) >> 0x1e;
    }
    else if (uVar10 < 5) {
      if (uVar10 == 2) {
        uVar10 = *(uint *)(param_1 + 0x23c0) >> 0x1f;
      }
      else if (uVar10 == 3) {
        uVar10 = *(uint *)(param_1 + 0x23c0) >> 0x1c & 1;
      }
      else {
        if (uVar10 != 1) goto LAB_0012778c;
        uVar10 = *(uint *)(param_1 + 0x23c0) >> 0x1d & 1;
      }
    }
    else if (uVar10 == 6) {
      uVar10 = *(uint *)(param_1 + 0x23c0);
      uVar10 = (uint)((uVar10 & 0x40000000) == 0 && (uVar10 >> 0x1c & 1) == uVar10 >> 0x1f);
    }
    else {
      if (uVar10 == 7) goto LAB_00127474;
      if (uVar10 == 5) {
        uVar10 = (uint)((*(uint *)(param_1 + 0x23c0) >> 0x1c & 1) ==
                       -((int)*(uint *)(param_1 + 0x23c0) >> 0x1f));
      }
      else {
LAB_0012778c:
        uVar10 = *(uint *)(param_1 + 0x23c0) >> 0x1e & 1;
      }
    }
    if ((uVar7 & 1) == uVar10) {
      return 0;
    }
    uVar10 = uVar13 >> 0x19;
  }
  uVar5 = uVar10 & 7;
  if (uVar5 == 5) {
    execute_arm_branch_op(param_1,uVar16);
    return 1;
  }
  if (uVar5 < 6) {
    if ((uVar10 >> 2 & 1) == 0) {
      if ((uVar10 & 6) != 0) {
        uVar14 = uVar16 >> 0x14 & 1;
        uVar15 = uVar16 >> 0x16 & 1;
        if ((uVar13 >> 0x19 & 1) == 0) {
          uVar12 = (ulong)(uVar13 & 0xfff);
        }
        else {
          if ((uVar13 >> 4 & 1) != 0) {
            execute_arm_undefined_or_thumb_ext_op(param_1,uVar16,uVar12,uVar14,uVar15);
            return 1;
          }
          uVar13 = (uint)(uVar16 >> 5) & 3;
          uVar7 = *(uint *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
          uVar12 = uVar16 >> 7 & 0x1f;
          iVar17 = (int)uVar12;
          if (uVar13 == 2) {
            uVar13 = (int)uVar7 >> iVar17;
            if (iVar17 == 0) {
              uVar13 = (int)uVar7 >> 0x1f;
            }
            uVar12 = (ulong)uVar13;
          }
          else if (uVar13 == 3) {
            if (iVar17 == 0) {
              uVar12 = CONCAT44(*(uint *)(param_1 + 0x23c0) >> 0x1d,uVar7) >> 1 & 0xffffffff;
            }
            else {
              uVar12 = (ulong)(uVar7 >> iVar17 | uVar7 << 0x20 - iVar17);
            }
          }
          else if (uVar13 == 1) {
            uVar7 = uVar7 >> uVar12;
            if (iVar17 == 0) {
              uVar7 = 0;
            }
            uVar12 = (ulong)uVar7;
          }
          else {
            uVar12 = (ulong)(uVar7 << uVar12);
          }
        }
        execute_arm_memory_op(param_1,uVar16,uVar12,uVar14,uVar15,0,0,0);
        return 1;
      }
      if (uVar5 == 1) {
        uVar7 = (uint)(uVar16 >> 8);
        if ((((uint)(uVar16 >> 0x17) & 3) != 2) || ((param_2 & 0x100000) != 0)) {
          uVar7 = uVar7 & 0xf;
          iVar17 = uVar7 * 2;
          if (((param_2 & 0x100000) != 0 && (param_2 & 0xf00) != 0) &&
             (((uVar13 >> 0x15 & 0xe) == 0 || (0xb < (uVar13 >> 0x15 & 0xf))))) {
            *(uint *)(param_1 + 0x23c0) =
                 *(uint *)(param_1 + 0x23c0) & 0xc0000000 |
                 *(uint *)(param_1 + 0x23c0) & 0x1fffffff |
                 (((uVar13 & 0xff) >> iVar17 | (uVar13 & 0xff) << uVar7 * -2 + 0x20) >>
                  (ulong)(iVar17 - 1U & 0x1f) & 1) << 0x1d;
          }
          execute_arm_alu_op(param_1,uVar16);
          return (ulong)uVar5;
        }
        if (((uint)(uVar16 >> 0xc) & 0xf) == 0xf) {
          uVar7 = uVar7 & 0xf;
          execute_arm_msr_op(param_1,uVar16,
                             (uVar13 & 0xff) >> uVar7 * 2 | (uVar13 & 0xff) << uVar7 * -2 + 0x20);
          return (ulong)uVar5;
        }
        goto LAB_00127778;
      }
    }
    else if (uVar5 == 4) {
      execute_arm_block_memory_op(param_1,uVar16);
      return 1;
    }
    if ((uVar13 & 0x90) == 0x90) {
      if ((param_2 & 0x60) != 0) {
        uVar5 = (uint)(uVar16 >> 0x14) & 1;
        uVar10 = (uVar5 ^ 1) & (uint)(uVar16 >> 6) & 1;
        uVar7 = uVar13 >> 5 & 1;
        if (uVar10 != 0) {
          uVar5 = uVar7 ^ 1;
        }
        if ((uVar13 >> 0x16 & 1) == 0) {
          uVar13 = *(uint *)(param_1 + ((ulong)(uVar13 & 0xf) + 0x8dc) * 4);
        }
        else {
          uVar13 = (uVar13 >> 8 & 0xf) << 4 | uVar13 & 0xf;
        }
        execute_arm_memory_op(param_1,uVar16,uVar13,uVar5,1,uVar7,uVar10);
        return 1;
      }
      if ((uVar13 >> 0x18 & 1) == 0) {
        uVar10 = *(uint *)(param_1 + ((uVar16 >> 8 & 0xf) + 0x8dc) * 4);
        uVar7 = *(uint *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
        uVar14 = uVar16 >> 0xc & 0xf;
        uVar12 = uVar16 >> 0x10 & 0xf;
        if ((uVar13 >> 0x17 & 1) == 0) {
          uVar7 = uVar7 * uVar10;
          if ((param_2 & 0x200000) != 0) {
            uVar7 = uVar7 + *(int *)(param_1 + (uVar14 + 0x8dc) * 4);
          }
          if ((uVar13 >> 0x14 & 1) != 0) {
            uVar13 = 0;
            if (uVar7 == 0) {
              uVar13 = 0x40000000;
            }
            *(uint *)(param_1 + 0x23c0) =
                 *(uint *)(param_1 + 0x23c0) & 0x3fffffff | uVar13 | uVar7 & 0x80000000;
          }
          *(uint *)(param_1 + (uVar12 + 0x8dc) * 4) = uVar7;
          return 1;
        }
        if ((uVar13 >> 0x16 & 1) == 0) {
          lVar9 = (ulong)uVar7 * (ulong)uVar10;
          if ((param_2 & 0x200000) != 0) {
            lVar9 = lVar9 + CONCAT44(*(undefined4 *)(param_1 + (uVar12 + 0x8dc) * 4),
                                     *(undefined4 *)(param_1 + (uVar14 + 0x8dc) * 4));
          }
          uVar7 = (uint)((ulong)lVar9 >> 0x20);
          if ((uVar13 >> 0x14 & 1) != 0) {
            uVar13 = 0;
            if (lVar9 == 0) {
              uVar13 = 0x40000000;
            }
            *(uint *)(param_1 + 0x23c0) =
                 *(uint *)(param_1 + 0x23c0) & 0x3fffffff | uVar13 | uVar7 & 0x80000000;
          }
          *(int *)(param_1 + (uVar14 + 0x8dc) * 4) = (int)lVar9;
          *(uint *)(param_1 + (uVar12 + 0x8dc) * 4) = uVar7;
          return 1;
        }
        lVar9 = (long)(int)uVar7 * (long)(int)uVar10;
        if ((param_2 & 0x200000) != 0) {
          lVar9 = CONCAT44(*(undefined4 *)(param_1 + (uVar12 + 0x8dc) * 4),
                           *(undefined4 *)(param_1 + (uVar14 + 0x8dc) * 4)) + lVar9;
        }
        uVar7 = (uint)((ulong)lVar9 >> 0x20);
        if ((uVar13 >> 0x14 & 1) != 0) {
          uVar13 = 0;
          if (lVar9 == 0) {
            uVar13 = 0x40000000;
          }
          *(uint *)(param_1 + 0x23c0) =
               *(uint *)(param_1 + 0x23c0) & 0x3fffffff | uVar13 | uVar7 & 0x80000000;
        }
        *(int *)(param_1 + (uVar14 + 0x8dc) * 4) = (int)lVar9;
        *(uint *)(param_1 + (uVar12 + 0x8dc) * 4) = uVar7;
        return 1;
      }
      uVar7 = (uint)(uVar16 >> 0x15) & 0xf;
      if (uVar7 == 8) {
        uVar6 = *(undefined4 *)(param_1 + ((uVar16 >> 0x10 & 0xf) + 0x8dc) * 4);
        uVar3 = *(undefined4 *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
        uVar8 = load_memory32(param_1 + 0x23d0,uVar6);
        *(undefined4 *)(param_1 + ((uVar16 >> 0xc & 0xf) + 0x8dc) * 4) = uVar8;
        store_memory32(param_1 + 0x23d0,uVar6,uVar3);
        return 1;
      }
      if (uVar7 == 10) {
        uVar6 = *(undefined4 *)(param_1 + ((uVar16 >> 0x10 & 0xf) + 0x8dc) * 4);
        uVar3 = *(undefined4 *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
        uVar7 = load_memory8(param_1 + 0x23d0,uVar6);
        *(uint *)(param_1 + ((uVar16 >> 0xc & 0xf) + 0x8dc) * 4) = uVar7 & 0xff;
        store_memory8(param_1 + 0x23d0,uVar6,uVar3);
        return 1;
      }
    }
    else {
      if ((((uint)(uVar16 >> 0x17) & 3) != 2) || ((uVar13 >> 0x14 & 1) != 0)) {
        uVar6 = execute_arm_alu_load_op2_reg(param_1,uVar16);
        execute_arm_alu_op(param_1,param_2 & 0xffffffff,uVar6);
        return 1;
      }
      if ((uVar13 >> 7 & 1) == 0) {
        if ((uVar13 >> 4 & 1) == 0) {
          if ((uVar13 >> 0x15 & 1) != 0) {
            execute_arm_msr_op(param_1,param_2 & 0xffffffff,
                               *(undefined4 *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4));
            return 1;
          }
          uVar12 = uVar16 >> 0xc & 0xf;
          if ((uVar13 >> 0x16 & 1) == 0) {
            *(undefined4 *)(param_1 + (uVar12 + 0x8dc) * 4) = *(undefined4 *)(param_1 + 0x23c0);
            return 1;
          }
          *(undefined4 *)(param_1 + (uVar12 + 0x8dc) * 4) =
               *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x2104) * 4 + 0x20e8);
          return 1;
        }
        uVar12 = uVar16 >> 5 & 3;
        iVar17 = (int)uVar12;
        if (iVar17 == 2) {
          uVar7 = *(uint *)(param_1 + 0x210c);
          if (uVar7 != 1) {
            return 1;
          }
          execute_arm_saturating_alu_op(param_1,param_2 & 0xffffffff);
          return (ulong)uVar7;
        }
        if (iVar17 == 3) {
          if (*(int *)(param_1 + 0x210c) == 1 && uVar7 == 0xe) {
            execute_arm_raise_exception(param_1,3);
            return 1;
          }
          return 1;
        }
        if (iVar17 == 1) {
          if (*(int *)(param_1 + 0x210c) != 1) {
            return uVar12;
          }
        }
        else if ((uVar13 >> 0x16 & 1) != 0) {
          uVar7 = *(uint *)(param_1 + 0x210c);
          if (uVar7 != 1) {
            return 1;
          }
          iVar17 = *(int *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
          lVar9 = (uVar16 >> 0xc & 0xf) + 0x8dc;
          if (iVar17 == 0) {
            *(undefined4 *)(param_1 + lVar9 * 4) = 0x20;
            return (ulong)uVar7;
          }
          *(int *)(param_1 + lVar9 * 4) = (int)LZCOUNT(iVar17);
          return (ulong)uVar7;
        }
        uVar7 = *(uint *)(param_1 + 0x23c0);
        uVar10 = *(uint *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
        if ((uVar13 >> 5 & 1) != 0) {
          uVar13 = *(uint *)(param_1 + 0x23bc);
          if ((uVar7 & 0x20) != 0) {
            uVar13 = *(uint *)(param_1 + 0x23bc) | 1;
          }
          *(uint *)(param_1 + 0x23a8) = uVar13;
        }
        *(uint *)(param_1 + 0x23bc) = uVar10 & 0xfffffffe;
        *(uint *)(param_1 + 0x23c0) = uVar7 & 0xffffffc0 | uVar7 & 0x1f | (uVar10 & 1) << 5;
        return 1;
      }
      uVar7 = *(uint *)(param_1 + 0x210c);
      if (uVar7 == 1) {
        uVar5 = (uint)(uVar16 >> 0x15) & 3;
        iVar11 = *(int *)(param_1 + ((uVar16 >> 8 & 0xf) + 0x8dc) * 4);
        iVar2 = *(int *)(param_1 + ((param_2 & 0xf) + 0x8dc) * 4);
        uVar10 = uVar13 >> 0x10;
        iVar17 = iVar11 >> 0x10;
        sVar4 = (short)iVar11;
        if (uVar5 == 1) {
          iVar11 = (int)sVar4;
          if ((param_2 & 0x40) != 0) {
            iVar11 = iVar17;
          }
          iVar11 = (int)((ulong)((long)iVar2 * (long)iVar11) >> 0x10);
          iVar17 = iVar11;
          if (((uVar13 >> 5 & 1) == 0) &&
             (iVar2 = *(int *)(param_1 + ((uVar16 >> 0xc & 0xf) + 0x8dc) * 4),
             iVar17 = iVar2 + iVar11, (uint)(iVar17 < iVar11) != -(iVar2 >> 0x1f))) {
            *(uint *)(param_1 + 0x23c0) = *(uint *)(param_1 + 0x23c0) | 0x8000000;
          }
          *(int *)(param_1 + ((long)(int)(uVar10 & 0xf) + 0x8dc) * 4) = iVar17;
          return 1;
        }
        if (uVar5 == 2) {
          iVar11 = (int)sVar4;
          if ((param_2 & 0x40) != 0) {
            iVar11 = iVar17;
          }
          lVar1 = param_1 + (uVar16 >> 0xc & 0xf) * 4;
          param_1 = param_1 + ((ulong)uVar10 & 0xf) * 4;
          lVar9 = CONCAT44(*(undefined4 *)(param_1 + 0x2370),*(undefined4 *)(lVar1 + 0x2370)) +
                  (long)((iVar2 / 2) * (iVar11 / 2));
          *(int *)(lVar1 + 0x2370) = (int)lVar9;
          *(int *)(param_1 + 0x2370) = (int)((ulong)lVar9 >> 0x20);
          return (ulong)uVar7;
        }
        iVar11 = (int)(short)iVar2;
        if ((param_2 & 0x20) != 0) {
          iVar11 = iVar2 >> 0x10;
        }
        iVar2 = (int)sVar4;
        if ((param_2 & 0x40) != 0) {
          iVar2 = iVar17;
        }
        iVar11 = iVar11 * iVar2;
        iVar17 = iVar11;
        if (((uVar13 >> 0x16 & 1) == 0) &&
           (iVar2 = *(int *)(param_1 + ((uVar16 >> 0xc & 0xf) + 0x8dc) * 4), iVar17 = iVar11 + iVar2
           , (uint)(iVar17 < iVar11) != -(iVar2 >> 0x1f))) {
          *(uint *)(param_1 + 0x23c0) = *(uint *)(param_1 + 0x23c0) | 0x8000000;
        }
        *(int *)(param_1 + ((long)(int)(uVar10 & 0xf) + 0x8dc) * 4) = iVar17;
        return (ulong)uVar7;
      }
    }
  }
  else if (uVar5 == 6) {
    if (*(long *)(param_1 + 0x2250) != 0) {
      __printf_chk(1,"Game attempted LDC/STC instruction (%x) on P15. (pc %x, %lx in)\n",uVar16,
                   *(undefined4 *)(param_1 + 0x23bc),*(undefined8 *)(param_1 + 0x2220));
      return 1;
    }
  }
  else {
    if ((uVar13 >> 0x18 & 1) != 0) {
      execute_arm_raise_exception(param_1,2);
      return 1;
    }
    if (*(long *)(param_1 + 0x2250) != 0) {
      if ((uVar13 >> 4 & 1) == 0) {
        __printf_chk(1,"Game attempted CDP instruction (%x) on P15. (pc %x, %lx in)\n",uVar16,
                     *(undefined4 *)(param_1 + 0x23bc),*(undefined8 *)(param_1 + 0x2220));
        return 1;
      }
      execute_arm_coprocessor_register_transfer_op(param_1,uVar16);
      return 1;
    }
  }
LAB_00127778:
  execute_arm_raise_exception(param_1);
  return 1;
}


