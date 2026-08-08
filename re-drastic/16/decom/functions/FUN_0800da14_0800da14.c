/*
 * Ghidra decompilation
 *
 * Function : FUN_0800da14
 * Address  : 0800da14
 * Program  : drastic16
 */


uint FUN_0800da14(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  
  if (param_2 != 0x2ae) {
    if (0x2ae < param_2) {
      if (param_2 < 0x680) {
        if (param_2 < 0x640) {
          if (param_2 == 0x600) {
            uVar2 = FUN_08050654(*(undefined4 *)(param_1 + 0xfba24));
            return uVar2 & 0xffff;
          }
          if (param_2 < 0x601) {
            if (((param_2 == 0x2b4) || (param_2 == 0x2b6)) && (*(char *)(param_1 + 0xfc81d) == '\0')
               ) {
              *(undefined *)(param_1 + 0xfc81d) = 1;
              if ((*(ushort *)(param_1 + 0x1b2f0) & 1) == 0) {
                uVar2 = *(uint *)(param_1 + 0x1b2f8);
                if (uVar2 != 0) {
                  if (uVar2 < 0x40000000) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = 0x40000000;
                  }
                  uVar8 = uVar12 | 0x10000000;
                  if (0x3fffffff < uVar2) {
                    uVar2 = uVar2 + 0xc0000000;
                  }
                  uVar7 = uVar12 >> 1;
                  if (uVar8 <= uVar2) {
                    uVar7 = uVar12 >> 1 | 0x10000000;
                  }
                  uVar6 = uVar7 | 0x4000000;
                  uVar12 = uVar2 - uVar8;
                  if (uVar8 > uVar2) {
                    uVar12 = uVar2;
                  }
                  uVar2 = uVar7 >> 1;
                  if (uVar6 <= uVar12) {
                    uVar2 = uVar7 >> 1 | 0x4000000;
                  }
                  uVar8 = uVar2 | 0x1000000;
                  if (uVar6 <= uVar12) {
                    uVar12 = uVar12 - uVar6;
                  }
                  uVar7 = uVar2 >> 1;
                  if (uVar8 <= uVar12) {
                    uVar7 = uVar2 >> 1 | 0x1000000;
                  }
                  uVar2 = uVar7 | 0x400000;
                  if (uVar8 <= uVar12) {
                    uVar12 = uVar12 - uVar8;
                  }
                  uVar8 = uVar7 >> 1;
                  if (uVar2 <= uVar12) {
                    uVar8 = uVar7 >> 1 | 0x400000;
                  }
                  uVar7 = uVar8 | 0x100000;
                  if (uVar2 <= uVar12) {
                    uVar12 = uVar12 - uVar2;
                  }
                  uVar2 = uVar8 >> 1;
                  if (uVar7 <= uVar12) {
                    uVar2 = uVar8 >> 1 | 0x100000;
                  }
                  uVar8 = uVar2 | 0x40000;
                  if (uVar7 <= uVar12) {
                    uVar12 = uVar12 - uVar7;
                  }
                  uVar7 = uVar2 >> 1;
                  if (uVar8 <= uVar12) {
                    uVar7 = uVar2 >> 1 | 0x40000;
                  }
                  uVar2 = uVar7 | 0x10000;
                  if (uVar8 <= uVar12) {
                    uVar12 = uVar12 - uVar8;
                  }
                  uVar8 = uVar7 >> 1;
                  if (uVar2 <= uVar12) {
                    uVar8 = uVar7 >> 1 | 0x10000;
                  }
                  uVar7 = uVar8 | 0x4000;
                  if (uVar2 <= uVar12) {
                    uVar12 = uVar12 - uVar2;
                  }
                  uVar2 = uVar8 >> 1;
                  if (uVar7 <= uVar12) {
                    uVar2 = uVar8 >> 1 | 0x4000;
                  }
                  uVar8 = uVar2 | 0x1000;
                  if (uVar7 <= uVar12) {
                    uVar12 = uVar12 - uVar7;
                  }
                  uVar7 = uVar2 >> 1;
                  if (uVar8 <= uVar12) {
                    uVar7 = uVar2 >> 1 | 0x1000;
                  }
                  uVar2 = uVar7 | 0x400;
                  if (uVar8 <= uVar12) {
                    uVar12 = uVar12 - uVar8;
                  }
                  uVar8 = uVar7 >> 1;
                  if (uVar2 <= uVar12) {
                    uVar8 = uVar7 >> 1 | 0x400;
                  }
                  uVar7 = uVar8 | 0x100;
                  if (uVar2 <= uVar12) {
                    uVar12 = uVar12 - uVar2;
                  }
                  uVar2 = uVar8 >> 1;
                  if (uVar7 <= uVar12) {
                    uVar2 = uVar8 >> 1 | 0x100;
                  }
                  uVar8 = uVar2 | 0x40;
                  if (uVar7 <= uVar12) {
                    uVar12 = uVar12 - uVar7;
                  }
                  uVar7 = uVar2 >> 1;
                  if (uVar8 <= uVar12) {
                    uVar7 = uVar2 >> 1 | 0x40;
                  }
                  uVar2 = uVar7 | 0x10;
                  if (uVar8 <= uVar12) {
                    uVar12 = uVar12 - uVar8;
                  }
                  uVar8 = uVar7 >> 1;
                  if (uVar2 <= uVar12) {
                    uVar8 = uVar7 >> 1 | 0x10;
                  }
                  uVar7 = uVar8 | 4;
                  if (uVar2 <= uVar12) {
                    uVar12 = uVar12 - uVar2;
                  }
                  uVar6 = uVar8 >> 1;
                  if (uVar7 <= uVar12) {
                    uVar6 = uVar8 >> 1 | 4;
                  }
                  uVar2 = uVar6 >> 1;
                  if (uVar7 <= uVar12) {
                    uVar12 = uVar12 - uVar7;
                  }
                  if ((uVar6 | 1) <= uVar12) {
                    uVar2 = uVar2 | 1;
                  }
                }
              }
              else {
                uVar2 = 0;
                if ((*(uint *)(param_1 + 0x1b2f8) | *(uint *)(param_1 + 0x1b2fc)) != 0) {
                  uVar2 = 0;
                  uVar8 = 0;
                  uVar11 = 0;
                  uVar12 = 0x10000000;
                  iVar15 = 0x1f;
                  uVar7 = *(uint *)(param_1 + 0x1b2f8);
                  uVar6 = *(uint *)(param_1 + 0x1b2fc);
                  do {
                    uVar5 = uVar12 | uVar8;
                    uVar3 = uVar11 | uVar2;
                    uVar1 = uVar8 >> 1;
                    uVar2 = (uint)((byte)uVar8 & 1) << 0x1f | uVar2 >> 1;
                    bVar17 = uVar6 <= uVar5;
                    bVar16 = uVar5 == uVar6;
                    if (bVar16) {
                      bVar17 = uVar7 <= uVar3;
                    }
                    uVar13 = uVar6;
                    if (!bVar17 || bVar16 && uVar3 == uVar7) {
                      uVar13 = uVar6 - (uVar5 + (uVar7 < uVar3));
                    }
                    uVar14 = uVar7;
                    if (!bVar17 || bVar16 && uVar3 == uVar7) {
                      uVar14 = uVar7 - uVar3;
                    }
                    bVar17 = uVar6 <= uVar5;
                    bVar16 = uVar5 == uVar6;
                    if (bVar16) {
                      bVar17 = uVar7 <= uVar3;
                    }
                    uVar8 = uVar1;
                    if (!bVar17 || bVar16 && uVar3 == uVar7) {
                      uVar8 = uVar1 | uVar12;
                    }
                    if (!bVar17 || bVar16 && uVar3 == uVar7) {
                      uVar2 = uVar2 | uVar11;
                    }
                    iVar15 = iVar15 + -1;
                    uVar11 = uVar11 >> 2 | uVar12 << 0x1e;
                    uVar12 = uVar12 >> 2;
                    uVar7 = uVar14;
                    uVar6 = uVar13;
                  } while (iVar15 != 0);
                }
              }
              *(uint *)(param_1 + 0x1b2f4) = uVar2;
            }
          }
          else {
            if (param_2 == 0x604) {
              uVar2 = FUN_0804c550(*(undefined4 *)(param_1 + 0xfba24));
              goto LAB_0800ddbc;
            }
            if (param_2 == 0x606) {
              uVar2 = FUN_0804c590(*(undefined4 *)(param_1 + 0xfba24));
              return uVar2 & 0xffff;
            }
          }
        }
        else {
          uVar4 = FUN_0804c5c8(*(undefined4 *)(param_1 + 0xfba24),param_2 - 0x640 >> 2);
          *(undefined4 *)(param_1 + (param_2 & 0xfffffffc) + 0x1b040) = uVar4;
        }
      }
      else {
        if (param_2 == 0x100000) {
LAB_0800dabc:
          uVar2 = FUN_0801d91c(param_1 + 0xfc748);
          return uVar2 >> ((param_2 & 2) << 3) & 0xffff;
        }
        if (param_2 < 0x100001) {
          if (param_2 < 0x6a4) {
            uVar4 = FUN_0804c618(*(undefined4 *)(param_1 + 0xfba24),param_2 - 0x680 >> 2);
            *(undefined4 *)(param_1 + (param_2 & 0xfffffffc) + 0x1b040) = uVar4;
          }
        }
        else {
          if ((param_2 == 0x100010) || (param_2 == 0x100012)) {
            uVar2 = FUN_0805beb0(*(undefined4 *)(param_1 + 0xfc7e8));
            return uVar2 >> ((param_2 & 2) << 3) & 0xffff;
          }
          if (param_2 == 0x100002) goto LAB_0800dabc;
        }
      }
      goto LAB_0800dc70;
    }
    if (param_2 != 0x2a0) {
      if (param_2 < 0x2a1) {
        if (param_2 != 0x108) {
          if (param_2 < 0x109) {
            if ((param_2 != 0x100) && (param_2 != 0x104)) goto LAB_0800dc70;
          }
          else {
            if (param_2 == 0x1a6) {
              iVar15 = *(int *)(param_1 + 0xfba1c);
              uVar12 = *(uint *)(iVar15 + 0x15a0f64);
              uVar7 = *(uint *)(iVar15 + 8) + *(uint *)(iVar15 + 0x10);
              uVar8 = *(uint *)(*(int *)(param_1 + 0xfc7e8) + 0x87c);
              uVar2 = *(uint *)(param_1 + 0x1b1e4);
              uVar6 = (*(int *)(iVar15 + 0xc) +
                      (uint)CARRY4(*(uint *)(iVar15 + 8),*(uint *)(iVar15 + 0x10))) -
                      (((int)uVar12 >> 0x1f) + (uint)(uVar7 < uVar12));
              bVar17 = uVar8 <= uVar6;
              if (uVar6 == uVar8) {
                bVar17 = *(uint *)(*(int *)(param_1 + 0xfc7e8) + 0x878) <= uVar7 - uVar12;
              }
              if (!bVar17) {
                uVar2 = uVar2 & 0xff7fffff;
              }
              return uVar2 >> 0x10;
            }
            if (param_2 == 0x204) {
              return *(ushort *)(param_1 + 0x1b244) & 0xffffe8ff | 0x4000;
            }
            if (param_2 != 0x10c) goto LAB_0800dc70;
          }
        }
        iVar9 = (param_2 - 0x100 >> 2) * 0x20 + 0x159ebf8;
        iVar15 = *(int *)(param_1 + 0xfba1c) + iVar9;
        if ((*(ushort *)(iVar15 + 0x1a) & 4) == 0) {
          if ((*(ushort *)(iVar15 + 0x1a) & 0x80) == 0) {
            uVar2 = (uint)*(ushort *)(iVar15 + 0x18);
          }
          else {
            iVar9 = *(int *)(*(int *)(param_1 + 0xfba1c) + iVar9);
            iVar10 = *(int *)(iVar9 + 0x2308);
            uVar2 = (uint)*(ushort *)(iVar15 + 0x18) +
                    ((uint)(((*(int *)(iVar10 + 8) + *(int *)(iVar10 + 0x10)) -
                            *(int *)(iVar9 + 0x236c)) - *(int *)(iVar15 + 8)) >>
                    *(sbyte *)(iVar15 + 0x1c)) & 0xffff;
          }
LAB_0800ddbc:
          return uVar2 & 0xffff;
        }
        goto LAB_0800dc70;
      }
      if (param_2 != 0x2a6) {
        if (param_2 < 0x2a7) {
          if ((param_2 != 0x2a2) && (param_2 != 0x2a4)) goto LAB_0800dc70;
        }
        else if ((param_2 != 0x2aa) && ((param_2 != 0x2ac && (param_2 != 0x2a8))))
        goto LAB_0800dc70;
      }
    }
  }
  if (*(char *)(param_1 + 0xfc81c) == '\0') {
    FUN_0800d88c(param_1);
  }
LAB_0800dc70:
  return (uint)*(ushort *)(param_1 + (param_2 & 0x7fff) + 0x1b040);
}


