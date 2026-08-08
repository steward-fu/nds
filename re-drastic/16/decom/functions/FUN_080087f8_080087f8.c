/*
 * Ghidra decompilation
 *
 * Function : FUN_080087f8
 * Address  : 080087f8
 * Program  : drastic16
 */


void FUN_080087f8(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar1 = (ushort)param_3;
  if (param_2 < 0x18c) {
    if (0x187 < param_2) {
      puts("store io32 ARM7 IPCFIFOSEND");
      return;
    }
    if (param_2 == 0x102) {
      iVar8 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
      if ((param_3 & 3) == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = (param_3 & 3) * 2 + 5;
      }
      *(char *)(iVar8 + 0x1c) = (char)iVar4;
      iVar4 = 0x10000 - (uint)*(ushort *)(iVar8 + 0x18) << iVar4;
      *(int *)(iVar8 + 0x14) = iVar4;
      if ((param_3 & 0x80) == 0) {
        if (*(char *)(iVar8 + 0x1e) != '\0') {
          FUN_080153f4(*(int *)(param_1 + 0xfba1c) + 0x18,3);
          *(undefined *)(iVar8 + 0x1e) = 0;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0xfba1c);
        uVar3 = *(uint *)(iVar8 + 0x236c);
        uVar10 = *(uint *)(iVar2 + 8);
        iVar6 = *(int *)(iVar2 + 0xc);
        uVar9 = *(uint *)(iVar2 + 0x10);
        if (((*(ushort *)(iVar8 + 0x1a) & 0x80) == 0) && ((param_3 & 4) == 0)) {
          iVar7 = (uVar10 + uVar9) - uVar3;
          *(int *)(iVar8 + 8) = iVar7;
          *(uint *)(iVar8 + 0xc) =
               (iVar6 + (uint)CARRY4(uVar10,uVar9)) -
               (((int)uVar3 >> 0x1f) + (uint)(uVar10 + uVar9 < uVar3));
          uVar3 = (iVar7 - uVar10) + iVar4;
          if (uVar3 < uVar9) {
            uVar3 = uVar9;
          }
          if (*(char *)(iVar8 + 0x1e) != '\0') {
            FUN_080153f4(iVar2 + 0x18,3);
          }
          FUN_08015360(iVar2 + 0x18,uVar3,3);
          *(undefined *)(iVar8 + 0x1e) = 1;
        }
      }
      *(ushort *)(iVar8 + 0x1a) = uVar1;
    }
    else if (param_2 < 0x103) {
      if (param_2 == 0xd2) {
        *(ushort *)(param_1 + 0x23112) = uVar1;
        uVar3 = (uint)*(ushort *)(param_1 + 0x23110) | param_3 << 0x10;
        iVar8 = param_1 + 0xfc708;
        if (((int)uVar3 < 0) && (-1 < *(int *)(param_1 + 0xfc720))) {
          *(byte *)(param_1 + 0xfc724) = (byte)((uVar3 << 2) >> 0x1e);
          *(undefined4 *)(param_1 + 0xfc718) = **(undefined4 **)(param_1 + 0xfc714);
          uVar5 = (*(undefined4 **)(param_1 + 0xfc714))[1];
          *(uint *)(param_1 + 0xfc720) = uVar3;
          *(undefined4 *)(param_1 + 0xfc71c) = uVar5;
          if ((uVar3 << 2) >> 0x1e != 0) {
            return;
          }
          FUN_080167d8(param_1 + 0xfc6c0,param_1 + 0xfc708,uVar5,param_4);
          return;
        }
LAB_08008bc8:
        *(uint *)(iVar8 + 0x18) = uVar3;
        return;
      }
      if (param_2 < 0xd3) {
        if (param_2 == 0xba) {
          *(ushort *)(param_1 + 0x230fa) = uVar1;
          uVar3 = (uint)*(ushort *)(param_1 + 0x230f8) | param_3 << 0x10;
          iVar8 = param_1 + 0xfc6c8;
          if (((int)uVar3 < 0) && (-1 < *(int *)(param_1 + 0xfc6e0))) {
            *(byte *)(param_1 + 0xfc6e4) = (byte)((uVar3 << 2) >> 0x1e);
            *(undefined4 *)(param_1 + 0xfc6d8) = **(undefined4 **)(param_1 + 0xfc6d4);
            uVar5 = (*(undefined4 **)(param_1 + 0xfc6d4))[1];
            *(uint *)(param_1 + 0xfc6e0) = uVar3;
            *(undefined4 *)(param_1 + 0xfc6dc) = uVar5;
            if ((uVar3 << 2) >> 0x1e != 0) {
              return;
            }
            FUN_080167d8(param_1 + 0xfc6c0,param_1 + 0xfc6c8,uVar5,param_4);
            return;
          }
        }
        else {
          if (param_2 != 0xc6) goto LAB_08008854;
          *(ushort *)(param_1 + 0x23106) = uVar1;
          uVar3 = (uint)*(ushort *)(param_1 + 0x23104) | param_3 << 0x10;
          iVar8 = param_1 + 0xfc6e8;
          if (((int)uVar3 < 0) && (-1 < *(int *)(param_1 + 0xfc700))) {
            *(byte *)(param_1 + 0xfc704) = (byte)((uVar3 << 2) >> 0x1e);
            *(undefined4 *)(param_1 + 0xfc6f8) = **(undefined4 **)(param_1 + 0xfc6f4);
            uVar5 = (*(undefined4 **)(param_1 + 0xfc6f4))[1];
            *(uint *)(param_1 + 0xfc700) = uVar3;
            *(undefined4 *)(param_1 + 0xfc6fc) = uVar5;
            if ((uVar3 << 2) >> 0x1e != 0) {
              return;
            }
            FUN_080167d8(param_1 + 0xfc6c0,param_1 + 0xfc6e8,uVar5,param_4);
            return;
          }
        }
        goto LAB_08008bc8;
      }
      if (param_2 == 0xde) {
        *(ushort *)(param_1 + 0x2311e) = uVar1;
        uVar3 = (uint)*(ushort *)(param_1 + 0x2311c) | param_3 << 0x10;
        iVar8 = param_1 + 0xfc728;
        if (((int)uVar3 < 0) && (-1 < *(int *)(param_1 + 0xfc740))) {
          *(byte *)(param_1 + 0xfc744) = (byte)((uVar3 << 2) >> 0x1e);
          *(undefined4 *)(param_1 + 0xfc738) = **(undefined4 **)(param_1 + 0xfc734);
          uVar5 = (*(undefined4 **)(param_1 + 0xfc734))[1];
          *(uint *)(param_1 + 0xfc740) = uVar3;
          *(undefined4 *)(param_1 + 0xfc73c) = uVar5;
          if ((uVar3 << 2) >> 0x1e != 0) {
            return;
          }
          FUN_080167d8(param_1 + 0xfc6c0,param_1 + 0xfc728,uVar5,param_4);
          return;
        }
        goto LAB_08008bc8;
      }
      if (param_2 != 0x100) goto LAB_08008854;
      *(ushort *)(*(int *)(*(int *)(param_1 + 0xfba30) + 0x800008) + 0x18) = uVar1;
    }
    else if (param_2 == 0x108) {
      *(ushort *)(*(int *)(*(int *)(param_1 + 0xfba30) + 0x800008) + 0x58) = uVar1;
    }
    else if (param_2 < 0x109) {
      if (param_2 == 0x104) {
        *(ushort *)(*(int *)(*(int *)(param_1 + 0xfba30) + 0x800008) + 0x38) = uVar1;
      }
      else {
        if (param_2 != 0x106) goto LAB_08008854;
        uVar3 = param_3 & 3;
        bVar11 = uVar3 != 0;
        if (bVar11) {
          uVar3 = uVar3 << 1;
        }
        iVar8 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
        if (bVar11) {
          iVar4 = uVar3 + 5;
        }
        else {
          iVar4 = 1;
        }
        *(char *)(iVar8 + 0x3c) = (char)iVar4;
        iVar4 = 0x10000 - (uint)*(ushort *)(iVar8 + 0x38) << iVar4;
        *(int *)(iVar8 + 0x34) = iVar4;
        if ((param_3 & 0x80) == 0) {
          if (*(char *)(iVar8 + 0x3e) != '\0') {
            FUN_080153f4(*(int *)(param_1 + 0xfba1c) + 0x18,4);
            *(undefined *)(iVar8 + 0x3e) = 0;
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0xfba1c);
          uVar9 = *(uint *)(iVar8 + 0x236c);
          uVar10 = *(uint *)(iVar2 + 0x10);
          uVar3 = *(uint *)(iVar2 + 8);
          iVar6 = *(int *)(iVar2 + 0xc);
          if (((*(ushort *)(iVar8 + 0x3a) & 0x80) == 0) && ((param_3 & 4) == 0)) {
            iVar7 = (uVar3 + uVar10) - uVar9;
            *(int *)(iVar8 + 0x28) = iVar7;
            *(uint *)(iVar8 + 0x2c) =
                 (iVar6 + (uint)CARRY4(uVar3,uVar10)) -
                 (((int)uVar9 >> 0x1f) + (uint)(uVar3 + uVar10 < uVar9));
            uVar3 = (iVar7 - uVar3) + iVar4;
            if (uVar3 < uVar10) {
              uVar3 = uVar10;
            }
            if (*(char *)(iVar8 + 0x3e) != '\0') {
              FUN_080153f4(iVar2 + 0x18,4);
            }
            FUN_08015360(iVar2 + 0x18,uVar3,4);
            *(undefined *)(iVar8 + 0x3e) = 1;
          }
        }
        *(ushort *)(iVar8 + 0x3a) = uVar1;
      }
    }
    else if (param_2 == 0x10c) {
      *(ushort *)(*(int *)(*(int *)(param_1 + 0xfba30) + 0x800008) + 0x78) = uVar1;
    }
    else if (param_2 == 0x10e) {
      uVar3 = param_3 & 3;
      bVar11 = uVar3 != 0;
      if (bVar11) {
        uVar3 = uVar3 << 1;
      }
      iVar8 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
      if (bVar11) {
        iVar4 = uVar3 + 5;
      }
      else {
        iVar4 = 1;
      }
      *(char *)(iVar8 + 0x7c) = (char)iVar4;
      iVar4 = 0x10000 - (uint)*(ushort *)(iVar8 + 0x78) << iVar4;
      *(int *)(iVar8 + 0x74) = iVar4;
      if ((param_3 & 0x80) == 0) {
        if (*(char *)(iVar8 + 0x7e) != '\0') {
          FUN_080153f4(*(int *)(param_1 + 0xfba1c) + 0x18,6);
          *(undefined *)(iVar8 + 0x7e) = 0;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0xfba1c);
        uVar9 = *(uint *)(iVar8 + 0x236c);
        uVar10 = *(uint *)(iVar2 + 0x10);
        uVar3 = *(uint *)(iVar2 + 8);
        iVar6 = *(int *)(iVar2 + 0xc);
        if (((*(ushort *)(iVar8 + 0x7a) & 0x80) == 0) && ((param_3 & 4) == 0)) {
          iVar7 = (uVar3 + uVar10) - uVar9;
          *(int *)(iVar8 + 0x68) = iVar7;
          *(uint *)(iVar8 + 0x6c) =
               (iVar6 + (uint)CARRY4(uVar3,uVar10)) -
               (((int)uVar9 >> 0x1f) + (uint)(uVar3 + uVar10 < uVar9));
          uVar3 = (iVar7 - uVar3) + iVar4;
          if (uVar3 < uVar10) {
            uVar3 = uVar10;
          }
          if (*(char *)(iVar8 + 0x7e) != '\0') {
            FUN_080153f4(iVar2 + 0x18,6);
          }
          FUN_08015360(iVar2 + 0x18,uVar3,6);
          *(undefined *)(iVar8 + 0x7e) = 1;
        }
      }
      *(ushort *)(iVar8 + 0x7a) = uVar1;
    }
    else {
      if (param_2 != 0x10a) goto LAB_08008854;
      uVar3 = param_3 & 3;
      bVar11 = uVar3 != 0;
      if (bVar11) {
        uVar3 = uVar3 << 1;
      }
      iVar8 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
      if (bVar11) {
        iVar4 = uVar3 + 5;
      }
      else {
        iVar4 = 1;
      }
      *(char *)(iVar8 + 0x5c) = (char)iVar4;
      iVar4 = 0x10000 - (uint)*(ushort *)(iVar8 + 0x58) << iVar4;
      *(int *)(iVar8 + 0x54) = iVar4;
      if ((param_3 & 0x80) == 0) {
        if (*(char *)(iVar8 + 0x5e) != '\0') {
          FUN_080153f4(*(int *)(param_1 + 0xfba1c) + 0x18,5);
          *(undefined *)(iVar8 + 0x5e) = 0;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0xfba1c);
        uVar9 = *(uint *)(iVar8 + 0x236c);
        uVar10 = *(uint *)(iVar2 + 0x10);
        uVar3 = *(uint *)(iVar2 + 8);
        iVar6 = *(int *)(iVar2 + 0xc);
        if (((*(ushort *)(iVar8 + 0x5a) & 0x80) == 0) && ((param_3 & 4) == 0)) {
          iVar7 = (uVar3 + uVar10) - uVar9;
          *(int *)(iVar8 + 0x48) = iVar7;
          *(uint *)(iVar8 + 0x4c) =
               (iVar6 + (uint)CARRY4(uVar3,uVar10)) -
               (((int)uVar9 >> 0x1f) + (uint)(uVar3 + uVar10 < uVar9));
          uVar3 = (iVar7 - uVar3) + iVar4;
          if (uVar3 < uVar10) {
            uVar3 = uVar10;
          }
          if (*(char *)(iVar8 + 0x5e) != '\0') {
            FUN_080153f4(iVar2 + 0x18,5);
          }
          FUN_08015360(iVar2 + 0x18,uVar3,5);
          *(undefined *)(iVar8 + 0x5e) = 1;
        }
      }
      *(ushort *)(iVar8 + 0x5a) = uVar1;
    }
  }
  else {
    if (param_2 == 0x210) {
      uVar3 = *(uint *)(param_1 + 0x23250);
      param_3 = param_3 | uVar3 & 0xffff0000;
      *(uint *)(param_1 + 0x23250) = param_3;
      if ((param_3 & ~uVar3) == 0) {
        return;
      }
LAB_08008c08:
      param_3 = -*(int *)(param_1 + 0x23248) & *(uint *)(param_1 + 0x23254) & param_3;
      iVar8 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
      *(uint *)(iVar8 + 0x2100) = param_3;
      if (param_3 != 0) {
        *(uint *)(iVar8 + 0x237c) = *(uint *)(iVar8 + 0x237c) | 2;
      }
      return;
    }
    if (0x210 < param_2) {
      if (param_2 == 0x216) {
        return;
      }
      if (param_2 < 0x217) {
        if (param_2 == 0x212) {
          uVar3 = *(uint *)(param_1 + 0x23250);
          param_3 = uVar3 & 0xffff | param_3 << 0x10;
          *(uint *)(param_1 + 0x23250) = param_3;
          if ((param_3 & ~uVar3) == 0) {
            return;
          }
          goto LAB_08008c08;
        }
        if (param_2 == 0x214) {
          *(uint *)(param_1 + 0x23254) = ~param_3 & *(uint *)(param_1 + 0x23254);
          iVar8 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
          *(uint *)(iVar8 + 0x2100) = ~param_3 & *(uint *)(iVar8 + 0x2100);
          return;
        }
LAB_08008854:
        if (param_2 < 0x800000) {
          FUN_08007018(param_1,param_2,param_3 & 0xff);
          FUN_08007018(param_1,param_2 + 1,param_3 >> 8,param_4);
          return;
        }
        if (0x3fff < (param_2 & 0xffff) - 0x4000) {
          if (((param_2 & 0x3fff) == 0x158) && ((param_3 << 0x12) >> 0x1e == 1)) {
            *(undefined *)(param_1 + (param_3 & 0x7f) + 0xfb980) = *(undefined *)(param_1 + 0xfb6da)
            ;
          }
          *(ushort *)(param_1 + (param_2 & 0x3fff) + 0xfb580) = uVar1;
          return;
        }
        *(ushort *)(param_1 + (param_2 & 0x3fff) + 0x17040) = uVar1;
        return;
      }
      if (0xff < param_2 - 0x400) goto LAB_08008854;
      uVar3 = param_2 & 0xfffff00f;
      uVar9 = (param_2 << 0x18) >> 0x1c;
      iVar8 = *(int *)(param_1 + 0xfba28);
      if (uVar3 == 2) {
        *(ushort *)(param_1 + param_2 + 0x23040) = uVar1;
        if ((param_3 & 0x8000) == 0) {
          *(undefined *)(uVar9 * 0xb8 + iVar8 + 0x400ca) = 0;
        }
        else {
          FUN_080591bc(iVar8,uVar9);
        }
        iVar8 = uVar9 * 0xb8 + iVar8;
        *(byte *)(iVar8 + 0x400c9) = *(byte *)(iVar8 + 0x400c9) | 2;
        return;
      }
      if (uVar3 == 8) {
        iVar8 = uVar9 * 0xb8 + iVar8;
        *(byte *)(iVar8 + 0x400c9) = *(byte *)(iVar8 + 0x400c9) | 1;
      }
      else if (uVar3 == 0) {
        iVar8 = uVar9 * 0xb8 + iVar8;
        *(byte *)(iVar8 + 0x400c9) = *(byte *)(iVar8 + 0x400c9) | 2;
      }
      goto LAB_08008b8c;
    }
    if (param_2 < 0x1a6) {
      if (param_2 < 0x1a4) {
        if (param_2 == 0x1a0) {
          *(ushort *)(param_1 + 0x1b1e0) = uVar1 & 0xff7f;
          return;
        }
        goto LAB_08008854;
      }
      printf("write16 %x to ROMCTRL %x (arm7)\n");
    }
    else if (param_2 == 0x1c0) {
      FUN_0805c7d4(*(undefined4 *)(param_1 + 0xfc7ec),param_3);
    }
    else {
      if (param_2 != 0x208) goto LAB_08008854;
      param_3 = param_3 & 1;
      iVar8 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
      if ((param_3 == 0) || (*(int *)(param_1 + 0x23248) != 0)) {
        *(undefined4 *)(iVar8 + 0x2100) = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x23250) & *(uint *)(param_1 + 0x23254);
        *(uint *)(iVar8 + 0x2100) = uVar3;
        if (uVar3 == 0) {
          param_3 = 1;
        }
        else {
          param_3 = 1;
          *(uint *)(iVar8 + 0x237c) = *(uint *)(iVar8 + 0x237c) | 2;
        }
      }
    }
  }
  param_2 = param_2 & 0x7fff;
LAB_08008b8c:
  *(short *)(param_1 + param_2 + 0x23040) = (short)param_3;
  return;
}


