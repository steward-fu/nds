/*
 * Ghidra decompilation
 *
 * Function : process_cheat
 * Address  : 00180300
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_cheat(long param_1,uint **param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  uint *puVar21;
  uint local_38;
  uint local_34;
  int local_24;
  uint *local_20;
  uint local_10;
  
  local_20 = *param_2;
  puVar2 = local_20 + *(uint *)(param_2 + 3);
  lVar12 = param_1 + 0x25ce340;
  if (local_20 < puVar2) {
    lVar3 = param_1 + 0x25d0710;
    uVar11 = 0xffffffff;
    lVar4 = param_1 + 0x25d0710;
    uVar17 = 0;
    local_38 = 0;
    local_34 = 0;
    local_24 = 0;
    local_10 = 0xffffffff;
    puVar19 = local_20;
    do {
      while( true ) {
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        uVar18 = (ulong)uVar6;
        puVar1 = puVar19 + 2;
        uVar10 = uVar5 & 0xfffffff;
        uVar7 = uVar5 >> 0x1c;
        puVar21 = puVar1;
        uVar8 = uVar11;
        uVar20 = uVar17;
        if ((((uVar11 & 1) != 0) || ((uVar5 & 0xfeffffff) == 0xd0000000)) ||
           (uVar5 == 0xd2000000 || uVar7 == 0xe)) break;
joined_r0x00180574:
        uVar17 = uVar20;
        uVar11 = uVar8;
        puVar19 = puVar21;
        if (puVar2 <= puVar21) goto LAB_00180410;
      }
      uVar16 = (uint)uVar17;
      if (uVar7 == 8) {
        if (uVar10 == 0) {
          uVar10 = uVar16;
        }
        uVar10 = load_memory16(lVar3,uVar10);
        uVar8 = uVar11 * 2;
        if ((uVar6 & 0xffff) < (uVar10 & 0xffff & (uVar6 >> 0x10 ^ 0xffffffff))) {
          uVar8 = uVar11 * 2 | 1;
        }
        goto joined_r0x00180574;
      }
      if (8 < uVar7) {
        if (uVar7 == 0xc) {
          if ((uVar5 & 0xffffff) == 0) {
            uVar10 = uVar5 >> 0x18 & 0xf;
            if (uVar10 == 5) {
              uVar8 = uVar11 * 2;
              if (uVar6 >> 0x10 == (uVar6 & param_3 & 0xffff)) {
LAB_00180400:
                uVar8 = uVar11 * 2 | 1;
              }
            }
            else if (uVar10 == 6) {
              uVar18 = (ulong)(uVar6 & 0xfffffffc);
              uVar15 = *(ulong *)(lVar4 + (ulong)(uVar6 >> 0xb) * 8);
              if ((uVar15 >> 0x3e & 1) == 0) {
                *(uint *)(uVar18 + uVar15 * 4) = uVar16;
              }
              else if ((long)uVar15 < 0) {
                if (*(uint *)(uVar18 + uVar15 * 4) != uVar16) {
                  local_38 = 1;
                  cpu_block_check_allocation32(lVar12);
                  *(uint *)(uVar18 + uVar15 * 4) = uVar16;
                }
              }
              else {
                extended_store32(lVar3,uVar18,uVar17);
              }
            }
            else if (uVar10 == 0) {
              local_24 = uVar6 + 1;
              local_20 = puVar1;
              local_10 = uVar11;
            }
          }
        }
        else if (uVar7 < 0xd) {
          if (uVar7 == 10) {
            if (uVar10 == 0) {
              uVar10 = uVar16;
            }
            uVar10 = load_memory16(lVar3,uVar10);
            uVar8 = uVar11 * 2;
            if ((uVar10 & 0xffff & (uVar6 >> 0x10 ^ 0xffffffff)) != (uVar6 & 0xffff)) {
              uVar8 = uVar11 * 2 | 1;
            }
          }
          else if (uVar7 == 0xb) {
            uVar17 = load_memory32(lVar3,uVar10 + uVar16);
            uVar20 = uVar17 & 0xffffffff;
          }
          else {
            if (uVar7 != 9) goto LAB_001807ec;
            if (uVar10 == 0) {
              uVar10 = uVar16;
            }
            uVar10 = load_memory16(lVar3,uVar10);
            uVar8 = uVar11 * 2;
            if ((uVar10 & 0xffff & (uVar6 >> 0x10 ^ 0xffffffff)) == (uVar6 & 0xffff))
            goto LAB_00180400;
          }
        }
        else if (uVar7 == 0xe) {
          if (((uVar11 & 1) != 0) && (uVar6 != 0)) {
            do {
              uVar11 = ((uVar10 + uVar16) - (int)puVar1) + (int)puVar21;
              cVar9 = *(char *)puVar21;
              uVar17 = *(ulong *)(lVar4 + (ulong)(uVar11 >> 0xb) * 8);
              lVar14 = uVar17 * 4;
              if ((uVar17 >> 0x3e & 1) == 0) {
                *(char *)(lVar14 + (ulong)uVar11) = cVar9;
              }
              else if ((long)uVar17 < 0) {
                if (*(char *)(lVar14 + (ulong)uVar11) != cVar9) {
                  cpu_block_check_allocation8(lVar12,uVar11);
                  *(char *)(lVar14 + (ulong)uVar11) = cVar9;
                  local_38 = uVar11 & 1;
                }
              }
              else {
                extended_store8(lVar3,uVar11);
              }
              puVar21 = (uint *)((long)puVar21 + 1);
            } while ((uint *)((long)puVar19 + (ulong)(uVar6 - 1) + 9) != puVar21);
          }
          puVar21 = (uint *)((long)puVar1 + (uVar18 + 7 & 0xfffffff8));
        }
        else if (uVar7 == 0xf) {
          if (uVar6 != 0) {
            do {
              while( true ) {
                iVar13 = (int)uVar17;
                uVar11 = (uVar10 - uVar16) + iVar13;
                uVar20 = (ulong)uVar11;
                cVar9 = load_memory8(lVar3,uVar17);
                uVar17 = *(ulong *)(lVar4 + (ulong)(uVar11 >> 0xb) * 8);
                lVar14 = uVar17 * 4;
                if ((uVar17 >> 0x3e & 1) != 0) break;
                *(char *)(lVar14 + uVar20) = cVar9;
                uVar17 = (ulong)(iVar13 + 1U);
                uVar20 = uVar17;
                if (iVar13 + 1U == uVar6 + uVar16) goto joined_r0x00180574;
              }
              if ((long)uVar17 < 0) {
                if (*(char *)(lVar14 + uVar20) != cVar9) {
                  local_38 = 1;
                  cpu_block_check_allocation8(lVar12,uVar20);
                  *(char *)(lVar14 + uVar20) = cVar9;
                }
              }
              else {
                extended_store8(lVar3,uVar20,cVar9);
              }
              uVar17 = (ulong)(iVar13 + 1U);
              uVar20 = uVar17;
            } while (iVar13 + 1U != uVar6 + uVar16);
          }
        }
        else {
          if (uVar7 != 0xd) goto LAB_001807ec;
          if ((uVar5 & 0xffffff) == 0) {
            uVar10 = uVar5 >> 0x18 & 0xf;
            if (uVar10 == 6) {
              uVar17 = (ulong)(uVar6 + uVar16 & 0xfffffffc);
              uVar20 = *(ulong *)(lVar4 + (ulong)(uVar6 + uVar16 >> 0xb) * 8);
              if ((uVar20 >> 0x3e & 1) == 0) {
                *(uint *)(uVar17 + uVar20 * 4) = local_34;
              }
              else if ((long)uVar20 < 0) {
                if (*(uint *)(uVar17 + uVar20 * 4) != local_34) {
                  local_38 = 1;
                  cpu_block_check_allocation32(lVar12);
                  *(uint *)(uVar17 + uVar20 * 4) = local_34;
                }
              }
              else {
                extended_store32(lVar3,uVar17,local_34);
              }
              uVar20 = (ulong)(uVar16 + 4);
            }
            else if (uVar10 < 7) {
              uVar20 = uVar18;
              if (uVar10 != 3) {
                if ((uVar5 >> 0x18 & 0xc) == 0) {
                  if (uVar10 == 1) {
                    uVar20 = uVar17;
                    if ((uVar6 == 0) && (local_24 = local_24 + -1, puVar21 = local_20, local_24 < 1)
                       ) {
                      puVar21 = puVar1;
                      uVar8 = local_10;
                    }
                  }
                  else if (uVar10 == 2) {
                    uVar20 = uVar17;
                    if (uVar6 == 0) {
                      local_24 = local_24 + -1;
                      if (local_24 < 1) {
                        local_34 = 0;
                        uVar16 = 0;
                      }
                      puVar21 = local_20;
                      uVar20 = (ulong)uVar16;
                      if (local_24 < 1) {
                        puVar21 = puVar1;
                        uVar8 = 0xffffffff;
                      }
                    }
                  }
                  else {
                    uVar20 = uVar17;
                    if ((uVar10 == 0) && (uVar8 = uVar11 >> 1, uVar6 != 0)) {
                      uVar8 = uVar11;
                    }
                  }
                }
                else if (uVar10 == 4) {
                  local_34 = local_34 + uVar6;
                  uVar20 = uVar17;
                }
                else {
                  uVar20 = uVar17;
                  if (uVar10 == 5) {
                    local_34 = uVar6;
                  }
                }
              }
            }
            else if (uVar10 == 10) {
              local_34 = load_memory16(lVar3,uVar6 + uVar16);
              local_34 = local_34 & 0xffff;
            }
            else if (uVar10 < 0xb) {
              if (uVar10 == 8) {
                uVar6 = uVar6 + uVar16;
                uVar17 = *(ulong *)(lVar4 + (ulong)(uVar6 >> 0xb) * 8);
                lVar14 = uVar17 * 4;
                if ((uVar17 >> 0x3e & 1) == 0) {
                  *(undefined *)(lVar14 + (ulong)uVar6) = (undefined)local_34;
                }
                else if ((long)uVar17 < 0) {
                  if (*(byte *)(lVar14 + (ulong)uVar6) != local_34) {
                    local_38 = 1;
                    cpu_block_check_allocation8(lVar12,uVar6);
                    *(undefined *)(lVar14 + (ulong)uVar6) = (undefined)local_34;
                  }
                }
                else {
                  extended_store8(lVar3,uVar6,(undefined)local_34);
                }
                uVar20 = (ulong)(uVar16 + 1);
              }
              else if (uVar10 == 9) {
                local_34 = load_memory32(lVar3,uVar6 + uVar16);
              }
              else if (uVar10 == 7) {
                uVar11 = uVar6 + uVar16 & 0xfffffffe;
                uVar17 = *(ulong *)(lVar4 + (ulong)(uVar6 + uVar16 >> 0xb) * 8);
                lVar14 = uVar17 * 4;
                if ((uVar17 >> 0x3e & 1) == 0) {
                  *(undefined2 *)(lVar14 + (ulong)uVar11) = (undefined2)local_34;
                }
                else if ((long)uVar17 < 0) {
                  if (*(ushort *)(lVar14 + (ulong)uVar11) != local_34) {
                    local_38 = 1;
                    cpu_block_check_allocation16(lVar12,uVar11);
                    *(undefined2 *)(lVar14 + (ulong)uVar11) = (undefined2)local_34;
                  }
                }
                else {
                  extended_store16(lVar3,uVar11,(undefined2)local_34);
                }
                uVar20 = (ulong)(uVar16 + 2);
              }
            }
            else if (uVar10 == 0xb) {
              local_34 = load_memory8(lVar3,uVar6 + uVar16);
              local_34 = local_34 & 0xff;
            }
            else if (uVar10 == 0xc) {
              uVar20 = (ulong)(uVar16 + uVar6);
            }
          }
        }
        goto joined_r0x00180574;
      }
      if (uVar7 == 4) {
        if (uVar10 == 0) {
          uVar10 = uVar16;
        }
        uVar11 = load_memory32(lVar3,uVar10);
        uVar8 = uVar11 * 2 | 1;
        if (uVar11 <= uVar6) {
          uVar8 = uVar11 * 2;
        }
        goto joined_r0x00180574;
      }
      if (uVar7 < 5) {
        if (uVar7 == 2) {
          uVar10 = uVar10 + uVar16;
          uVar15 = *(ulong *)(lVar4 + (ulong)(uVar10 >> 0xb) * 8);
          lVar14 = uVar15 * 4;
          if ((uVar15 >> 0x3e & 1) != 0) {
            if ((long)uVar15 < 0) {
              if (uVar6 != *(byte *)(lVar14 + (ulong)uVar10)) {
                local_38 = 1;
                cpu_block_check_allocation8(lVar12,uVar10);
                *(char *)(lVar14 + (ulong)uVar10) = (char)uVar6;
              }
            }
            else {
              extended_store8(lVar3,uVar10,uVar18);
            }
            goto joined_r0x00180574;
          }
          *(char *)(lVar14 + (ulong)uVar10) = (char)uVar6;
        }
        else if (uVar7 == 3) {
          if (uVar10 == 0) {
            uVar10 = uVar16;
          }
          uVar5 = uVar11 * 2;
          uVar10 = load_memory32(lVar3,uVar10);
          uVar11 = uVar5 | 1;
          if (uVar6 <= uVar10) {
            uVar11 = uVar5;
          }
        }
        else {
          if (uVar7 != 1) goto LAB_001807ec;
          uVar10 = uVar10 + uVar16;
          uVar15 = (ulong)(uVar10 & 0xfffffffe);
          uVar18 = *(ulong *)(lVar4 + (ulong)(uVar10 >> 0xb) * 8);
          lVar14 = uVar18 * 4;
          if ((uVar18 >> 0x3e & 1) != 0) {
            if ((long)uVar18 < 0) {
              if (uVar6 != *(ushort *)(lVar14 + uVar15)) {
                local_38 = 1;
                cpu_block_check_allocation16(lVar12);
                *(short *)(lVar14 + ((ulong)uVar10 & 0xfffffffe)) = (short)uVar6;
              }
            }
            else {
              extended_store16(lVar3,uVar15,uVar6);
            }
            goto joined_r0x00180574;
          }
          *(short *)(lVar14 + uVar15) = (short)uVar6;
        }
      }
      else {
        if (uVar7 != 6) {
          if (uVar7 == 7) {
            if (uVar10 == 0) {
              uVar10 = uVar16;
            }
            uVar10 = load_memory16(lVar3,uVar10);
            uVar8 = uVar11 * 2;
            if ((uVar10 & 0xffff & (uVar6 >> 0x10 ^ 0xffffffff)) < (uVar6 & 0xffff))
            goto LAB_00180400;
          }
          else if (uVar7 == 5) {
            if (uVar10 == 0) {
              uVar10 = uVar16;
            }
            uVar11 = load_memory32(lVar3,uVar10);
            uVar8 = uVar11 * 2 | 1;
            if (uVar6 != uVar11) {
              uVar8 = uVar11 * 2;
            }
          }
          else {
LAB_001807ec:
            uVar17 = (ulong)(uVar10 + uVar16 & 0xfffffffc);
            uVar15 = *(ulong *)(lVar4 + (ulong)(uVar10 + uVar16 >> 0xb) * 8);
            if ((uVar15 >> 0x3e & 1) == 0) {
              *(uint *)(uVar17 + uVar15 * 4) = uVar6;
            }
            else if ((long)uVar15 < 0) {
              if (uVar6 != *(uint *)(uVar17 + uVar15 * 4)) {
                local_38 = 1;
                cpu_block_check_allocation32(lVar12);
                *(uint *)(uVar17 + uVar15 * 4) = uVar6;
              }
            }
            else {
              extended_store32(lVar3,uVar17,uVar18);
            }
          }
          goto joined_r0x00180574;
        }
        if (uVar10 == 0) {
          uVar10 = uVar16;
        }
        uVar5 = uVar11 * 2;
        uVar10 = load_memory32(lVar3,uVar10);
        uVar11 = uVar5 | 1;
        if (uVar6 == uVar10) {
          uVar11 = uVar5;
        }
      }
      puVar19 = puVar1;
    } while (puVar1 < puVar2);
LAB_00180410:
    if (local_38 != 0) {
      puts("Cheat modified code.");
      fflush(_stdout);
      cpu_block_flush(lVar12,0x2000000);
      if (*(long *)(nds_system + param_1 + 0x20d45d8) != 0) {
        cpu_block_load_pc(lVar12);
        lVar12 = cpu_block_lookup_base(lVar12,*(undefined4 *)(nds_system + param_1 + 0x20d46fc));
        *(long *)(nds_system + param_1 + 0x20d45d8) = lVar12 + 8;
        return;
      }
    }
  }
  return;
}


