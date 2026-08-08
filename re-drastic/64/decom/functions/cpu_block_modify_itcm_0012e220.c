/*
 * Ghidra decompilation
 *
 * Function : cpu_block_modify_itcm
 * Address  : 0012e220
 * Program  : drastic64
 */


undefined8 cpu_block_modify_itcm(long param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  
  uVar5 = param_2 >> 2;
  uVar9 = uVar5 & 0x1fff;
  lVar11 = *(long *)(param_1 + 0x2088);
  bVar4 = nds_system[lVar11 + uVar9 + 0xfdc038];
  bVar1 = bVar4 & 0x7f;
  if (bVar1 < 0xf) {
    bVar1 = bVar1 + 1;
  }
  if (-1 < (char)bVar4) {
LAB_0012e264:
    nds_system[lVar11 + uVar9 + 0xfdc038] = bVar4 & 0x80 | bVar1;
    return 1;
  }
  uVar2 = *(uint *)(nds_system + lVar11 + 0xffe138);
  uVar10 = (ulong)uVar2;
  iVar3 = *(int *)(*(long *)(*(long *)(nds_system + param_1 + 0xb063d8) + 8) + uVar9 * 4);
  iVar8 = (int)param_2;
  if (uVar2 == 0) {
    iVar12 = 1;
  }
  else {
    if ((*(int *)(nds_system + lVar11 + 0xfde038) == iVar3) &&
       (*(int *)(nds_system + lVar11 + 0xfde03c) == iVar8)) {
      lVar6 = 0;
      goto LAB_0012e4b8;
    }
    if (uVar2 < 2) {
      uVar10 = 1;
    }
    else {
      if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde048)) &&
         (iVar8 == *(int *)(nds_system + lVar11 + 0xfde04c))) {
        lVar6 = 1;
        goto LAB_0012e4b8;
      }
      if (uVar2 != 2) {
        if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde058)) &&
           (iVar8 == *(int *)(nds_system + lVar11 + 0xfde05c))) {
          lVar6 = 2;
          goto LAB_0012e4b8;
        }
        if (uVar2 != 3) {
          if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde068)) &&
             (iVar8 == *(int *)(nds_system + lVar11 + 0xfde06c))) {
            lVar6 = 3;
            goto LAB_0012e4b8;
          }
          if (uVar2 != 4) {
            if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde078)) &&
               (iVar8 == *(int *)(nds_system + lVar11 + 0xfde07c))) {
              lVar6 = 4;
              goto LAB_0012e4b8;
            }
            if (uVar2 != 5) {
              if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde088)) &&
                 (iVar8 == *(int *)(nds_system + lVar11 + 0xfde08c))) {
                lVar6 = 5;
                goto LAB_0012e4b8;
              }
              if (uVar2 != 6) {
                if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde098)) &&
                   (iVar8 == *(int *)(nds_system + lVar11 + 0xfde09c))) {
                  lVar6 = 6;
                  goto LAB_0012e4b8;
                }
                if (uVar2 != 7) {
                  if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde0a8)) &&
                     (iVar8 == *(int *)(nds_system + lVar11 + 0xfde0ac))) {
                    lVar6 = 7;
                    goto LAB_0012e4b8;
                  }
                  if (uVar2 != 8) {
                    if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde0b8)) &&
                       (iVar8 == *(int *)(nds_system + lVar11 + 0xfde0bc))) {
                      lVar6 = 8;
                      goto LAB_0012e4b8;
                    }
                    if (uVar2 != 9) {
                      if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde0c8)) &&
                         (iVar8 == *(int *)(nds_system + lVar11 + 0xfde0cc))) {
                        lVar6 = 9;
                        goto LAB_0012e4b8;
                      }
                      if (uVar2 != 10) {
                        if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde0d8)) &&
                           (iVar8 == *(int *)(nds_system + lVar11 + 0xfde0dc))) {
                          lVar6 = 10;
                          goto LAB_0012e4b8;
                        }
                        if (uVar2 != 0xb) {
                          if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde0e8)) &&
                             (iVar8 == *(int *)(nds_system + lVar11 + 0xfde0ec))) {
                            lVar6 = 0xb;
                            goto LAB_0012e4b8;
                          }
                          if (uVar2 != 0xc) {
                            if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde0f8)) &&
                               (iVar8 == *(int *)(nds_system + lVar11 + 0xfde0fc))) {
                              lVar6 = 0xc;
                              goto LAB_0012e4b8;
                            }
                            if (uVar2 != 0xd) {
                              if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde108)) &&
                                 (iVar8 == *(int *)(nds_system + lVar11 + 0xfde10c))) {
                                lVar6 = 0xd;
                                goto LAB_0012e4b8;
                              }
                              if (uVar2 != 0xe) {
                                if ((iVar3 == *(int *)(nds_system + lVar11 + 0xfde118)) &&
                                   (iVar8 == *(int *)(nds_system + lVar11 + 0xfde11c))) {
                                  lVar6 = 0xe;
LAB_0012e4b8:
                                  *(int *)(lVar11 + (uVar9 + 0x530000) * 4 + 0x38) =
                                       (int)*(undefined8 *)
                                             (lVar11 + (lVar6 + 0x14da00) * 0x10 + 0x40) -
                                       (int)lVar11;
                                  *(undefined4 *)(param_1 + ((uVar5 & 0x3ff) + 0x20) * 4) = 0;
                                  return 0;
                                }
                                if (uVar2 != 0xf) {
                                  if ((*(int *)(nds_system + lVar11 + 0xfde128) != iVar3) ||
                                     (*(int *)(nds_system + lVar11 + 0xfde12c) != iVar8))
                                  goto LAB_0012e264;
                                  lVar6 = 0xf;
                                  goto LAB_0012e4b8;
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
        }
      }
    }
    iVar12 = (int)uVar10 + 1;
  }
  lVar6 = lVar11 + uVar10 * 0x10;
  *(int *)(nds_system + lVar6 + 0xfde038) = iVar3;
  *(int *)(nds_system + lVar6 + 0xfde03c) = iVar8;
  *(undefined4 *)(lVar11 + (uVar9 + 0x530000) * 4 + 0x38) = 0;
  *(undefined4 *)(param_1 + ((uVar5 & 0x3ff) + 0x20) * 4) = 0;
  uVar7 = cpu_block_lookup_base(param_1);
  *(undefined8 *)(nds_system + lVar6 + 0xfde040) = uVar7;
  *(int *)(nds_system + lVar11 + 0xffe138) = iVar12;
  return 0;
}


