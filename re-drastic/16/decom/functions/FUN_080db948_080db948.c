/*
 * Ghidra decompilation
 *
 * Function : FUN_080db948
 * Address  : 080db948
 * Program  : drastic16
 */


code ** FUN_080db948(int **param_1,undefined (*param_2) [16],code **param_3,undefined4 param_4,
                    uint param_5,int param_6,code **param_7,code **param_8,code **param_9)

{
  undefined auVar1 [16];
  bool bVar2;
  uint uVar3;
  code **ppcVar4;
  void *pvVar5;
  undefined (*pauVar6) [16];
  int iVar7;
  int iVar8;
  uint uVar9;
  code **ppcVar10;
  int *piVar11;
  void **ppvVar12;
  code **ppcVar13;
  uint uVar14;
  int *piVar15;
  code **ppcVar16;
  void *__dest;
  void *pvVar17;
  code **ppcVar18;
  int *piVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined auVar23 [16];
  undefined4 *local_11c;
  void **local_118;
  code **local_110;
  code **local_100;
  code **local_fc;
  undefined4 local_f8 [2];
  code **local_f0 [2];
  code **local_e8 [2];
  void *local_e0;
  void *pvStack_dc;
  void *local_d8 [4];
  undefined4 local_c8;
  undefined4 local_c4;
  code **local_b8 [4];
  code **local_a8;
  code **local_a4;
  code **local_94;
  code **local_90;
  
  piVar19 = param_1[4];
  local_d8[0] = (void *)0x0;
  local_d8[1] = (void *)0x0;
  local_d8[2] = (void *)0x0;
  local_c8 = 0;
  local_c4 = 0;
  if ((((((int)piVar19 - 1U < 4) && (piVar15 = *param_1, *piVar15 == 1)) && (piVar15[1] == 1)) &&
      (iVar7 = piVar15[2], piVar15[3] == 0 && iVar7 != -1 || piVar15[3] == 0 && iVar7 == -1)) &&
     (((iVar7 == 0x21 || (iVar7 == 0x30101)) || (iVar7 == 0)))) {
    if (piVar19 == (int *)0x1) {
      if (((param_1[6] == (int *)0x1) && (*param_1[2] == 0)) && (param_1[5] == (int *)0x0)) {
LAB_080dbaa8:
        local_118 = local_d8;
        local_11c = &local_c8;
        local_100 = (code **)0x0;
        local_fc = (code **)0x0;
        piVar11 = (int *)0x0;
        do {
          iVar7 = piVar15[(int)piVar11 * 6 + 2];
          iVar8 = piVar15[(int)piVar11 * 6 + 3];
          if (((iVar7 == 0x21) || (iVar7 == 0x30101)) || (iVar7 == 0)) {
            if (piVar19 == (int *)0x4) {
              local_b8[0] = (code **)0x3;
              local_b8[1] = (code **)0x2;
              local_b8[2] = (code **)0x0;
              local_110 = (code **)param_1[3][(int)piVar11 * 2];
              iVar7 = (param_1[3] + (int)piVar11 * 2)[1];
              ppcVar18 = local_b8[(int)piVar11];
              if (piVar11 < (int *)0x2) {
                if (iVar7 == 0) {
                  ppcVar4 = local_110;
                  ppcVar10 = (code **)(**param_9)(param_9,local_110);
                  iVar7 = 1 - (int)ppcVar10;
                  if ((code **)0x1 < ppcVar10) {
                    iVar7 = 0;
                  }
                  if (local_110 == (code **)0x0) {
                    iVar7 = 0;
                  }
                  if (iVar7 == 0) {
                    local_118[1] = ppcVar10;
                    local_11c[1] = local_110;
                    goto LAB_080dbd70;
                  }
                }
                goto LAB_080dc358;
              }
              ppcVar4 = (code **)0x4;
              if (piVar11 != (int *)0x2) goto LAB_080db988;
              if ((iVar7 != 0 || param_8 <= local_110) && (iVar7 != 0 || local_110 != param_8)) {
                ppcVar4 = (code **)0x5;
                goto LAB_080db988;
              }
              ppcVar10 = (code **)((int)param_7 + ((int)param_8 - (int)local_110));
              ppcVar4 = param_8;
              local_100 = local_110;
              local_fc = ppcVar10;
LAB_080dbd70:
              if (ppcVar18 == (code **)0x0) goto LAB_080dbbb8;
              bVar21 = (code **)((uint)ppcVar18 >> 1) == (code **)0x0;
              bVar2 = ppcVar18 == (code **)0x4;
              bVar20 = ppcVar18 < (code **)0x4;
              ppcVar13 = (code **)((uint)ppcVar18 & 0xfffffffe);
              if ((bVar21 || !bVar20) && (!bVar21 && !bVar2)) {
                ppcVar4 = (code **)0x0;
              }
              if (!bVar21 && bVar20 || (bVar21 || bVar2)) {
                ppcVar4 = (code **)0x1;
              }
              if (!bVar21 && bVar20 || (bVar21 || bVar2)) {
                uVar3 = 0;
                iVar7 = 0;
                ppcVar13 = (code **)0x0;
LAB_080dbdc0:
                uVar14 = *(uint *)(*param_2 + (int)ppcVar13 * 8);
                bVar20 = CARRY4(uVar3,uVar14);
                uVar3 = uVar3 + uVar14;
                iVar7 = iVar7 + *(uint *)((int)(*param_2 + (int)ppcVar13 * 8) + 4) + (uint)bVar20;
                if ((code **)((int)ppcVar13 + 1U) < ppcVar18) {
                  uVar14 = *(uint *)(*param_2 + (int)ppcVar13 * 8 + 8);
                  bVar20 = CARRY4(uVar3,uVar14);
                  uVar3 = uVar3 + uVar14;
                  iVar7 = iVar7 + *(uint *)((int)(*param_2 + (int)ppcVar13 * 8 + 8) + 4) +
                          (uint)bVar20;
                  if ((code **)((int)ppcVar13 + 2U) < ppcVar18) {
                    uVar14 = *(uint *)(param_2[1] + (int)ppcVar13 * 8);
                    bVar20 = CARRY4(uVar3,uVar14);
                    uVar3 = uVar3 + uVar14;
                    iVar7 = iVar7 + *(uint *)((int)(param_2[1] + (int)ppcVar13 * 8) + 4) +
                            (uint)bVar20;
                    if ((code **)((int)ppcVar13 + 3U) < ppcVar18) {
                      uVar14 = *(uint *)(param_2[1] + (int)ppcVar13 * 8 + 8);
                      bVar20 = CARRY4(uVar3,uVar14);
                      uVar3 = uVar3 + uVar14;
                      iVar7 = iVar7 + *(uint *)((int)(param_2[1] + (int)ppcVar13 * 8 + 8) + 4) +
                              (uint)bVar20;
                    }
                  }
                }
              }
              else {
                auVar23 = ZEXT816(0);
                pauVar6 = param_2;
                do {
                  ppcVar4 = (code **)((int)ppcVar4 + 1);
                  auVar1 = *pauVar6;
                  pauVar6 = pauVar6 + 1;
                  auVar23 = VectorAdd(auVar23,auVar1,8);
                } while (ppcVar4 < (code **)((uint)ppcVar18 >> 1));
                uVar22 = VectorAdd(auVar23._0_8_,auVar23._8_8_,8);
                iVar7 = (int)((ulonglong)uVar22 >> 0x20);
                uVar3 = (uint)uVar22;
                if (ppcVar13 != ppcVar18) goto LAB_080dbdc0;
              }
              ppcVar18 = (code **)((int)ppcVar18 << 3);
            }
            else {
              ppcVar18 = (code **)0x0;
              local_110 = param_8;
              ppcVar10 = param_7;
LAB_080dbbb8:
              uVar3 = 0;
              iVar7 = 0;
            }
            ppcVar13 = *(code ***)(*param_2 + (int)ppcVar18);
            uVar14 = *(uint *)((int)(*param_2 + (int)ppcVar18) + 4);
            ppcVar4 = (code **)FUN_080995a8(param_3,iVar7,param_5 + uVar3,
                                            param_6 + iVar7 + (uint)CARRY4(param_5,uVar3));
            if (ppcVar4 != (code **)0x0) goto LAB_080db988;
            uVar3 = piVar15[(int)piVar11 * 6 + 2];
            uVar9 = piVar15[(int)piVar11 * 6 + 3];
            if ((uVar3 | uVar9) != 0) {
              if (uVar9 == 0 && uVar3 == 0x30101) {
                ppcVar18 = (code **)piVar15[(int)piVar11 * 6 + 5];
                local_a8 = ppcVar4;
                local_a4 = ppcVar4;
                ppcVar4 = (code **)FUN_0809bd28(local_b8,piVar15[(int)piVar11 * 6 + 4],ppcVar18,
                                                param_9);
                if (ppcVar4 != (code **)0x0) goto LAB_080db988;
                local_90 = local_110;
                local_a4 = ppcVar10;
                FUN_0809adb4(local_b8);
                while( true ) {
                  bVar20 = uVar14 != 0;
                  if ((bVar20 || (code **)0x3fffe < ppcVar13) &&
                      (bVar20 || ppcVar13 != (code **)0x3ffff)) {
                    ppcVar18 = (code **)0x40000;
                  }
                  local_f0[0] = ppcVar18;
                  if (!bVar20 && (code **)0x3fffe >= ppcVar13 ||
                      !bVar20 && ppcVar13 == (code **)0x3ffff) {
                    local_f0[0] = ppcVar13;
                  }
                  local_f8[0] = 0;
                  ppcVar18 = (code **)(**param_3)(param_3,local_f8,local_f0);
                  ppcVar4 = local_94;
                  if (ppcVar18 != (code **)0x0) goto LAB_080dc198;
                  local_e8[0] = local_f0[0];
                  ppcVar18 = (code **)FUN_0809addc(local_b8,local_110,local_f8[0],local_e8,1,
                                                   &local_e0);
                  bVar20 = ppcVar13 < local_e8[0];
                  ppcVar13 = (code **)((int)ppcVar13 - (int)local_e8[0]);
                  uVar14 = uVar14 - bVar20;
                  local_f0[0] = (code **)((int)local_f0[0] - (int)local_e8[0]);
                  if (ppcVar18 != (code **)0x0) goto LAB_080dc198;
                  if ((local_94 == local_90) ||
                     ((local_e8[0] == (code **)0x0 && (ppcVar4 == local_94)))) break;
                  ppcVar18 = (code **)(*param_3[1])(param_3,local_e8[0]);
                  if (ppcVar18 != (code **)0x0) goto LAB_080dc198;
                }
                if ((local_110 == local_90) &&
                   ((local_f0[0] == (code **)0x0 &&
                    (local_e0 == (void *)0x4 || local_e0 == (void *)0x1)))) {
LAB_080dc388:
                  FUN_0809bc1c(local_b8,param_9);
                  goto LAB_080dbb5c;
                }
              }
              else {
                if (uVar9 != 0 || uVar3 != 0x21) break;
                local_a4 = ppcVar4;
                local_a8 = ppcVar4;
                if (piVar15[(int)piVar11 * 6 + 5] != 1) goto LAB_080dbcf8;
                ppcVar18 = param_9;
                ppcVar4 = (code **)FUN_0809c1a0(local_b8,*(undefined *)piVar15[(int)piVar11 * 6 + 4]
                                               );
                if (ppcVar4 != (code **)0x0) goto LAB_080db988;
                local_90 = local_110;
                local_a4 = ppcVar10;
                FUN_0809c2b0(local_b8);
                while( true ) {
                  bVar20 = uVar14 != 0;
                  if ((bVar20 || (code **)0x3fffe < ppcVar13) &&
                      (bVar20 || ppcVar13 != (code **)0x3ffff)) {
                    ppcVar18 = (code **)0x40000;
                  }
                  local_f0[0] = ppcVar18;
                  if (!bVar20 && (code **)0x3fffe >= ppcVar13 ||
                      !bVar20 && ppcVar13 == (code **)0x3ffff) {
                    local_f0[0] = ppcVar13;
                  }
                  local_f8[0] = 0;
                  ppcVar18 = (code **)(**param_3)(param_3,local_f8,local_f0);
                  ppcVar4 = local_94;
                  if (ppcVar18 != (code **)0x0) goto LAB_080dc198;
                  local_e8[0] = local_f0[0];
                  ppcVar18 = (code **)FUN_0809c2cc(local_b8,local_110,local_f8[0],local_e8,1,
                                                   &local_e0);
                  bVar20 = ppcVar13 < local_e8[0];
                  ppcVar13 = (code **)((int)ppcVar13 - (int)local_e8[0]);
                  uVar14 = uVar14 - bVar20;
                  local_f0[0] = (code **)((int)local_f0[0] - (int)local_e8[0]);
                  if (ppcVar18 != (code **)0x0) goto LAB_080dc198;
                  if ((local_94 == local_90) ||
                     ((local_e8[0] == (code **)0x0 && (ppcVar4 == local_94)))) break;
                  ppcVar18 = (code **)(*param_3[1])(param_3,local_e8[0]);
                  if (ppcVar18 != (code **)0x0) goto LAB_080dc198;
                }
                if ((local_110 == local_90) &&
                   ((local_f0[0] == (code **)0x0 && (local_e0 == (void *)0x1)))) goto LAB_080dc388;
              }
              ppcVar18 = (code **)0x1;
LAB_080dc198:
              FUN_0809bc1c(local_b8,param_9);
              ppcVar4 = ppcVar18;
              goto LAB_080db988;
            }
            if (uVar14 != 0 || ppcVar13 != local_110) {
LAB_080dbcf8:
              ppcVar4 = (code **)0x1;
              goto LAB_080db988;
            }
            if (((uint)ppcVar13 | uVar14) != 0) {
              do {
                local_b8[0] = (code **)0x3ffff;
                bVar20 = uVar14 != 0;
                if ((bVar20 || (code **)0x3fffe < ppcVar13) &&
                    (bVar20 || ppcVar13 != (code **)0x3ffff)) {
                  local_b8[0] = (code **)0x40000;
                }
                if (!bVar20 && (code **)0x3fffe >= ppcVar13 ||
                    !bVar20 && ppcVar13 == (code **)0x3ffff) {
                  local_b8[0] = ppcVar13;
                }
                ppcVar4 = (code **)(**param_3)(param_3,&local_e0,local_b8);
                ppcVar18 = local_b8[0];
                if (ppcVar4 != (code **)0x0) goto LAB_080db988;
                ppcVar16 = (code **)((int)ppcVar10 + (int)local_b8[0]);
                if (local_b8[0] == (code **)0x0) goto LAB_080dbcac;
                bVar20 = ppcVar13 < local_b8[0];
                ppcVar13 = (code **)((int)ppcVar13 - (int)local_b8[0]);
                uVar14 = uVar14 - bVar20;
                memcpy(ppcVar10,local_e0,(size_t)local_b8[0]);
                ppcVar4 = (code **)(*param_3[1])(param_3,ppcVar18);
                if (ppcVar4 != (code **)0x0) goto LAB_080db988;
                ppcVar10 = ppcVar16;
              } while (((uint)ppcVar13 | uVar14) != 0);
            }
          }
          else if (iVar8 == 0 && iVar7 == 0x303011b) {
            ppcVar18 = *(code ***)(*param_2 + 8);
            iVar7 = *(int *)(*param_2 + 0xc);
            if (piVar11 != (int *)0x3) break;
            ppcVar4 = (code **)FUN_080995a8(param_3,param_6,*(uint *)*param_2 + param_5,
                                            *(int *)(*param_2 + 4) + param_6 +
                                            (uint)CARRY4(*(uint *)*param_2,param_5));
            if (ppcVar4 != (code **)0x0) goto LAB_080db988;
            if (iVar7 != 0) {
LAB_080dc358:
              ppcVar4 = (code **)0x2;
              goto LAB_080db988;
            }
            ppcVar10 = ppcVar18;
            pvVar5 = (void *)(**param_9)(param_9,ppcVar18);
            local_d8[2] = pvVar5;
            __dest = pvVar5;
            if (pvVar5 == (void *)0x0) {
              if (ppcVar18 != (code **)0x0) goto LAB_080dc358;
              __dest = (void *)0x0;
            }
            if (ppcVar18 != (code **)0x0) {
              uVar3 = 0;
              ppcVar13 = ppcVar18;
              do {
                bVar20 = uVar3 != 0;
                if ((bVar20 || (code **)0x3fffe < ppcVar13) &&
                    (bVar20 || ppcVar13 != (code **)0x3ffff)) {
                  ppcVar10 = (code **)0x40000;
                }
                local_b8[0] = ppcVar10;
                if (!bVar20 && (code **)0x3fffe >= ppcVar13 ||
                    !bVar20 && ppcVar13 == (code **)0x3ffff) {
                  local_b8[0] = ppcVar13;
                }
                ppcVar4 = (code **)(**param_3)(param_3,&local_e0,local_b8);
                ppcVar16 = local_b8[0];
                if (ppcVar4 != (code **)0x0) goto LAB_080db988;
                pvVar17 = (void *)((int)__dest + (int)local_b8[0]);
                if (local_b8[0] == (code **)0x0) goto LAB_080dbcac;
                bVar20 = ppcVar13 < local_b8[0];
                ppcVar13 = (code **)((int)ppcVar13 - (int)local_b8[0]);
                uVar3 = uVar3 - bVar20;
                ppcVar10 = local_b8[0];
                memcpy(__dest,local_e0,(size_t)local_b8[0]);
                ppcVar4 = (code **)(*param_3[1])(param_3,ppcVar16);
                if (ppcVar4 != (code **)0x0) goto LAB_080db988;
                __dest = pvVar17;
              } while (((uint)ppcVar13 | uVar3) != 0);
            }
            ppcVar4 = (code **)FUN_080dcb78(local_fc,local_100,local_d8[0],local_c8,local_d8[1],
                                            local_c4,pvVar5,ppcVar18,param_7,param_8);
            if (ppcVar4 != (code **)0x0) goto LAB_080db988;
          }
          else {
            if (piVar11 != (int *)0x1) break;
            if (iVar8 == 0 && iVar7 == 0x3030103) {
              local_b8[0] = (code **)0x0;
              FUN_080dc968(param_7,param_8,0,local_b8,0);
            }
            else {
              if (iVar8 != 0 || iVar7 != 0x3030501) break;
              FUN_080dc4dc(param_7,param_8,0,0);
            }
          }
LAB_080dbb5c:
          piVar11 = (int *)((int)piVar11 + 1);
          piVar19 = param_1[4];
          local_118 = local_118 + -1;
          local_11c = local_11c + -1;
          if (piVar19 <= piVar11) goto LAB_080dc09c;
          piVar15 = *param_1;
        } while( true );
      }
    }
    else if (piVar19 == (int *)0x2) {
      iVar7 = piVar15[8];
      if (((((piVar15[9] == 0 && iVar7 != -1 || piVar15[9] == 0 && iVar7 == -1) && (piVar15[6] == 1)
            ) && (piVar15[7] == 1)) && ((param_1[6] == (int *)0x1 && (*param_1[2] == 0)))) &&
         (((param_1[5] == (int *)0x1 && ((*param_1[1] == 1 && (param_1[1][1] == 0)))) &&
          ((iVar7 == 0x3030103 || (iVar7 == 0x3030501)))))) goto LAB_080dbaa8;
    }
    else if ((((piVar19 == (int *)0x4) && (piVar15[6] == 1)) && (piVar15[7] == 1)) &&
            (iVar7 = piVar15[8], piVar15[9] == 0 && iVar7 != -1 || piVar15[9] == 0 && iVar7 == -1))
    {
      if (((iVar7 != 0x21) && (iVar7 != 0x30101)) && (ppcVar4 = (code **)0x4, iVar7 != 0))
      goto LAB_080db988;
      if (((piVar15[0xc] == 1) && (piVar15[0xd] == 1)) &&
         (((((iVar7 = piVar15[0xe],
             piVar15[0xf] == 0 && iVar7 != -1 || piVar15[0xf] == 0 && iVar7 == -1 &&
             (((((iVar7 == 0x21 || (iVar7 == 0x30101)) || (iVar7 == 0)) &&
               ((piVar15[0x15] == 0 && piVar15[0x14] == 0x303011b && (piVar15[0x12] == 4)))) &&
              (piVar15[0x13] == 1)))) &&
            ((param_1[6] == (int *)0x4 && (piVar11 = param_1[2], *piVar11 == 2)))) &&
           (piVar11[1] == 6)) &&
          ((((piVar11[2] == 1 && (piVar11[3] == 0)) && (param_1[5] == (int *)0x3)) &&
           ((((piVar11 = param_1[1], *piVar11 == 5 && (piVar11[1] == 0)) &&
             ((piVar11[2] == 4 && ((piVar11[3] == 1 && (piVar11[4] == 3)))))) && (piVar11[5] == 2)))
           ))))) goto LAB_080dbaa8;
    }
  }
  ppcVar4 = (code **)0x4;
LAB_080db988:
  ppvVar12 = &pvStack_dc;
  do {
    ppvVar12 = ppvVar12 + 1;
    (*param_9[1])(param_9,*ppvVar12);
  } while (ppvVar12 != local_d8 + 2);
  return ppcVar4;
LAB_080dbcac:
  ppcVar4 = (code **)0x6;
  goto LAB_080db988;
LAB_080dc09c:
  ppcVar4 = (code **)0x0;
  goto LAB_080db988;
}


