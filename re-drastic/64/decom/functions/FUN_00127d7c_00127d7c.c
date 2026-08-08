/*
 * Ghidra decompilation
 *
 * Function : FUN_00127d7c
 * Address  : 00127d7c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00127d7c(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar16;
  int iStack_c;
  long lStack_8;
  ulong uVar15;
  
  lStack_8 = ___stack_chk_guard;
  uVar16 = *(uint *)(param_1 + 0x2290);
  if (-1 < (int)uVar16) {
    if (*(int *)(param_1 + 0x2110) == 0) {
      iVar6 = 0;
      do {
        uVar11 = *(undefined4 *)(param_1 + 0x23bc);
        if (*(char *)(param_1 + 0x2249) == '\x01') {
          *(long *)(param_1 + 0x2220) = *(long *)(param_1 + 0x2220) + 1;
        }
        else {
          step_debug(param_1 + 0x2118,uVar11,uVar16);
          uVar11 = *(undefined4 *)(param_1 + 0x23bc);
        }
        if ((*(uint *)(param_1 + 0x23c0) >> 5 & 1) == 0) {
          uVar8 = load_memory32(param_1 + 0x23d0,uVar11);
          uVar8 = uVar8 & 0xffffffff;
          uVar13 = uVar8 >> 0x19;
          *(int *)(param_1 + 0x23ac) = *(int *)(param_1 + 0x23bc) + 8;
          *(int *)(param_1 + 0x23bc) = *(int *)(param_1 + 0x23bc) + 4;
          uVar4 = (uint)uVar13 & 7;
          uVar15 = uVar8 >> 0x1c;
          iVar14 = (int)uVar15;
          if (uVar4 == 5) goto LAB_001280f8;
LAB_00127e5c:
          iVar9 = 1;
          if (uVar4 == 4 && iVar14 == 0xe) {
            iVar9 = (uint)(byte)(&bit_count)[uVar8 >> 8 & 0xff] +
                    (uint)(byte)(&bit_count)[(uint)uVar8 & 0xff];
          }
LAB_00127e6c:
          iVar5 = *(int *)(param_1 + 0x210c);
          iVar7 = iVar9 * 2;
          if (iVar5 == 1) {
            iVar7 = iVar9;
          }
          iVar6 = iVar6 + iVar7;
          bVar2 = uVar4 == 4;
          if (!bVar2) goto LAB_00127e88;
LAB_00128134:
          if (((uint)uVar8 & 0x108000) == 0x108000) goto LAB_00128088;
LAB_00127ec8:
          *(uint *)(param_1 + 0x2290) = uVar16;
          execute_arm_instruction(param_1,uVar8 & 0xffffffff);
          uVar4 = *(uint *)(param_1 + 0x22a8);
          uVar16 = *(uint *)(param_1 + 0x2290);
          if (uVar4 != 0) {
            uVar12 = 0;
LAB_00127ee8:
            if ((uVar4 & (triggered_flags_11721 ^ 0xffffffff)) != 0) {
              triggered_flags_11721 = triggered_flags_11721 | uVar4;
            }
            if ((uVar4 & 8) != 0) {
              iVar6 = 0;
            }
            bVar2 = (uVar4 & 4) == 0;
            if ((!bVar2 && uVar16 != 0) && (bVar2 || -1 < (int)uVar16)) {
              uVar12 = 0;
              iVar14 = *(int *)(*(long *)(param_1 + 0x2258) + 0x10) - uVar16;
              uVar16 = 0;
              *(int *)(*(long *)(param_1 + 0x2258) + 0x10) = iVar14;
            }
            else {
              uVar12 = uVar12 & uVar16 >> 0x1f;
            }
            if (((uVar4 >> 1 & 1) == 0) ||
               (uVar4 = *(uint *)(param_1 + 0x23c0), (uVar4 >> 7 & 1) != 0)) {
              *(undefined4 *)(param_1 + 0x22a8) = 0;
            }
            else {
              uVar1 = *(uint *)(param_1 + 0x23bc);
              if ((uVar1 & 1) == 0) {
                uVar10 = *(uint *)(param_1 + 0x2104);
                iVar6 = uVar1 + 4;
                if (uVar10 == 2) {
                  *(int *)(param_1 + 0x23a8) = iVar6;
                }
                else {
LAB_00127f8c:
                  *(undefined8 *)(param_1 + (ulong)uVar10 * 8 + 0x2090) =
                       *(undefined8 *)(param_1 + 0x23a4);
                  if (uVar10 == 1) {
                    *(undefined4 *)(param_1 + 0x23a0) = *(undefined4 *)(param_1 + 0x20d8);
                    uVar11 = *(undefined4 *)(param_1 + 0x20dc);
                    *(undefined8 *)(param_1 + 0x2398) = *(undefined8 *)(param_1 + 0x20d0);
                    *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x20c8);
                  }
                  else {
                    uVar11 = *(undefined4 *)(param_1 + 0x20a0);
                  }
                  *(undefined4 *)(param_1 + 0x2104) = 2;
                  *(undefined4 *)(param_1 + 0x23a4) = uVar11;
                  *(int *)(param_1 + 0x23a8) = iVar6;
                  if ((uVar1 & 1) != 0) goto LAB_00127fc0;
                }
                *(uint *)(param_1 + 0x20f0) = uVar4;
              }
              else {
                uVar10 = *(uint *)(param_1 + 0x2104);
                *(uint *)(param_1 + 0x23bc) = uVar1 & 0xfffffffe;
                iVar6 = (uVar1 & 0xfffffffe) + 4;
                if (uVar10 != 2) goto LAB_00127f8c;
                *(int *)(param_1 + 0x23a8) = iVar6;
LAB_00127fc0:
                *(uint *)(param_1 + 0x20f0) = uVar4 | 0x20;
              }
              iVar14 = 0x18;
              if (*(int *)(param_1 + 0x210c) == 1) {
                iVar14 = *(int *)(*(long *)(param_1 + 0x2250) + 0x10) + 0x18;
              }
              iVar6 = 0;
              *(undefined4 *)(param_1 + 0x22a8) = 0;
              *(int *)(param_1 + 0x23bc) = iVar14;
              *(uint *)(param_1 + 0x23c0) = uVar4 & 0xffffffc0 | 0x92;
            }
            goto joined_r0x00127f28;
          }
        }
        else {
          uVar3 = load_memory16(param_1 + 0x23d0);
          *(int *)(param_1 + 0x23bc) = *(int *)(param_1 + 0x23bc) + 2;
          uVar8 = convert_thumb_instruction_to_arm(uVar3,&iStack_c);
          uVar8 = uVar8 & 0xffffffff;
          uVar4 = *(int *)(param_1 + 0x23bc) + 2;
          if (iStack_c != 0) {
            uVar4 = uVar4 & 0xfffffffd;
          }
          uVar13 = uVar8 >> 0x19;
          *(uint *)(param_1 + 0x23ac) = uVar4;
          uVar4 = (uint)uVar13 & 7;
          uVar15 = uVar8 >> 0x1c;
          iVar14 = (int)uVar15;
          if (uVar4 != 5) goto LAB_00127e5c;
LAB_001280f8:
          iVar14 = (int)uVar15;
          if (iVar14 == 0xe) {
            iVar9 = 3;
            goto LAB_00127e6c;
          }
          iVar7 = execute_arm_condition(param_1,uVar15);
          iVar5 = *(int *)(param_1 + 0x210c);
          iVar9 = 3;
          if (iVar7 == 0) {
            iVar9 = 1;
          }
          iVar7 = iVar9 * 2;
          if (iVar5 == 1) {
            iVar7 = iVar9;
          }
          iVar6 = iVar6 + iVar7;
          bVar2 = uVar4 == 4;
          if (bVar2) goto LAB_00128134;
LAB_00127e88:
          uVar12 = (uint)uVar8;
          if (uVar4 < 4 || bVar2) {
            if (uVar4 == 1) {
              if ((((uint)(uVar8 >> 0x17) & 3) != 2) || ((uVar12 >> 0x14 & 1) != 0)) {
LAB_00128060:
                if (3 < ((uint)(uVar8 >> 0x15) & 0xf) - 8) {
LAB_00127eb8:
                  if (((uint)(uVar8 >> 0xc) & 0xf) == 0xf) goto LAB_00128088;
                }
              }
            }
            else if ((uVar13 & 6) == 0) {
              if (uVar4 == 0) {
                if ((uVar12 & 0x90) == 0x90) {
                  if ((uVar8 & 0x60) != 0) goto LAB_00127eb4;
                }
                else {
                  if ((((uint)(uVar8 >> 0x17) & 3) != 2) || ((uVar12 >> 0x14 & 1) != 0))
                  goto LAB_00128060;
                  if ((uVar12 & 0x90) == 0x10) {
                    uVar4 = (uint)(uVar8 >> 5) & 3;
                    if (uVar4 == 1) {
                      if (iVar5 == 1) goto LAB_00128088;
                    }
                    else if (uVar4 == 3) {
                      if (iVar14 == 0xe && iVar5 == 1) goto LAB_00128088;
                    }
                    else if ((uVar8 >> 5 & 3) == 0) {
                      uVar12 = uVar12 >> 0x16;
                      goto joined_r0x00128048;
                    }
                  }
                }
              }
            }
            else if (uVar4 != 4) {
              if (((uVar12 ^ 0xffffffff) & 0x2000010) == 0) {
                if ((*(uint *)(param_1 + 0x23c0) >> 5 & 1) != 0) {
                  uVar12 = uVar12 >> 0x10;
                  goto joined_r0x00128048;
                }
              }
              else {
LAB_00127eb4:
                if ((uVar12 >> 0x14 & 1) != 0) goto LAB_00127eb8;
              }
            }
            goto LAB_00127ec8;
          }
          if (uVar4 != 5) {
            if (uVar4 == 7) {
              uVar12 = uVar12 >> 0x18;
joined_r0x00128048:
              if ((uVar12 & 1) == 0) goto LAB_00128088;
            }
            goto LAB_00127ec8;
          }
LAB_00128088:
          *(uint *)(param_1 + 0x2290) = uVar16 - iVar6;
          iVar6 = execute_arm_instruction(param_1,uVar8 & 0xffffffff);
          uVar4 = *(uint *)(param_1 + 0x22a8);
          uVar16 = *(uint *)(param_1 + 0x2290);
          if (uVar4 != 0) {
            uVar12 = (uint)(iVar6 != 0);
            iVar6 = 0;
            goto LAB_00127ee8;
          }
          uVar12 = (uint)(iVar6 != 0) & uVar16 >> 0x1f;
          iVar6 = 0;
joined_r0x00127f28:
          if (uVar12 != 0) goto LAB_00127f40;
        }
      } while (*(int *)(param_1 + 0x2110) == 0);
    }
    uVar16 = 0xffffffff;
LAB_00127f40:
    *(uint *)(param_1 + 0x2290) = uVar16;
  }
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


