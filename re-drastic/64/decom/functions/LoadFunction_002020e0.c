/*
 * Ghidra decompilation
 *
 * Function : LoadFunction
 * Address  : 002020e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoadFunction(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *__s;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  undefined auVar16 [16];
  undefined local_38;
  undefined local_37;
  undefined local_36;
  byte local_35;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  long local_8;
  undefined4 *puVar6;
  
  local_8 = ___stack_chk_guard;
  lVar2 = LoadString(param_1,0);
  if (lVar2 != 0) {
    param_3 = lVar2;
  }
  uVar3 = param_1[1];
  *(long *)(param_2 + 0x68) = param_3;
  lVar2 = luaZ_read(uVar3,&local_30,4);
  if (lVar2 == 0) {
    uVar3 = param_1[1];
    *(undefined4 *)(param_2 + 0x28) = local_30;
    lVar2 = luaZ_read(uVar3,&local_34,4);
    if (lVar2 == 0) {
      uVar3 = param_1[1];
      *(undefined4 *)(param_2 + 0x2c) = local_34;
      lVar2 = luaZ_read(uVar3,&local_36,1);
      if (lVar2 == 0) {
        *(undefined *)(param_2 + 10) = local_36;
        lVar2 = luaZ_read(param_1[1],&local_37,1);
        if (lVar2 == 0) {
          *(undefined *)(param_2 + 0xb) = local_37;
          lVar2 = luaZ_read(param_1[1],&local_38,1);
          if (lVar2 == 0) {
            *(undefined *)(param_2 + 0xc) = local_38;
            lVar2 = luaZ_read(param_1[1],&local_c,4);
            uVar14 = local_c;
            if (lVar2 == 0) {
              uVar10 = -(ulong)(local_c >> 0x1f) & 0xfffffffc00000000 | (ulong)local_c << 2;
              uVar3 = luaM_realloc_(*param_1,0,0,uVar10);
              uVar4 = param_1[1];
              *(uint *)(param_2 + 0x18) = uVar14;
              *(undefined8 *)(param_2 + 0x38) = uVar3;
              lVar2 = luaZ_read(uVar4,uVar3,uVar10);
              if ((lVar2 == 0) && (lVar2 = luaZ_read(param_1[1],&local_18,4), lVar2 == 0)) {
                lVar2 = luaM_realloc_(*param_1,0,0,
                                      -(ulong)(local_18 >> 0x1f) & 0xfffffff000000000 |
                                      (ulong)local_18 << 4);
                *(uint *)(param_2 + 0x14) = local_18;
                *(long *)(param_2 + 0x30) = lVar2;
                if (0 < (int)local_18) {
                  lVar12 = (ulong)(local_18 - 1) * 0x10;
                  puVar5 = (undefined4 *)(lVar2 + 8);
                  do {
                    puVar6 = puVar5 + 4;
                    *puVar5 = 0;
                    puVar5 = puVar6;
                  } while ((undefined4 *)(lVar2 + lVar12 + 0x18) != puVar6);
                  lVar11 = 0;
                  while( true ) {
                    plVar1 = (long *)(lVar2 + lVar11);
                    lVar2 = luaZ_read(param_1[1],&local_c,1);
                    if (lVar2 != 0) break;
                    uVar14 = local_c & 0xff;
                    uVar15 = local_c & 0xff;
                    if (uVar14 == 3) {
                      lVar2 = luaZ_read(param_1[1],&local_14,4);
                      if (lVar2 != 0) goto LAB_00202664;
                      *(uint *)(plVar1 + 1) = uVar15;
                      *(uint *)plVar1 = local_14;
                    }
                    else if (uVar14 < 4) {
                      if (uVar15 == 0) {
                        *(uint *)(plVar1 + 1) = 0;
                      }
                      else if (uVar14 == 1) {
                        lVar2 = luaZ_read(param_1[1],&local_35,1);
                        if (lVar2 != 0) goto LAB_00202664;
                        *(uint *)plVar1 = (uint)local_35;
                        *(uint *)(plVar1 + 1) = 1;
                      }
                    }
                    else if (uVar14 == 0x13) {
                      lVar2 = luaZ_read(param_1[1],&local_10,4);
                      if (lVar2 != 0) goto LAB_00202664;
                      *(uint *)plVar1 = local_10;
                      *(uint *)(plVar1 + 1) = 0x13;
                    }
                    else if ((local_c & 0xef) == 4) {
                      lVar2 = LoadString(param_1);
                      *plVar1 = lVar2;
                      *(uint *)(plVar1 + 1) = *(byte *)(lVar2 + 8) | 0x40;
                    }
                    if (lVar12 - lVar11 == 0) goto LAB_00202318;
                    lVar2 = *(long *)(param_2 + 0x30);
                    lVar11 = lVar11 + 0x10;
                  }
LAB_00202650:
                    /* WARNING: Subroutine does not return */
                  error_isra_0(param_1,param_1[3],"truncated");
                }
