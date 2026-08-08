/*
 * Ghidra decompilation
 *
 * Function : dma_transfer
 * Address  : 0011f5c0
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint dma_transfer(long *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined2 *puVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  long lVar21;
  undefined (*pauVar22) [16];
  undefined8 *puVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  uint uVar27;
  undefined8 *puVar28;
  int iVar29;
  long lVar30;
  uint uVar31;
  undefined2 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  undefined (*pauVar36) [16];
  undefined2 *puVar37;
  code *pcVar38;
  long lVar39;
  undefined2 *puVar40;
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  uint local_68;
  int local_48;
  uint local_40;
  uint local_38;
  uint local_30;
  undefined4 *local_20;
  undefined4 *local_18;
  
  local_68 = *(uint *)(param_2 + 4);
  lVar30 = *param_1;
  local_38 = local_68 & 0x1fffff;
  lVar26 = param_2[1];
  uVar10 = *(uint *)(param_2 + 3);
  uVar8 = *(uint *)((long)param_2 + 0x1c);
  lVar21 = *(long *)(lVar30 + 0xfba68);
  iVar25 = *(int *)(lVar26 + 0x2290);
  lVar13 = ((ulong)*(uint *)(lVar21 + 0x10) + *(long *)(lVar21 + 8)) - (long)iVar25;
  if (uVar8 < 0x10000000) {
    uVar20 = uVar8 >> 0x18;
  }
  else {
    uVar20 = 0;
    uVar8 = 0;
  }
  if (uVar10 < 0x10000000) {
    uVar27 = uVar10 >> 0x18;
  }
  else {
    uVar27 = 0;
    uVar10 = 0;
  }
  if (local_38 == 0) {
    local_38 = 0x200000;
  }
  uVar9 = *(uint *)(lVar26 + 0x210c);
  lVar14 = ((((ulong)local_68 & 0x4000000) >> 0x1a) + (ulong)uVar9 * 2) * 0x10;
  if (uVar20 == uVar27) {
    iVar29 = *(int *)(&cycles_non_sequential_11154 + (lVar14 + (ulong)(byte)uVar20) * 4);
  }
  else {
    iVar29 = *(int *)(cycles_sequential_11153 + (lVar14 + (ulong)(byte)uVar20) * 4);
    if (uVar20 != 6) {
      iVar29 = iVar29 + *(int *)(cycles_sequential_11153 + (lVar14 + (ulong)(byte)uVar27) * 4);
    }
  }
  uVar20 = local_38 * *(int *)(nds_system + lVar21 + 0x362e998) * iVar29;
  *param_2 = lVar13 + (ulong)uVar20;
  if (nds_system[lVar21 + 0x362e99e] != '\0') {
    *(uint *)(lVar26 + 0x2290) = iVar25 - uVar20;
  }
  if ((local_68 >> 0x1a & 1) == 0) {
    uVar31 = uVar10 & 0xfffffffe;
    local_30 = local_68 >> 0x15 & 0xf;
    uVar27 = uVar8 & 0xfffffffe;
    if (local_30 == 6) {
      lVar14 = (ulong)(uVar8 >> 0x17) * 0x60;
      local_30 = 0;
      do {
        while( true ) {
          uVar10 = local_38;
          lVar39 = param_1[1];
          lVar24 = (ulong)(uVar31 >> 0x17) * 0x60;
          puVar1 = (uint *)(lVar39 + lVar24);
          puVar2 = (uint *)(lVar39 + lVar14);
          uVar9 = *(uint *)(lVar39 + lVar24);
          uVar8 = uVar31 & uVar9;
          if (uVar9 < uVar8 + local_38 * -2) break;
          cVar6 = *(char *)(puVar1 + 0x16);
          local_38 = 0;
          if (cVar6 != '\x01') goto LAB_001213bc;
LAB_00121548:
          bVar4 = false;
          puVar37 = (undefined2 *)(**(code **)(puVar1 + 2))(lVar30,uVar31);
          cVar6 = *(char *)((long)puVar2 + 0x59);
          iVar25 = 2;
          if (cVar6 != '\x01') goto LAB_001213e4;
LAB_00121570:
          puVar17 = (undefined2 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
LAB_001213f4:
          lVar24 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
          uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
          if (bVar4) {
            uVar9 = uVar31;
            uVar8 = uVar10;
            if (lVar24 != 0) {
              uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 << 1);
              local_30 = local_30 | uVar12;
            }
            do {
              uVar7 = (*(code *)puVar37)(lVar30,uVar9 & *puVar1);
              *puVar17 = uVar7;
              uVar8 = uVar8 - 1;
              uVar9 = uVar9 - 2;
            } while (uVar8 != 0);
          }
          else {
            if (lVar24 != 0) {
              uVar8 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 * 2);
              local_30 = local_30 | uVar8;
            }
            puVar32 = puVar37;
            do {
              puVar40 = puVar32 + -1;
              *puVar17 = *puVar32;
              puVar32 = puVar40;
            } while (puVar37 + ~(ulong)(uVar10 - 1) != puVar40);
          }
joined_r0x00121ea8:
          uVar31 = uVar31 + uVar10 * -2;
          if (local_38 == 0) goto LAB_0011f928;
        }
        uVar10 = (uVar8 >> 1) + 1;
        cVar6 = *(char *)(puVar1 + 0x16);
        local_38 = local_38 - uVar10;
        if (cVar6 == '\x01') goto LAB_00121548;
LAB_001213bc:
        if (cVar6 == '\x02') {
          iVar25 = 3;
          bVar4 = true;
          puVar37 = *(undefined2 **)(puVar1 + 4);
        }
        else if (cVar6 == '\0') {
          bVar4 = false;
          iVar25 = 2;
          puVar37 = (undefined2 *)(*(long *)(puVar1 + 2) + (ulong)uVar8);
        }
        else {
          puVar37 = (undefined2 *)(lVar30 + 0x6b070);
          bVar4 = false;
          iVar25 = 2;
        }
        cVar6 = *(char *)((long)puVar2 + 0x59);
        if (cVar6 == '\x01') goto LAB_00121570;
LAB_001213e4:
        if (cVar6 != '\x02') {
          puVar17 = (undefined2 *)(lVar30 + 0x8b070);
          if (cVar6 == '\0') {
            puVar17 = (undefined2 *)
                      (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar39 + lVar14)));
          }
          goto LAB_001213f4;
        }
        pcVar38 = *(code **)(puVar2 + 10);
        lVar24 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
        uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
        if (iVar25 != 2) {
          uVar9 = uVar31;
          uVar8 = uVar10;
          if (lVar24 != 0) {
            uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 << 1);
            local_30 = local_30 | uVar12;
          }
          do {
            uVar11 = (*(code *)puVar37)(lVar30,uVar9 & *puVar1);
            (*pcVar38)(lVar30,uVar27 & *puVar2,uVar11);
            uVar8 = uVar8 - 1;
            uVar9 = uVar9 - 2;
          } while (uVar8 != 0);
          goto joined_r0x00121ea8;
        }
        if (lVar24 != 0) {
          uVar8 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 * 2);
          local_30 = local_30 | uVar8;
        }
        uVar31 = uVar31 + uVar10 * -2;
        puVar17 = puVar37;
        do {
          puVar32 = puVar17 + -1;
          (*pcVar38)(lVar30,uVar27 & *puVar2,*puVar17);
          puVar17 = puVar32;
        } while (puVar37 + ~(ulong)(uVar10 - 1) != puVar32);
      } while (local_38 != 0);
LAB_0011f928:
      bVar4 = *(int *)(lVar26 + 0x210c) == 1;
      goto LAB_0011f93c;
    }
    if (6 < local_30) {
      if (local_30 != 9) {
        if (local_30 < 10) {
          if (local_30 == 7) goto LAB_001203e8;
          if (local_30 == 8) goto LAB_0011fd74;
        }
        else {
          if (local_30 == 10) {
            lVar39 = param_1[1];
            lVar14 = (ulong)(uVar10 >> 0x17) * 0x60;
            lVar24 = (ulong)(uVar8 >> 0x17) * 0x60;
            puVar1 = (uint *)(lVar39 + lVar14);
            puVar2 = (uint *)(lVar39 + lVar24);
            cVar6 = *(char *)(puVar1 + 0x16);
            if (cVar6 == '\x01') {
              local_30 = 0;
              puVar37 = (undefined2 *)(**(code **)(puVar1 + 2))(lVar30,uVar31);
              iVar25 = 2;
            }
            else if (cVar6 == '\x02') {
              iVar25 = 3;
              local_30 = 1;
              puVar37 = *(undefined2 **)(puVar1 + 4);
            }
            else if (cVar6 == '\0') {
              local_30 = 0;
              puVar37 = (undefined2 *)
                        (*(long *)(puVar1 + 2) + (ulong)(uVar31 & *(uint *)(lVar39 + lVar14)));
              iVar25 = 2;
            }
            else {
              puVar37 = (undefined2 *)(lVar30 + 0x6b070);
              local_30 = 0;
              iVar25 = 2;
            }
            cVar6 = *(char *)((long)puVar2 + 0x59);
            if (cVar6 == '\x01') {
              puVar17 = (undefined2 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
            }
            else {
              if (cVar6 == '\x02') {
                pcVar38 = *(code **)(puVar2 + 10);
                lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
                uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
                if (iVar25 == 2) {
                  local_30 = 0;
                  if (lVar14 != 0) {
                    local_30 = memory_check_code_region(lVar14,uVar15,uVar27,local_38 << 1);
                  }
                  do {
                    (*pcVar38)(lVar30,uVar27 & *puVar2,*puVar37);
                    local_38 = local_38 - 1;
                  } while (local_38 != 0);
                }
                else {
                  local_30 = 0;
                  if (lVar14 != 0) {
                    local_30 = memory_check_code_region(lVar14,uVar15,uVar27,local_38 << 1);
                  }
                  do {
                    uVar11 = (*(code *)puVar37)(lVar30,uVar31 & *puVar1);
                    (*pcVar38)(lVar30,uVar27 & *puVar2,uVar11);
                    local_38 = local_38 - 1;
                  } while (local_38 != 0);
                }
                goto LAB_0011fd58;
              }
              if (cVar6 == '\0') {
                puVar17 = (undefined2 *)
                          (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar39 + lVar24)));
              }
              else {
                puVar17 = (undefined2 *)(lVar30 + 0x8b070);
              }
            }
            lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
            uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
            if (local_30 == 1) {
              local_30 = 0;
              if (lVar14 != 0) {
                local_30 = memory_check_code_region(lVar14,uVar15,uVar27,local_38 << 1);
              }
              do {
                uVar7 = (*(code *)puVar37)(lVar30,uVar31 & *puVar1);
                *puVar17 = uVar7;
                local_38 = local_38 - 1;
              } while (local_38 != 0);
            }
            else {
              if (lVar14 != 0) {
                local_30 = memory_check_code_region(lVar14,uVar15,uVar27,local_38 << 1);
              }
              do {
                *puVar17 = *puVar37;
                local_38 = local_38 - 1;
              } while (local_38 != 0);
            }
            goto LAB_0011fd58;
          }
          if (local_30 == 0xb) {
LAB_0011fd74:
            lVar14 = (ulong)(uVar10 >> 0x17) * 0x60;
            local_30 = 0;
            do {
              while( true ) {
                uVar8 = local_38;
                lVar24 = param_1[1];
                lVar39 = (ulong)(uVar27 >> 0x17) * 0x60;
                puVar1 = (uint *)(lVar24 + lVar39);
                puVar2 = (uint *)(lVar24 + lVar14);
                uVar10 = *(uint *)(lVar24 + lVar39);
                if (uVar10 < (uVar27 & uVar10) + local_38 * 2) break;
                cVar6 = *(char *)(puVar2 + 0x16);
                local_38 = 0;
                if (cVar6 != '\x01') goto LAB_0011fdf8;
LAB_00120ebc:
                puVar37 = (undefined2 *)(**(code **)(puVar2 + 2))(lVar30,uVar31);
                cVar6 = *(char *)((long)puVar1 + 0x59);
                uVar10 = 0;
                iVar25 = 2;
                if (cVar6 != '\x01') goto LAB_0011fe1c;
LAB_00120eec:
                puVar19 = (undefined8 *)(**(code **)(puVar1 + 8))(lVar30,uVar27);
LAB_0011fe30:
                lVar24 = (**(code **)(puVar1 + 0x12))(lVar30,puVar1,uVar27);
                uVar15 = (**(code **)(puVar1 + 0x14))(lVar30,puVar1,uVar27);
                if (uVar10 == 1) {
                  if (lVar24 != 0) {
                    uVar10 = memory_check_code_region(lVar24,uVar15,uVar27,uVar8 * 2);
                    local_30 = local_30 | uVar10;
                  }
                  puVar23 = puVar19;
                  do {
                    uVar7 = (*(code *)puVar37)(lVar30,uVar31 & *puVar2);
                    puVar28 = (undefined8 *)((long)puVar23 + 2);
                    *(undefined2 *)puVar23 = uVar7;
                    puVar23 = puVar28;
                  } while ((undefined8 *)((long)puVar19 + ((ulong)(uVar8 - 1) + 1) * 2) != puVar28);
                }
                else {
                  if (lVar24 != 0) {
                    uVar9 = memory_check_code_region(lVar24,uVar15,uVar27,uVar8 * 2);
                    local_30 = local_30 | uVar9;
                  }
                  bVar4 = puVar37 < (undefined2 *)((long)puVar19 + (ulong)uVar8 * 2);
                  uVar9 = uVar8 - 1;
                  if ((bVar4 && puVar19 < puVar37 + 1 || uVar9 < 8) ||
                      (!bVar4 || puVar19 >= puVar37 + 1) && uVar9 == 8) {
                    puVar23 = puVar19;
                    do {
                      puVar28 = (undefined8 *)((long)puVar23 + 2);
                      *(undefined2 *)puVar23 = *puVar37;
                      puVar23 = puVar28;
                    } while ((undefined8 *)((long)puVar19 + (ulong)uVar9 * 2 + 2) != puVar28);
                  }
                  else {
                    uVar7 = *puVar37;
                    auVar41._0_8_ = CONCAT26(uVar7,CONCAT24(uVar7,CONCAT22(uVar7,uVar7)));
                    auVar41._8_2_ = uVar7;
                    auVar41._10_2_ = uVar7;
                    auVar41._12_2_ = uVar7;
                    auVar41._14_2_ = uVar7;
                    uVar12 = (uVar8 - 8 >> 3) + 1;
                    puVar23 = puVar19;
                    do {
                      uVar10 = uVar10 + 1;
                      puVar23[1] = auVar41._8_8_;
                      *puVar23 = auVar41._0_8_;
                      puVar23 = puVar23 + 2;
                    } while (uVar10 < uVar12);
                    lVar24 = (ulong)(uVar12 * 8) * 2;
                    if (uVar8 != uVar12 * 8) {
                      uVar7 = *puVar37;
                      *(undefined2 *)((long)puVar19 + lVar24) = uVar7;
                      iVar25 = uVar9 + uVar12 * -8;
                      if ((iVar25 != 0) &&
                         (*(undefined2 *)((long)puVar19 + lVar24 + 2) = uVar7, iVar25 != 1)) {
                        uVar7 = *puVar37;
                        *(undefined2 *)((long)puVar19 + lVar24 + 4) = uVar7;
                        if ((iVar25 != 2) &&
                           (*(undefined2 *)((long)puVar19 + lVar24 + 6) = uVar7, iVar25 != 3)) {
                          uVar7 = *puVar37;
                          *(undefined2 *)((long)puVar19 + lVar24 + 8) = uVar7;
                          if ((iVar25 != 4) &&
                             (*(undefined2 *)((long)puVar19 + lVar24 + 10) = uVar7, iVar25 != 5)) {
                            *(undefined2 *)((long)puVar19 + lVar24 + 0xc) = *puVar37;
                          }
                        }
                      }
                    }
                  }
                }
                uVar27 = uVar27 + uVar8 * 2;
                if (local_38 == 0) goto LAB_0011f928;
              }
              uVar8 = (uVar10 + 1) - (uVar27 & uVar10) >> 1;
              local_38 = local_38 - uVar8;
              cVar6 = *(char *)(puVar2 + 0x16);
              if (cVar6 == '\x01') goto LAB_00120ebc;
LAB_0011fdf8:
              if (cVar6 == '\x02') {
                iVar25 = 3;
                uVar10 = 1;
                puVar37 = *(undefined2 **)(puVar2 + 4);
              }
              else if (cVar6 == '\0') {
                uVar10 = 0;
                iVar25 = 2;
                puVar37 = (undefined2 *)
                          (*(long *)(puVar2 + 2) + (ulong)(uVar31 & *(uint *)(lVar24 + lVar14)));
              }
              else {
                uVar10 = 0;
                iVar25 = 2;
                puVar37 = (undefined2 *)(lVar30 + 0x6b070);
              }
              cVar6 = *(char *)((long)puVar1 + 0x59);
              if (cVar6 == '\x01') goto LAB_00120eec;
LAB_0011fe1c:
              if (cVar6 != '\x02') {
                puVar19 = (undefined8 *)(lVar30 + 0x8b070);
                if (cVar6 == '\0') {
                  puVar19 = (undefined8 *)
                            (*(long *)(puVar1 + 8) + (ulong)(uVar27 & *(uint *)(lVar24 + lVar39)));
                }
                goto LAB_0011fe30;
              }
              pcVar38 = *(code **)(puVar1 + 10);
              lVar24 = (**(code **)(puVar1 + 0x12))(lVar30,puVar1,uVar27);
              uVar15 = (**(code **)(puVar1 + 0x14))(lVar30,puVar1,uVar27);
              if (iVar25 == 2) {
                uVar9 = uVar27;
                uVar10 = uVar8;
                if (lVar24 != 0) {
                  uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar8 << 1);
                  local_30 = local_30 | uVar12;
                }
                do {
                  (*pcVar38)(lVar30,uVar9 & *puVar1,*puVar37);
                  uVar10 = uVar10 - 1;
                  uVar9 = uVar9 + 2;
                } while (uVar10 != 0);
              }
              else {
                uVar10 = uVar8;
                uVar9 = uVar27;
                if (lVar24 != 0) {
                  uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar8 << 1);
                  local_30 = local_30 | uVar12;
                }
                do {
                  uVar11 = (*(code *)puVar37)(lVar30,uVar31 & *puVar2);
                  (*pcVar38)(lVar30,uVar9 & *puVar1,uVar11);
                  uVar10 = uVar10 - 1;
                  uVar9 = uVar9 + 2;
                } while (uVar10 != 0);
              }
              uVar27 = uVar27 + uVar8 * 2;
            } while (local_38 != 0);
            goto LAB_0011f928;
          }
        }
LAB_001203a8:
        bVar4 = uVar9 == 1;
        local_30 = 0;
        goto LAB_0011f93c;
      }
      lVar14 = (ulong)(uVar10 >> 0x17) * 0x60;
      local_30 = 0;
      do {
        while( true ) {
          uVar10 = local_38;
          lVar24 = param_1[1];
          lVar39 = (ulong)(uVar27 >> 0x17) * 0x60;
          puVar1 = (uint *)(lVar24 + lVar39);
          puVar2 = (uint *)(lVar24 + lVar14);
          uVar8 = uVar27 & *(uint *)(lVar24 + lVar39);
          if (*(uint *)(lVar24 + lVar39) < uVar8 + local_38 * -2) break;
          cVar6 = *(char *)(puVar2 + 0x16);
          local_38 = 0;
          if (cVar6 != '\x01') goto LAB_00121004;
LAB_001214ec:
          puVar37 = (undefined2 *)(**(code **)(puVar2 + 2))(lVar30,uVar31);
          cVar6 = *(char *)((long)puVar1 + 0x59);
          uVar8 = 0;
          iVar25 = 2;
          if (cVar6 != '\x01') goto LAB_00121028;
LAB_0012151c:
          puVar17 = (undefined2 *)(**(code **)(puVar1 + 8))(lVar30,uVar27);
LAB_0012103c:
          lVar24 = (**(code **)(puVar1 + 0x12))(lVar30,puVar1,uVar27);
          uVar15 = (**(code **)(puVar1 + 0x14))(lVar30,puVar1,uVar27);
          if (uVar8 == 1) {
            if (lVar24 != 0) {
              uVar8 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 * 2);
              local_30 = local_30 | uVar8;
            }
            puVar32 = puVar17;
            do {
              uVar7 = (*(code *)puVar37)(lVar30,uVar31 & *puVar2);
              puVar40 = puVar32 + -1;
              *puVar32 = uVar7;
              puVar32 = puVar40;
            } while (puVar17 + ~(ulong)(uVar10 - 1) != puVar40);
          }
          else {
            if (lVar24 != 0) {
              uVar9 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 * 2);
              local_30 = local_30 | uVar9;
            }
            uVar9 = uVar10 - 1;
            if ((puVar17 + (1 - (ulong)uVar10) < puVar37 + 1 && puVar37 < puVar17 + 1 || uVar9 < 8)
                || (puVar17 + (1 - (ulong)uVar10) >= puVar37 + 1 || puVar37 >= puVar17 + 1) &&
                   uVar9 == 8) {
              puVar32 = puVar17;
              do {
                puVar40 = puVar32 + -1;
                *puVar32 = *puVar37;
                puVar32 = puVar40;
              } while ((undefined2 *)((long)puVar17 + ((ulong)uVar9 << 1 ^ 0xfffffffffffffffe)) !=
                       puVar40);
            }
            else {
              uVar12 = (uVar10 - 8 >> 3) + 1;
              uVar7 = *puVar37;
              auVar43._0_8_ = CONCAT26(uVar7,CONCAT24(uVar7,CONCAT22(uVar7,uVar7)));
              auVar43._8_2_ = uVar7;
              auVar43._10_2_ = uVar7;
              auVar43._12_2_ = uVar7;
              auVar43._14_2_ = uVar7;
              puVar19 = (undefined8 *)(puVar17 + -7);
              do {
                uVar8 = uVar8 + 1;
                puVar19[1] = auVar43._8_8_;
                *puVar19 = auVar43._0_8_;
                puVar19 = puVar19 + -2;
              } while (uVar8 < uVar12);
              uVar16 = (ulong)(uVar12 * 8);
              if (uVar10 != uVar12 * 8) {
                uVar7 = *puVar37;
                puVar17[-uVar16] = uVar7;
                iVar25 = uVar9 + uVar12 * -8;
                if ((iVar25 != 0) && (puVar17[-1 - uVar16] = uVar7, iVar25 != 1)) {
                  uVar7 = *puVar37;
                  puVar17[-2 - uVar16] = uVar7;
                  if ((iVar25 != 2) && (puVar17[-3 - uVar16] = uVar7, iVar25 != 3)) {
                    uVar7 = *puVar37;
                    puVar17[-4 - uVar16] = uVar7;
                    if ((iVar25 != 4) && (puVar17[-5 - uVar16] = uVar7, iVar25 != 5)) {
                      puVar17[-6 - uVar16] = *puVar37;
                    }
                  }
                }
              }
            }
          }
          uVar27 = uVar27 + uVar10 * -2;
          if (local_38 == 0) goto LAB_0011f928;
        }
        uVar10 = (uVar8 >> 1) + 1;
        local_38 = local_38 - uVar10;
        cVar6 = *(char *)(puVar2 + 0x16);
        if (cVar6 == '\x01') goto LAB_001214ec;
LAB_00121004:
        if (cVar6 == '\x02') {
          iVar25 = 3;
          uVar8 = 1;
          puVar37 = *(undefined2 **)(puVar2 + 4);
        }
        else if (cVar6 == '\0') {
          uVar8 = 0;
          iVar25 = 2;
          puVar37 = (undefined2 *)
                    (*(long *)(puVar2 + 2) + (ulong)(uVar31 & *(uint *)(lVar24 + lVar14)));
        }
        else {
          uVar8 = 0;
          iVar25 = 2;
          puVar37 = (undefined2 *)(lVar30 + 0x6b070);
        }
        cVar6 = *(char *)((long)puVar1 + 0x59);
        if (cVar6 == '\x01') goto LAB_0012151c;
LAB_00121028:
        if (cVar6 != '\x02') {
          puVar17 = (undefined2 *)(lVar30 + 0x8b070);
          if (cVar6 == '\0') {
            puVar17 = (undefined2 *)
                      (*(long *)(puVar1 + 8) + (ulong)(uVar27 & *(uint *)(lVar24 + lVar39)));
          }
          goto LAB_0012103c;
        }
        pcVar38 = *(code **)(puVar1 + 10);
        lVar24 = (**(code **)(puVar1 + 0x12))(lVar30,puVar1,uVar27);
        uVar15 = (**(code **)(puVar1 + 0x14))(lVar30,puVar1,uVar27);
        if (iVar25 == 2) {
          uVar9 = uVar27;
          uVar8 = uVar10;
          if (lVar24 != 0) {
            uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 << 1);
            local_30 = local_30 | uVar12;
          }
          do {
            (*pcVar38)(lVar30,uVar9 & *puVar1,*puVar37);
            uVar8 = uVar8 - 1;
            uVar9 = uVar9 - 2;
          } while (uVar8 != 0);
        }
        else {
          uVar8 = uVar10;
          uVar9 = uVar27;
          if (lVar24 != 0) {
            uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 << 1);
            local_30 = local_30 | uVar12;
          }
          do {
            uVar11 = (*(code *)puVar37)(lVar30,uVar31 & *puVar2);
            (*pcVar38)(lVar30,uVar9 & *puVar1,uVar11);
            uVar8 = uVar8 - 1;
            uVar9 = uVar9 - 2;
          } while (uVar8 != 0);
        }
        uVar27 = uVar27 + uVar10 * -2;
      } while (local_38 != 0);
      goto LAB_0011f928;
    }
    if (local_30 == 2) {
      lVar14 = (ulong)(uVar8 >> 0x17) * 0x60;
      local_30 = 0;
      do {
        uVar9 = local_38;
        lVar39 = param_1[1];
        lVar24 = (ulong)(uVar31 >> 0x17) * 0x60;
        puVar1 = (uint *)(lVar39 + lVar24);
        uVar8 = *(uint *)(lVar39 + lVar24);
        puVar2 = (uint *)(lVar39 + lVar14);
        uVar10 = uVar31 & uVar8;
        if (uVar8 < uVar10 + local_38 * 2) {
          uVar9 = (uVar8 + 1) - uVar10 >> 1;
          local_38 = local_38 - uVar9;
          cVar6 = *(char *)(puVar1 + 0x16);
          if (cVar6 == '\x01') goto LAB_00121490;
LAB_001211f0:
          if (cVar6 == '\x02') {
            iVar25 = 3;
            bVar4 = true;
            puVar37 = *(undefined2 **)(puVar1 + 4);
          }
          else if (cVar6 == '\0') {
            iVar25 = 2;
            bVar4 = false;
            puVar37 = (undefined2 *)(*(long *)(puVar1 + 2) + (ulong)uVar10);
          }
          else {
            puVar37 = (undefined2 *)(lVar30 + 0x6b070);
            iVar25 = 2;
            bVar4 = false;
          }
          cVar6 = *(char *)((long)puVar2 + 0x59);
          if (cVar6 == '\x01') goto LAB_001214c0;
LAB_00121218:
          if (cVar6 != '\x02') {
            puVar17 = (undefined2 *)(lVar30 + 0x8b070);
            if (cVar6 == '\0') {
              puVar17 = (undefined2 *)
                        (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar39 + lVar14)));
            }
            goto LAB_00121228;
          }
          pcVar38 = *(code **)(puVar2 + 10);
          lVar24 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
          uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
          if (iVar25 == 2) {
            if (lVar24 != 0) {
              uVar10 = memory_check_code_region(lVar24,uVar15,uVar27,uVar9 * 2);
              local_30 = local_30 | uVar10;
            }
            uVar31 = uVar31 + uVar9 * 2;
            puVar17 = puVar37;
            do {
              puVar32 = puVar17 + 1;
              (*pcVar38)(lVar30,uVar27 & *puVar2,*puVar17);
              puVar17 = puVar32;
            } while (puVar37 + (ulong)(uVar9 - 1) + 1 != puVar32);
          }
          else {
            uVar8 = uVar31;
            uVar10 = uVar9;
            if (lVar24 != 0) {
              uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar9 << 1);
              local_30 = local_30 | uVar12;
            }
            do {
              uVar11 = (*(code *)puVar37)(lVar30,uVar8 & *puVar1);
              (*pcVar38)(lVar30,uVar27 & *puVar2,uVar11);
              uVar10 = uVar10 - 1;
              uVar8 = uVar8 + 2;
            } while (uVar10 != 0);
            uVar31 = uVar31 + uVar9 * 2;
          }
        }
        else {
          cVar6 = *(char *)(puVar1 + 0x16);
          local_38 = 0;
          if (cVar6 != '\x01') goto LAB_001211f0;
LAB_00121490:
          puVar37 = (undefined2 *)(**(code **)(puVar1 + 2))(lVar30,uVar31);
          cVar6 = *(char *)((long)puVar2 + 0x59);
          iVar25 = 2;
          bVar4 = false;
          if (cVar6 != '\x01') goto LAB_00121218;
LAB_001214c0:
          puVar17 = (undefined2 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
LAB_00121228:
          lVar24 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
          uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
          if (bVar4) {
            uVar8 = uVar31;
            uVar10 = uVar9;
            if (lVar24 != 0) {
              uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar9 << 1);
              local_30 = local_30 | uVar12;
            }
            do {
              uVar7 = (*(code *)puVar37)(lVar30,uVar8 & *puVar1);
              *puVar17 = uVar7;
              uVar10 = uVar10 - 1;
              uVar8 = uVar8 + 2;
            } while (uVar10 != 0);
            uVar31 = uVar31 + uVar9 * 2;
          }
          else {
            if (lVar24 != 0) {
              uVar10 = memory_check_code_region(lVar24,uVar15,uVar27,uVar9 * 2);
              local_30 = local_30 | uVar10;
            }
            uVar31 = uVar31 + uVar9 * 2;
            puVar32 = puVar37;
            do {
              puVar40 = puVar32 + 1;
              *puVar17 = *puVar32;
              puVar32 = puVar40;
            } while (puVar37 + (ulong)(uVar9 - 1) + 1 != puVar40);
          }
        }
      } while (local_38 != 0);
    }
    else {
      if (2 < local_30) {
        if (local_30 == 4) {
LAB_001203e8:
          local_30 = 0;
          do {
            while( true ) {
              lVar24 = param_1[1];
              lVar14 = (ulong)(uVar31 >> 0x17) * 0x60;
              lVar39 = (ulong)(uVar27 >> 0x17) * 0x60;
              puVar1 = (uint *)(lVar24 + lVar14);
              puVar2 = (uint *)(lVar24 + lVar39);
              uVar9 = *(uint *)(lVar24 + lVar14);
              uVar8 = uVar31 & uVar9;
              uVar10 = local_38;
              if (uVar9 < uVar8 + local_38 * -2) {
                uVar10 = (uVar8 >> 1) + 1;
              }
              uVar12 = *(uint *)(lVar24 + lVar39);
              cVar6 = *(char *)(puVar1 + 0x16);
              uVar9 = (uVar12 + 1) - (uVar27 & uVar12) >> 1;
              if ((uVar27 & uVar12) + uVar10 * 2 <= uVar12) {
                uVar9 = uVar10;
              }
              if (cVar6 == '\x01') break;
              if (cVar6 == '\x02') {
                iVar25 = 3;
                uVar10 = 1;
                puVar37 = *(undefined2 **)(puVar1 + 4);
                goto LAB_00120484;
              }
              if (cVar6 != '\0') {
                puVar37 = (undefined2 *)(lVar30 + 0x6b070);
                uVar10 = 0;
                iVar25 = 2;
                goto LAB_00120484;
              }
              uVar10 = 0;
              iVar25 = 2;
              puVar37 = (undefined2 *)(*(long *)(puVar1 + 2) + (ulong)uVar8);
              cVar6 = *(char *)((long)puVar2 + 0x59);
              if (cVar6 != '\x01') goto LAB_00120490;
LAB_00122028:
              puVar19 = (undefined8 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
LAB_001204a4:
              lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
              uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
              local_38 = local_38 - uVar9;
              if (uVar10 == 1) {
                if (lVar14 != 0) {
                  uVar10 = memory_check_code_region(lVar14,uVar15,uVar27);
                  local_30 = local_30 | uVar10;
                }
                uVar27 = uVar27 + uVar9 * 2;
                puVar23 = puVar19;
                do {
                  uVar7 = (*(code *)puVar37)(lVar30,(uVar31 + (int)puVar19) - (int)puVar23 & *puVar1
                                            );
                  puVar28 = (undefined8 *)((long)puVar23 + 2);
                  *(undefined2 *)puVar23 = uVar7;
                  puVar23 = puVar28;
                } while ((undefined8 *)((long)puVar19 + ((ulong)(uVar9 - 1) + 1) * 2) != puVar28);
                uVar31 = uVar31 + uVar9 * -2;
              }
              else {
                if (lVar14 != 0) {
                  uVar8 = memory_check_code_region(lVar14,uVar15,uVar27,uVar9 * 2);
                  local_30 = local_30 | uVar8;
                }
                auVar41 = _DAT_0021d610;
                puVar23 = (undefined8 *)(puVar37 + 1);
                bVar4 = (undefined2 *)((long)puVar19 + (ulong)uVar9 * 2) <=
                        puVar37 + (1 - (ulong)uVar9);
                uVar8 = uVar9 - 1;
                uVar31 = uVar31 + uVar9 * -2;
                uVar27 = uVar27 + uVar9 * 2;
                if ((((bVar4 || puVar19 > puVar23) || !bVar4 && puVar23 == puVar19) && 7 < uVar8) &&
                    ((!bVar4 && puVar19 <= puVar23) && (bVar4 || puVar23 != puVar19) || uVar8 != 8))
                {
                  uVar12 = (uVar9 - 8 >> 3) + 1;
                  pauVar36 = (undefined (*) [16])(puVar37 + -7);
                  puVar23 = puVar19;
                  do {
                    uVar10 = uVar10 + 1;
                    auVar43 = a64_TBL(ZEXT816(0),*pauVar36,auVar41);
                    puVar23[1] = auVar43._8_8_;
                    *puVar23 = auVar43._0_8_;
                    pauVar36 = pauVar36 + -1;
                    puVar23 = puVar23 + 2;
                  } while (uVar10 < uVar12);
                  uVar16 = (ulong)(uVar12 * 8);
                  lVar14 = uVar16 * 2;
                  if (uVar9 != uVar12 * 8) {
                    *(undefined2 *)((long)puVar19 + lVar14) = puVar37[-uVar16];
                    iVar25 = uVar8 + uVar12 * -8;
                    if (((((iVar25 != 0) &&
                          (*(undefined2 *)((long)puVar19 + lVar14 + 2) = puVar37[-1 - uVar16],
                          iVar25 != 1)) &&
                         (*(undefined2 *)((long)puVar19 + lVar14 + 4) = puVar37[-2 - uVar16],
                         iVar25 != 2)) &&
                        ((*(undefined2 *)((long)puVar19 + lVar14 + 6) = puVar37[-3 - uVar16],
                         iVar25 != 3 &&
                         (*(undefined2 *)((long)puVar19 + lVar14 + 8) = puVar37[-4 - uVar16],
                         iVar25 != 4)))) &&
                       (*(undefined2 *)((long)puVar19 + lVar14 + 10) = puVar37[-5 - uVar16],
                       iVar25 != 5)) {
                      *(undefined2 *)((long)puVar19 + lVar14 + 0xc) = puVar37[-6 - uVar16];
                    }
                  }
                }
                else {
                  puVar23 = puVar19;
                  do {
                    puVar28 = (undefined8 *)((long)puVar23 + 2);
                    *(undefined2 *)puVar23 = *puVar37;
                    puVar23 = puVar28;
                    puVar37 = puVar37 + -1;
                  } while ((undefined8 *)((long)puVar19 + (ulong)uVar8 * 2 + 2) != puVar28);
                }
              }
              if (local_38 == 0) goto LAB_0011f928;
            }
            puVar37 = (undefined2 *)(**(code **)(puVar1 + 2))(lVar30,uVar31);
            uVar10 = 0;
            iVar25 = 2;
LAB_00120484:
            cVar6 = *(char *)((long)puVar2 + 0x59);
            if (cVar6 == '\x01') goto LAB_00122028;
LAB_00120490:
            if (cVar6 != '\x02') {
              puVar19 = (undefined8 *)(lVar30 + 0x8b070);
              if (cVar6 == '\0') {
                puVar19 = (undefined8 *)
                          (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar24 + lVar39)));
              }
              goto LAB_001204a4;
            }
            pcVar38 = *(code **)(puVar2 + 10);
            lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
            uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
            local_38 = local_38 - uVar9;
            if (iVar25 == 2) {
              if (lVar14 != 0) {
                uVar10 = memory_check_code_region(lVar14,uVar15,uVar27,uVar9 * 2);
                local_30 = local_30 | uVar10;
              }
              puVar17 = puVar37;
              do {
                puVar32 = puVar17 + -1;
                (*pcVar38)(lVar30,(uVar27 + (int)puVar37) - (int)puVar17 & *puVar2,*puVar17);
                puVar17 = puVar32;
              } while ((undefined2 *)
                       ((long)puVar37 + ((ulong)(uVar9 - 1) << 1 ^ 0xfffffffffffffffe)) != puVar32);
              uVar27 = uVar27 + 2 + (uVar9 - 1) * 2;
            }
            else {
              if (lVar14 != 0) {
                uVar10 = memory_check_code_region(lVar14,uVar15,uVar27,uVar9 << 1);
                local_30 = local_30 | uVar10;
              }
              uVar8 = uVar9;
              uVar10 = uVar31;
              do {
                uVar11 = (*(code *)puVar37)(lVar30,uVar10 & *puVar1);
                (*pcVar38)(lVar30,(uVar31 + uVar27) - uVar10 & *puVar2,uVar11);
                uVar10 = uVar10 - 2;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
              uVar27 = uVar27 + uVar9 * 2;
            }
            uVar31 = uVar31 + uVar9 * -2;
          } while (local_38 != 0);
        }
        else {
          if (local_30 != 5) {
            if (local_30 != 3) goto LAB_001203a8;
            local_30 = 0;
            goto LAB_00120178;
          }
          local_30 = 0;
          do {
            while( true ) {
              lVar24 = param_1[1];
              lVar39 = (ulong)(uVar27 >> 0x17) * 0x60;
              lVar14 = (ulong)(uVar31 >> 0x17) * 0x60;
              puVar1 = (uint *)(lVar24 + lVar14);
              uVar9 = *(uint *)(lVar24 + lVar14);
              puVar2 = (uint *)(lVar24 + lVar39);
              uVar8 = uVar31 & uVar9;
              uVar10 = local_38;
              if (uVar9 < uVar8 + local_38 * -2) {
                uVar10 = (uVar8 >> 1) + 1;
              }
              cVar6 = *(char *)(puVar1 + 0x16);
              uVar9 = uVar27 & *(uint *)(lVar24 + lVar39);
              if (*(uint *)(lVar24 + lVar39) < uVar9 + uVar10 * -2) {
                uVar10 = (uVar9 >> 1) + 1;
              }
              if (cVar6 == '\x01') break;
              if (cVar6 == '\x02') {
                iVar25 = 3;
                uVar9 = 1;
                puVar37 = *(undefined2 **)(puVar1 + 4);
                goto LAB_0011fb08;
              }
              if (cVar6 != '\0') {
                uVar9 = 0;
                iVar25 = 2;
                puVar37 = (undefined2 *)(lVar30 + 0x6b070);
                goto LAB_0011fb08;
              }
              uVar9 = 0;
              iVar25 = 2;
              puVar37 = (undefined2 *)(*(long *)(puVar1 + 2) + (ulong)uVar8);
              cVar6 = *(char *)((long)puVar2 + 0x59);
              if (cVar6 != '\x01') goto LAB_0011fb14;
LAB_00122094:
              puVar17 = (undefined2 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
LAB_0011fb24:
              lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
              uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
              local_38 = local_38 - uVar10;
              if (uVar9 == 1) {
                if (lVar14 != 0) {
                  uVar8 = memory_check_code_region(lVar14,uVar15,uVar27);
                  local_30 = local_30 | uVar8;
                }
                uVar27 = uVar27 + uVar10 * -2;
                puVar32 = puVar17;
                do {
                  uVar7 = (*(code *)puVar37)(lVar30,(uVar31 - (int)puVar17) + (int)puVar32 & *puVar1
                                            );
                  puVar40 = puVar32 + -1;
                  *puVar32 = uVar7;
                  puVar32 = puVar40;
                } while (puVar17 + ~(ulong)(uVar10 - 1) != puVar40);
                uVar31 = uVar31 + uVar10 * -2;
              }
              else {
                if (lVar14 != 0) {
                  uVar8 = memory_check_code_region(lVar14,uVar15,uVar27,uVar10 * 2);
                  local_30 = local_30 | uVar8;
                }
                uVar8 = uVar10 - 1;
                uVar31 = uVar31 + uVar10 * -2;
                uVar27 = uVar27 + uVar10 * -2;
                if (((puVar37 + -7 >= puVar17 + 1 || puVar17 + -7 >= puVar37 + 1) && 7 < uVar8) &&
                    (puVar37 + -7 < puVar17 + 1 && puVar17 + -7 < puVar37 + 1 || uVar8 != 8)) {
                  lVar14 = -0xe;
                  uVar12 = (uVar10 - 8 >> 3) + 1;
                  do {
                    auVar41 = *(undefined (*) [16])((long)puVar37 + lVar14);
                    uVar9 = uVar9 + 1;
                    ((undefined8 *)((long)puVar17 + lVar14))[1] = auVar41._8_8_;
                    *(undefined8 *)((long)puVar17 + lVar14) = auVar41._0_8_;
                    lVar14 = lVar14 + -0x10;
                  } while (uVar9 < uVar12);
                  uVar16 = (ulong)(uVar12 * 8);
                  if (uVar10 != uVar12 * 8) {
                    puVar17[-uVar16] = puVar37[-uVar16];
                    iVar25 = uVar8 + uVar12 * -8;
                    if (((iVar25 != 0) && (puVar17[-1 - uVar16] = puVar37[-1 - uVar16], iVar25 != 1)
                        ) && ((puVar17[-2 - uVar16] = puVar37[-2 - uVar16], iVar25 != 2 &&
                              (((puVar17[-3 - uVar16] = puVar37[-3 - uVar16], iVar25 != 3 &&
                                (puVar17[-4 - uVar16] = puVar37[-4 - uVar16], iVar25 != 4)) &&
                               (puVar17[-5 - uVar16] = puVar37[-5 - uVar16], iVar25 != 5)))))) {
                      puVar17[-6 - uVar16] = puVar37[-6 - uVar16];
                    }
                  }
                }
                else {
                  uVar16 = 0;
                  do {
                    *(undefined2 *)((long)puVar17 + uVar16) =
                         *(undefined2 *)((long)puVar37 + uVar16);
                    uVar16 = uVar16 - 2;
                  } while (((ulong)uVar8 << 1 ^ 0xfffffffffffffffe) != uVar16);
                }
              }
joined_r0x00122690:
              if (local_38 == 0) goto LAB_0011f928;
            }
            puVar37 = (undefined2 *)(**(code **)(puVar1 + 2))(lVar30,uVar31);
            uVar9 = 0;
            iVar25 = 2;
LAB_0011fb08:
            cVar6 = *(char *)((long)puVar2 + 0x59);
            if (cVar6 == '\x01') goto LAB_00122094;
LAB_0011fb14:
            if (cVar6 != '\x02') {
              puVar17 = (undefined2 *)(lVar30 + 0x8b070);
              if (cVar6 == '\0') {
                puVar17 = (undefined2 *)
                          (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar24 + lVar39)));
              }
              goto LAB_0011fb24;
            }
            pcVar38 = *(code **)(puVar2 + 10);
            lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
            uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
            local_38 = local_38 - uVar10;
            if (iVar25 != 2) {
              if (lVar14 != 0) {
                uVar8 = memory_check_code_region(lVar14,uVar15,uVar27,uVar10 << 1);
                local_30 = local_30 | uVar8;
              }
              uVar9 = uVar10;
              uVar8 = uVar31;
              do {
                uVar11 = (*(code *)puVar37)(lVar30,uVar8 & *puVar1);
                (*pcVar38)(lVar30,(uVar27 - uVar31) + uVar8 & *puVar2,uVar11);
                uVar8 = uVar8 - 2;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
              uVar31 = uVar31 + uVar10 * -2;
              uVar27 = uVar27 + uVar10 * -2;
              goto joined_r0x00122690;
            }
            if (lVar14 != 0) {
              uVar8 = memory_check_code_region(lVar14,uVar15,uVar27,uVar10 * 2);
              local_30 = local_30 | uVar8;
            }
            uVar31 = uVar31 + uVar10 * -2;
            puVar17 = puVar37;
            do {
              puVar32 = puVar17 + -1;
              (*pcVar38)(lVar30,(uVar27 - (int)puVar37) + (int)puVar17 & *puVar2,*puVar17);
              puVar17 = puVar32;
            } while (puVar37 + ~(ulong)(uVar10 - 1) != puVar32);
            uVar27 = uVar27 + uVar10 * -2;
          } while (local_38 != 0);
        }
        goto LAB_0011f928;
      }
      if (local_30 == 0) {
LAB_00120178:
        do {
          while( true ) {
            uVar10 = local_38 * 2;
            lVar24 = param_1[1];
            lVar14 = (ulong)(uVar31 >> 0x17) * 0x60;
            lVar39 = (ulong)(uVar27 >> 0x17) * 0x60;
            puVar1 = (uint *)(lVar24 + lVar14);
            puVar2 = (uint *)(lVar24 + lVar39);
            uVar9 = *(uint *)(lVar24 + lVar14);
            uVar8 = uVar31 & uVar9;
            uVar12 = local_38;
            if (uVar9 < uVar10 + uVar8) {
              uVar12 = (uVar9 + 1) - uVar8;
              uVar10 = uVar12 & 0xfffffffe;
              uVar12 = uVar12 >> 1;
            }
            uVar3 = *(uint *)(lVar24 + lVar39);
            cVar6 = *(char *)(puVar1 + 0x16);
            uVar9 = (uVar3 + 1) - (uVar27 & uVar3) >> 1;
            if ((uVar27 & uVar3) + uVar10 <= uVar3) {
              uVar9 = uVar12;
            }
            if (cVar6 == '\x01') break;
            if (cVar6 == '\x02') {
              iVar25 = 3;
              uVar10 = 1;
              puVar37 = *(undefined2 **)(puVar1 + 4);
              goto LAB_00120218;
            }
            if (cVar6 != '\0') {
              uVar10 = 0;
              iVar25 = 2;
              puVar37 = (undefined2 *)(lVar30 + 0x6b070);
              goto LAB_00120218;
            }
            uVar10 = 0;
            iVar25 = 2;
            puVar37 = (undefined2 *)(*(long *)(puVar1 + 2) + (ulong)uVar8);
            cVar6 = *(char *)((long)puVar2 + 0x59);
            if (cVar6 != '\x01') goto LAB_00120224;
LAB_00122100:
            puVar17 = (undefined2 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
LAB_00120234:
            lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
            uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
            local_38 = local_38 - uVar9;
            if (uVar10 == 1) {
              if (lVar14 != 0) {
                uVar10 = memory_check_code_region(lVar14,uVar15,uVar27);
                local_30 = local_30 | uVar10;
              }
              uVar27 = uVar27 + uVar9 * 2;
              puVar32 = puVar17;
              do {
                uVar7 = (*(code *)puVar37)(lVar30,(uVar31 - (int)puVar17) + (int)puVar32 & *puVar1);
                puVar40 = puVar32 + 1;
                *puVar32 = uVar7;
                puVar32 = puVar40;
              } while (puVar40 != puVar17 + (ulong)(uVar9 - 1) + 1);
              uVar31 = uVar31 + 2 + (uVar9 - 1) * 2;
            }
            else {
              iVar25 = uVar9 * 2;
              if (lVar14 != 0) {
                uVar8 = memory_check_code_region(lVar14,uVar15,uVar27,iVar25);
                local_30 = local_30 | uVar8;
              }
              uVar8 = uVar9 - 1;
              uVar31 = uVar31 + iVar25;
              uVar27 = uVar27 + iVar25;
              bVar4 = (ulong)((long)puVar37 + (0xf - (long)puVar17)) < 0x1f;
              if ((!bVar4 && 7 < uVar8) && (bVar4 || uVar8 != 8)) {
                lVar14 = 0;
                uVar12 = (uVar9 - 8 >> 3) + 1;
                do {
                  auVar41 = *(undefined (*) [16])((long)puVar37 + lVar14);
                  uVar10 = uVar10 + 1;
                  ((undefined8 *)((long)puVar17 + lVar14))[1] = auVar41._8_8_;
                  *(undefined8 *)((long)puVar17 + lVar14) = auVar41._0_8_;
                  lVar14 = lVar14 + 0x10;
                } while (uVar10 < uVar12);
                uVar10 = uVar12 * 8;
                if (uVar9 != uVar10) {
                  puVar17[uVar10] = puVar37[uVar10];
                  iVar25 = uVar8 + uVar12 * -8;
                  if ((((iVar25 != 0) &&
                       (puVar17[(ulong)uVar10 + 1] = puVar37[(ulong)uVar10 + 1], iVar25 != 1)) &&
                      (puVar17[(ulong)uVar10 + 2] = puVar37[(ulong)uVar10 + 2], iVar25 != 2)) &&
                     (((puVar17[(ulong)uVar10 + 3] = puVar37[(ulong)uVar10 + 3], iVar25 != 3 &&
                       (puVar17[(ulong)uVar10 + 4] = puVar37[(ulong)uVar10 + 4], iVar25 != 4)) &&
                      (puVar17[(ulong)uVar10 + 5] = puVar37[(ulong)uVar10 + 5], iVar25 != 5)))) {
                    puVar17[(ulong)uVar10 + 6] = puVar37[(ulong)uVar10 + 6];
                  }
                }
              }
              else {
                lVar14 = 0;
                do {
                  *(undefined2 *)((long)puVar17 + lVar14) = *(undefined2 *)((long)puVar37 + lVar14);
                  lVar14 = lVar14 + 2;
                } while ((ulong)uVar8 * 2 + 2 != lVar14);
              }
            }
joined_r0x00122368:
            if (local_38 == 0) goto LAB_00120378;
          }
          puVar37 = (undefined2 *)(**(code **)(puVar1 + 2))(lVar30,uVar31);
          uVar10 = 0;
          iVar25 = 2;
LAB_00120218:
          cVar6 = *(char *)((long)puVar2 + 0x59);
          if (cVar6 == '\x01') goto LAB_00122100;
LAB_00120224:
          if (cVar6 != '\x02') {
            puVar17 = (undefined2 *)(lVar30 + 0x8b070);
            if (cVar6 == '\0') {
              puVar17 = (undefined2 *)
                        (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar24 + lVar39)));
            }
            goto LAB_00120234;
          }
          pcVar38 = *(code **)(puVar2 + 10);
          lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
          uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
          local_38 = local_38 - uVar9;
          if (iVar25 != 2) {
            if (lVar14 != 0) {
              uVar10 = memory_check_code_region(lVar14,uVar15,uVar27,uVar9 << 1);
              local_30 = local_30 | uVar10;
            }
            uVar8 = uVar9;
            uVar10 = uVar31;
            do {
              uVar11 = (*(code *)puVar37)(lVar30,uVar10 & *puVar1);
              (*pcVar38)(lVar30,(uVar27 - uVar31) + uVar10 & *puVar2,uVar11);
              uVar10 = uVar10 + 2;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
            iVar25 = (uVar9 - 1) * 2;
            uVar31 = uVar31 + 2 + iVar25;
            uVar27 = uVar27 + 2 + iVar25;
            goto joined_r0x00122368;
          }
          if (lVar14 != 0) {
            uVar10 = memory_check_code_region(lVar14,uVar15,uVar27,uVar9 * 2);
            local_30 = local_30 | uVar10;
          }
          uVar31 = uVar31 + uVar9 * 2;
          puVar17 = puVar37;
          do {
            puVar32 = puVar17 + 1;
            (*pcVar38)(lVar30,(uVar27 - (int)puVar37) + (int)puVar17 & *puVar2,*puVar17);
            puVar17 = puVar32;
          } while (puVar37 + (ulong)(uVar9 - 1) + 1 != puVar32);
          uVar27 = uVar27 + 2 + (uVar9 - 1) * 2;
        } while (local_38 != 0);
        goto LAB_00120378;
      }
      uVar10 = 0;
      if (local_30 != 1) goto LAB_001203a8;
      do {
        while( true ) {
          uVar8 = local_38 * 2;
          lVar24 = param_1[1];
          lVar14 = (ulong)(uVar31 >> 0x17) * 0x60;
          lVar39 = (ulong)(uVar27 >> 0x17) * 0x60;
          puVar1 = (uint *)(lVar24 + lVar14);
          puVar2 = (uint *)(lVar24 + lVar39);
          uVar3 = *(uint *)(lVar24 + lVar14);
          uVar9 = uVar31 & uVar3;
          uVar12 = local_38;
          if (uVar3 < uVar8 + uVar9) {
            uVar12 = (uVar3 + 1) - uVar9;
            uVar8 = uVar12 & 0xfffffffe;
            uVar12 = uVar12 >> 1;
          }
          cVar6 = *(char *)(puVar1 + 0x16);
          uVar3 = uVar27 & *(uint *)(lVar24 + lVar39);
          if (*(uint *)(lVar24 + lVar39) < uVar3 - uVar8) {
            uVar12 = (uVar3 >> 1) + 1;
          }
          if (cVar6 == '\x01') break;
          if (cVar6 == '\x02') {
            uVar8 = 1;
            iVar25 = 3;
            pauVar36 = *(undefined (**) [16])(puVar1 + 4);
            goto LAB_0011ffe0;
          }
          if (cVar6 != '\0') {
            pauVar36 = (undefined (*) [16])(lVar30 + 0x6b070);
            uVar8 = 0;
            iVar25 = 2;
            goto LAB_0011ffe0;
          }
          uVar8 = 0;
          iVar25 = 2;
          pauVar36 = (undefined (*) [16])(*(long *)(puVar1 + 2) + (ulong)uVar9);
          cVar6 = *(char *)((long)puVar2 + 0x59);
          if (cVar6 != '\x01') goto LAB_0011ffec;
LAB_0012216c:
          puVar37 = (undefined2 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
LAB_00120000:
          lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
          uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
          local_38 = local_38 - uVar12;
          if (uVar8 == 1) {
            if (lVar14 != 0) {
              uVar8 = memory_check_code_region(lVar14,uVar15,uVar27);
              uVar10 = uVar10 | uVar8;
            }
            uVar27 = uVar27 + uVar12 * -2;
            puVar17 = puVar37;
            do {
              uVar7 = (*(code *)pauVar36)(lVar30,(uVar31 + (int)puVar37) - (int)puVar17 & *puVar1);
              puVar32 = puVar17 + -1;
              *puVar17 = uVar7;
              puVar17 = puVar32;
            } while ((undefined2 *)((long)puVar37 + ((ulong)(uVar12 - 1) << 1 ^ 0xfffffffffffffffe))
                     != puVar32);
            uVar31 = uVar31 + 2 + (uVar12 - 1) * 2;
          }
          else {
            if (lVar14 != 0) {
              uVar9 = memory_check_code_region(lVar14,uVar15,uVar27,uVar12 * 2);
              uVar10 = uVar10 | uVar9;
            }
            auVar41 = _DAT_0021d610;
            bVar4 = puVar37 + (1 - (ulong)uVar12) <
                    (undefined2 *)((long)*pauVar36 + (ulong)uVar12 * 2);
            uVar9 = uVar12 - 1;
            uVar31 = uVar31 + uVar12 * 2;
            uVar27 = uVar27 + uVar12 * -2;
            if (((!bVar4 || pauVar36 >= (undefined (*) [16])(puVar37 + 1)) && 7 < uVar9) &&
                (bVar4 && pauVar36 < (undefined (*) [16])(puVar37 + 1) || uVar9 != 8)) {
              uVar3 = (uVar12 - 8 >> 3) + 1;
              pauVar22 = pauVar36;
              puVar19 = (undefined8 *)(puVar37 + -7);
              do {
                uVar8 = uVar8 + 1;
                auVar43 = a64_TBL(ZEXT816(0),*pauVar22,auVar41);
                puVar19[1] = auVar43._8_8_;
                *puVar19 = auVar43._0_8_;
                pauVar22 = pauVar22 + 1;
                puVar19 = puVar19 + -2;
              } while (uVar8 < uVar3);
              uVar16 = (ulong)(uVar3 * 8);
              if (uVar12 != uVar3 * 8) {
                puVar37[-uVar16] = *(undefined2 *)((long)*pauVar36 + uVar16 * 2);
                iVar25 = uVar9 + uVar3 * -8;
                if (((iVar25 != 0) &&
                    (puVar37[-1 - uVar16] = *(undefined2 *)((long)*pauVar36 + (uVar16 + 1) * 2),
                    iVar25 != 1)) &&
                   (((puVar37[-2 - uVar16] = *(undefined2 *)((long)*pauVar36 + (uVar16 + 2) * 2),
                     iVar25 != 2 &&
                     ((puVar37[-3 - uVar16] = *(undefined2 *)((long)*pauVar36 + (uVar16 + 3) * 2),
                      iVar25 != 3 &&
                      (puVar37[-4 - uVar16] = *(undefined2 *)((long)*pauVar36 + (uVar16 + 4) * 2),
                      iVar25 != 4)))) &&
                    (puVar37[-5 - uVar16] = *(undefined2 *)((long)*pauVar36 + (uVar16 + 5) * 2),
                    iVar25 != 5)))) {
                  puVar37[-6 - uVar16] = *(undefined2 *)((long)*pauVar36 + (uVar16 + 6) * 2);
                }
              }
            }
            else {
              puVar17 = puVar37;
              do {
                puVar32 = puVar17 + -1;
                *puVar17 = *(undefined2 *)*pauVar36;
                puVar17 = puVar32;
                pauVar36 = (undefined (*) [16])((long)*pauVar36 + 2);
              } while ((undefined2 *)((long)puVar37 + ((ulong)uVar9 << 1 ^ 0xfffffffffffffffe)) !=
                       puVar32);
            }
          }
          local_30 = uVar10;
          if (local_38 == 0) goto LAB_001212a8;
        }
        pauVar36 = (undefined (*) [16])(**(code **)(puVar1 + 2))(lVar30,uVar31);
        uVar8 = 0;
        iVar25 = 2;
LAB_0011ffe0:
        cVar6 = *(char *)((long)puVar2 + 0x59);
        if (cVar6 == '\x01') goto LAB_0012216c;
LAB_0011ffec:
        if (cVar6 != '\x02') {
          puVar37 = (undefined2 *)(lVar30 + 0x8b070);
          if (cVar6 == '\0') {
            puVar37 = (undefined2 *)
                      (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar24 + lVar39)));
          }
          goto LAB_00120000;
        }
        pcVar38 = *(code **)(puVar2 + 10);
        lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
        uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
        local_38 = local_38 - uVar12;
        if (iVar25 == 2) {
          iVar25 = uVar12 * 2;
          if (lVar14 != 0) {
            uVar8 = memory_check_code_region(lVar14,uVar15,uVar27);
            uVar10 = uVar10 | uVar8;
          }
          pauVar22 = pauVar36;
          do {
            puVar37 = (undefined2 *)*pauVar22;
            (*pcVar38)(lVar30,(uVar27 + (int)pauVar36) - (int)pauVar22 & *puVar2,
                       *(undefined2 *)*pauVar22);
            pauVar22 = (undefined (*) [16])(puVar37 + 1);
          } while ((undefined (*) [16])((long)*pauVar36 + ((ulong)(uVar12 - 1) + 1) * 2) !=
                   (undefined (*) [16])(puVar37 + 1));
        }
        else {
          if (lVar14 != 0) {
            uVar8 = memory_check_code_region(lVar14,uVar15,uVar27,uVar12 << 1);
            uVar10 = uVar10 | uVar8;
          }
          uVar9 = uVar12;
          uVar8 = uVar31;
          do {
            uVar11 = (*(code *)pauVar36)(lVar30,uVar8 & *puVar1);
            (*pcVar38)(lVar30,(uVar31 + uVar27) - uVar8 & *puVar2,uVar11);
            uVar8 = uVar8 + 2;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          iVar25 = uVar12 << 1;
        }
        uVar31 = uVar31 + iVar25;
        uVar27 = uVar27 + uVar12 * -2;
        local_30 = uVar10;
      } while (local_38 != 0);
    }
LAB_001212a8:
    if (uVar20 != 0 && *(int *)(lVar26 + 0x210c) == 1) goto LAB_001212d0;
  }
  else {
    bVar4 = uVar9 == 1;
    if (bVar4 && uVar8 == 0x4000400) {
      dma_transfer_gxfifo(param_1,param_2);
      return 0;
    }
    uVar31 = uVar10 & 0xfffffffc;
    local_30 = local_68 >> 0x15 & 0xf;
    uVar27 = uVar8 & 0xfffffffc;
    if (local_30 == 6) {
      lVar14 = (ulong)(uVar8 >> 0x17) * 0x60;
      local_30 = 0;
      do {
        while( true ) {
          uVar10 = local_38;
          lVar39 = param_1[1];
          lVar24 = (ulong)(uVar31 >> 0x17) * 0x60;
          puVar1 = (uint *)(lVar39 + lVar24);
          puVar2 = (uint *)(lVar39 + lVar14);
          uVar9 = *(uint *)(lVar39 + lVar24);
          uVar8 = uVar31 & uVar9;
          if (uVar9 < uVar8 + local_38 * -4) break;
          cVar6 = *(char *)(puVar1 + 0x16);
          local_38 = 0;
          if (cVar6 != '\x01') goto LAB_00123474;
LAB_00123548:
          puVar35 = (undefined4 *)(**(code **)(puVar1 + 2))(lVar30,uVar31);
          cVar6 = *(char *)((long)puVar2 + 0x59);
          iVar25 = 2;
          bVar4 = false;
          if (cVar6 != '\x01') goto LAB_0012349c;
LAB_00123578:
          puVar18 = (undefined4 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
LAB_001234ac:
          lVar24 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
          uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
          if (bVar4) {
            uVar9 = uVar31;
            uVar8 = uVar10;
            if (lVar24 != 0) {
              uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 << 2);
              local_30 = local_30 | uVar12;
            }
            do {
              uVar11 = (*(code *)puVar35)(lVar30,uVar9 & *puVar1);
              *puVar18 = uVar11;
              uVar8 = uVar8 - 1;
              uVar9 = uVar9 - 4;
            } while (uVar8 != 0);
          }
          else {
            if (lVar24 != 0) {
              uVar8 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 * 4);
              local_30 = local_30 | uVar8;
            }
            puVar33 = puVar35;
            do {
              puVar34 = puVar33 + -1;
              *puVar18 = *puVar33;
              puVar33 = puVar34;
            } while (puVar34 != puVar35 + ~(ulong)(uVar10 - 1));
          }
joined_r0x00123694:
          uVar31 = uVar31 + uVar10 * -4;
          if (local_38 == 0) goto LAB_0011f928;
        }
        uVar10 = (uVar8 >> 2) + 1;
        cVar6 = *(char *)(puVar1 + 0x16);
        local_38 = local_38 - uVar10;
        if (cVar6 == '\x01') goto LAB_00123548;
LAB_00123474:
        if (cVar6 == '\x02') {
          iVar25 = 3;
          bVar4 = true;
          puVar35 = *(undefined4 **)(puVar1 + 6);
        }
        else if (cVar6 == '\0') {
          iVar25 = 2;
          bVar4 = false;
          puVar35 = (undefined4 *)(*(long *)(puVar1 + 2) + (ulong)uVar8);
        }
        else {
          puVar35 = (undefined4 *)(lVar30 + 0x6b070);
          iVar25 = 2;
          bVar4 = false;
        }
        cVar6 = *(char *)((long)puVar2 + 0x59);
        if (cVar6 == '\x01') goto LAB_00123578;
LAB_0012349c:
        if (cVar6 != '\x02') {
          puVar18 = (undefined4 *)(lVar30 + 0x8b070);
          if (cVar6 == '\0') {
            puVar18 = (undefined4 *)
                      (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar39 + lVar14)));
          }
          goto LAB_001234ac;
        }
        pcVar38 = *(code **)(puVar2 + 0xc);
        lVar24 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
        uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
        if (iVar25 != 2) {
          uVar9 = uVar31;
          uVar8 = uVar10;
          if (lVar24 != 0) {
            uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 << 2);
            local_30 = local_30 | uVar12;
          }
          do {
            uVar11 = (*(code *)puVar35)(lVar30,uVar9 & *puVar1);
            (*pcVar38)(lVar30,uVar27 & *puVar2,uVar11);
            uVar8 = uVar8 - 1;
            uVar9 = uVar9 - 4;
          } while (uVar8 != 0);
          goto joined_r0x00123694;
        }
        if (lVar24 != 0) {
          uVar8 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 * 4);
          local_30 = local_30 | uVar8;
        }
        uVar31 = uVar31 + uVar10 * -4;
        puVar18 = puVar35;
        do {
          puVar33 = puVar18 + -1;
          (*pcVar38)(lVar30,uVar27 & *puVar2,*puVar18);
          puVar18 = puVar33;
        } while (puVar33 != puVar35 + ~(ulong)(uVar10 - 1));
      } while (local_38 != 0);
      goto LAB_0011f928;
    }
    if (local_30 < 7) {
      if (local_30 == 2) {
        lVar14 = (ulong)(uVar8 >> 0x17) * 0x60;
        local_30 = 0;
        do {
          while( true ) {
            uVar9 = local_38;
            lVar39 = param_1[1];
            lVar24 = (ulong)(uVar31 >> 0x17) * 0x60;
            puVar1 = (uint *)(lVar39 + lVar24);
            uVar8 = *(uint *)(lVar39 + lVar24);
            puVar2 = (uint *)(lVar39 + lVar14);
            uVar10 = uVar31 & uVar8;
            if (uVar8 < uVar10 + local_38 * 4) break;
            cVar6 = *(char *)(puVar1 + 0x16);
            local_38 = 0;
            if (cVar6 != '\x01') goto LAB_001237b8;
LAB_00123888:
            puVar35 = (undefined4 *)(**(code **)(puVar1 + 2))(lVar30,uVar31);
            cVar6 = *(char *)((long)puVar2 + 0x59);
            iVar25 = 2;
            bVar4 = false;
            if (cVar6 != '\x01') goto LAB_001237e0;
LAB_001238b8:
            puVar18 = (undefined4 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
LAB_001237f0:
            lVar24 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
            uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
            if (bVar4) {
              uVar8 = uVar31;
              uVar10 = uVar9;
              if (lVar24 != 0) {
                uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar9 << 2);
                local_30 = local_30 | uVar12;
              }
              do {
                uVar11 = (*(code *)puVar35)(lVar30,uVar8 & *puVar1);
                *puVar18 = uVar11;
                uVar10 = uVar10 - 1;
                uVar8 = uVar8 + 4;
              } while (uVar10 != 0);
LAB_001239cc:
              iVar25 = uVar9 * 4;
            }
            else {
              iVar25 = uVar9 * 4;
              if (lVar24 != 0) {
                uVar10 = memory_check_code_region(lVar24,uVar15,uVar27,iVar25);
                local_30 = local_30 | uVar10;
              }
              puVar33 = puVar35;
              do {
                puVar34 = puVar33 + 1;
                *puVar18 = *puVar33;
                puVar33 = puVar34;
              } while (puVar34 != puVar35 + (ulong)(uVar9 - 1) + 1);
            }
            uVar31 = uVar31 + iVar25;
            if (local_38 == 0) goto LAB_001212a8;
          }
          uVar9 = (uVar8 + 1) - uVar10 >> 2;
          local_38 = local_38 - uVar9;
          cVar6 = *(char *)(puVar1 + 0x16);
          if (cVar6 == '\x01') goto LAB_00123888;
LAB_001237b8:
          if (cVar6 == '\x02') {
            iVar25 = 3;
            bVar4 = true;
            puVar35 = *(undefined4 **)(puVar1 + 6);
          }
          else if (cVar6 == '\0') {
            iVar25 = 2;
            bVar4 = false;
            puVar35 = (undefined4 *)(*(long *)(puVar1 + 2) + (ulong)uVar10);
          }
          else {
            puVar35 = (undefined4 *)(lVar30 + 0x6b070);
            iVar25 = 2;
            bVar4 = false;
          }
          cVar6 = *(char *)((long)puVar2 + 0x59);
          if (cVar6 == '\x01') goto LAB_001238b8;
LAB_001237e0:
          if (cVar6 != '\x02') {
            puVar18 = (undefined4 *)(lVar30 + 0x8b070);
            if (cVar6 == '\0') {
              puVar18 = (undefined4 *)
                        (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar39 + lVar14)));
            }
            goto LAB_001237f0;
          }
          pcVar38 = *(code **)(puVar2 + 0xc);
          lVar24 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
          uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
          if (iVar25 != 2) {
            uVar8 = uVar31;
            uVar10 = uVar9;
            if (lVar24 != 0) {
              uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar9 << 2);
              local_30 = local_30 | uVar12;
            }
            do {
              uVar11 = (*(code *)puVar35)(lVar30,uVar8 & *puVar1);
              (*pcVar38)(lVar30,uVar27 & *puVar2,uVar11);
              uVar10 = uVar10 - 1;
              uVar8 = uVar8 + 4;
            } while (uVar10 != 0);
            goto LAB_001239cc;
          }
          if (lVar24 != 0) {
            uVar10 = memory_check_code_region(lVar24,uVar15,uVar27,uVar9 * 4);
            local_30 = local_30 | uVar10;
          }
          uVar31 = uVar31 + uVar9 * 4;
          puVar18 = puVar35;
          do {
            puVar33 = puVar18 + 1;
            (*pcVar38)(lVar30,uVar27 & *puVar2,*puVar18);
            puVar18 = puVar33;
          } while (puVar33 != puVar35 + (ulong)(uVar9 - 1) + 1);
        } while (local_38 != 0);
      }
      else {
        if (2 < local_30) {
          if (local_30 == 4) {
LAB_00120ccc:
            local_30 = 0;
            do {
              while( true ) {
                lVar24 = param_1[1];
                lVar14 = (ulong)(uVar31 >> 0x17) * 0x60;
                lVar39 = (ulong)(uVar27 >> 0x17) * 0x60;
                puVar1 = (uint *)(lVar24 + lVar14);
                puVar2 = (uint *)(lVar24 + lVar39);
                uVar9 = *(uint *)(lVar24 + lVar14);
                uVar8 = uVar31 & uVar9;
                uVar10 = local_38;
                if (uVar9 < uVar8 + local_38 * -4) {
                  uVar10 = (uVar8 >> 2) + 1;
                }
                uVar12 = *(uint *)(lVar24 + lVar39);
                cVar6 = *(char *)(puVar1 + 0x16);
                uVar9 = (uVar12 + 1) - (uVar27 & uVar12) >> 2;
                if ((uVar27 & uVar12) + uVar10 * 4 <= uVar12) {
                  uVar9 = uVar10;
                }
                if (cVar6 == '\x01') {
                  puVar35 = (undefined4 *)(**(code **)(puVar1 + 2))(lVar30,uVar31);
                  iVar25 = 2;
                  uVar10 = 0;
                }
                else if (cVar6 == '\x02') {
                  iVar25 = 3;
                  uVar10 = 1;
                  puVar35 = *(undefined4 **)(puVar1 + 6);
                }
                else if (cVar6 == '\0') {
                  iVar25 = 2;
                  uVar10 = 0;
                  puVar35 = (undefined4 *)(*(long *)(puVar1 + 2) + (ulong)uVar8);
                }
                else {
                  puVar35 = (undefined4 *)(lVar30 + 0x6b070);
                  iVar25 = 2;
                  uVar10 = 0;
                }
                cVar6 = *(char *)((long)puVar2 + 0x59);
                if (cVar6 != '\x01') break;
                puVar19 = (undefined8 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
LAB_00120d88:
                lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
                uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
                local_38 = local_38 - uVar9;
                if (uVar10 == 1) {
                  if (lVar14 != 0) {
                    uVar10 = memory_check_code_region(lVar14,uVar15,uVar27);
                    local_30 = local_30 | uVar10;
                  }
                  uVar27 = uVar27 + uVar9 * 4;
                  puVar23 = puVar19;
                  do {
                    uVar11 = (*(code *)puVar35)(lVar30,(uVar31 + (int)puVar19) - (int)puVar23 &
                                                       *puVar1);
                    puVar28 = (undefined8 *)((long)puVar23 + 4);
                    *(undefined4 *)puVar23 = uVar11;
                    puVar23 = puVar28;
                  } while (puVar28 != (undefined8 *)((long)puVar19 + ((ulong)(uVar9 - 1) + 1) * 4));
                  uVar31 = uVar31 + uVar9 * -4;
                }
                else {
                  if (lVar14 != 0) {
                    uVar8 = memory_check_code_region(lVar14,uVar15,uVar27,uVar9 * 4);
                    local_30 = local_30 | uVar8;
                  }
                  auVar41 = _DAT_0021d600;
                  bVar4 = puVar35 + (1 - (ulong)uVar9) <
                          (undefined4 *)((long)puVar19 + (ulong)uVar9 * 4);
                  uVar8 = uVar9 - 1;
                  uVar31 = uVar31 + uVar9 * -4;
                  uVar27 = uVar27 + uVar9 * 4;
                  if (((!bVar4 || puVar19 >= puVar35 + 1) && 6 < uVar8) &&
                      (bVar4 && puVar19 < puVar35 + 1 || uVar8 != 7)) {
                    uVar12 = (uVar9 - 4 >> 2) + 1;
                    pauVar36 = (undefined (*) [16])(puVar35 + -3);
                    puVar23 = puVar19;
                    do {
                      uVar10 = uVar10 + 1;
                      auVar43 = a64_TBL(ZEXT816(0),*pauVar36,auVar41);
                      puVar23[1] = auVar43._8_8_;
                      *puVar23 = auVar43._0_8_;
                      pauVar36 = pauVar36 + -1;
                      puVar23 = puVar23 + 2;
                    } while (uVar10 < uVar12);
                    uVar16 = (ulong)(uVar12 * 4);
                    if (uVar9 != uVar12 * 4) {
                      *(undefined4 *)((long)puVar19 + uVar16 * 4) = puVar35[-uVar16];
                      iVar25 = uVar8 + uVar12 * -4;
                      if ((iVar25 != 0) &&
                         (*(undefined4 *)((long)puVar19 + uVar16 * 4 + 4) = puVar35[-1 - uVar16],
                         iVar25 != 1)) {
                        *(undefined4 *)((long)puVar19 + uVar16 * 4 + 8) = puVar35[-2 - uVar16];
                      }
                    }
                  }
                  else {
                    puVar23 = puVar19;
                    do {
                      puVar28 = (undefined8 *)((long)puVar23 + 4);
                      *(undefined4 *)puVar23 = *puVar35;
                      puVar23 = puVar28;
                      puVar35 = puVar35 + -1;
                    } while ((undefined8 *)((long)puVar19 + (ulong)uVar8 * 4 + 4) != puVar28);
                  }
                }
                if (local_38 == 0) goto LAB_0011f928;
              }
              if (cVar6 != '\x02') {
                puVar19 = (undefined8 *)(lVar30 + 0x8b070);
                if (cVar6 == '\0') {
                  puVar19 = (undefined8 *)
                            (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar24 + lVar39)));
                }
                goto LAB_00120d88;
              }
              pcVar38 = *(code **)(puVar2 + 0xc);
              lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
              uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
              local_38 = local_38 - uVar9;
              if (iVar25 == 2) {
                if (lVar14 != 0) {
                  uVar10 = memory_check_code_region(lVar14,uVar15,uVar27,uVar9 * 4);
                  local_30 = local_30 | uVar10;
                }
                puVar18 = puVar35;
                do {
                  puVar33 = puVar18 + -1;
                  (*pcVar38)(lVar30,(uVar27 + (int)puVar35) - (int)puVar18 & *puVar2,*puVar18);
                  puVar18 = puVar33;
                } while (puVar33 !=
                         (undefined4 *)
                         ((long)puVar35 + ((ulong)(uVar9 - 1) << 2 ^ 0xfffffffffffffffc)));
                uVar27 = uVar27 + 4 + (uVar9 - 1) * 4;
              }
              else {
                if (lVar14 != 0) {
                  uVar10 = memory_check_code_region(lVar14,uVar15,uVar27,uVar9 << 2);
                  local_30 = local_30 | uVar10;
                }
                uVar8 = uVar9;
                uVar10 = uVar31;
                do {
                  uVar11 = (*(code *)puVar35)(lVar30,uVar10 & *puVar1);
                  (*pcVar38)(lVar30,(uVar31 + uVar27) - uVar10 & *puVar2,uVar11);
                  uVar10 = uVar10 - 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                uVar27 = uVar27 + uVar9 * 4;
              }
              uVar31 = uVar31 + uVar9 * -4;
            } while (local_38 != 0);
          }
          else {
            if (local_30 != 5) {
              bVar5 = local_30 != 3;
              local_30 = 0;
              if (bVar5) goto LAB_0011f93c;
              goto LAB_00120634;
            }
            local_30 = 0;
            do {
              while( true ) {
                lVar24 = param_1[1];
                lVar39 = (ulong)(uVar27 >> 0x17) * 0x60;
                lVar14 = (ulong)(uVar31 >> 0x17) * 0x60;
                puVar1 = (uint *)(lVar24 + lVar14);
                uVar9 = *(uint *)(lVar24 + lVar14);
                puVar2 = (uint *)(lVar24 + lVar39);
                uVar8 = uVar31 & uVar9;
                uVar10 = local_38;
                if (uVar9 < uVar8 + local_38 * -4) {
                  uVar10 = (uVar8 >> 2) + 1;
                }
                cVar6 = *(char *)(puVar1 + 0x16);
                uVar9 = uVar27 & *(uint *)(lVar24 + lVar39);
                if (*(uint *)(lVar24 + lVar39) < uVar9 + uVar10 * -4) {
                  uVar10 = (uVar9 >> 2) + 1;
                }
                if (cVar6 == '\x01') break;
                if (cVar6 == '\x02') {
                  iVar25 = 3;
                  uVar9 = 1;
                  puVar35 = *(undefined4 **)(puVar1 + 6);
                  goto LAB_0011f7f4;
                }
                if (cVar6 != '\0') {
                  iVar25 = 2;
                  uVar9 = 0;
                  puVar35 = (undefined4 *)(lVar30 + 0x6b070);
                  goto LAB_0011f7f4;
                }
                iVar25 = 2;
                uVar9 = 0;
                puVar35 = (undefined4 *)(*(long *)(puVar1 + 2) + (ulong)uVar8);
                cVar6 = *(char *)((long)puVar2 + 0x59);
                if (cVar6 != '\x01') goto LAB_0011f800;
LAB_00122888:
                puVar18 = (undefined4 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
LAB_0011f810:
                lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
                uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
                local_38 = local_38 - uVar10;
                if (uVar9 == 1) {
                  if (lVar14 != 0) {
                    uVar8 = memory_check_code_region(lVar14,uVar15,uVar27);
                    local_30 = local_30 | uVar8;
                  }
                  uVar27 = uVar27 + uVar10 * -4;
                  puVar33 = puVar18;
                  do {
                    uVar11 = (*(code *)puVar35)(lVar30,(uVar31 - (int)puVar18) + (int)puVar33 &
                                                       *puVar1);
                    puVar34 = puVar33 + -1;
                    *puVar33 = uVar11;
                    puVar33 = puVar34;
                  } while (puVar34 != puVar18 + ~(ulong)(uVar10 - 1));
                  uVar31 = uVar31 + uVar10 * -4;
                }
                else {
                  if (lVar14 != 0) {
                    uVar8 = memory_check_code_region(lVar14,uVar15,uVar27,uVar10 * 4);
                    local_30 = local_30 | uVar8;
                  }
                  uVar8 = uVar10 - 1;
                  uVar31 = uVar31 + uVar10 * -4;
                  uVar27 = uVar27 + uVar10 * -4;
                  if (((puVar35 + -3 >= puVar18 + 1 || puVar18 + -3 >= puVar35 + 1) && 6 < uVar8) &&
                      (puVar35 + -3 < puVar18 + 1 && puVar18 + -3 < puVar35 + 1 || uVar8 != 7)) {
                    lVar14 = -0xc;
                    uVar12 = (uVar10 - 4 >> 2) + 1;
                    do {
                      auVar41 = *(undefined (*) [16])((long)puVar35 + lVar14);
                      uVar9 = uVar9 + 1;
                      ((undefined8 *)((long)puVar18 + lVar14))[1] = auVar41._8_8_;
                      *(undefined8 *)((long)puVar18 + lVar14) = auVar41._0_8_;
                      lVar14 = lVar14 + -0x10;
                    } while (uVar9 < uVar12);
                    uVar16 = (ulong)(uVar12 * 4);
                    if (uVar10 != uVar12 * 4) {
                      puVar18[-uVar16] = puVar35[-uVar16];
                      iVar25 = uVar8 + uVar12 * -4;
                      if ((iVar25 != 0) &&
                         (puVar18[-1 - uVar16] = puVar35[-1 - uVar16], iVar25 != 1)) {
                        puVar18[-2 - uVar16] = puVar35[-2 - uVar16];
                      }
                    }
                  }
                  else {
                    uVar16 = 0;
                    do {
                      *(undefined4 *)((long)puVar18 + uVar16) =
                           *(undefined4 *)((long)puVar35 + uVar16);
                      uVar16 = uVar16 - 4;
                    } while (((ulong)uVar8 << 2 ^ 0xfffffffffffffffc) != uVar16);
                  }
                }
                if (local_38 == 0) goto LAB_0011f928;
              }
              puVar35 = (undefined4 *)(**(code **)(puVar1 + 2))(lVar30,uVar31);
              iVar25 = 2;
              uVar9 = 0;
LAB_0011f7f4:
              cVar6 = *(char *)((long)puVar2 + 0x59);
              if (cVar6 == '\x01') goto LAB_00122888;
LAB_0011f800:
              if (cVar6 != '\x02') {
                puVar18 = (undefined4 *)(lVar30 + 0x8b070);
                if (cVar6 == '\0') {
                  puVar18 = (undefined4 *)
                            (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar24 + lVar39)));
                }
                goto LAB_0011f810;
              }
              pcVar38 = *(code **)(puVar2 + 0xc);
              lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
              uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
              local_38 = local_38 - uVar10;
              if (iVar25 == 2) {
                if (lVar14 != 0) {
                  uVar8 = memory_check_code_region(lVar14,uVar15,uVar27,uVar10 * 4);
                  local_30 = local_30 | uVar8;
                }
                puVar18 = puVar35;
                do {
                  puVar33 = puVar18 + -1;
                  (*pcVar38)(lVar30,(uVar27 - (int)puVar35) + (int)puVar18 & *puVar2,*puVar18);
                  puVar18 = puVar33;
                } while (puVar33 != puVar35 + ~(ulong)(uVar10 - 1));
              }
              else {
                if (lVar14 != 0) {
                  uVar8 = memory_check_code_region(lVar14,uVar15,uVar27,uVar10 << 2);
                  local_30 = local_30 | uVar8;
                }
                uVar9 = uVar10;
                uVar8 = uVar31;
                do {
                  uVar11 = (*(code *)puVar35)(lVar30,uVar8 & *puVar1);
                  (*pcVar38)(lVar30,(uVar27 - uVar31) + uVar8 & *puVar2,uVar11);
                  uVar8 = uVar8 - 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              uVar27 = uVar27 + uVar10 * -4;
              uVar31 = uVar31 + uVar10 * -4;
            } while (local_38 != 0);
          }
          goto LAB_0011f928;
        }
        if (local_30 == 0) {
LAB_00120634:
          do {
            while( true ) {
              local_18 = (undefined4 *)(lVar30 + 0x6b070);
              uVar10 = local_38 * 4;
              lVar24 = param_1[1];
              lVar14 = (ulong)(uVar31 >> 0x17) * 0x60;
              lVar39 = (ulong)(uVar27 >> 0x17) * 0x60;
              puVar1 = (uint *)(lVar24 + lVar14);
              puVar2 = (uint *)(lVar24 + lVar39);
              uVar9 = *(uint *)(lVar24 + lVar14);
              uVar8 = uVar31 & uVar9;
              uVar12 = local_38;
              if (uVar9 < uVar10 + uVar8) {
                uVar12 = (uVar9 + 1) - uVar8;
                uVar10 = uVar12 & 0xfffffffc;
                uVar12 = uVar12 >> 2;
              }
              uVar3 = *(uint *)(lVar24 + lVar39);
              cVar6 = *(char *)(puVar1 + 0x16);
              uVar9 = (uVar3 + 1) - (uVar27 & uVar3) >> 2;
              if ((uVar27 & uVar3) + uVar10 <= uVar3) {
                uVar9 = uVar12;
              }
              if (cVar6 == '\x01') {
                local_18 = (undefined4 *)(**(code **)(puVar1 + 2))(lVar30,uVar31);
                iVar25 = 2;
                uVar10 = 0;
              }
              else if (cVar6 == '\x02') {
                iVar25 = 3;
                uVar10 = 1;
                local_18 = *(undefined4 **)(puVar1 + 6);
              }
              else if (cVar6 == '\0') {
                iVar25 = 2;
                uVar10 = 0;
                local_18 = (undefined4 *)(*(long *)(puVar1 + 2) + (ulong)uVar8);
              }
              else {
                iVar25 = 2;
                uVar10 = 0;
              }
              local_20 = (undefined4 *)(lVar30 + 0x8b070);
              cVar6 = *(char *)((long)puVar2 + 0x59);
              if (cVar6 != '\x01') break;
              local_20 = (undefined4 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
LAB_001206e4:
              lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
              uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
              local_38 = local_38 - uVar9;
              if (uVar10 == 1) {
                if (lVar14 != 0) {
                  uVar10 = memory_check_code_region(lVar14,uVar15,uVar27);
                  local_30 = local_30 | uVar10;
                }
                uVar27 = uVar27 + uVar9 * 4;
                puVar35 = local_20;
                do {
                  uVar11 = (*(code *)local_18)(lVar30,(uVar31 - (int)local_20) + (int)puVar35 &
                                                      *puVar1);
                  puVar18 = puVar35 + 1;
                  *puVar35 = uVar11;
                  puVar35 = puVar18;
                } while (local_20 + (ulong)(uVar9 - 1) + 1 != puVar18);
                uVar31 = uVar31 + 4 + (uVar9 - 1) * 4;
              }
              else {
                iVar25 = uVar9 * 4;
                if (lVar14 != 0) {
                  uVar8 = memory_check_code_region(lVar14,uVar15,uVar27,iVar25);
                  local_30 = local_30 | uVar8;
                }
                uVar8 = uVar9 - 1;
                uVar31 = uVar31 + iVar25;
                uVar27 = uVar27 + iVar25;
                bVar4 = (ulong)((long)local_18 + (0xf - (long)local_20)) < 0x1f;
                if ((!bVar4 && 6 < uVar8) && (bVar4 || uVar8 != 7)) {
                  lVar14 = 0;
                  uVar12 = (uVar9 - 4 >> 2) + 1;
                  do {
                    auVar41 = *(undefined (*) [16])((long)local_18 + lVar14);
                    uVar10 = uVar10 + 1;
                    ((undefined8 *)((long)local_20 + lVar14))[1] = auVar41._8_8_;
                    *(undefined8 *)((long)local_20 + lVar14) = auVar41._0_8_;
                    lVar14 = lVar14 + 0x10;
                  } while (uVar10 < uVar12);
                  uVar10 = uVar12 * 4;
                  if (uVar9 != uVar10) {
                    local_20[uVar10] = local_18[uVar10];
                    iVar25 = uVar8 + uVar12 * -4;
                    if ((iVar25 != 0) &&
                       (local_20[(ulong)uVar10 + 1] = local_18[(ulong)uVar10 + 1], iVar25 != 1)) {
                      local_20[(ulong)uVar10 + 2] = local_18[(ulong)uVar10 + 2];
                    }
                  }
                }
                else {
                  uVar16 = 0;
                  do {
                    local_20[uVar16] = local_18[uVar16];
                    bVar4 = uVar16 != uVar8;
                    uVar16 = uVar16 + 1;
                  } while (bVar4);
                }
              }
              if (local_38 == 0) goto LAB_00120378;
            }
            if (cVar6 != '\x02') {
              if (cVar6 == '\0') {
                local_20 = (undefined4 *)
                           (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar24 + lVar39)));
              }
              goto LAB_001206e4;
            }
            pcVar38 = *(code **)(puVar2 + 0xc);
            lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
            uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
            local_38 = local_38 - uVar9;
            if (iVar25 == 2) {
              if (lVar14 != 0) {
                uVar10 = memory_check_code_region(lVar14,uVar15,uVar27,uVar9 * 4);
                local_30 = local_30 | uVar10;
              }
              uVar31 = uVar31 + uVar9 * 4;
              puVar35 = local_18;
              do {
                puVar18 = puVar35 + 1;
                (*pcVar38)(lVar30,(uVar27 - (int)local_18) + (int)puVar35 & *puVar2,*puVar35);
                puVar35 = puVar18;
              } while (puVar18 != local_18 + (ulong)(uVar9 - 1) + 1);
              uVar27 = uVar27 + 4 + (uVar9 - 1) * 4;
            }
            else {
              if (lVar14 != 0) {
                uVar10 = memory_check_code_region(lVar14,uVar15,uVar27,uVar9 << 2);
                local_30 = local_30 | uVar10;
              }
              uVar8 = uVar9;
              uVar10 = uVar31;
              do {
                uVar11 = (*(code *)local_18)(lVar30,uVar10 & *puVar1);
                (*pcVar38)(lVar30,(uVar27 - uVar31) + uVar10 & *puVar2,uVar11);
                uVar10 = uVar10 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
              iVar25 = (uVar9 - 1) * 4;
              uVar31 = uVar31 + 4 + iVar25;
              uVar27 = uVar27 + 4 + iVar25;
            }
          } while (local_38 != 0);
LAB_00120378:
          bVar4 = *(int *)(lVar26 + 0x210c) == 1;
          goto LAB_0011f93c;
        }
        bVar4 = local_30 != 1;
        local_30 = 0;
        if (bVar4) goto LAB_001203a8;
        do {
          while( true ) {
            uVar10 = local_38 * 4;
            lVar24 = param_1[1];
            lVar14 = (ulong)(uVar31 >> 0x17) * 0x60;
            lVar39 = (ulong)(uVar27 >> 0x17) * 0x60;
            puVar1 = (uint *)(lVar24 + lVar14);
            puVar2 = (uint *)(lVar24 + lVar39);
            uVar12 = *(uint *)(lVar24 + lVar14);
            uVar8 = uVar31 & uVar12;
            uVar9 = local_38;
            if (uVar12 < uVar10 + uVar8) {
              uVar9 = (uVar12 + 1) - uVar8;
              uVar10 = uVar9 & 0xfffffffc;
              uVar9 = uVar9 >> 2;
            }
            cVar6 = *(char *)(puVar1 + 0x16);
            uVar12 = uVar27 & *(uint *)(lVar24 + lVar39);
            if (*(uint *)(lVar24 + lVar39) < uVar12 - uVar10) {
              uVar9 = (uVar12 >> 2) + 1;
            }
            if (cVar6 == '\x01') {
              pauVar36 = (undefined (*) [16])(**(code **)(puVar1 + 2))(lVar30,uVar31);
              iVar25 = 2;
              uVar10 = 0;
            }
            else if (cVar6 == '\x02') {
              uVar10 = 1;
              iVar25 = 3;
              pauVar36 = *(undefined (**) [16])(puVar1 + 6);
            }
            else if (cVar6 == '\0') {
              iVar25 = 2;
              uVar10 = 0;
              pauVar36 = (undefined (*) [16])(*(long *)(puVar1 + 2) + (ulong)uVar8);
            }
            else {
              pauVar36 = (undefined (*) [16])(lVar30 + 0x6b070);
              iVar25 = 2;
              uVar10 = 0;
            }
            cVar6 = *(char *)((long)puVar2 + 0x59);
            if (cVar6 != '\x01') break;
            puVar35 = (undefined4 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
LAB_001208a8:
            lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
            uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
            local_38 = local_38 - uVar9;
            if (uVar10 == 1) {
              if (lVar14 != 0) {
                uVar10 = memory_check_code_region(lVar14,uVar15,uVar27);
                local_30 = local_30 | uVar10;
              }
              uVar27 = uVar27 + uVar9 * -4;
              puVar18 = puVar35;
              do {
                uVar11 = (*(code *)pauVar36)(lVar30,(uVar31 + (int)puVar35) - (int)puVar18 & *puVar1
                                            );
                puVar33 = puVar18 + -1;
                *puVar18 = uVar11;
                puVar18 = puVar33;
              } while (puVar33 !=
                       (undefined4 *)
                       ((long)puVar35 + ((ulong)(uVar9 - 1) << 2 ^ 0xfffffffffffffffc)));
              uVar31 = uVar31 + 4 + (uVar9 - 1) * 4;
            }
            else {
              if (lVar14 != 0) {
                uVar8 = memory_check_code_region(lVar14,uVar15,uVar27,uVar9 * 4);
                local_30 = local_30 | uVar8;
              }
              auVar41 = _DAT_0021d600;
              bVar4 = puVar35 + (1 - (ulong)uVar9) <
                      (undefined4 *)((long)*pauVar36 + (ulong)uVar9 * 4);
              uVar8 = uVar9 - 1;
              uVar31 = uVar31 + uVar9 * 4;
              uVar27 = uVar27 + uVar9 * -4;
              if (((!bVar4 || pauVar36 >= (undefined (*) [16])(puVar35 + 1)) && 6 < uVar8) &&
                  (bVar4 && pauVar36 < (undefined (*) [16])(puVar35 + 1) || uVar8 != 7)) {
                uVar12 = (uVar9 - 4 >> 2) + 1;
                pauVar22 = pauVar36;
                puVar19 = (undefined8 *)(puVar35 + -3);
                do {
                  uVar10 = uVar10 + 1;
                  auVar43 = a64_TBL(ZEXT816(0),*pauVar22,auVar41);
                  puVar19[1] = auVar43._8_8_;
                  *puVar19 = auVar43._0_8_;
                  pauVar22 = pauVar22 + 1;
                  puVar19 = puVar19 + -2;
                } while (uVar10 < uVar12);
                uVar16 = (ulong)(uVar12 * 4);
                if (uVar9 != uVar12 * 4) {
                  puVar35[-uVar16] = *(undefined4 *)((long)*pauVar36 + uVar16 * 4);
                  iVar25 = uVar8 + uVar12 * -4;
                  if ((iVar25 != 0) &&
                     (puVar35[-1 - uVar16] = *(undefined4 *)((long)*pauVar36 + (uVar16 + 1) * 4),
                     iVar25 != 1)) {
                    puVar35[-2 - uVar16] = *(undefined4 *)((long)*pauVar36 + (uVar16 + 2) * 4);
                  }
                }
              }
              else {
                puVar18 = puVar35;
                do {
                  puVar33 = puVar18 + -1;
                  *puVar18 = *(undefined4 *)*pauVar36;
                  puVar18 = puVar33;
                  pauVar36 = (undefined (*) [16])((long)*pauVar36 + 4);
                } while ((undefined4 *)((long)puVar35 + ((ulong)uVar8 << 2 ^ 0xfffffffffffffffc)) !=
                         puVar33);
              }
            }
            if (local_38 == 0) goto LAB_001212a8;
          }
          if (cVar6 != '\x02') {
            puVar35 = (undefined4 *)(lVar30 + 0x8b070);
            if (cVar6 == '\0') {
              puVar35 = (undefined4 *)
                        (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar24 + lVar39)));
            }
            goto LAB_001208a8;
          }
          pcVar38 = *(code **)(puVar2 + 0xc);
          lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
          uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
          local_38 = local_38 - uVar9;
          if (iVar25 == 2) {
            if (lVar14 != 0) {
              uVar10 = memory_check_code_region(lVar14,uVar15,uVar27);
              local_30 = local_30 | uVar10;
            }
            pauVar22 = pauVar36;
            do {
              puVar35 = (undefined4 *)*pauVar22;
              (*pcVar38)(lVar30,(uVar27 + (int)pauVar36) - (int)pauVar22 & *puVar2,
                         *(undefined4 *)*pauVar22);
              pauVar22 = (undefined (*) [16])(puVar35 + 1);
            } while ((undefined (*) [16])(puVar35 + 1) !=
                     (undefined (*) [16])((long)*pauVar36 + ((ulong)(uVar9 - 1) + 1) * 4));
          }
          else {
            if (lVar14 != 0) {
              uVar10 = memory_check_code_region(lVar14,uVar15,uVar27,uVar9 << 2);
              local_30 = local_30 | uVar10;
            }
            uVar8 = uVar9;
            uVar10 = uVar31;
            do {
              uVar11 = (*(code *)pauVar36)(lVar30,uVar10 & *puVar1);
              (*pcVar38)(lVar30,(uVar31 + uVar27) - uVar10 & *puVar2,uVar11);
              uVar10 = uVar10 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          uVar27 = uVar27 + uVar9 * -4;
          uVar31 = uVar31 + uVar9 * 4;
        } while (local_38 != 0);
      }
      goto LAB_001212a8;
    }
    if (local_30 == 9) {
      lVar14 = (ulong)(uVar10 >> 0x17) * 0x60;
      local_30 = 0;
      do {
        uVar10 = local_38;
        lVar24 = param_1[1];
        lVar39 = (ulong)(uVar27 >> 0x17) * 0x60;
        puVar1 = (uint *)(lVar24 + lVar39);
        puVar2 = (uint *)(lVar24 + lVar14);
        uVar8 = uVar27 & *(uint *)(lVar24 + lVar39);
        if (*(uint *)(lVar24 + lVar39) < uVar8 + local_38 * -4) {
          uVar10 = (uVar8 >> 2) + 1;
          local_38 = local_38 - uVar10;
          cVar6 = *(char *)(puVar2 + 0x16);
          if (cVar6 == '\x01') goto LAB_00123200;
LAB_001230b4:
          if (cVar6 == '\x02') {
            iVar25 = 3;
            uVar8 = 1;
            puVar35 = *(undefined4 **)(puVar2 + 6);
          }
          else if (cVar6 == '\0') {
            iVar25 = 2;
            uVar8 = 0;
            puVar35 = (undefined4 *)
                      (*(long *)(puVar2 + 2) + (ulong)(uVar31 & *(uint *)(lVar24 + lVar14)));
          }
          else {
            iVar25 = 2;
            uVar8 = 0;
            puVar35 = (undefined4 *)(lVar30 + 0x6b070);
          }
          cVar6 = *(char *)((long)puVar1 + 0x59);
          if (cVar6 == '\x01') goto LAB_00123238;
LAB_001230d8:
          if (cVar6 != '\x02') {
            puVar18 = (undefined4 *)(lVar30 + 0x8b070);
            if (cVar6 == '\0') {
              puVar18 = (undefined4 *)
                        (*(long *)(puVar1 + 8) + (ulong)(uVar27 & *(uint *)(lVar24 + lVar39)));
            }
            goto LAB_001230ec;
          }
          pcVar38 = *(code **)(puVar1 + 0xc);
          lVar24 = (**(code **)(puVar1 + 0x12))(lVar30,puVar1,uVar27);
          uVar15 = (**(code **)(puVar1 + 0x14))(lVar30,puVar1,uVar27);
          if (iVar25 == 2) {
            uVar9 = uVar27;
            uVar8 = uVar10;
            if (lVar24 != 0) {
              uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 << 2);
              local_30 = local_30 | uVar12;
            }
            do {
              (*pcVar38)(lVar30,uVar9 & *puVar1,*puVar35);
              uVar8 = uVar8 - 1;
              uVar9 = uVar9 - 4;
            } while (uVar8 != 0);
            uVar27 = uVar27 + uVar10 * -4;
          }
          else {
            uVar8 = uVar10;
            uVar9 = uVar27;
            if (lVar24 != 0) {
              uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 << 2);
              local_30 = local_30 | uVar12;
            }
            do {
              uVar11 = (*(code *)puVar35)(lVar30,uVar31 & *puVar2);
              (*pcVar38)(lVar30,uVar9 & *puVar1,uVar11);
              uVar8 = uVar8 - 1;
              uVar9 = uVar9 - 4;
            } while (uVar8 != 0);
            uVar27 = uVar27 + uVar10 * -4;
          }
        }
        else {
          cVar6 = *(char *)(puVar2 + 0x16);
          local_38 = 0;
          if (cVar6 != '\x01') goto LAB_001230b4;
LAB_00123200:
          puVar35 = (undefined4 *)(**(code **)(puVar2 + 2))(lVar30,uVar31);
          cVar6 = *(char *)((long)puVar1 + 0x59);
          iVar25 = 2;
          uVar8 = 0;
          if (cVar6 != '\x01') goto LAB_001230d8;
LAB_00123238:
          puVar18 = (undefined4 *)(**(code **)(puVar1 + 8))(lVar30,uVar27);
LAB_001230ec:
          lVar24 = (**(code **)(puVar1 + 0x12))(lVar30,puVar1,uVar27);
          uVar15 = (**(code **)(puVar1 + 0x14))(lVar30,puVar1,uVar27);
          if (uVar8 == 1) {
            if (lVar24 != 0) {
              uVar8 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 * 4);
              local_30 = local_30 | uVar8;
            }
            uVar27 = uVar27 + uVar10 * -4;
            puVar33 = puVar18;
            do {
              uVar11 = (*(code *)puVar35)(lVar30,uVar31 & *puVar2);
              puVar34 = puVar33 + -1;
              *puVar33 = uVar11;
              puVar33 = puVar34;
            } while (puVar18 + ~(ulong)(uVar10 - 1) != puVar34);
          }
          else {
            if (lVar24 != 0) {
              uVar9 = memory_check_code_region(lVar24,uVar15,uVar27,uVar10 * 4);
              local_30 = local_30 | uVar9;
            }
            uVar9 = uVar10 - 1;
            uVar27 = uVar27 + uVar10 * -4;
            if ((puVar18 + (1 - (ulong)uVar10) < puVar35 + 1 && puVar35 < puVar18 + 1 || uVar9 < 7)
                || (puVar18 + (1 - (ulong)uVar10) >= puVar35 + 1 || puVar35 >= puVar18 + 1) &&
                   uVar9 == 7) {
              puVar33 = puVar18;
              do {
                puVar34 = puVar33 + -1;
                *puVar33 = *puVar35;
                puVar33 = puVar34;
              } while ((undefined4 *)((long)puVar18 + ((ulong)uVar9 << 2 ^ 0xfffffffffffffffc)) !=
                       puVar34);
            }
            else {
              uVar12 = (uVar10 - 4 >> 2) + 1;
              uVar11 = *puVar35;
              auVar44._0_8_ = CONCAT44(uVar11,uVar11);
              auVar44._8_4_ = uVar11;
              auVar44._12_4_ = uVar11;
              puVar19 = (undefined8 *)(puVar18 + -3);
              do {
                uVar8 = uVar8 + 1;
                puVar19[1] = auVar44._8_8_;
                *puVar19 = auVar44._0_8_;
                puVar19 = puVar19 + -2;
              } while (uVar8 < uVar12);
              uVar16 = (ulong)(uVar12 * 4);
              if (uVar10 != uVar12 * 4) {
                uVar11 = *puVar35;
                puVar18[-uVar16] = uVar11;
                iVar25 = uVar9 + uVar12 * -4;
                if ((iVar25 != 0) && (puVar18[-1 - uVar16] = uVar11, iVar25 != 1)) {
                  puVar18[-2 - uVar16] = *puVar35;
                }
              }
            }
          }
        }
      } while (local_38 != 0);
      goto LAB_0011f928;
    }
    if (local_30 < 10) {
      if (local_30 == 7) goto LAB_00120ccc;
      if (local_30 != 8) goto LAB_001203a8;
LAB_00120ac4:
      lVar14 = (ulong)(uVar10 >> 0x17) * 0x60;
      local_30 = 0;
      do {
        uVar8 = local_38;
        lVar24 = param_1[1];
        lVar39 = (ulong)(uVar27 >> 0x17) * 0x60;
        puVar1 = (uint *)(lVar24 + lVar39);
        puVar2 = (uint *)(lVar24 + lVar14);
        uVar10 = *(uint *)(lVar24 + lVar39);
        if (uVar10 < (uVar27 & uVar10) + local_38 * 4) {
          uVar8 = (uVar10 + 1) - (uVar27 & uVar10) >> 2;
          local_38 = local_38 - uVar8;
          cVar6 = *(char *)(puVar2 + 0x16);
          if (cVar6 == '\x01') goto LAB_00120f18;
LAB_00120b48:
          if (cVar6 == '\x02') {
            iVar25 = 3;
            uVar10 = 1;
            puVar35 = *(undefined4 **)(puVar2 + 6);
          }
          else if (cVar6 == '\0') {
            iVar25 = 2;
            uVar10 = 0;
            puVar35 = (undefined4 *)
                      (*(long *)(puVar2 + 2) + (ulong)(uVar31 & *(uint *)(lVar24 + lVar14)));
          }
          else {
            iVar25 = 2;
            uVar10 = 0;
            puVar35 = (undefined4 *)(lVar30 + 0x6b070);
          }
          cVar6 = *(char *)((long)puVar1 + 0x59);
          if (cVar6 == '\x01') goto LAB_00120f50;
LAB_00120b6c:
          if (cVar6 != '\x02') {
            puVar19 = (undefined8 *)(lVar30 + 0x8b070);
            if (cVar6 == '\0') {
              puVar19 = (undefined8 *)
                        (*(long *)(puVar1 + 8) + (ulong)(uVar27 & *(uint *)(lVar24 + lVar39)));
            }
            goto LAB_00120b80;
          }
          pcVar38 = *(code **)(puVar1 + 0xc);
          lVar24 = (**(code **)(puVar1 + 0x12))(lVar30,puVar1,uVar27);
          uVar15 = (**(code **)(puVar1 + 0x14))(lVar30,puVar1,uVar27);
          if (iVar25 == 2) {
            uVar9 = uVar27;
            uVar10 = uVar8;
            if (lVar24 != 0) {
              uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar8 << 2);
              local_30 = local_30 | uVar12;
            }
            do {
              (*pcVar38)(lVar30,uVar9 & *puVar1,*puVar35);
              uVar10 = uVar10 - 1;
              uVar9 = uVar9 + 4;
            } while (uVar10 != 0);
            uVar27 = uVar27 + uVar8 * 4;
          }
          else {
            uVar10 = uVar8;
            uVar9 = uVar27;
            if (lVar24 != 0) {
              uVar12 = memory_check_code_region(lVar24,uVar15,uVar27,uVar8 << 2);
              local_30 = local_30 | uVar12;
            }
            do {
              uVar11 = (*(code *)puVar35)(lVar30,uVar31 & *puVar2);
              (*pcVar38)(lVar30,uVar9 & *puVar1,uVar11);
              uVar10 = uVar10 - 1;
              uVar9 = uVar9 + 4;
            } while (uVar10 != 0);
            uVar27 = uVar27 + uVar8 * 4;
          }
        }
        else {
          cVar6 = *(char *)(puVar2 + 0x16);
          local_38 = 0;
          if (cVar6 != '\x01') goto LAB_00120b48;
LAB_00120f18:
          puVar35 = (undefined4 *)(**(code **)(puVar2 + 2))(lVar30,uVar31);
          cVar6 = *(char *)((long)puVar1 + 0x59);
          iVar25 = 2;
          uVar10 = 0;
          if (cVar6 != '\x01') goto LAB_00120b6c;
LAB_00120f50:
          puVar19 = (undefined8 *)(**(code **)(puVar1 + 8))(lVar30,uVar27);
LAB_00120b80:
          lVar24 = (**(code **)(puVar1 + 0x12))(lVar30,puVar1,uVar27);
          uVar15 = (**(code **)(puVar1 + 0x14))(lVar30,puVar1,uVar27);
          if (uVar10 == 1) {
            if (lVar24 != 0) {
              uVar10 = memory_check_code_region(lVar24,uVar15,uVar27,uVar8 * 4);
              local_30 = local_30 | uVar10;
            }
            uVar27 = uVar27 + uVar8 * 4;
            puVar23 = puVar19;
            do {
              uVar11 = (*(code *)puVar35)(lVar30,uVar31 & *puVar2);
              puVar28 = (undefined8 *)((long)puVar23 + 4);
              *(undefined4 *)puVar23 = uVar11;
              puVar23 = puVar28;
            } while (puVar28 != (undefined8 *)((long)puVar19 + ((ulong)(uVar8 - 1) + 1) * 4));
          }
          else {
            if (lVar24 != 0) {
              uVar9 = memory_check_code_region(lVar24,uVar15,uVar27,uVar8 * 4);
              local_30 = local_30 | uVar9;
            }
            bVar4 = puVar35 < (undefined4 *)((long)puVar19 + (ulong)uVar8 * 4);
            uVar9 = uVar8 - 1;
            uVar27 = uVar27 + uVar8 * 4;
            if ((bVar4 && puVar19 < puVar35 + 1 || uVar9 < 7) ||
                (!bVar4 || puVar19 >= puVar35 + 1) && uVar9 == 7) {
              puVar23 = puVar19;
              do {
                puVar28 = (undefined8 *)((long)puVar23 + 4);
                *(undefined4 *)puVar23 = *puVar35;
                puVar23 = puVar28;
              } while ((undefined8 *)((long)puVar19 + (ulong)uVar9 * 4 + 4) != puVar28);
            }
            else {
              uVar11 = *puVar35;
              auVar42._0_8_ = CONCAT44(uVar11,uVar11);
              auVar42._8_4_ = uVar11;
              auVar42._12_4_ = uVar11;
              uVar12 = (uVar8 - 4 >> 2) + 1;
              puVar23 = puVar19;
              do {
                uVar10 = uVar10 + 1;
                puVar23[1] = auVar42._8_8_;
                *puVar23 = auVar42._0_8_;
                puVar23 = puVar23 + 2;
              } while (uVar10 < uVar12);
              uVar16 = (ulong)(uVar12 * 4);
              if (uVar8 != uVar12 * 4) {
                uVar11 = *puVar35;
                *(undefined4 *)((long)puVar19 + uVar16 * 4) = uVar11;
                iVar25 = uVar9 + uVar12 * -4;
                if ((iVar25 != 0) &&
                   (*(undefined4 *)((long)puVar19 + uVar16 * 4 + 4) = uVar11, iVar25 != 1)) {
                  *(undefined4 *)((long)puVar19 + uVar16 * 4 + 8) = *puVar35;
                }
              }
            }
          }
        }
      } while (local_38 != 0);
      goto LAB_0011f928;
    }
    if (local_30 == 10) {
      lVar39 = param_1[1];
      lVar14 = (ulong)(uVar10 >> 0x17) * 0x60;
      lVar24 = (ulong)(uVar8 >> 0x17) * 0x60;
      puVar1 = (uint *)(lVar39 + lVar14);
      puVar2 = (uint *)(lVar39 + lVar24);
      cVar6 = *(char *)(puVar1 + 0x16);
      if (cVar6 == '\x01') {
        puVar35 = (undefined4 *)(**(code **)(puVar1 + 2))(lVar30,uVar31);
        iVar25 = 2;
        local_30 = 0;
      }
      else if (cVar6 == '\x02') {
        iVar25 = 3;
        local_30 = 1;
        puVar35 = *(undefined4 **)(puVar1 + 6);
      }
      else if (cVar6 == '\0') {
        iVar25 = 2;
        puVar35 = (undefined4 *)
                  (*(long *)(puVar1 + 2) + (ulong)(uVar31 & *(uint *)(lVar39 + lVar14)));
        local_30 = 0;
      }
      else {
        puVar35 = (undefined4 *)(lVar30 + 0x6b070);
        iVar25 = 2;
        local_30 = 0;
      }
      cVar6 = *(char *)((long)puVar2 + 0x59);
      if (cVar6 == '\x01') {
        puVar18 = (undefined4 *)(**(code **)(puVar2 + 8))(lVar30,uVar27);
      }
      else {
        if (cVar6 == '\x02') {
          pcVar38 = *(code **)(puVar2 + 0xc);
          lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
          uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
          if (iVar25 == 2) {
            local_30 = 0;
            if (lVar14 != 0) {
              local_30 = memory_check_code_region(lVar14,uVar15,uVar27,local_38 << 2);
            }
            do {
              (*pcVar38)(lVar30,uVar27 & *puVar2,*puVar35);
              local_38 = local_38 - 1;
            } while (local_38 != 0);
          }
          else {
            local_30 = 0;
            if (lVar14 != 0) {
              local_30 = memory_check_code_region(lVar14,uVar15,uVar27,local_38 << 2);
            }
            do {
              uVar11 = (*(code *)puVar35)(lVar30,uVar31 & *puVar1);
              (*pcVar38)(lVar30,uVar27 & *puVar2,uVar11);
              local_38 = local_38 - 1;
            } while (local_38 != 0);
          }
          goto LAB_0011fd58;
        }
        if (cVar6 == '\0') {
          puVar18 = (undefined4 *)
                    (*(long *)(puVar2 + 8) + (ulong)(uVar27 & *(uint *)(lVar39 + lVar24)));
        }
        else {
          puVar18 = (undefined4 *)(lVar30 + 0x8b070);
        }
      }
      lVar14 = (**(code **)(puVar2 + 0x12))(lVar30,puVar2,uVar27);
      uVar15 = (**(code **)(puVar2 + 0x14))(lVar30,puVar2,uVar27);
      if (local_30 == 1) {
        local_30 = 0;
        if (lVar14 != 0) {
          local_30 = memory_check_code_region(lVar14,uVar15,uVar27,local_38 << 2);
        }
        do {
          uVar11 = (*(code *)puVar35)(lVar30,uVar31 & *puVar1);
          *puVar18 = uVar11;
          local_38 = local_38 - 1;
        } while (local_38 != 0);
      }
      else {
        if (lVar14 != 0) {
          local_30 = memory_check_code_region(lVar14,uVar15,uVar27,local_38 << 2);
        }
        do {
          *puVar18 = *puVar35;
          local_38 = local_38 - 1;
        } while (local_38 != 0);
      }
LAB_0011fd58:
      bVar4 = *(int *)(lVar26 + 0x210c) == 1;
    }
    else {
      if (local_30 == 0xb) goto LAB_00120ac4;
      local_30 = 0;
    }
LAB_0011f93c:
    if (uVar20 != 0 && bVar4) {
LAB_001212d0:
      local_40 = local_68 >> 0x15;
      iVar25 = *(byte *)((long)param_2 + 0x25) + 0xc;
      if (*(char *)((long)param_2 + 0x26) != '\0') {
        remove_event(lVar21 + 0x18,iVar25);
        iVar25 = *(byte *)((long)param_2 + 0x25) + 0xc;
      }
      *(undefined *)((long)param_2 + 0x26) = 1;
      local_48 = (int)lVar13;
      uVar20 = (local_48 - (int)*(undefined8 *)(lVar21 + 8)) + uVar20;
      schedule_event(lVar21 + 0x18,uVar20,iVar25);
      if (uVar20 < *(uint *)(lVar21 + 0x10)) {
        *(uint *)(lVar26 + 0x22a8) = *(uint *)(lVar26 + 0x22a8) | 4;
      }
      goto LAB_0011f9c4;
    }
  }
  if ((local_68 >> 0x19 & 1) == 0) {
    local_68 = local_68 & 0x7fffffff;
    *(uint *)(param_2 + 4) = local_68;
    *(uint *)(param_2[2] + 8) = local_68;
  }
  local_40 = local_68 >> 0x15;
  if ((local_68 >> 0x1e & 1) != 0) {
    lVar13 = *(long *)(param_2[1] + 0x2080);
    uVar10 = 0x100 << (ulong)(*(byte *)((long)param_2 + 0x25) & 0x1f) | *(uint *)(lVar13 + 0x214);
    *(uint *)(lVar13 + 0x214) = uVar10;
    lVar21 = param_2[1];
    if ((*(uint *)(lVar21 + 0x2110) & 6) == 0) {
      uVar10 = -*(int *)(lVar13 + 0x208) & *(uint *)(lVar13 + 0x210) & uVar10;
      *(uint *)(lVar21 + 0x2108) = uVar10;
    }
    else {
      uVar10 = *(uint *)(lVar21 + 0x2108);
    }
    if (uVar10 != 0) {
      *(uint *)(lVar21 + 0x22a8) = *(uint *)(lVar21 + 0x22a8) | 2;
    }
  }
LAB_0011f9c4:
  if ((local_40 & 3) != 3) {
    *(uint *)((long)param_2 + 0x1c) = uVar27;
  }
  *(uint *)(param_2 + 3) = uVar31;
  if (local_30 == 0) {
                    /* WARNING: Read-only address (ram,0x0021d600) is written */
                    /* WARNING: Read-only address (ram,0x0021d610) is written */
    return 0;
  }
  *(uint *)(param_2[1] + 0x22a8) = *(uint *)(param_2[1] + 0x22a8) | 1;
  __printf_chk(1,"DMA modified code (%x for %x).\n",uVar27,local_68 & 0x1fffff);
  return local_30;
}


