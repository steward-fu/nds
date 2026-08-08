/*
 * Ghidra decompilation
 *
 * Function : FUN_0800c2bc
 * Address  : 0800c2bc
 * Program  : drastic16
 */


void FUN_0800c2bc(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint local_28;
  uint local_24;
  undefined local_1f;
  
  if (param_2 == 0x2b0) {
    param_3 = param_3 & 0xffff7fff;
    *(undefined *)(param_1 + 0xfc81d) = 0;
    goto LAB_0800c3c8;
  }
  if (param_2 < 0x2b1) {
    if (param_2 == 0xdc) {
      *(uint *)(param_1 + 0x1b11c) = param_3;
      iVar6 = param_1 + 0xfc6a0;
      if (((int)param_3 < 0) && (-1 < *(int *)(param_1 + 0xfc6b8))) {
        uVar3 = (param_3 << 2) >> 0x1d;
        *(byte *)(param_1 + 0xfc6bc) = (byte)((param_3 << 2) >> 0x1d);
        *(undefined4 *)(param_1 + 0xfc6b0) = **(undefined4 **)(param_1 + 0xfc6ac);
        uVar4 = (*(undefined4 **)(param_1 + 0xfc6ac))[1];
        *(uint *)(param_1 + 0xfc6b8) = param_3;
        *(undefined4 *)(param_1 + 0xfc6b4) = uVar4;
        if (uVar3 != 0 && uVar3 != 7) {
          return;
        }
        FUN_080167d8(param_1 + 0xfc638,param_1 + 0xfc6a0);
        return;
      }
      goto LAB_0800c424;
    }
    if (0xdc < param_2) {
      if (param_2 == 0x214) {
        *(uint *)(param_1 + 0x1b254) = ~(param_3 & 0xffdfffff) & *(uint *)(param_1 + 0x1b254);
        iVar6 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
        *(uint *)(iVar6 + 0x2100) = ~(param_3 & 0xffdfffff) & *(uint *)(iVar6 + 0x2100);
        return;
      }
      if (param_2 < 0x215) {
        if (param_2 != 0x1a4) {
          if (param_2 < 0x1a5) {
            if (param_2 == 0x188) {
              if ((*(byte *)(param_1 + 0x1b1c5) & 0x80) == 0) {
                return;
              }
              if ((*(byte *)(param_1 + 0xfc7e6) & 2) != 0) {
                *(byte *)(param_1 + 0x1b1c5) = *(byte *)(param_1 + 0x1b1c5) | 0x40;
                return;
              }
              FUN_0801d860(param_1 + 0xfc798,param_3);
              bVar2 = *(byte *)(param_1 + 0x231c5) & 0xfe;
              *(byte *)(param_1 + 0x231c5) = bVar2;
              *(byte *)(param_1 + 0x1b1c4) = *(byte *)(param_1 + 0x1b1c4) & 0xfe;
              bVar5 = *(byte *)(param_1 + 0xfc7e6);
              if ((bVar5 & 2) != 0) {
                printf("CPU %s made its send FIFO full.\n",&DAT_080e56e4);
                *(byte *)(param_1 + 0x1b1c4) = *(byte *)(param_1 + 0x1b1c4) | 2;
                bVar2 = *(byte *)(param_1 + 0x231c5) | 2;
                *(byte *)(param_1 + 0x231c5) = bVar2;
                bVar5 = *(byte *)(param_1 + 0xfc7e6);
              }
              if ((bVar5 & 1) != 0) {
                return;
              }
              if ((bVar2 & 4) == 0) {
                return;
              }
              iVar6 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
              if (*(char *)(iVar6 + 0x2104) == '\x01') {
                *(uint *)(iVar6 + 0x237c) = *(uint *)(iVar6 + 0x237c) | 4;
              }
              iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0xfba30) + 0x800008) + 0x2080);
              uVar3 = *(uint *)(iVar7 + 0x214) | 0x40000;
              *(uint *)(iVar7 + 0x214) = uVar3;
              iVar6 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
              if ((*(byte *)(iVar6 + 0x2105) & 6) != 0) {
                return;
              }
              *(uint *)(iVar6 + 0x2100) =
                   uVar3 & -*(int *)(iVar7 + 0x208) & *(uint *)(iVar7 + 0x210);
              return;
            }
          }
          else {
            if (param_2 == 0x208) {
              param_3 = param_3 & 1;
              iVar6 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
              if ((param_3 == 0) || (*(int *)(param_1 + 0x1b248) != 0)) {
                *(undefined4 *)(iVar6 + 0x2100) = 0;
              }
              else {
                uVar3 = *(uint *)(param_1 + 0x1b250) & *(uint *)(param_1 + 0x1b254);
                *(uint *)(iVar6 + 0x2100) = uVar3;
                if (uVar3 == 0) {
                  param_3 = 1;
                }
                else {
                  param_3 = 1;
                  *(uint *)(iVar6 + 0x237c) = *(uint *)(iVar6 + 0x237c) | 2;
                }
              }
              goto LAB_0800c3c8;
            }
            if (param_2 == 0x210) {
              uVar3 = *(uint *)(param_1 + 0x1b250);
              *(uint *)(param_1 + 0x1b250) = param_3;
              if ((param_3 & ~uVar3) == 0) {
                return;
              }
              uVar3 = param_3 & *(uint *)(param_1 + 0x1b254) & -*(int *)(param_1 + 0x1b248);
              iVar6 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
              *(uint *)(iVar6 + 0x2100) = uVar3;
              if (uVar3 == 0) {
                return;
              }
              *(uint *)(iVar6 + 0x237c) = *(uint *)(iVar6 + 0x237c) | 2;
              return;
            }
          }
          goto LAB_0800c818;
        }
        if ((int)param_3 < 0) {
          FUN_0805b9d4(*(undefined4 *)(param_1 + 0xfc7e8),param_3);
          return;
        }
      }
      else {
        if (param_2 != 0x294) {
          if (param_2 < 0x295) {
            if (param_2 == 0x280) {
              param_3 = param_3 & 0xffff7fff;
              *(undefined *)(param_1 + 0xfc81c) = 0;
              goto LAB_0800c3c8;
            }
            if (param_2 != 0x290) goto LAB_0800c818;
          }
          else if ((param_2 != 0x298) && (param_2 != 0x29c)) goto LAB_0800c818;
        }
        *(undefined *)(param_1 + 0xfc81c) = 0;
      }
      goto LAB_0800c3c8;
    }
    if (param_2 == 0x60) {
      param_3 = param_3 & 0xffffcfff;
      *(uint *)(*(int *)(param_1 + 0xfba24) + 0x9a50) = param_3;
      goto LAB_0800c3c8;
    }
    if (param_2 < 0x61) {
      if ((3 < param_2) && (0x4f < param_2 - 8)) goto LAB_0800c818;
    }
    else {
      if (param_2 == 0xb8) {
        *(uint *)(param_1 + 0x1b0f8) = param_3;
        iVar6 = param_1 + 0xfc640;
        if (((int)param_3 < 0) && (-1 < *(int *)(param_1 + 0xfc658))) {
          uVar3 = (param_3 << 2) >> 0x1d;
          *(byte *)(param_1 + 0xfc65c) = (byte)((param_3 << 2) >> 0x1d);
          *(undefined4 *)(param_1 + 0xfc650) = **(undefined4 **)(param_1 + 0xfc64c);
          uVar4 = (*(undefined4 **)(param_1 + 0xfc64c))[1];
          *(uint *)(param_1 + 0xfc658) = param_3;
          *(undefined4 *)(param_1 + 0xfc654) = uVar4;
          if (uVar3 != 0 && uVar3 != 7) {
            return;
          }
          FUN_080167d8(param_1 + 0xfc638,param_1 + 0xfc640);
          return;
        }
LAB_0800c424:
        *(uint *)(iVar6 + 0x18) = param_3;
        return;
      }
      if (0xb8 < param_2) {
        if (param_2 == 0xc4) {
          *(uint *)(param_1 + 0x1b104) = param_3;
          iVar6 = param_1 + 0xfc660;
          if (((int)param_3 < 0) && (-1 < *(int *)(param_1 + 0xfc678))) {
            uVar3 = (param_3 << 2) >> 0x1d;
            *(byte *)(param_1 + 0xfc67c) = (byte)((param_3 << 2) >> 0x1d);
            *(undefined4 *)(param_1 + 0xfc670) = **(undefined4 **)(param_1 + 0xfc66c);
            uVar4 = (*(undefined4 **)(param_1 + 0xfc66c))[1];
            *(uint *)(param_1 + 0xfc678) = param_3;
            *(undefined4 *)(param_1 + 0xfc674) = uVar4;
            if (uVar3 != 0 && uVar3 != 7) {
              return;
            }
            FUN_080167d8(param_1 + 0xfc638,param_1 + 0xfc660);
            return;
          }
        }
        else {
          if (param_2 != 0xd0) goto LAB_0800c818;
          *(uint *)(param_1 + 0x1b110) = param_3;
          iVar6 = param_1 + 0xfc680;
          if (((int)param_3 < 0) && (-1 < *(int *)(param_1 + 0xfc698))) {
            uVar3 = (param_3 << 2) >> 0x1d;
            *(byte *)(param_1 + 0xfc69c) = (byte)((param_3 << 2) >> 0x1d);
            *(undefined4 *)(param_1 + 0xfc690) = **(undefined4 **)(param_1 + 0xfc68c);
            uVar4 = (*(undefined4 **)(param_1 + 0xfc68c))[1];
            *(uint *)(param_1 + 0xfc698) = param_3;
            *(undefined4 *)(param_1 + 0xfc694) = uVar4;
            if (uVar3 != 0 && uVar3 != 7) {
              return;
            }
            FUN_080167d8(param_1 + 0xfc638,param_1 + 0xfc680);
            return;
          }
        }
        goto LAB_0800c424;
      }
      if (3 < param_2 - 0x6c) goto LAB_0800c818;
    }
    uVar1 = *(ushort *)(*(int *)(param_1 + 0xfba1c) + 0x14);
    iVar6 = *(int *)(param_1 + 0xfba20) + 0x1d98;
  }
  else {
    if (param_2 < 0x440) {
      if (param_2 < 0x400) {
        if (param_2 == 0x354) {
          *(short *)(*(int *)(param_1 + 0xfba24) + 0x9a6e) = (short)param_3;
        }
        else if (param_2 < 0x355) {
          if (param_2 < 0x33d) {
            if (param_2 < 0x330) {
              if (param_2 != 0x2b8) goto LAB_0800c818;
              *(undefined *)(param_1 + 0xfc81d) = 0;
            }
            else {
              uVar3 = param_2 - 0x330 >> 1;
              FUN_0804c6e0(*(undefined4 *)(param_1 + 0xfba24),uVar3);
              FUN_0804c6e0(*(undefined4 *)(param_1 + 0xfba24),uVar3 + 1,param_3 >> 0x10);
            }
          }
          else {
            if (param_2 != 0x350) goto LAB_0800c818;
            *(uint *)(*(int *)(param_1 + 0xfba24) + 0x9a54) = param_3;
          }
        }
        else if (param_2 < 0x37d) {
          if (param_2 < 0x360) {
            if (param_2 != 0x358) goto LAB_0800c818;
            iVar6 = *(int *)(param_1 + 0xfba24);
            uVar4 = FUN_08055ad8(param_3,(param_3 << 0xb) >> 0x1b);
            *(undefined4 *)(iVar6 + 0x9a64) = uVar4;
          }
          else {
            FUN_0804c748(*(undefined4 *)(param_1 + 0xfba24),param_2 - 0x360);
            FUN_0804c748(*(undefined4 *)(param_1 + 0xfba24),param_2 - 0x35f,param_3 >> 8);
            FUN_0804c748(*(undefined4 *)(param_1 + 0xfba24),param_2 - 0x35e,param_3 >> 0x10);
            FUN_0804c748(*(undefined4 *)(param_1 + 0xfba24),param_2 - 0x35d,param_3 >> 0x18);
          }
        }
        else {
          if (0x3c < param_2 - 0x380) goto LAB_0800c818;
          uVar3 = param_2 - 0x380 >> 1;
          FUN_0804c65c(*(undefined4 *)(param_1 + 0xfba24),uVar3);
          FUN_0804c65c(*(undefined4 *)(param_1 + 0xfba24),uVar3 + 1,param_3 >> 0x10);
        }
      }
      else {
        FUN_08050d94(*(undefined4 *)(param_1 + 0xfba24),param_3);
      }
      goto LAB_0800c3c8;
    }
    if (param_2 < 0x1058) {
      if (param_2 < 0x1008) {
        if (param_2 < 0x5c9) {
          FUN_08050844(*(undefined4 *)(param_1 + 0xfba24),(param_2 - 0x440 >> 2) + 0x10);
          return;
        }
        if (3 < param_2 - 0x1000) goto LAB_0800c818;
      }
    }
    else {
      if (param_2 < 0x106c) {
LAB_0800c818:
        FUN_0800b5f4(param_1,param_2,param_3 & 0xffff);
        FUN_0800b5f4(param_1,param_2 + 2,param_3 >> 0x10);
        return;
      }
      if (0x106f < param_2) {
        if (param_2 == 0x100010) {
          FUN_0805c03c(*(undefined4 *)(param_1 + 0xfc7e8),param_3);
          return;
        }
        goto LAB_0800c818;
      }
    }
    uVar1 = *(ushort *)(*(int *)(param_1 + 0xfba1c) + 0x14);
    iVar6 = *(int *)(param_1 + 0xfba20) + 0x82cd8;
  }
  if (uVar1 < 0xc0) {
    FUN_08032cac(iVar6,param_2,param_3,4,uVar1);
  }
  else {
    local_1f = 4;
    local_28 = param_2;
    local_24 = param_3;
    FUN_08032168(iVar6,&local_28);
  }
LAB_0800c3c8:
  *(uint *)(param_1 + (param_2 & 0x7fff) + 0x1b040) = param_3;
  return;
}


