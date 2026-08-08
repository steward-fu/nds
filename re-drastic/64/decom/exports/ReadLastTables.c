/*
 * Ghidra decompilation
 *
 * Function : ReadLastTables
 * Address  : 001d32a0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::ReadLastTables() */

void Unpack::ReadLastTables(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  long in_x0;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  iVar2 = *(int *)(in_x0 + 8);
  if (*(int *)(in_x0 + 0xd0) <= iVar2 + 4) {
    return;
  }
  iVar3 = *(int *)(in_x0 + 0xc);
  lVar7 = *(long *)(in_x0 + 0x18) + (long)iVar2;
  uVar1 = ((uint)*(byte *)(lVar7 + 2) |
           (uint)*(byte *)(*(long *)(in_x0 + 0x18) + (long)iVar2) << 0x10 |
          (uint)*(byte *)(lVar7 + 1) << 8) >> (ulong)(8U - iVar3 & 0x1f) & 0xfffe;
  if (*(int *)(in_x0 + 0x98a8) == 0) {
    uVar5 = *(uint *)(in_x0 + 0x170);
    lVar7 = in_x0 + 0xec;
    if (uVar1 < *(uint *)(lVar7 + (ulong)uVar5 * 4 + 4)) {
      uVar8 = (ulong)(uVar1 >> (ulong)(0x10 - uVar5 & 0x1f));
      sVar4 = *(short *)(lVar7 + uVar8 * 2 + 0x488);
      uVar1 = (uint)*(byte *)(lVar7 + uVar8 + 0x88) + iVar3;
      *(uint *)(in_x0 + 8) = iVar2 + (uVar1 >> 3);
      *(uint *)(in_x0 + 0xc) = uVar1 & 7;
    }
    else {
      uVar6 = uVar5 + 1;
      if (uVar6 < 0xf) {
        uVar8 = (ulong)uVar6;
        if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
          uVar6 = uVar5 + 2;
          if (uVar5 == 0xd) {
LAB_001d3920:
            uVar11 = 1;
            uVar5 = 0xe;
            uVar8 = 0xf;
            goto LAB_001d38cc;
          }
          uVar8 = (ulong)uVar6;
          if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
            uVar6 = uVar5 + 3;
            if (uVar5 == 0xc) goto LAB_001d3920;
            uVar8 = (ulong)uVar6;
            if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
              uVar6 = uVar5 + 4;
              if (uVar5 == 0xb) goto LAB_001d3920;
              uVar8 = (ulong)uVar6;
              if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
                uVar6 = uVar5 + 5;
                if (uVar5 == 10) goto LAB_001d3920;
                uVar8 = (ulong)uVar6;
                if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
                  uVar6 = uVar5 + 6;
                  if (uVar5 == 9) goto LAB_001d3920;
                  uVar8 = (ulong)uVar6;
                  if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
                    uVar6 = uVar5 + 7;
                    if (uVar5 == 8) goto LAB_001d3920;
                    uVar8 = (ulong)uVar6;
                    if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
                      uVar6 = uVar5 + 8;
                      if (uVar5 == 7) goto LAB_001d3920;
                      uVar8 = (ulong)uVar6;
                      if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
                        uVar6 = uVar5 + 9;
                        if (uVar5 == 6) goto LAB_001d3920;
                        uVar8 = (ulong)uVar6;
                        if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
                          uVar6 = uVar5 + 10;
                          if (uVar5 == 5) goto LAB_001d3920;
                          uVar8 = (ulong)uVar6;
                          if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
                            uVar6 = uVar5 + 0xb;
                            if (uVar5 == 4) goto LAB_001d3920;
                            uVar8 = (ulong)uVar6;
                            if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
                              uVar6 = uVar5 + 0xc;
                              if (uVar5 == 3) goto LAB_001d3920;
                              uVar8 = (ulong)uVar6;
                              if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
                                uVar6 = uVar5 + 0xd;
                                if (uVar5 == 2) goto LAB_001d3920;
                                uVar8 = (ulong)uVar6;
                                if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
                                  uVar6 = uVar5 + 0xe;
                                  if (uVar5 == 1) goto LAB_001d3920;
                                  uVar8 = (ulong)uVar6;
                                  if (*(uint *)(lVar7 + (ulong)uVar6 * 4 + 4) <= uVar1) {
                                    if ((uVar5 == 0) || (*(uint *)(in_x0 + 0x128) <= uVar1))
                                    goto LAB_001d37c0;
                                    uVar6 = 0xe;
                                    uVar8 = 0xe;
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
        uVar5 = uVar6 - 1;
        uVar11 = 0x10 - uVar6;
      }
      else {
LAB_001d37c0:
        uVar11 = 1;
        uVar5 = 0xe;
        uVar6 = 0xf;
        uVar8 = 0xf;
      }
LAB_001d38cc:
      *(uint *)(in_x0 + 8) = iVar2 + (uVar6 + iVar3 >> 3);
      *(uint *)(in_x0 + 0xc) = uVar6 + iVar3 & 7;
      uVar1 = (uVar1 - *(int *)(lVar7 + (ulong)uVar5 * 4 + 4) >> (ulong)(uVar11 & 0x1f)) +
              *(int *)(lVar7 + uVar8 * 4 + 0x44);
      if (*(uint *)(in_x0 + 0xec) <= uVar1) {
        uVar1 = 0;
      }
      sVar4 = *(short *)(lVar7 + (ulong)uVar1 * 2 + 0xc88);
    }
    if (sVar4 != 0x10d) {
      return;
    }
    goto LAB_001d381c;
  }
  lVar9 = (long)*(int *)(in_x0 + 0x98b0);
  lVar7 = in_x0 + lVar9 * 0xeec;
  lVar10 = lVar9 * 0x3bb;
  uVar5 = *(uint *)(lVar7 + 0x5978);
  if (uVar1 < *(uint *)(in_x0 + (lVar10 + (ulong)uVar5 + 0x163c) * 4 + 8)) {
    uVar8 = (ulong)(uVar1 >> (ulong)(0x10 - uVar5 & 0x1f));
    uVar1 = (uint)*(byte *)(lVar7 + uVar8 + 0x597c) + iVar3;
    *(uint *)(in_x0 + 8) = iVar2 + (uVar1 >> 3);
    *(uint *)(in_x0 + 0xc) = uVar1 & 7;
    sVar4 = *(short *)(in_x0 + (uVar8 + lVar9 * 0x776 + 0x2eb8) * 2 + 0xc);
  }
  else {
    uVar6 = uVar5 + 1;
    if (uVar6 < 0xf) {
      uVar8 = (ulong)uVar6;
      if (*(uint *)(in_x0 + (lVar10 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
        uVar6 = uVar5 + 2;
        if (uVar5 == 0xd) {
LAB_001d3910:
          uVar11 = 1;
          uVar5 = 0xe;
          uVar8 = 0xf;
          goto LAB_001d3834;
        }
        uVar8 = (ulong)uVar6;
        if (*(uint *)(in_x0 + (lVar10 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
          uVar6 = uVar5 + 3;
          if (uVar5 == 0xc) goto LAB_001d3910;
          uVar8 = (ulong)uVar6;
          if (*(uint *)(in_x0 + (lVar10 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
            uVar6 = uVar5 + 4;
            if (uVar5 == 0xb) goto LAB_001d3910;
            uVar8 = (ulong)uVar6;
            lVar7 = lVar9 * 0x3bb;
            if (*(uint *)(in_x0 + (lVar7 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
              uVar6 = uVar5 + 5;
              if (uVar5 == 10) goto LAB_001d3910;
              uVar8 = (ulong)uVar6;
              if (*(uint *)(in_x0 + (lVar7 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
                uVar6 = uVar5 + 6;
                if (uVar5 == 9) goto LAB_001d3910;
                uVar8 = (ulong)uVar6;
                if (*(uint *)(in_x0 + (lVar7 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
                  uVar6 = uVar5 + 7;
                  if (uVar5 == 8) goto LAB_001d3910;
                  uVar8 = (ulong)uVar6;
                  if (*(uint *)(in_x0 + (lVar7 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
                    uVar6 = uVar5 + 8;
                    if (uVar5 == 7) goto LAB_001d3910;
                    uVar8 = (ulong)uVar6;
                    if (*(uint *)(in_x0 + (lVar7 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
                      uVar6 = uVar5 + 9;
                      if (uVar5 == 6) goto LAB_001d3910;
                      uVar8 = (ulong)uVar6;
                      lVar7 = lVar9 * 0x3bb;
                      if (*(uint *)(in_x0 + (lVar7 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
                        uVar6 = uVar5 + 10;
                        if (uVar5 == 5) goto LAB_001d3910;
                        uVar8 = (ulong)uVar6;
                        if (*(uint *)(in_x0 + (lVar7 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
                          uVar6 = uVar5 + 0xb;
                          if (uVar5 == 4) goto LAB_001d3910;
                          uVar8 = (ulong)uVar6;
                          if (*(uint *)(in_x0 + (lVar7 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
                            uVar6 = uVar5 + 0xc;
                            if (uVar5 == 3) goto LAB_001d3910;
                            uVar8 = (ulong)uVar6;
                            if (*(uint *)(in_x0 + (lVar7 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
                              uVar6 = uVar5 + 0xd;
                              if (uVar5 == 2) goto LAB_001d3910;
                              uVar8 = (ulong)uVar6;
                              if (*(uint *)(in_x0 + (lVar7 + uVar8 + 0x163c) * 4 + 8) <= uVar1) {
                                uVar6 = uVar5 + 0xe;
                                if (uVar5 == 1) goto LAB_001d3910;
                                uVar8 = (ulong)uVar6;
                                if (*(uint *)(in_x0 + (uVar8 + lVar9 * 0x3bb + 0x163c) * 4 + 8) <=
                                    uVar1) {
                                  if ((uVar5 == 0) ||
                                     (*(uint *)(in_x0 + lVar9 * 0xeec + 0x5930) <= uVar1))
                                  goto LAB_001d358c;
                                  uVar6 = 0xe;
                                  uVar8 = 0xe;
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
      uVar5 = uVar6 - 1;
      uVar11 = 0x10 - uVar6;
    }
    else {
LAB_001d358c:
      uVar11 = 1;
      uVar5 = 0xe;
      uVar6 = 0xf;
      uVar8 = 0xf;
    }
LAB_001d3834:
    *(uint *)(in_x0 + 8) = iVar2 + (uVar6 + iVar3 >> 3);
    *(uint *)(in_x0 + 0xc) = uVar6 + iVar3 & 7;
    uVar1 = (uVar1 - *(int *)(in_x0 + (lVar9 * 0x3bb + (ulong)uVar5 + 0x163c) * 4 + 8) >>
            (ulong)(uVar11 & 0x1f)) + *(int *)(in_x0 + (lVar9 * 0x3bb + uVar8 + 0x164c) * 4 + 8);
    if (*(uint *)(in_x0 + lVar9 * 0xeec + 0x58f4) <= uVar1) {
      uVar1 = 0;
    }
    sVar4 = *(short *)(in_x0 + ((ulong)uVar1 + lVar9 * 0x776 + 0x32b8) * 2 + 0xc);
  }
  if (sVar4 != 0x100) {
    return;
  }
LAB_001d381c:
  ReadTables20();
  return;
}


