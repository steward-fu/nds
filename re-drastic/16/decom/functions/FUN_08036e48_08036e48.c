/*
 * Ghidra decompilation
 *
 * Function : FUN_08036e48
 * Address  : 08036e48
 * Program  : drastic16
 */


void FUN_08036e48(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                 int param_7,uint param_8,undefined4 *param_9,ushort *param_10)

{
  bool bVar1;
  undefined auVar2 [16];
  ushort uVar3;
  uint *puVar4;
  undefined auVar5 [16];
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined (*pauVar11) [16];
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  undefined (*pauVar17) [16];
  char *pcVar18;
  uint uVar19;
  char *pcVar20;
  int iVar21;
  char *pcVar22;
  undefined (*pauVar23) [16];
  int *piVar24;
  uint uVar25;
  undefined (*pauVar26) [16];
  undefined4 uVar27;
  undefined *puVar28;
  uint uVar29;
  uint *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  uint *puVar34;
  int local_68;
  int local_30 [3];
  
  iVar6 = *(int *)(param_1 + 0x9004);
  uVar25 = param_7 * 2 + 0x1dU & 0xfffffff0;
  if ((param_8 & 0x20) == 0) {
    FUN_08091110(param_2,param_6,param_5);
    FUN_080911b8(param_6,param_6,param_7);
  }
  else {
    FUN_08091264(param_6,param_2,param_5);
  }
  iVar21 = uVar25 * 2;
  pauVar23 = (undefined (*) [16])(param_6 + uVar25);
  puVar32 = *pauVar23 + iVar21;
  puVar31 = puVar32 + uVar25 * 9;
  iVar13 = param_4 * 0x100;
  puVar7 = puVar31 + iVar21;
  pcVar8 = puVar7 + iVar21;
  puVar30 = (uint *)(param_1 + (iVar13 + 0x1000) * 4);
  iVar21 = uVar25 * 3;
  iVar10 = param_1 + param_4 * 0x400;
  pcVar18 = pcVar8 + uVar25;
  uVar9 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
  uVar15 = (uint)(*(int *)(param_3 + 4) << 0xb) >> 0x1b;
  switch(param_8 & 0x1f) {
  case 1:
    FUN_08091348(puVar31,param_2,param_5);
    iVar13 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar13,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar12 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar12 = *piVar24;
          }
          bVar1 = iVar12 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar12 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar12 = 0;
          }
          local_30[0] = local_30[0] - iVar12;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar28 = puVar32 + iVar21;
        FUN_08036cec(iVar6,param_3,puVar28,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar13,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 2:
    FUN_08091348(puVar31,param_2,param_5);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar7 = puVar32 + iVar21;
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      FUN_08091810(param_2,puVar7,param_5,uVar25);
      FUN_08091880(puVar7,puVar7,param_6,param_7,uVar25);
      iVar21 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar7,puVar7,param_7,pcVar8);
      uVar16 = *(byte *)(iVar21 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),*(undefined4 *)(iVar21 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar7,puVar7,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar7,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 3:
    FUN_08091348(puVar31,param_2,param_5);
    iVar13 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar13,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar12 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar12 = *piVar24;
          }
          bVar1 = iVar12 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar12 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar12 = 0;
          }
          local_30[0] = local_30[0] - iVar12;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar28 = puVar32 + iVar21;
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      FUN_08091810(param_2,puVar28,param_5,uVar25);
      FUN_08091880(puVar28,puVar28,param_6,param_7,uVar25);
      iVar21 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar28,puVar28,param_7,pcVar8);
      uVar16 = *(byte *)(iVar21 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar28,puVar28,*(undefined4 *)(iVar21 + 0xc),*(undefined4 *)(iVar21 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar28,puVar28,*(undefined4 *)(iVar21 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar28,puVar28,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar28,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar13,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 4:
    FUN_08091348(puVar31,param_2,param_5);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar21 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar21 = *piVar24;
          }
          bVar1 = iVar21 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar21 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar21 = 0;
          }
          local_30[0] = local_30[0] - iVar21;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar7 = puVar32 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar7,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar7 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar7 = puVar7 + uVar25 + uVar25;
        FUN_08036cec(iVar6,param_3,puVar7,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 5:
    FUN_08091348(puVar31,param_2,param_5);
    iVar21 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar21,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar28 = puVar32 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar28,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar28 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar28 = puVar28 + uVar25 + uVar25;
        FUN_08036cec(iVar6,param_3,puVar28,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar21,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 6:
    FUN_08091348(puVar31,param_2,param_5);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar21 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar21 = *piVar24;
          }
          bVar1 = iVar21 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar21 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar21 = 0;
          }
          local_30[0] = local_30[0] - iVar21;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar28 = puVar32 + uVar25;
      puVar7 = puVar28 + uVar25 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar28,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar28 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      FUN_08091810(param_2,puVar7,param_5,uVar25);
      FUN_08091880(puVar7,puVar7,param_6,param_7,uVar25);
      iVar21 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar7,puVar7,param_7,pcVar8);
      uVar16 = *(byte *)(iVar21 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),*(undefined4 *)(iVar21 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar7,puVar7,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar7,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 7:
    FUN_08091348(puVar31,param_2,param_5);
    iVar21 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar21,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar33 = puVar32 + uVar25;
      puVar28 = puVar33 + uVar25 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar33,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar33 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      FUN_08091810(param_2,puVar28,param_5,uVar25);
      FUN_08091880(puVar28,puVar28,param_6,param_7,uVar25);
      iVar13 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar28,puVar28,param_7,pcVar8);
      uVar16 = *(byte *)(iVar13 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar28,puVar28,*(undefined4 *)(iVar13 + 0xc),*(undefined4 *)(iVar13 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar28,puVar28,*(undefined4 *)(iVar13 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar28,puVar28,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar28,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar21,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 8:
    FUN_080912cc(puVar31,param_2,param_6,param_5);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar7 = puVar32 + iVar21;
        FUN_08036cec(iVar6,param_3,puVar7,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 9:
    FUN_080912cc(puVar31,param_2,param_6,param_5);
    iVar13 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar13,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar12 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar12 = *piVar24;
          }
          bVar1 = iVar12 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar12 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar12 = 0;
          }
          local_30[0] = local_30[0] - iVar12;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar28 = puVar32 + iVar21;
        FUN_08036cec(iVar6,param_3,puVar28,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar13,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 10:
    FUN_080912cc(puVar31,param_2,param_6,param_5);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar15 != uVar9) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar7 = puVar32 + iVar21;
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      FUN_08091810(param_2,puVar7,param_5,uVar25);
      FUN_08091880(puVar7,puVar7,param_6,param_7,uVar25);
      iVar21 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar7,puVar7,param_7,pcVar8);
      uVar16 = *(byte *)(iVar21 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),*(undefined4 *)(iVar21 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar7,puVar7,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar7,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 0xb:
    FUN_080912cc(puVar31,param_2,param_6,param_5);
    iVar13 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar13,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar15 != uVar9) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar12 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar12 = *piVar24;
          }
          bVar1 = iVar12 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar12 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar12 = 0;
          }
          local_30[0] = local_30[0] - iVar12;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar28 = puVar32 + iVar21;
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      FUN_08091810(param_2,puVar28,param_5,uVar25);
      FUN_08091880(puVar28,puVar28,param_6,param_7,uVar25);
      iVar21 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar28,puVar28,param_7,pcVar8);
      uVar16 = *(byte *)(iVar21 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar28,puVar28,*(undefined4 *)(iVar21 + 0xc),*(undefined4 *)(iVar21 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar28,puVar28,*(undefined4 *)(iVar21 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar28,puVar28,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar28,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar13,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 0xc:
    FUN_080912cc(puVar31,param_2,param_6,param_5);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar21 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar21 = *piVar24;
          }
          bVar1 = iVar21 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar21 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar21 = 0;
          }
          local_30[0] = local_30[0] - iVar21;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar7 = puVar32 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar7,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar7 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar7 = puVar7 + uVar25 + uVar25;
        FUN_08036cec(iVar6,param_3,puVar7,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 0xd:
    FUN_080912cc(puVar31,param_2,param_6,param_5);
    iVar21 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar21,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar28 = puVar32 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar28,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar28 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar28 = puVar28 + uVar25 + uVar25;
        FUN_08036cec(iVar6,param_3,puVar28,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar21,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 0xe:
    FUN_080912cc(puVar31,param_2,param_6,param_5);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar21 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar21 = *piVar24;
          }
          bVar1 = iVar21 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar21 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar21 = 0;
          }
          local_30[0] = local_30[0] - iVar21;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar28 = puVar32 + uVar25;
      puVar7 = puVar28 + uVar25 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar28,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar28 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      FUN_08091810(param_2,puVar7,param_5,uVar25);
      FUN_08091880(puVar7,puVar7,param_6,param_7,uVar25);
      iVar21 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar7,puVar7,param_7,pcVar8);
      uVar16 = *(byte *)(iVar21 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),*(undefined4 *)(iVar21 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar7,puVar7,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar7,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 0xf:
    FUN_080912cc(puVar31,param_2,param_6,param_5);
    iVar21 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar21,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar33 = puVar32 + uVar25;
      puVar28 = puVar33 + uVar25 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar33,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar33 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      FUN_08091810(param_2,puVar28,param_5,uVar25);
      FUN_08091880(puVar28,puVar28,param_6,param_7,uVar25);
      iVar13 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar28,puVar28,param_7,pcVar8);
      uVar16 = *(byte *)(iVar13 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar28,puVar28,*(undefined4 *)(iVar13 + 0xc),*(undefined4 *)(iVar13 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar28,puVar28,*(undefined4 *)(iVar13 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar28,puVar28,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar28,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar21,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 0x10:
    uVar3 = *param_10;
    FUN_08092058(puVar31,(uint)uVar3 << 9,param_7);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,(uint)uVar3 << 9,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar7 = puVar32 + iVar21;
        FUN_08036cec(iVar6,param_3,puVar7,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 0x11:
    uVar3 = *param_10;
    FUN_08092058(puVar31,(uint)uVar3 << 9,param_7);
    iVar13 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar13,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,(uint)uVar3 << 9,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar12 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar12 = *piVar24;
          }
          bVar1 = iVar12 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar12 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar12 = 0;
          }
          local_30[0] = local_30[0] - iVar12;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar28 = puVar32 + iVar21;
        FUN_08036cec(iVar6,param_3,puVar28,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar13,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 0x12:
    uVar3 = *param_10;
    FUN_08092058(puVar31,(uint)uVar3 << 9,param_7);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,(uint)uVar3 << 9,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar7 = puVar32 + iVar21;
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      FUN_08091810(param_2,puVar7,param_5,uVar25);
      FUN_08091880(puVar7,puVar7,param_6,param_7,uVar25);
      iVar21 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar7,puVar7,param_7,pcVar8);
      uVar16 = *(byte *)(iVar21 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),*(undefined4 *)(iVar21 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar7,puVar7,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar7,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 0x13:
    uVar3 = *param_10;
    FUN_08092058(puVar31,(uint)uVar3 << 9,param_7);
    iVar13 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar13,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,(uint)uVar3 << 9,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar12 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar12 = *piVar24;
          }
          bVar1 = iVar12 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar12 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar12 = 0;
          }
          local_30[0] = local_30[0] - iVar12;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar28 = puVar32 + iVar21;
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      FUN_08091810(param_2,puVar28,param_5,uVar25);
      FUN_08091880(puVar28,puVar28,param_6,param_7,uVar25);
      iVar21 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar28,puVar28,param_7,pcVar8);
      uVar16 = *(byte *)(iVar21 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar28,puVar28,*(undefined4 *)(iVar21 + 0xc),*(undefined4 *)(iVar21 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar28,puVar28,*(undefined4 *)(iVar21 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar28,puVar28,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar28,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar13,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 0x14:
    uVar3 = *param_10;
    FUN_08092058(puVar31,(uint)uVar3 << 9,param_7);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,(uint)uVar3 << 9,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar21 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar21 = *piVar24;
          }
          bVar1 = iVar21 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar21 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar21 = 0;
          }
          local_30[0] = local_30[0] - iVar21;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar7 = puVar32 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar7,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar7 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar7 = puVar7 + uVar25 + uVar25;
        FUN_08036cec(iVar6,param_3,puVar7,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 0x15:
    uVar3 = *param_10;
    FUN_08092058(puVar31,(uint)uVar3 << 9,param_7);
    iVar21 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar21,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,(uint)uVar3 << 9,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar28 = puVar32 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar28,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar28 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar28 = puVar28 + uVar25 + uVar25;
        FUN_08036cec(iVar6,param_3,puVar28,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar21,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 0x16:
    uVar3 = *param_10;
    FUN_08092058(puVar31,(uint)uVar3 << 9,param_7);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,(uint)uVar3 << 9,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar21 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar21 = *piVar24;
          }
          bVar1 = iVar21 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar21 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar21 = 0;
          }
          local_30[0] = local_30[0] - iVar21;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar28 = puVar32 + uVar25;
      puVar7 = puVar28 + uVar25 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar28,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar28 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      FUN_08091810(param_2,puVar7,param_5,uVar25);
      FUN_08091880(puVar7,puVar7,param_6,param_7,uVar25);
      iVar21 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar7,puVar7,param_7,pcVar8);
      uVar16 = *(byte *)(iVar21 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),*(undefined4 *)(iVar21 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar7,puVar7,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar7,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 0x17:
    uVar3 = *param_10;
    FUN_08092058(puVar31,(uint)uVar3 << 9,param_7);
    iVar21 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar21,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,(uint)uVar3 << 9,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar33 = puVar32 + uVar25;
      puVar28 = puVar33 + uVar25 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar33,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar33 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      FUN_08091810(param_2,puVar28,param_5,uVar25);
      FUN_08091880(puVar28,puVar28,param_6,param_7,uVar25);
      iVar13 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar28,puVar28,param_7,pcVar8);
      uVar16 = *(byte *)(iVar13 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar28,puVar28,*(undefined4 *)(iVar13 + 0xc),*(undefined4 *)(iVar13 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar28,puVar28,*(undefined4 *)(iVar13 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar28,puVar28,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar28,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar21,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 0x18:
    uVar27 = *param_9;
    FUN_08092058(puVar31,uVar27,param_7);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,uVar27,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar7 = puVar32 + iVar21;
        FUN_08036cec(iVar6,param_3,puVar7,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 0x19:
    uVar27 = *param_9;
    FUN_08092058(puVar31,uVar27,param_7);
    iVar13 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar13,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,uVar27,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar12 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar12 = *piVar24;
          }
          bVar1 = iVar12 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar12 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar12 = 0;
          }
          local_30[0] = local_30[0] - iVar12;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar28 = puVar32 + iVar21;
        FUN_08036cec(iVar6,param_3,puVar28,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar13,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 0x1a:
    uVar27 = *param_9;
    FUN_08092058(puVar31,uVar27,param_7);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,uVar27,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar7 = puVar32 + iVar21;
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      FUN_08091810(param_2,puVar7,param_5,uVar25);
      FUN_08091880(puVar7,puVar7,param_6,param_7,uVar25);
      iVar21 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar7,puVar7,param_7,pcVar8);
      uVar16 = *(byte *)(iVar21 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),*(undefined4 *)(iVar21 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar7,puVar7,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar7,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 0x1b:
    uVar27 = *param_9;
    FUN_08092058(puVar31,uVar27,param_7);
    iVar13 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar13,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,uVar27,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar12 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar12 = *piVar24;
          }
          bVar1 = iVar12 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar12 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar12 = 0;
          }
          local_30[0] = local_30[0] - iVar12;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar28 = puVar32 + iVar21;
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      FUN_08091810(param_2,puVar28,param_5,uVar25);
      FUN_08091880(puVar28,puVar28,param_6,param_7,uVar25);
      iVar21 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar28,puVar28,param_7,pcVar8);
      uVar16 = *(byte *)(iVar21 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar28,puVar28,*(undefined4 *)(iVar21 + 0xc),*(undefined4 *)(iVar21 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar28,puVar28,*(undefined4 *)(iVar21 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar28,puVar28,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar28,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar13,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 0x1c:
    uVar27 = *param_9;
    FUN_08092058(puVar31,uVar27,param_7);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,uVar27,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar21 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar21 = *piVar24;
          }
          bVar1 = iVar21 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar21 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar21 = 0;
          }
          local_30[0] = local_30[0] - iVar21;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar7 = puVar32 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar7,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar7 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar7 = puVar7 + uVar25 + uVar25;
        FUN_08036cec(iVar6,param_3,puVar7,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 0x1d:
    uVar27 = *param_9;
    FUN_08092058(puVar31,uVar27,param_7);
    iVar21 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar21,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,uVar27,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar28 = puVar32 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar28,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar28 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar28 = puVar28 + uVar25 + uVar25;
        FUN_08036cec(iVar6,param_3,puVar28,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar21,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  case 0x1e:
    uVar27 = *param_9;
    FUN_08092058(puVar31,uVar27,param_7);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,uVar27,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar29 != uVar16) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar17;
              pauVar26 = pauVar23;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar26;
                pauVar26 = pauVar26 + 1;
                *(longlong *)*pauVar11 = auVar2._0_8_;
                *(longlong *)(*pauVar11 + 8) = auVar2._8_8_;
                pauVar11 = pauVar11 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar21 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar21 = *piVar24;
          }
          bVar1 = iVar21 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar21 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar21 = 0;
          }
          local_30[0] = local_30[0] - iVar21;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar28 = puVar32 + uVar25;
      puVar7 = puVar28 + uVar25 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar28,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar28 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      FUN_08091810(param_2,puVar7,param_5,uVar25);
      FUN_08091880(puVar7,puVar7,param_6,param_7,uVar25);
      iVar21 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar7,puVar7,param_7,pcVar8);
      uVar16 = *(byte *)(iVar21 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),*(undefined4 *)(iVar21 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar7,puVar7,*(undefined4 *)(iVar21 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar7,puVar7,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar7,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
    break;
  case 0x1f:
    uVar27 = *param_9;
    FUN_08092058(puVar31,uVar27,param_7);
    iVar21 = param_1 + iVar13 + 0x8000;
    FUN_08091410(pauVar23,puVar7,pcVar18,puVar30,iVar10,iVar21,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_08091690(pcVar8,uVar27,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091540();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar20 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar20;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar22 = pcVar20 + 1;
          *pcVar20 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar20 = pcVar22;
        } while (pcVar22 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      puVar33 = puVar32 + uVar25;
      puVar28 = puVar33 + uVar25 + uVar25;
      FUN_08092040(puVar32,*(ushort *)(param_2 + 0x2a0) >> 3,param_7);
      FUN_08092040(puVar33,*(ushort *)(param_2 + 0x2a2) >> 3,param_7);
      FUN_08092040(puVar33 + uVar25,*(ushort *)(param_2 + 0x382) >> 3,param_7);
      FUN_08091810(param_2,puVar28,param_5,uVar25);
      FUN_08091880(puVar28,puVar28,param_6,param_7,uVar25);
      iVar13 = *(int *)(param_3 + 0xc);
      FUN_080352b8(param_3,puVar28,puVar28,param_7,pcVar8);
      uVar16 = *(byte *)(iVar13 + 0x2d) - 1 & 0xff;
      if ((uVar16 < 6) && ((1 << uVar16 & 0x2fU) != 0)) {
        FUN_08091e30(puVar28,puVar28,*(undefined4 *)(iVar13 + 0xc),*(undefined4 *)(iVar13 + 0x10),
                     param_7);
      }
      else {
        FUN_08091e8c(puVar28,puVar28,*(undefined4 *)(iVar13 + 0xc),param_7);
      }
      FUN_080366f8(iVar6,param_3,puVar28,puVar28,puVar32,uVar25,uVar15,param_7);
      FUN_08091730(pcVar8,puVar28,*(undefined *)(iVar6 + 0x9a81),param_7,local_30);
      if (local_30[0] != 0) {
        if ((*(uint *)(iVar6 + 0x9a50) & 8) == 0) {
          FUN_08092008(puVar28,puVar7,param_7,puVar32);
        }
        else {
          FUN_08091f98();
        }
        FUN_080917c0(pcVar8,pcVar18,puVar32,param_7,uVar9);
        uVar25 = *(uint *)(param_3 + 4) >> 0xe & 2 | (*(uint *)(param_3 + 4) << 0x14) >> 0x1f;
        if (uVar25 == 2) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092e48(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 3) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08092ee8(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else if (uVar25 == 1) {
          FUN_08092dc0(puVar28,puVar31,puVar7,pauVar23,pcVar18,uVar9,puVar32,pcVar8,param_7);
        }
        else {
          FUN_08092d34();
        }
        FUN_08092254(param_2,iVar10,puVar30,iVar21,param_5,puVar28,puVar31,pcVar18);
      }
    }
    break;
  default:
    FUN_08091348(puVar31,param_2,param_5);
    FUN_080913c8(pauVar23,puVar30,param_2,param_5);
    if ((*(uint *)(param_3 + 4) & 0x4000) == 0) {
      FUN_080915f8(pcVar8,puVar31,pauVar23,param_7,local_30);
    }
    else {
      FUN_08091488();
    }
    if ((uint)(*(int *)(param_3 + 4) << 0x1a) >> 0x1e == 3) {
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x9008);
        uVar25 = ~(-1 << (param_5 & 0xff)) << (param_4 & 0xff);
        if (uVar25 != (uVar9 & uVar25)) {
          uVar15 = uVar9 >> (param_4 & 0xff);
          *(uint *)(param_1 + 0x9008) = uVar9 | uVar25;
          if (param_5 != 0) {
            uVar25 = 0;
            puVar34 = puVar30;
            puVar4 = puVar30;
            do {
              if ((uVar15 & 1) == 0) {
                uVar16 = ((int)puVar34 << 0x1d) >> 0x1f & 3;
                uVar9 = uVar16;
                if (uVar16 == 0) {
                  local_68 = 0x100;
                }
                else {
                  *puVar4 = *puVar4 & 0x7fffffff;
                  if (uVar16 == 1) {
                    local_68 = 0xff;
                  }
                  else {
                    puVar34[1] = puVar34[1] & 0x7fffffff;
                    if (uVar16 == 3) {
                      local_68 = 0xfd;
                      puVar34[2] = puVar34[2] & 0x7fffffff;
                    }
                    else {
                      local_68 = 0xfe;
                      uVar9 = 2;
                    }
                  }
                }
                uVar29 = 0x100 - uVar16;
                pauVar11 = (undefined (*) [16])(puVar34 + uVar16);
                uVar19 = 0;
                uVar16 = uVar29 & 0xfffffffc;
                pauVar17 = pauVar11;
                do {
                  uVar19 = uVar19 + 1;
                  auVar5 = *pauVar17;
                  pauVar17 = pauVar17 + 1;
                  auVar2 = SIMDExpandImmediate(1,7,0x80);
                  *(longlong *)*pauVar11 = SUB168(auVar5 & ~auVar2,0);
                  *(longlong *)(*pauVar11 + 8) = SUB168(auVar5 & ~auVar2,8);
                  pauVar11 = pauVar11 + 1;
                } while (uVar19 < uVar29 >> 2);
                iVar6 = uVar9 + uVar16;
                if (uVar16 != uVar29) {
                  puVar34[iVar6] = puVar34[iVar6] & 0x7fffffff;
                  if (local_68 - uVar16 != 1) {
                    puVar34[iVar6 + 1] = puVar34[iVar6 + 1] & 0x7fffffff;
                    if (local_68 - uVar16 != 2) {
                      puVar34[iVar6 + 2] = puVar34[iVar6 + 2] & 0x7fffffff;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar15 = uVar15 >> 1;
              puVar34 = puVar34 + 0x100;
              puVar4 = puVar4 + 0x100;
            } while (uVar25 != param_5);
          }
        }
        if (param_7 != 0) {
          pcVar18 = pcVar8;
          pauVar17 = pauVar23;
          do {
            pcVar20 = pcVar18 + 1;
            if (*pcVar18 == '\0') {
              *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0x80000000;
            }
            pcVar18 = pcVar20;
            pauVar17 = (undefined (*) [16])(*pauVar17 + 4);
          } while (pcVar20 != pcVar8 + param_7);
        }
        if (param_5 == 0) {
          return;
        }
        uVar25 = 0;
        param_2 = param_2 + 0x3f4;
        do {
          uVar9 = (uint)*(ushort *)(param_2 + -4);
          pauVar17 = (undefined (*) [16])(puVar30 + *(ushort *)(param_2 + -0x74));
          if (uVar9 != 0) {
            if (uVar9 < 9 || pauVar17 < pauVar23 + 1 && pauVar23 < pauVar17 + 1) {
              iVar6 = uVar9 * 4;
              iVar21 = 0;
              do {
                *(undefined4 *)(*pauVar17 + iVar21) = *(undefined4 *)(*pauVar23 + iVar21);
                iVar21 = iVar21 + 4;
              } while (iVar21 != iVar6);
            }
            else {
              uVar16 = (uint)(*(ushort *)(param_2 + -4) >> 2);
              uVar19 = 0;
              uVar15 = uVar16 * 4;
              pauVar11 = pauVar23;
              pauVar26 = pauVar17;
              do {
                uVar19 = uVar19 + 1;
                auVar2 = *pauVar11;
                pauVar11 = pauVar11 + 1;
                *(longlong *)*pauVar26 = auVar2._0_8_;
                *(longlong *)(*pauVar26 + 8) = auVar2._8_8_;
                pauVar26 = pauVar26 + 1;
              } while (uVar19 < uVar16);
              iVar6 = uVar16 * 0x10;
              if (uVar9 != uVar15) {
                *(undefined4 *)pauVar17[uVar16] = *(undefined4 *)pauVar23[uVar16];
                if ((uVar15 + 1 < uVar9) &&
                   (*(undefined4 *)(pauVar17[uVar16] + 4) = *(undefined4 *)(pauVar23[uVar16] + 4),
                   uVar15 + 2 < uVar9)) {
                  iVar6 = uVar9 << 2;
                  *(undefined4 *)(pauVar17[uVar16] + 8) = *(undefined4 *)(pauVar23[uVar16] + 8);
                }
                else {
                  iVar6 = uVar9 << 2;
                }
              }
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + iVar6);
          }
          uVar25 = uVar25 + 1;
          puVar30 = puVar30 + 0x100;
          param_2 = param_2 + 4;
        } while (uVar25 != param_5);
        return;
      }
      uVar16 = (uint)(*(int *)(param_3 + 4) << 2) >> 0x1a;
      *(uint *)(param_1 + 0x9008) =
           *(uint *)(param_1 + 0x9008) & ~(~(-1 << (param_5 & 0xff)) << (param_4 & 0xff));
      if (param_7 == 0) {
        local_30[0] = 0;
      }
      else {
        piVar24 = (int *)(pauVar23[-1] + 0xc);
        local_30[0] = 0;
        pcVar18 = pcVar8;
        do {
          piVar24 = piVar24 + 1;
          cVar14 = *pcVar18;
          uVar19 = (uint)(*piVar24 << 2) >> 0x1a;
          iVar13 = uVar16 - uVar19;
          if (uVar16 != uVar19) {
            iVar13 = *piVar24;
          }
          bVar1 = iVar13 < 0 == (uVar16 == uVar19 && SBORROW4(uVar16,uVar19));
          iVar13 = (int)cVar14;
          if (bVar1) {
            cVar14 = '\0';
          }
          pcVar20 = pcVar18 + 1;
          *pcVar18 = cVar14;
          if (bVar1) {
            iVar13 = 0;
          }
          local_30[0] = local_30[0] - iVar13;
          pcVar18 = pcVar20;
        } while (pcVar20 != pcVar8 + param_7);
      }
    }
    if (local_30[0] != 0) {
      FUN_080918d0(param_2,puVar32,param_5,uVar25);
      FUN_08091980(puVar32,puVar32,param_6,param_7,uVar25);
      if (*(byte *)(iVar6 + 0x9a81) < uVar15) {
        puVar7 = puVar32 + iVar21;
        FUN_08036cec(iVar6,param_3,puVar7,puVar32,uVar25,uVar15,param_7);
        if ((*(uint *)(param_3 + 4) & 0x8000) != 0) {
          *(undefined4 *)(param_1 + 0x900c) = 1;
          FUN_08093238(puVar7,param_7);
        }
        if ((*(uint *)(iVar6 + 0x9a50) & 0x20) != 0) {
          FUN_08036b88(param_2,puVar31,param_5);
        }
        if (param_7 == local_30[0]) {
          FUN_080920f0(param_2,iVar10,puVar30,param_5,uVar9,puVar7,puVar31);
        }
        else {
          FUN_08092078();
        }
      }
    }
  }
  return;
}


