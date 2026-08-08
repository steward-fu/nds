/*
 * Ghidra decompilation
 *
 * Function : FUN_0800b5f4
 * Address  : 0800b5f4
 * Program  : drastic16
 */


void FUN_0800b5f4(int param_1,uint param_2,uint param_3)

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
  uint local_38;
  uint local_34;
  undefined local_2f;
  
  if (param_2 == 0x290) {
LAB_0800c110:
    *(undefined *)(param_1 + 0xfc81c) = 0;
    goto LAB_0800b818;
  }
  uVar1 = (ushort)param_3;
  if (param_2 < 0x291) {
    if (param_2 == 0x104) {
      *(ushort *)(*(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008) + 0x38) = uVar1;
      goto LAB_0800b818;
    }
    if (0x104 < param_2) {
      if (param_2 == 0x1a0) {
        *(ushort *)(param_1 + 0x1b1e0) = uVar1 & 0xff7f;
        return;
      }
      if (param_2 < 0x1a1) {
        if (param_2 == 0x10a) {
          uVar3 = param_3 & 3;
          bVar11 = uVar3 != 0;
          if (bVar11) {
            uVar3 = uVar3 << 1;
          }
          iVar8 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
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
              FUN_080153f4(*(int *)(param_1 + 0xfba1c) + 0x18,9);
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
                FUN_080153f4(iVar2 + 0x18,9);
              }
              FUN_08015360(iVar2 + 0x18,uVar3,9);
              *(undefined *)(iVar8 + 0x5e) = 1;
            }
          }
          *(ushort *)(iVar8 + 0x5a) = uVar1;
        }
        else if (param_2 < 0x10b) {
          if (param_2 == 0x106) {
            uVar3 = param_3 & 3;
            bVar11 = uVar3 != 0;
            if (bVar11) {
              uVar3 = uVar3 << 1;
            }
            iVar8 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
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
                FUN_080153f4(*(int *)(param_1 + 0xfba1c) + 0x18,8);
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
                  FUN_080153f4(iVar2 + 0x18,8);
                }
                FUN_08015360(iVar2 + 0x18,uVar3,8);
                *(undefined *)(iVar8 + 0x3e) = 1;
              }
            }
            *(ushort *)(iVar8 + 0x3a) = uVar1;
          }
          else {
            if (param_2 != 0x108) goto LAB_0800be04;
            *(ushort *)(*(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008) + 0x58) = uVar1;
          }
        }
        else if (param_2 == 0x10e) {
          uVar3 = param_3 & 3;
          bVar11 = uVar3 != 0;
          if (bVar11) {
            uVar3 = uVar3 << 1;
          }
          iVar8 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
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
              FUN_080153f4(*(int *)(param_1 + 0xfba1c) + 0x18,10);
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
                FUN_080153f4(iVar2 + 0x18,10);
              }
              FUN_08015360(iVar2 + 0x18,uVar3,10);
              *(undefined *)(iVar8 + 0x7e) = 1;
            }
          }
          *(ushort *)(iVar8 + 0x7a) = uVar1;
        }
        else {
          if (param_2 == 0x188) {
            printf("ARM9 IPCFIFOSEND write16 %x\n",param_3);
            return;
          }
          if (param_2 != 0x10c) goto LAB_0800be04;
          *(ushort *)(*(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008) + 0x78) = uVar1;
        }
      }
      else {
        if (param_2 == 0x212) {
          uVar3 = *(uint *)(param_1 + 0x1b250);
          param_3 = uVar3 & 0xffff | param_3 << 0x10;
          *(uint *)(param_1 + 0x1b250) = param_3;
          uVar3 = param_3 & ~uVar3;
joined_r0x0800be60:
          if (uVar3 == 0) {
            return;
          }
          param_3 = -*(int *)(param_1 + 0x1b248) & *(uint *)(param_1 + 0x1b254) & param_3;
          iVar8 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
          *(uint *)(iVar8 + 0x2100) = param_3;
          if (param_3 == 0) {
            return;
          }
          *(uint *)(iVar8 + 0x237c) = *(uint *)(iVar8 + 0x237c) | 2;
          return;
        }
        if (param_2 < 0x213) {
          if (param_2 != 0x208) {
            if (param_2 == 0x210) {
              uVar3 = *(uint *)(param_1 + 0x1b250);
              param_3 = param_3 | uVar3 & 0xffff0000;
              *(uint *)(param_1 + 0x1b250) = param_3;
              uVar3 = param_3 & ~uVar3;
              goto joined_r0x0800be60;
            }
            goto LAB_0800be04;
          }
          param_3 = param_3 & 1;
          iVar8 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
          if ((param_3 == 0) || (*(int *)(param_1 + 0x1b248) != 0)) {
            *(undefined4 *)(iVar8 + 0x2100) = 0;
          }
          else {
            uVar3 = *(uint *)(param_1 + 0x1b250) & *(uint *)(param_1 + 0x1b254);
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
        else {
          if (param_2 == 0x216) {
            return;
          }
          if (param_2 != 0x280) {
            if (param_2 == 0x214) {
              *(uint *)(param_1 + 0x1b254) = ~param_3 & *(uint *)(param_1 + 0x1b254);
              iVar8 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
              *(uint *)(iVar8 + 0x2100) = ~param_3 & *(uint *)(iVar8 + 0x2100);
              return;
            }
            goto LAB_0800be04;
          }
          param_3 = param_3 & 0x7fff;
          *(undefined *)(param_1 + 0xfc81c) = 0;
        }
      }
      goto LAB_0800b818;
    }
    if (0x6f < param_2) {
      if (param_2 == 0xd2) {
        *(ushort *)(param_1 + 0x1b112) = uVar1;
        uVar3 = (uint)*(ushort *)(param_1 + 0x1b110) | param_3 << 0x10;
        iVar8 = param_1 + 0xfc680;
        if (((int)uVar3 < 0) && (-1 < *(int *)(param_1 + 0xfc698))) {
          uVar9 = (uVar3 << 2) >> 0x1d;
          *(byte *)(param_1 + 0xfc69c) = (byte)((uVar3 << 2) >> 0x1d);
          *(undefined4 *)(param_1 + 0xfc690) = **(undefined4 **)(param_1 + 0xfc68c);
          uVar5 = (*(undefined4 **)(param_1 + 0xfc68c))[1];
          *(uint *)(param_1 + 0xfc698) = uVar3;
          *(undefined4 *)(param_1 + 0xfc694) = uVar5;
          if (uVar9 != 0 && uVar9 != 7) {
            return;
          }
          FUN_080167d8(param_1 + 0xfc638,param_1 + 0xfc680);
          return;
        }
      }
      else {
        if (0xd2 < param_2) {
          if (param_2 == 0x100) {
            *(ushort *)(*(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008) + 0x18) = uVar1;
          }
          else {
            if (param_2 != 0x102) {
              if (param_2 != 0xde) goto LAB_0800be04;
              *(ushort *)(param_1 + 0x1b11e) = uVar1;
              uVar3 = (uint)*(ushort *)(param_1 + 0x1b11c) | param_3 << 0x10;
              iVar8 = param_1 + 0xfc6a0;
              if (((int)uVar3 < 0) && (-1 < *(int *)(param_1 + 0xfc6b8))) {
                uVar9 = (uVar3 << 2) >> 0x1d;
                *(byte *)(param_1 + 0xfc6bc) = (byte)((uVar3 << 2) >> 0x1d);
                *(undefined4 *)(param_1 + 0xfc6b0) = **(undefined4 **)(param_1 + 0xfc6ac);
                uVar5 = (*(undefined4 **)(param_1 + 0xfc6ac))[1];
                *(uint *)(param_1 + 0xfc6b8) = uVar3;
                *(undefined4 *)(param_1 + 0xfc6b4) = uVar5;
                if (uVar9 != 0 && uVar9 != 7) {
                  return;
                }
                FUN_080167d8(param_1 + 0xfc638,param_1 + 0xfc6a0);
                return;
              }
              goto LAB_0800b6d0;
            }
            iVar8 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
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
                FUN_080153f4(*(int *)(param_1 + 0xfba1c) + 0x18,7);
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
                  FUN_080153f4(iVar2 + 0x18,7);
                }
                FUN_08015360(iVar2 + 0x18,uVar3,7);
                *(undefined *)(iVar8 + 0x1e) = 1;
              }
            }
            *(ushort *)(iVar8 + 0x1a) = uVar1;
          }
          goto LAB_0800b818;
        }
        if (param_2 == 0xba) {
          *(ushort *)(param_1 + 0x1b0fa) = uVar1;
          uVar3 = (uint)*(ushort *)(param_1 + 0x1b0f8) | param_3 << 0x10;
          iVar8 = param_1 + 0xfc640;
          if (((int)uVar3 < 0) && (-1 < *(int *)(param_1 + 0xfc658))) {
            uVar9 = (uVar3 << 2) >> 0x1d;
            *(byte *)(param_1 + 0xfc65c) = (byte)((uVar3 << 2) >> 0x1d);
            *(undefined4 *)(param_1 + 0xfc650) = **(undefined4 **)(param_1 + 0xfc64c);
            uVar5 = (*(undefined4 **)(param_1 + 0xfc64c))[1];
            *(uint *)(param_1 + 0xfc658) = uVar3;
            *(undefined4 *)(param_1 + 0xfc654) = uVar5;
            if (uVar9 != 0 && uVar9 != 7) {
              return;
            }
            FUN_080167d8(param_1 + 0xfc638,param_1 + 0xfc640);
            return;
          }
        }
        else {
          if (param_2 != 0xc6) goto LAB_0800be04;
          *(ushort *)(param_1 + 0x1b106) = uVar1;
          uVar3 = (uint)*(ushort *)(param_1 + 0x1b104) | param_3 << 0x10;
          iVar8 = param_1 + 0xfc660;
          if (((int)uVar3 < 0) && (-1 < *(int *)(param_1 + 0xfc678))) {
            uVar9 = (uVar3 << 2) >> 0x1d;
            *(byte *)(param_1 + 0xfc67c) = (byte)((uVar3 << 2) >> 0x1d);
            *(undefined4 *)(param_1 + 0xfc670) = **(undefined4 **)(param_1 + 0xfc66c);
            uVar5 = (*(undefined4 **)(param_1 + 0xfc66c))[1];
            *(uint *)(param_1 + 0xfc678) = uVar3;
            *(undefined4 *)(param_1 + 0xfc674) = uVar5;
            if (uVar9 != 0 && uVar9 != 7) {
              return;
            }
            FUN_080167d8(param_1 + 0xfc638,param_1 + 0xfc660);
            return;
          }
        }
      }
