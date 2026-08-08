/*
 * Ghidra decompilation
 *
 * Function : FUN_0800e04c
 * Address  : 0800e04c
 * Program  : drastic16
 */


uint FUN_0800e04c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  
  if (param_2 != 0x2ac) {
    if (0x2ac < param_2) {
      if (0x67f < param_2) {
        if (param_2 == 0x100000) {
          uVar12 = FUN_0801d91c(param_1 + 0xfc748);
          return uVar12;
        }
        if (param_2 < 0x100001) {
          if (param_2 < 0x6a4) {
            uVar12 = FUN_0804c618(*(undefined4 *)(param_1 + 0xfba24),param_2 - 0x680 >> 2);
            return uVar12;
          }
        }
        else if (param_2 == 0x100010) {
          uVar12 = FUN_0805beb0(*(undefined4 *)(param_1 + 0xfc7e8));
          return uVar12;
        }
        goto LAB_0800e090;
      }
      if (0x63f < param_2) {
        uVar12 = FUN_0804c5c8(*(undefined4 *)(param_1 + 0xfba24),param_2 - 0x640 >> 2);
        return uVar12;
      }
      if (param_2 == 0x600) {
        uVar12 = FUN_08050654(*(undefined4 *)(param_1 + 0xfba24));
        return uVar12;
      }
      if (param_2 == 0x604) {
        uVar12 = FUN_0804c550(*(undefined4 *)(param_1 + 0xfba24));
        iVar2 = FUN_0804c590(*(undefined4 *)(param_1 + 0xfba24));
        return uVar12 | iVar2 << 0x10;
      }
      if ((param_2 != 0x2b4) || (*(char *)(param_1 + 0xfc81d) != '\0')) goto LAB_0800e090;
      *(undefined *)(param_1 + 0xfc81d) = 1;
      if ((*(ushort *)(param_1 + 0x1b2f0) & 1) == 0) {
        uVar12 = *(uint *)(param_1 + 0x1b2f8);
        if (uVar12 == 0) goto LAB_0800e5e4;
        if (uVar12 < 0x40000000) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0x40000000;
        }
        uVar3 = uVar7 | 0x10000000;
        if (0x3fffffff < uVar12) {
          uVar12 = uVar12 + 0xc0000000;
        }
        uVar5 = uVar7 >> 1;
        if (uVar3 <= uVar12) {
          uVar5 = uVar7 >> 1 | 0x10000000;
        }
        uVar7 = uVar5 | 0x4000000;
        if (uVar3 <= uVar12) {
          uVar12 = uVar12 - uVar3;
        }
        uVar3 = uVar5 >> 1;
        if (uVar7 <= uVar12) {
          uVar3 = uVar5 >> 1 | 0x4000000;
        }
        uVar5 = uVar3 | 0x1000000;
        if (uVar7 <= uVar12) {
          uVar12 = uVar12 - uVar7;
        }
        uVar7 = uVar3 >> 1;
        if (uVar5 <= uVar12) {
          uVar7 = uVar3 >> 1 | 0x1000000;
        }
        uVar3 = uVar7 | 0x400000;
        if (uVar5 <= uVar12) {
          uVar12 = uVar12 - uVar5;
        }
        uVar5 = uVar7 >> 1;
        if (uVar3 <= uVar12) {
          uVar5 = uVar7 >> 1 | 0x400000;
        }
        uVar7 = uVar5 | 0x100000;
        if (uVar3 <= uVar12) {
          uVar12 = uVar12 - uVar3;
        }
        uVar3 = uVar5 >> 1;
        if (uVar7 <= uVar12) {
          uVar3 = uVar5 >> 1 | 0x100000;
        }
        uVar5 = uVar3 | 0x40000;
        if (uVar7 <= uVar12) {
          uVar12 = uVar12 - uVar7;
        }
        uVar7 = uVar3 >> 1;
        if (uVar5 <= uVar12) {
          uVar7 = uVar3 >> 1 | 0x40000;
        }
        uVar3 = uVar7 | 0x10000;
        if (uVar5 <= uVar12) {
          uVar12 = uVar12 - uVar5;
        }
        uVar5 = uVar7 >> 1;
        if (uVar3 <= uVar12) {
          uVar5 = uVar7 >> 1 | 0x10000;
        }
        uVar7 = uVar5 | 0x4000;
        if (uVar3 <= uVar12) {
          uVar12 = uVar12 - uVar3;
        }
        uVar3 = uVar5 >> 1;
        if (uVar7 <= uVar12) {
          uVar3 = uVar5 >> 1 | 0x4000;
        }
        uVar5 = uVar3 | 0x1000;
        if (uVar7 <= uVar12) {
          uVar12 = uVar12 - uVar7;
        }
        uVar7 = uVar3 >> 1;
        if (uVar5 <= uVar12) {
          uVar7 = uVar3 >> 1 | 0x1000;
        }
        uVar3 = uVar7 | 0x400;
        if (uVar5 <= uVar12) {
          uVar12 = uVar12 - uVar5;
        }
        uVar5 = uVar7 >> 1;
        if (uVar3 <= uVar12) {
          uVar5 = uVar7 >> 1 | 0x400;
        }
        uVar7 = uVar5 | 0x100;
        if (uVar3 <= uVar12) {
          uVar12 = uVar12 - uVar3;
        }
        uVar3 = uVar5 >> 1;
        if (uVar7 <= uVar12) {
          uVar3 = uVar5 >> 1 | 0x100;
        }
        uVar5 = uVar3 | 0x40;
        if (uVar7 <= uVar12) {
          uVar12 = uVar12 - uVar7;
        }
        uVar7 = uVar3 >> 1;
        if (uVar5 <= uVar12) {
          uVar7 = uVar3 >> 1 | 0x40;
        }
        uVar3 = uVar7 | 0x10;
        if (uVar5 <= uVar12) {
          uVar12 = uVar12 - uVar5;
        }
        uVar5 = uVar7 >> 1;
        if (uVar3 <= uVar12) {
          uVar5 = uVar7 >> 1 | 0x10;
        }
        uVar7 = uVar5 | 4;
        if (uVar3 <= uVar12) {
          uVar12 = uVar12 - uVar3;
        }
        uVar3 = uVar5 >> 1;
        if (uVar7 <= uVar12) {
          uVar3 = uVar5 >> 1 | 4;
        }
        uVar5 = uVar3 >> 1;
        if (uVar7 <= uVar12) {
          uVar12 = uVar12 - uVar7;
        }
        if ((uVar3 | 1) <= uVar12) {
          uVar5 = uVar5 | 1;
        }
      }
      else if ((*(uint *)(param_1 + 0x1b2f8) | *(uint *)(param_1 + 0x1b2fc)) == 0) {
LAB_0800e5e4:
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        uVar7 = 0;
        uVar11 = 0;
        uVar12 = 0x10000000;
        iVar2 = 0x1f;
        uVar3 = *(uint *)(param_1 + 0x1b2f8);
        uVar10 = *(uint *)(param_1 + 0x1b2fc);
        do {
          uVar8 = uVar11 | uVar5;
          uVar9 = uVar12 | uVar7;
          uVar1 = uVar7 >> 1;
          uVar5 = (uint)((byte)uVar7 & 1) << 0x1f | uVar5 >> 1;
          bVar16 = uVar10 <= uVar9;
          bVar15 = uVar9 == uVar10;
          if (bVar15) {
            bVar16 = uVar3 <= uVar8;
          }
          uVar4 = uVar10;
          if (!bVar16 || bVar15 && uVar8 == uVar3) {
            uVar4 = uVar10 - (uVar9 + (uVar3 < uVar8));
          }
          uVar14 = uVar3;
          if (!bVar16 || bVar15 && uVar8 == uVar3) {
            uVar14 = uVar3 - uVar8;
          }
          bVar16 = uVar10 <= uVar9;
          bVar15 = uVar9 == uVar10;
          if (bVar15) {
            bVar16 = uVar3 <= uVar8;
          }
          if (!bVar16 || bVar15 && uVar8 == uVar3) {
            uVar5 = uVar5 | uVar11;
          }
          uVar7 = uVar1;
          if (!bVar16 || bVar15 && uVar8 == uVar3) {
            uVar7 = uVar1 | uVar12;
          }
          iVar2 = iVar2 + -1;
          uVar11 = uVar11 >> 2 | uVar12 << 0x1e;
          uVar12 = uVar12 >> 2;
          uVar3 = uVar14;
          uVar10 = uVar4;
        } while (iVar2 != 0);
      }
      *(uint *)(param_1 + 0x1b2f4) = uVar5;
      goto LAB_0800e090;
    }
    if (param_2 == 0x1a4) {
      iVar2 = *(int *)(param_1 + 0xfba1c);
      uVar7 = *(uint *)(iVar2 + 0x15a0f64);
      uVar5 = *(uint *)(iVar2 + 8) + *(uint *)(iVar2 + 0x10);
      uVar3 = *(uint *)(*(int *)(param_1 + 0xfc7e8) + 0x87c);
      uVar10 = (*(int *)(iVar2 + 0xc) + (uint)CARRY4(*(uint *)(iVar2 + 8),*(uint *)(iVar2 + 0x10)))
               - (((int)uVar7 >> 0x1f) + (uint)(uVar5 < uVar7));
      uVar12 = *(uint *)(param_1 + 0x1b1e4);
      bVar16 = uVar3 <= uVar10;
      if (uVar10 == uVar3) {
        bVar16 = *(uint *)(*(int *)(param_1 + 0xfc7e8) + 0x878) <= uVar5 - uVar7;
      }
      if (!bVar16) {
        uVar12 = uVar12 & 0xff7fffff;
      }
      return uVar12;
    }
    if (param_2 < 0x1a5) {
      if (param_2 != 0x104) {
        if (param_2 < 0x105) {
          if (param_2 != 0x100) goto LAB_0800e090;
        }
        else if ((param_2 != 0x108) && (param_2 != 0x10c)) goto LAB_0800e090;
      }
      iVar6 = (param_2 - 0x100 >> 2) * 0x20 + 0x159ebf8;
      iVar2 = *(int *)(param_1 + 0xfba1c) + iVar6;
      if ((*(ushort *)(iVar2 + 0x1a) & 4) == 0) {
        if ((*(ushort *)(iVar2 + 0x1a) & 0x80) == 0) {
          uVar12 = (uint)*(ushort *)(iVar2 + 0x18);
        }
        else {
          iVar13 = *(int *)(*(int *)(param_1 + 0xfba1c) + iVar6);
          iVar6 = *(int *)(iVar13 + 0x2308);
          uVar12 = (uint)*(ushort *)(iVar2 + 0x18) +
                   ((uint)(((*(int *)(iVar6 + 8) + *(int *)(iVar6 + 0x10)) -
                           *(int *)(iVar13 + 0x236c)) - *(int *)(iVar2 + 8)) >>
                   *(sbyte *)(iVar2 + 0x1c)) & 0xffff;
        }
        return uVar12 | *(ushort *)(param_1 + param_2 + 0x1b042);
      }
      goto LAB_0800e090;
    }
    if (param_2 != 0x2a0) {
      if (param_2 < 0x2a1) {
        if (param_2 == 0x204) {
          return *(uint *)(param_1 + 0x1b244) & 0xe8ff | 0x4000;
        }
        goto LAB_0800e090;
      }
      if ((param_2 != 0x2a4) && (param_2 != 0x2a8)) goto LAB_0800e090;
    }
  }
  if (*(char *)(param_1 + 0xfc81c) == '\0') {
    FUN_0800d88c(param_1);
  }
LAB_0800e090:
  return *(uint *)(param_1 + (param_2 & 0x7fff) + 0x1b040);
}