LAB_00202318:
                lVar2 = luaZ_read(param_1[1],&local_1c,4);
                if (lVar2 == 0) {
                  puVar7 = (undefined8 *)
                           luaM_realloc_(*param_1,0,0,
                                         -(ulong)(local_1c >> 0x1f) & 0xfffffff000000000 |
                                         (ulong)local_1c << 4);
                  *(uint *)(param_2 + 0x10) = local_1c;
                  *(undefined8 **)(param_2 + 0x58) = puVar7;
                  if (0 < (int)local_1c) {
                    puVar9 = puVar7;
                    do {
                      puVar8 = puVar9 + 2;
                      *puVar9 = 0;
                      puVar9 = puVar8;
                    } while (puVar8 != puVar7 + (ulong)(local_1c - 1) * 2 + 2);
                    lVar2 = 0;
                    while( true ) {
                      lVar12 = luaZ_read(param_1[1],&local_c,1);
                      if (lVar12 != 0) break;
                      *(undefined *)((long)puVar7 + lVar2 + 8) = (undefined)local_c;
                      lVar11 = *(long *)(param_2 + 0x58);
                      lVar12 = luaZ_read(param_1[1],&local_c,1);
                      if (lVar12 != 0) break;
                      *(undefined *)(lVar11 + lVar2 + 9) = (undefined)local_c;
                      if ((ulong)(local_1c - 1) * 0x10 - lVar2 == 0) goto LAB_00202424;
                      puVar7 = *(undefined8 **)(param_2 + 0x58);
                      lVar2 = lVar2 + 0x10;
                    }
                    goto LAB_00202650;
                  }
LAB_00202424:
                  lVar2 = luaZ_read(param_1[1],&local_20,4);
                  if (lVar2 == 0) {
                    __s = (void *)luaM_realloc_(*param_1,0,0,
                                                -(ulong)(local_20 >> 0x1f) & 0xfffffff800000000 |
                                                (ulong)local_20 << 3);
                    *(uint *)(param_2 + 0x20) = local_20;
                    *(void **)(param_2 + 0x40) = __s;
                    if (0 < (int)local_20) {
                      memset(__s,0,((ulong)(local_20 - 1) + 1) * 8);
                      lVar2 = 0;
                      while( true ) {
                        uVar3 = luaF_newproto(*param_1);
                        lVar12 = *(long *)(param_2 + 0x40);
                        uVar4 = *(undefined8 *)(param_2 + 0x68);
                        *(undefined8 *)((long)__s + lVar2) = uVar3;
                        LoadFunction(param_1,*(undefined8 *)(lVar12 + lVar2),uVar4);
                        if ((ulong)(local_20 - 1) * 8 - lVar2 == 0) break;
                        __s = *(void **)(param_2 + 0x40);
                        lVar2 = lVar2 + 8;
                      }
                    }
                    lVar2 = luaZ_read(param_1[1],&local_28,4);
                    if (lVar2 == 0) {
                      uVar10 = -(ulong)(local_28 >> 0x1f) & 0xfffffffc00000000 |
                               (ulong)local_28 << 2;
                      uVar3 = luaM_realloc_(*param_1,0,0,uVar10);
                      uVar4 = param_1[1];
                      *(uint *)(param_2 + 0x1c) = local_28;
                      *(undefined8 *)(param_2 + 0x48) = uVar3;
                      lVar2 = luaZ_read(uVar4,uVar3,uVar10);
                      if ((lVar2 == 0) && (lVar2 = luaZ_read(param_1[1],&local_24,4), lVar2 == 0)) {
                        puVar7 = (undefined8 *)
                                 luaM_realloc_(*param_1,0,0,
                                               -(ulong)(local_24 >> 0x1f) & 0xfffffff000000000 |
                                               (ulong)local_24 << 4);
                        *(uint *)(param_2 + 0x24) = local_24;
                        *(undefined8 **)(param_2 + 0x50) = puVar7;
                        if (0 < (int)local_24) {
                          puVar9 = puVar7;
                          do {
                            puVar8 = puVar9 + 2;
                            *puVar9 = 0;
                            puVar9 = puVar8;
                          } while (puVar7 + (ulong)(local_24 - 1) * 2 + 2 != puVar8);
                          lVar2 = 0;
                          while( true ) {
                            uVar3 = LoadString(param_1);
                            uVar4 = param_1[1];
                            *(undefined8 *)((long)puVar7 + lVar2) = uVar3;
                            lVar11 = *(long *)(param_2 + 0x50);
                            lVar12 = luaZ_read(uVar4,&local_c,4);
                            if (lVar12 != 0) break;
                            uVar3 = param_1[1];
                            lVar13 = *(long *)(param_2 + 0x50);
                            *(uint *)(lVar11 + lVar2 + 8) = local_c;
                            lVar12 = luaZ_read(uVar3,&local_c,4);
                            if (lVar12 != 0) break;
                            *(uint *)(lVar13 + lVar2 + 0xc) = local_c;
                            if ((ulong)(local_24 - 1) * 0x10 - lVar2 == 0) goto LAB_002025d0;
                            puVar7 = *(undefined8 **)(param_2 + 0x50);
                            lVar2 = lVar2 + 0x10;
                          }
                          goto LAB_00202650;
                        }
LAB_002025d0:
                        lVar2 = luaZ_read(param_1[1],&local_2c,4);
                        if (lVar2 == 0) {
                          if (0 < local_2c) {
                            lVar2 = 0;
                            do {
                              lVar12 = *(long *)(param_2 + 0x58);
                              uVar3 = LoadString(param_1);
                              *(undefined8 *)(lVar12 + lVar2) = uVar3;
                              lVar2 = lVar2 + 0x10;
                            } while (lVar2 != ((ulong)(local_2c - 1) + 1) * 0x10);
                          }
                          auVar16._8_8_ = 0;
                          auVar16._0_8_ = local_8 - ___stack_chk_guard;
                          if (local_8 - ___stack_chk_guard == 0) {
                            return;
                          }
                          goto LAB_0020266c;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00202664:
  auVar16 = LoadBlock_part_0(param_1);
LAB_0020266c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar16._0_8_,auVar16._8_8_);
}