LAB_0800b6d0:
      *(uint *)(iVar8 + 0x18) = uVar3;
      return;
    }
    if (param_2 < 0x6c) {
      if (0x57 < param_2) {
        if (param_2 == 0x60) {
          param_3 = param_3 & 0xcfff;
          *(uint *)(*(int *)(param_1 + 0xfba24) + 0x9a50) = param_3;
          goto LAB_0800b818;
        }
        goto LAB_0800be04;
      }
      if ((param_2 < 8) && (3 < param_2)) goto LAB_0800be04;
    }
    uVar1 = *(ushort *)(*(int *)(param_1 + 0xfba1c) + 0x14);
    iVar8 = *(int *)(param_1 + 0xfba20) + 0x1d98;
  }
  else {
    if (param_2 == 0x352) {
      *(uint *)(*(int *)(param_1 + 0xfba24) + 0x9a54) =
           (uint)*(ushort *)(*(int *)(param_1 + 0xfba24) + 0x9a54) | param_3 << 0x10;
      goto LAB_0800b818;
    }
    if (param_2 < 0x353) {
      if (param_2 != 0x29e) {
        if (0x29e < param_2) {
          if (param_2 != 0x2ba) {
            if (0x2ba < param_2) {
              if (param_2 < 0x330) goto LAB_0800be04;
              if (param_2 < 0x33f) {
                FUN_0804c6e0(*(undefined4 *)(param_1 + 0xfba24),param_2 - 0x330 >> 1);
              }
              else {
                if (param_2 != 0x350) goto LAB_0800be04;
                *(uint *)(*(int *)(param_1 + 0xfba24) + 0x9a54) =
                     param_3 | *(uint *)(*(int *)(param_1 + 0xfba24) + 0x9a54) & 0xffff0000;
              }
              goto LAB_0800b818;
            }
            if (param_2 == 0x2b0) {
              param_3 = param_3 & 0x7fff;
              *(undefined *)(param_1 + 0xfc81d) = 0;
              goto LAB_0800b818;
            }
            if (param_2 != 0x2b8) goto LAB_0800be04;
          }
          *(undefined *)(param_1 + 0xfc81d) = 0;
          goto LAB_0800b818;
        }
        if (param_2 != 0x296) {
          if (param_2 < 0x297) {
            if ((param_2 != 0x292) && (param_2 != 0x294)) goto LAB_0800be04;
          }
          else if ((param_2 != 0x29a) && ((param_2 != 0x29c && (param_2 != 0x298))))
          goto LAB_0800be04;
        }
      }
      goto LAB_0800c110;
    }
    if (param_2 < 0x3bf) {
      if (param_2 < 0x380) {
        if (param_2 == 0x35c) {
          *(ushort *)(*(int *)(param_1 + 0xfba24) + 0x9a72) = uVar1;
        }
        else if (param_2 < 0x35d) {
          if (param_2 == 0x354) {
            *(ushort *)(*(int *)(param_1 + 0xfba24) + 0x9a6e) = uVar1;
          }
          else {
            if (param_2 != 0x356) goto LAB_0800be04;
            *(ushort *)(*(int *)(param_1 + 0xfba24) + 0x9a70) = uVar1;
          }
        }
        else {
          if (0x1e < param_2 - 0x360) goto LAB_0800be04;
          FUN_0804c748(*(undefined4 *)(param_1 + 0xfba24));
          FUN_0804c748(*(undefined4 *)(param_1 + 0xfba24),param_2 - 0x35f,param_3 >> 8);
        }
      }
      else {
        FUN_0804c65c(*(undefined4 *)(param_1 + 0xfba24),param_2 - 0x380 >> 1);
      }
      goto LAB_0800b818;
    }
    if (param_2 < 0x1058) {
      if (param_2 < 0x1008) {
        if (param_2 == 0x610) {
          *(ushort *)(*(int *)(param_1 + 0xfba24) + 0x9a74) = uVar1;
          goto LAB_0800b818;
        }
        if (param_2 < 0x610) goto LAB_0800be04;
        uVar3 = param_2 - 0x1000;
        goto joined_r0x0800bd34;
      }
    }
    else {
      uVar3 = param_2 - 0x106c;
joined_r0x0800bd34:
      if (3 < uVar3) {
LAB_0800be04:
        FUN_0800a708(param_1,param_2,param_3 & 0xff);
        FUN_0800a708(param_1,param_2 + 1,param_3 >> 8);
        return;
      }
    }
    uVar1 = *(ushort *)(*(int *)(param_1 + 0xfba1c) + 0x14);
    iVar8 = *(int *)(param_1 + 0xfba20) + 0x82cd8;
  }
  if (uVar1 < 0xc0) {
    FUN_08032cac(iVar8,param_2,param_3,2,uVar1);
  }
  else {
    local_2f = 2;
    local_38 = param_2;
    local_34 = param_3;
    FUN_08032168(iVar8,&local_38);
  }
LAB_0800b818:
  *(short *)(param_1 + (param_2 & 0x7fff) + 0x1b040) = (short)param_3;
  return;
}


