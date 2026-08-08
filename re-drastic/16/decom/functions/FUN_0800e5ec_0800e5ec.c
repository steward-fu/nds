/*
 * Ghidra decompilation
 *
 * Function : FUN_0800e5ec
 * Address  : 0800e5ec
 * Program  : drastic16
 */


uint FUN_0800e5ec(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  
  uVar8 = param_2 & 0xfffffffe;
  if (uVar8 == 0x2ae) {
LAB_0800e8c0:
    if (*(char *)(param_1 + 0xfc81c) == '\0') {
      FUN_0800d88c(param_1);
    }
  }
  else if (uVar8 < 0x2af) {
    if (uVar8 == 0x2a0) goto LAB_0800e8c0;
    if (uVar8 < 0x2a1) {
      if (uVar8 == 0x108) {
LAB_0800e9bc:
        iVar15 = (uVar8 - 0x100 >> 2) * 0x20 + 0x159ebf8;
        iVar10 = *(int *)(param_1 + 0xfba1c) + iVar15;
        if ((*(ushort *)(iVar10 + 0x1a) & 4) == 0) {
          if ((*(ushort *)(iVar10 + 0x1a) & 0x80) == 0) {
            uVar8 = (uint)*(ushort *)(iVar10 + 0x18);
          }
          else {
            iVar15 = *(int *)(*(int *)(param_1 + 0xfba1c) + iVar15);
            iVar7 = *(int *)(iVar15 + 0x2308);
            uVar8 = (uint)*(ushort *)(iVar10 + 0x18) +
                    ((uint)(((*(int *)(iVar7 + 8) + *(int *)(iVar7 + 0x10)) - *(int *)(iVar10 + 8))
                           - *(int *)(iVar15 + 0x236c)) >> *(sbyte *)(iVar10 + 0x1c)) & 0xffff;
          }
LAB_0800e9a4:
          uVar8 = uVar8 & 0xffff;
          goto LAB_0800e6fc;
        }
      }
      else if (uVar8 < 0x109) {
        if ((uVar8 == 0x100) || (uVar8 == 0x104)) goto LAB_0800e9bc;
      }
      else {
        if (uVar8 == 0x1a6) {
          iVar15 = *(int *)(param_1 + 0xfba1c);
          uVar5 = *(uint *)(iVar15 + 0x15a0f64);
          uVar12 = *(uint *)(iVar15 + 8) + *(uint *)(iVar15 + 0x10);
          uVar6 = *(uint *)(*(int *)(param_1 + 0xfc7e8) + 0x87c);
          uVar9 = (*(int *)(iVar15 + 0xc) +
                  (uint)CARRY4(*(uint *)(iVar15 + 8),*(uint *)(iVar15 + 0x10))) -
                  (((int)uVar5 >> 0x1f) + (uint)(uVar12 < uVar5));
          uVar8 = *(uint *)(param_1 + 0x1b1e4);
          bVar17 = uVar6 <= uVar9;
          if (uVar9 == uVar6) {
            bVar17 = *(uint *)(*(int *)(param_1 + 0xfc7e8) + 0x878) <= uVar12 - uVar5;
          }
          if (!bVar17) {
            uVar8 = uVar8 & 0xff7fffff;
          }
          uVar8 = uVar8 >> 0x10;
          goto LAB_0800e6fc;
        }
        if (uVar8 == 0x204) {
          uVar8 = *(ushort *)(param_1 + 0x1b244) & 0xffffe8ff | 0x4000;
          goto LAB_0800e6fc;
        }
        if (uVar8 == 0x10c) goto LAB_0800e9bc;
      }
    }
    else {
      if (uVar8 == 0x2a6) goto LAB_0800e8c0;
      if (uVar8 < 0x2a7) {
        if ((uVar8 == 0x2a2) || (uVar8 == 0x2a4)) goto LAB_0800e8c0;
      }
      else if ((uVar8 == 0x2aa) || ((uVar8 == 0x2ac || (uVar8 == 0x2a8)))) goto LAB_0800e8c0;
    }
  }
  else if (uVar8 < 0x680) {
    if (uVar8 < 0x640) {
      if (uVar8 == 0x600) {
        uVar8 = FUN_08050654(*(undefined4 *)(param_1 + 0xfba24));
        uVar8 = uVar8 & 0xffff;
        goto LAB_0800e6fc;
      }
      if (uVar8 < 0x601) {
        if (((uVar8 == 0x2b4) || (uVar8 == 0x2b6)) && (*(char *)(param_1 + 0xfc81d) == '\0')) {
          *(undefined *)(param_1 + 0xfc81d) = 1;
          if ((*(ushort *)(param_1 + 0x1b2f0) & 1) == 0) {
            uVar8 = *(uint *)(param_1 + 0x1b2f8);
            if (uVar8 != 0) {
              if (uVar8 < 0x40000000) {
                uVar12 = 0;
              }
              else {
                uVar12 = 0x40000000;
              }
              uVar9 = uVar12 | 0x10000000;
              if (0x3fffffff < uVar8) {
                uVar8 = uVar8 + 0xc0000000;
              }
              uVar6 = uVar12 >> 1;
              if (uVar9 <= uVar8) {
                uVar6 = uVar12 >> 1 | 0x10000000;
              }
              uVar5 = uVar6 | 0x4000000;
              uVar12 = uVar8 - uVar9;
              if (uVar9 > uVar8) {
                uVar12 = uVar8;
              }
              uVar8 = uVar6 >> 1;
              if (uVar5 <= uVar12) {
                uVar8 = uVar6 >> 1 | 0x4000000;
              }
              uVar9 = uVar8 | 0x1000000;
              if (uVar5 <= uVar12) {
                uVar12 = uVar12 - uVar5;
              }
              uVar6 = uVar8 >> 1;
              if (uVar9 <= uVar12) {
                uVar6 = uVar8 >> 1 | 0x1000000;
              }
              uVar8 = uVar6 | 0x400000;
              if (uVar9 <= uVar12) {
                uVar12 = uVar12 - uVar9;
              }
              uVar9 = uVar6 >> 1;
              if (uVar8 <= uVar12) {
                uVar9 = uVar6 >> 1 | 0x400000;
              }
              uVar6 = uVar9 | 0x100000;
              if (uVar8 <= uVar12) {
                uVar12 = uVar12 - uVar8;
              }
              uVar8 = uVar9 >> 1;
              if (uVar6 <= uVar12) {
                uVar8 = uVar9 >> 1 | 0x100000;
              }
              uVar9 = uVar8 | 0x40000;
              if (uVar6 <= uVar12) {
                uVar12 = uVar12 - uVar6;
              }
              uVar6 = uVar8 >> 1;
              if (uVar9 <= uVar12) {
                uVar6 = uVar8 >> 1 | 0x40000;
              }
              uVar8 = uVar6 | 0x10000;
              if (uVar9 <= uVar12) {
                uVar12 = uVar12 - uVar9;
              }
              uVar9 = uVar6 >> 1;
              if (uVar8 <= uVar12) {
                uVar9 = uVar6 >> 1 | 0x10000;
              }
              uVar6 = uVar9 | 0x4000;
              if (uVar8 <= uVar12) {
                uVar12 = uVar12 - uVar8;
              }
              uVar8 = uVar9 >> 1;
              if (uVar6 <= uVar12) {
                uVar8 = uVar9 >> 1 | 0x4000;
              }
              uVar9 = uVar8 | 0x1000;
              if (uVar6 <= uVar12) {
                uVar12 = uVar12 - uVar6;
              }
              uVar6 = uVar8 >> 1;
              if (uVar9 <= uVar12) {
                uVar6 = uVar8 >> 1 | 0x1000;
              }
              uVar8 = uVar6 | 0x400;
              if (uVar9 <= uVar12) {
                uVar12 = uVar12 - uVar9;
              }
              uVar9 = uVar6 >> 1;
              if (uVar8 <= uVar12) {
                uVar9 = uVar6 >> 1 | 0x400;
              }
              uVar6 = uVar9 | 0x100;
              if (uVar8 <= uVar12) {
                uVar12 = uVar12 - uVar8;
              }
              uVar8 = uVar9 >> 1;
              if (uVar6 <= uVar12) {
                uVar8 = uVar9 >> 1 | 0x100;
              }
              uVar9 = uVar8 | 0x40;
              if (uVar6 <= uVar12) {
                uVar12 = uVar12 - uVar6;
              }
              uVar6 = uVar8 >> 1;
              if (uVar9 <= uVar12) {
                uVar6 = uVar8 >> 1 | 0x40;
              }
              uVar8 = uVar6 | 0x10;
              if (uVar9 <= uVar12) {
                uVar12 = uVar12 - uVar9;
              }
              uVar9 = uVar6 >> 1;
              if (uVar8 <= uVar12) {
                uVar9 = uVar6 >> 1 | 0x10;
              }
              uVar6 = uVar9 | 4;
              if (uVar8 <= uVar12) {
                uVar12 = uVar12 - uVar8;
              }
              uVar5 = uVar9 >> 1;
              if (uVar6 <= uVar12) {
                uVar5 = uVar9 >> 1 | 4;
              }
              uVar8 = uVar5 >> 1;
              if (uVar6 <= uVar12) {
                uVar12 = uVar12 - uVar6;
              }
              if ((uVar5 | 1) <= uVar12) {
                uVar8 = uVar8 | 1;
              }
            }
          }
          else {
            uVar8 = 0;
            if ((*(uint *)(param_1 + 0x1b2f8) | *(uint *)(param_1 + 0x1b2fc)) != 0) {
              uVar8 = 0;
              uVar9 = 0;
              uVar11 = 0;
              uVar12 = 0x10000000;
              iVar15 = 0x1f;
              uVar6 = *(uint *)(param_1 + 0x1b2f8);
              uVar5 = *(uint *)(param_1 + 0x1b2fc);
              do {
                uVar4 = uVar12 | uVar9;
                uVar2 = uVar11 | uVar8;
                uVar1 = uVar9 >> 1;
                uVar8 = (uint)((byte)uVar9 & 1) << 0x1f | uVar8 >> 1;
                bVar17 = uVar5 <= uVar4;
                bVar16 = uVar4 == uVar5;
                if (bVar16) {
                  bVar17 = uVar6 <= uVar2;
                }
                uVar13 = uVar5;
                if (!bVar17 || bVar16 && uVar2 == uVar6) {
                  uVar13 = uVar5 - (uVar4 + (uVar6 < uVar2));
                }
                uVar14 = uVar6;
                if (!bVar17 || bVar16 && uVar2 == uVar6) {
                  uVar14 = uVar6 - uVar2;
                }
                bVar17 = uVar5 <= uVar4;
                bVar16 = uVar4 == uVar5;
                if (bVar16) {
                  bVar17 = uVar6 <= uVar2;
                }
                uVar9 = uVar1;
                if (!bVar17 || bVar16 && uVar2 == uVar6) {
                  uVar9 = uVar1 | uVar12;
                }
                if (!bVar17 || bVar16 && uVar2 == uVar6) {
                  uVar8 = uVar8 | uVar11;
                }
                iVar15 = iVar15 + -1;
                uVar11 = uVar11 >> 2 | uVar12 << 0x1e;
                uVar12 = uVar12 >> 2;
                uVar6 = uVar14;
                uVar5 = uVar13;
              } while (iVar15 != 0);
            }
          }
          *(uint *)(param_1 + 0x1b2f4) = uVar8;
        }
      }
      else {
        if (uVar8 == 0x604) {
          uVar8 = FUN_0804c550(*(undefined4 *)(param_1 + 0xfba24));
          goto LAB_0800e9a4;
        }
        if (uVar8 == 0x606) {
          uVar8 = FUN_0804c590(*(undefined4 *)(param_1 + 0xfba24));
          uVar8 = uVar8 & 0xffff;
          goto LAB_0800e6fc;
        }
      }
    }
    else {
      uVar3 = FUN_0804c5c8(*(undefined4 *)(param_1 + 0xfba24),uVar8 - 0x640 >> 2);
      *(undefined4 *)(param_1 + (param_2 & 0xfffffffc) + 0x1b040) = uVar3;
    }
  }
  else {
    if (uVar8 == 0x100000) {
LAB_0800e698:
      uVar8 = FUN_0801d91c(param_1 + 0xfc748);
      uVar8 = uVar8 >> ((param_2 & 2) << 3) & 0xffff;
      goto LAB_0800e6fc;
    }
    if (uVar8 < 0x100001) {
      if (uVar8 < 0x6a4) {
        uVar3 = FUN_0804c618(*(undefined4 *)(param_1 + 0xfba24),uVar8 - 0x680 >> 2);
        *(undefined4 *)(param_1 + (param_2 & 0xfffffffc) + 0x1b040) = uVar3;
      }
    }
    else {
      if ((uVar8 == 0x100010) || (uVar8 == 0x100012)) {
        uVar8 = FUN_0805beb0(*(undefined4 *)(param_1 + 0xfc7e8));
        uVar8 = uVar8 >> ((param_2 & 2) << 3) & 0xffff;
        goto LAB_0800e6fc;
      }
      if (uVar8 == 0x100002) goto LAB_0800e698;
    }
  }
  uVar8 = (uint)*(ushort *)(param_1 + (param_2 & 0x7ffe) + 0x1b040);
LAB_0800e6fc:
  if ((param_2 & 1) == 0) {
    uVar8 = uVar8 & 0xff;
  }
  else {
    uVar8 = uVar8 >> 8;
  }
  return uVar8;
}


