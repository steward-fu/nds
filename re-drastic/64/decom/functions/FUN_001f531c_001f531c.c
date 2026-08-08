/*
 * Ghidra decompilation
 *
 * Function : FUN_001f531c
 * Address  : 001f531c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001f531c(long param_1,byte *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  long *plVar18;
  long lVar19;
  byte *pbVar20;
  long **pplVar21;
  undefined4 auStack_18 [2];
  undefined4 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  bVar5 = *param_2;
  if (bVar5 == 0x3e) {
    param_2 = param_2 + 1;
    pplVar21 = (long **)0x0;
    plVar18 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
    *(long **)(param_1 + 0x10) = plVar18;
    bVar5 = *param_2;
  }
  else {
    pplVar21 = *(long ***)(param_3 + 0x78);
    plVar18 = *pplVar21;
  }
  lVar16 = 0;
  if ((*(uint *)(plVar18 + 1) & 0x1f) == 6) {
    lVar16 = *plVar18;
  }
  if (bVar5 == 0) {
    uVar17 = 1;
  }
  else {
    uVar17 = 1;
    pbVar20 = param_2;
LAB_001f53f0:
    do {
      if (bVar5 == 0x6c) {
        uVar6 = 0xffffffff;
        if ((pplVar21 != (long **)0x0) && ((*(byte *)((long)pplVar21 + 0x42) >> 1 & 1) != 0)) {
          lVar15 = *(long *)(*(long *)(**pplVar21 + 0x18) + 0x48);
          if (lVar15 != 0) {
            uVar6 = *(undefined4 *)
                     (lVar15 + (long)((int)((long)pplVar21[5] -
                                            *(long *)(*(long *)(**pplVar21 + 0x18) + 0x38) >> 2) +
                                     -1) * 4);
          }
        }
        *(undefined4 *)(param_3 + 0x28) = uVar6;
      }
      else if (bVar5 < 0x6d) {
        if (bVar5 == 0x53) {
          if ((lVar16 == 0) || (*(char *)(lVar16 + 8) == '&')) {
            puVar12 = &DAT_002297d8;
            *(undefined1 **)(param_3 + 0x18) = &DAT_00224b20;
            *(undefined **)(param_3 + 0x20) = &DAT_002297d8;
            *(undefined8 *)(param_3 + 0x2c) = 0xffffffffffffffff;
          }
          else {
            lVar15 = *(long *)(lVar16 + 0x18);
            puVar12 = &UNK_002297c8;
            if (*(long *)(lVar15 + 0x68) != 0) {
              puVar12 = (undefined *)(*(long *)(lVar15 + 0x68) + 0x20);
            }
            uVar11 = *(undefined8 *)(lVar15 + 0x28);
            puVar2 = &UNK_00223198;
            if (*(int *)(lVar15 + 0x28) != 0) {
              puVar2 = &DAT_002297d0;
            }
            *(undefined **)(param_3 + 0x18) = puVar2;
            *(undefined **)(param_3 + 0x20) = puVar12;
            *(undefined8 *)(param_3 + 0x2c) = uVar11;
          }
          luaO_chunkid(param_3 + 0x38,puVar12,0x3c);
        }
        else if (bVar5 != 0x66) {
          bVar4 = bVar5 != 0x4c;
          pbVar20 = pbVar20 + 1;
          bVar5 = *pbVar20;
          if (bVar4) {
            uVar17 = 0;
          }
          if (bVar5 == 0) break;
          goto LAB_001f53f0;
        }
      }
      else if (bVar5 == 0x74) {
        bVar5 = 0;
        if (pplVar21 != (long **)0x0) {
          bVar5 = *(byte *)((long)pplVar21 + 0x42) & 0x20;
        }
        *(byte *)(param_3 + 0x37) = bVar5;
      }
      else if (bVar5 == 0x75) {
        if (lVar16 == 0) {
          *(undefined *)(param_3 + 0x34) = 0;
        }
        else {
          *(undefined *)(param_3 + 0x34) = *(undefined *)(lVar16 + 10);
          if (*(char *)(lVar16 + 8) != '&') {
            lVar15 = *(long *)(lVar16 + 0x18);
            *(undefined *)(param_3 + 0x36) = *(undefined *)(lVar15 + 0xb);
            *(undefined *)(param_3 + 0x35) = *(undefined *)(lVar15 + 10);
            goto LAB_001f53e8;
          }
        }
        *(undefined2 *)(param_3 + 0x35) = 0x100;
      }
      else if (bVar5 == 0x6e) {
        if ((pplVar21 != (long **)0x0) && ((*(byte *)((long)pplVar21 + 0x42) >> 5 & 1) == 0)) {
          pplVar10 = (long **)pplVar21[2];
          if ((*(byte *)((long)pplVar10 + 0x42) >> 1 & 1) != 0) {
            if ((*(byte *)((long)pplVar10 + 0x42) >> 2 & 1) != 0) {
              *(undefined1 **)(param_3 + 8) = &DAT_002296a8;
              *(undefined **)(param_3 + 0x10) = &DAT_00229800;
              goto LAB_001f53e8;
            }
            lVar15 = *(long *)(*(long *)(**pplVar10 + 0x18) + 0x38);
            iVar3 = (int)((long)pplVar10[5] - lVar15 >> 2) + -1;
            uVar7 = *(uint *)(lVar15 + (long)iVar3 * 4);
            uVar1 = uVar7 & 0x3f;
            if (uVar1 == 0x1d) {
              uVar7 = 0x16;
            }
            else if (uVar1 < 0x1e) {
              if (uVar1 == 0x19) {
                uVar7 = 0x12;
              }
              else if (uVar1 < 0x1a) {
                uVar7 = 1;
                if (uVar1 != 10) {
                  if (uVar1 < 0xb) {
                    uVar7 = (uint)(uVar1 == 8);
                  }
                  else {
                    uVar7 = uVar1 - 7;
                    if (0xb < uVar1 - 0xd) {
                      uVar7 = 0;
                    }
                  }
                }
              }
              else {
                uVar7 = 0x13;
                if ((uVar1 != 0x1a) && (uVar7 = 0, uVar1 == 0x1c)) {
                  uVar7 = 4;
                }
              }
            }
            else if (uVar1 == 0x21) {
              uVar7 = 0x15;
            }
            else {
              if (0x21 < uVar1) {
                if (uVar1 < 0x26) {
                  if (uVar1 < 0x24) goto LAB_001f570c;
                  lVar15 = getobjname(*(long *)(**pplVar10 + 0x18),iVar3,uVar7 >> 6 & 0xff,
                                      param_3 + 8);
                  *(long *)(param_3 + 0x10) = lVar15;
                  if (lVar15 == 0) {
                    *(undefined8 *)(param_3 + 8) = 0;
                    *(char **)(param_3 + 0x10) = "";
                  }
                }
                else {
                  if (uVar1 != 0x29) {
LAB_001f570c:
                    uVar7 = 0;
                    goto LAB_001f5710;
                  }
                  *(char **)(param_3 + 8) = "for iterator";
                  *(char **)(param_3 + 0x10) = "for iterator";
                }
                goto LAB_001f53e8;
              }
              uVar7 = 5;
              if ((uVar1 != 0x1f) && (uVar7 = 0, uVar1 == 0x20)) {
                uVar7 = 0x14;
              }
            }
LAB_001f5710:
            lVar15 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar7 * 8 + 0xf8);
            *(char **)(param_3 + 0x10) = "metamethod";
            *(long *)(param_3 + 8) = lVar15 + 0x20;
            goto LAB_001f53e8;
          }
        }
        *(undefined8 *)(param_3 + 8) = 0;
        *(char **)(param_3 + 0x10) = "";
      }
      else {
        uVar17 = 0;
      }
LAB_001f53e8:
      pbVar20 = pbVar20 + 1;
      bVar5 = *pbVar20;
    } while (bVar5 != 0);
  }
  pcVar8 = strchr((char *)param_2,0x66);
  if (pcVar8 != (char *)0x0) {
    plVar9 = *(long **)(param_1 + 0x10);
    lVar15 = plVar18[1];
    *plVar9 = *plVar18;
    plVar9[1] = lVar15;
    *(long **)(param_1 + 0x10) = plVar9 + 2;
  }
  pcVar8 = strchr((char *)param_2,0x4c);
  if (pcVar8 != (char *)0x0) {
    if ((lVar16 == 0) || (*(char *)(lVar16 + 8) == '&')) {
      lVar16 = *(long *)(param_1 + 0x10);
      *(undefined4 *)(lVar16 + 8) = 0;
      *(long *)(param_1 + 0x10) = lVar16 + 0x10;
    }
    else {
      lVar15 = 0;
      lVar19 = *(long *)(*(long *)(lVar16 + 0x18) + 0x48);
      uVar11 = luaH_new(param_1);
      puVar13 = *(undefined8 **)(param_1 + 0x10);
      *puVar13 = uVar11;
      *(undefined4 *)(puVar13 + 1) = 0x45;
      lVar14 = *(long *)(lVar16 + 0x18);
      *(undefined8 **)(param_1 + 0x10) = puVar13 + 2;
      auStack_18[0] = 1;
      uStack_10 = 1;
      if (0 < *(int *)(lVar14 + 0x1c)) {
        do {
          luaH_setint(param_1,uVar11,*(undefined4 *)(lVar19 + lVar15 * 4),auStack_18);
          lVar15 = lVar15 + 1;
        } while ((int)lVar15 < *(int *)(*(long *)(lVar16 + 0x18) + 0x1c));
      }
    }
  }
  if (lStack_8 - ___stack_chk_guard == 0) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


