/*
 * Ghidra decompilation
 *
 * Function : FUN_0800a708
 * Address  : 0800a708
 * Program  : drastic16
 */


void FUN_0800a708(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  undefined uVar2;
  int iVar3;
  size_t __pgoff;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *__start;
  uint uVar10;
  bool bVar11;
  uint local_38;
  uint local_34;
  undefined local_2f;
  
  if (param_2 == 0x213) {
    uVar8 = *(uint *)(param_1 + 0x1b250);
    param_3 = uVar8 & 0xffffff | param_3 << 0x18;
    *(uint *)(param_1 + 0x1b250) = param_3;
    uVar8 = param_3 & ~uVar8;
    goto joined_r0x0800afa0;
  }
  if (param_2 < 0x214) {
    if (param_2 == 0xdf) {
      uVar8 = *(uint *)(param_1 + 0x1b11c) & 0xff000000 | param_3 << 0x18;
      *(uint *)(param_1 + 0x1b11c) = uVar8;
      iVar4 = param_1 + 0xfc6a0;
      if (((int)uVar8 < 0) && (-1 < *(int *)(param_1 + 0xfc6b8))) {
        uVar10 = (uVar8 << 2) >> 0x1d;
        *(byte *)(param_1 + 0xfc6bc) = (byte)((uVar8 << 2) >> 0x1d);
        *(undefined4 *)(param_1 + 0xfc6b0) = **(undefined4 **)(param_1 + 0xfc6ac);
        uVar5 = (*(undefined4 **)(param_1 + 0xfc6ac))[1];
        *(uint *)(param_1 + 0xfc6b8) = uVar8;
        *(undefined4 *)(param_1 + 0xfc6b4) = uVar5;
        if (uVar10 == 0 || uVar10 == 7) {
          FUN_080167d8(param_1 + 0xfc638,param_1 + 0xfc6a0);
          return;
        }
        return;
      }
      goto LAB_0800af7c;
    }
    if (0xdf < param_2) {
      if (param_2 < 0x18c) {
        if (param_2 < 0x188) {
          if (param_2 == 0x180) {
            return;
          }
          if (param_2 < 0x181) {
            if (param_2 - 0x130 < 2) {
              return;
            }
          }
          else {
            if (param_2 == 0x184) {
              if (((param_3 & 4) != 0) && ((*(byte *)(param_1 + 0xfc7e6) & 1) != 0)) {
                iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008) + 0x2080);
                uVar8 = *(uint *)(iVar4 + 0x214) | 0x20000;
                *(uint *)(iVar4 + 0x214) = uVar8;
                iVar3 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
                if ((*(byte *)(iVar3 + 0x2105) & 6) == 0) {
                  uVar8 = uVar8 & -*(int *)(iVar4 + 0x208) & *(uint *)(iVar4 + 0x210);
                  *(uint *)(iVar3 + 0x2100) = uVar8;
                }
                else {
                  uVar8 = *(uint *)(iVar3 + 0x2100);
                }
                if (uVar8 != 0) {
                  *(uint *)(iVar3 + 0x237c) = *(uint *)(iVar3 + 0x237c) | 2;
                }
              }
              if ((param_3 & 8) != 0) {
                FUN_0801d8fc(param_1 + 0xfc798);
              }
              *(byte *)(param_1 + 0x1b1c4) =
                   (byte)(param_3 & 4) | *(byte *)(param_1 + 0x1b1c4) & 0xfb;
              return;
            }
            if (param_2 == 0x185) {
              bVar6 = *(byte *)(param_1 + 0x1b1c5);
              if (((param_3 & 4) != 0) && ((*(byte *)(param_1 + 0xfc796) & 1) == 0)) {
                iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008) + 0x2080);
                uVar8 = *(uint *)(iVar4 + 0x214) | 0x40000;
                *(uint *)(iVar4 + 0x214) = uVar8;
                iVar3 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
                if ((*(byte *)(iVar3 + 0x2105) & 6) == 0) {
                  uVar8 = uVar8 & -*(int *)(iVar4 + 0x208) & *(uint *)(iVar4 + 0x210);
                  *(uint *)(iVar3 + 0x2100) = uVar8;
                }
                else {
                  uVar8 = *(uint *)(iVar3 + 0x2100);
                }
                if (uVar8 != 0) {
                  *(uint *)(iVar3 + 0x237c) = *(uint *)(iVar3 + 0x237c) | 2;
                }
              }
              if ((param_3 & 0x40) != 0) {
                bVar6 = bVar6 & 0xbf;
              }
              *(byte *)(param_1 + 0x1b1c5) = bVar6 & 0x7b | (byte)param_3 & 0x84;
              return;
            }
            if (param_2 == 0x181) {
              if (((param_3 & 0x20) != 0) && ((*(byte *)(param_1 + 0x231c1) & 0x40) != 0)) {
                iVar4 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
                if (*(char *)(iVar4 + 0x2104) == '\x01') {
                  *(uint *)(iVar4 + 0x237c) = *(uint *)(iVar4 + 0x237c) | 4;
                }
                iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0xfba30) + 0x800008) + 0x2080);
                uVar8 = *(uint *)(iVar3 + 0x214) | 0x10000;
                *(uint *)(iVar3 + 0x214) = uVar8;
                iVar4 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
                if ((*(byte *)(iVar4 + 0x2105) & 6) == 0) {
                  *(uint *)(iVar4 + 0x2100) =
                       uVar8 & -*(int *)(iVar3 + 0x208) & *(uint *)(iVar3 + 0x210);
                }
              }
              *(byte *)(param_1 + 0x231c0) = (byte)param_3 & 0xf;
              *(ushort *)(param_1 + 0x1b1c1) = (ushort)param_3 & 0x4f;
            }
          }
        }
        else {
          puts("store io8 ARM9 IPCFIFOSEND");
        }
      }
      else {
        if (0x20b < param_2) {
          if (param_2 == 0x211) {
            uVar8 = *(uint *)(param_1 + 0x1b250);
            param_3 = uVar8 & 0xffff00ff | param_3 << 8;
            *(uint *)(param_1 + 0x1b250) = param_3;
            uVar8 = param_3 & ~uVar8;
          }
          else if (param_2 < 0x212) {
            if (param_2 != 0x210) goto LAB_0800a8f4;
            uVar8 = *(uint *)(param_1 + 0x1b250);
            param_3 = param_3 | uVar8 & 0xffffff00;
            *(uint *)(param_1 + 0x1b250) = param_3;
            uVar8 = param_3 & ~uVar8;
          }
          else {
            uVar8 = *(uint *)(param_1 + 0x1b250);
            param_3 = uVar8 & 0xff00ffff | param_3 << 0x10;
            *(uint *)(param_1 + 0x1b250) = param_3;
            uVar8 = param_3 & ~uVar8;
          }
joined_r0x0800afa0:
          if (uVar8 == 0) {
            return;
          }
          param_3 = -*(int *)(param_1 + 0x1b248) & *(uint *)(param_1 + 0x1b254) & param_3;
          iVar4 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
          *(uint *)(iVar4 + 0x2100) = param_3;
          if (param_3 != 0) {
            *(uint *)(iVar4 + 0x237c) = *(uint *)(iVar4 + 0x237c) | 2;
            return;
          }
          return;
        }
        if (0x208 < param_2) {
          return;
        }
        if (param_2 == 0x1a3) {
          return;
        }
        if (param_2 == 0x208) {
          param_3 = param_3 & 1;
          iVar4 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
          if ((param_3 == 0) || (*(int *)(param_1 + 0x1b248) != 0)) {
            *(undefined4 *)(iVar4 + 0x2100) = 0;
          }
          else {
            uVar8 = *(uint *)(param_1 + 0x1b250) & *(uint *)(param_1 + 0x1b254);
            *(uint *)(iVar4 + 0x2100) = uVar8;
            if (uVar8 == 0) {
              param_3 = 1;
            }
            else {
              param_3 = 1;
              *(uint *)(iVar4 + 0x237c) = *(uint *)(iVar4 + 0x237c) | 2;
            }
          }
        }
        else if (param_2 == 0x1a2) {
          uVar1 = *(ushort *)(param_1 + 0x1b1e0);
          uVar2 = FUN_0805d3d0(*(int *)(param_1 + 0xfc7e8) + 0x8b4,param_3);
          if ((uVar1 & 0x40) == 0) {
            FUN_0805d7b8(*(int *)(param_1 + 0xfc7e8) + 0x8b4);
          }
          *(undefined *)(param_1 + 0x1b1e2) = uVar2;
          return;
        }
      }
      goto LAB_0800a8f4;
    }
    if (0x6f < param_2) {
      if (param_2 == 199) {
        uVar8 = *(uint *)(param_1 + 0x1b104) & 0xff000000 | param_3 << 0x18;
        *(uint *)(param_1 + 0x1b104) = uVar8;
        iVar4 = param_1 + 0xfc660;
        if (((int)uVar8 < 0) && (-1 < *(int *)(param_1 + 0xfc678))) {
          uVar10 = (uVar8 << 2) >> 0x1d;
          *(byte *)(param_1 + 0xfc67c) = (byte)((uVar8 << 2) >> 0x1d);
          *(undefined4 *)(param_1 + 0xfc670) = **(undefined4 **)(param_1 + 0xfc66c);
          uVar5 = (*(undefined4 **)(param_1 + 0xfc66c))[1];
          *(uint *)(param_1 + 0xfc678) = uVar8;
          *(undefined4 *)(param_1 + 0xfc674) = uVar5;
          if (uVar10 == 0 || uVar10 == 7) {
            FUN_080167d8(param_1 + 0xfc638,param_1 + 0xfc660);
            return;
          }
          return;
        }
LAB_0800af7c:
        *(uint *)(iVar4 + 0x18) = uVar8;
        return;
      }
      if (param_2 < 200) {
        if (param_2 == 0xbb) {
          uVar8 = *(uint *)(param_1 + 0x1b0f8) & 0xff000000 | param_3 << 0x18;
          *(uint *)(param_1 + 0x1b0f8) = uVar8;
          iVar4 = param_1 + 0xfc640;
          if (((int)uVar8 < 0) && (-1 < *(int *)(param_1 + 0xfc658))) {
            uVar10 = (uVar8 << 2) >> 0x1d;
            *(byte *)(param_1 + 0xfc65c) = (byte)((uVar8 << 2) >> 0x1d);
            *(undefined4 *)(param_1 + 0xfc650) = **(undefined4 **)(param_1 + 0xfc64c);
            uVar5 = (*(undefined4 **)(param_1 + 0xfc64c))[1];
            *(uint *)(param_1 + 0xfc658) = uVar8;
            *(undefined4 *)(param_1 + 0xfc654) = uVar5;
            if (uVar10 == 0 || uVar10 == 7) {
              FUN_080167d8(param_1 + 0xfc638,param_1 + 0xfc640);
              return;
            }
            return;
          }
          goto LAB_0800af7c;
        }
        if (param_2 == 0xc6) {
          uVar8 = *(uint *)(param_1 + 0x1b104) & 0xff0000 | param_3 << 0x10;
          *(uint *)(param_1 + 0x1b104) = uVar8;
          *(uint *)(param_1 + 0xfc678) = uVar8;
          return;
        }
        if (param_2 == 0xba) {
          uVar8 = *(uint *)(param_1 + 0x1b0f8) & 0xff0000 | param_3 << 0x10;
          *(uint *)(param_1 + 0x1b0f8) = uVar8;
          *(uint *)(param_1 + 0xfc658) = uVar8;
          return;
        }
      }
      else {
        if (param_2 == 0xd3) {
          uVar8 = *(uint *)(param_1 + 0x1b110) & 0xff000000 | param_3 << 0x18;
          *(uint *)(param_1 + 0x1b110) = uVar8;
          iVar4 = param_1 + 0xfc680;
          if (((int)uVar8 < 0) && (-1 < *(int *)(param_1 + 0xfc698))) {
            uVar10 = (uVar8 << 2) >> 0x1d;
            *(byte *)(param_1 + 0xfc69c) = (byte)((uVar8 << 2) >> 0x1d);
            *(undefined4 *)(param_1 + 0xfc690) = **(undefined4 **)(param_1 + 0xfc68c);
            uVar5 = (*(undefined4 **)(param_1 + 0xfc68c))[1];
            *(uint *)(param_1 + 0xfc698) = uVar8;
            *(undefined4 *)(param_1 + 0xfc694) = uVar5;
            if (uVar10 == 0 || uVar10 == 7) {
              FUN_080167d8(param_1 + 0xfc638,param_1 + 0xfc680);
              return;
            }
            return;
          }
          goto LAB_0800af7c;
        }
        if (param_2 == 0xde) {
          uVar8 = *(uint *)(param_1 + 0x1b11c) & 0xff0000 | param_3 << 0x10;
          *(uint *)(param_1 + 0x1b11c) = uVar8;
          *(uint *)(param_1 + 0xfc6b8) = uVar8;
          return;
        }
        if (param_2 == 0xd2) {
          uVar8 = *(uint *)(param_1 + 0x1b110) & 0xff0000 | param_3 << 0x10;
          *(uint *)(param_1 + 0x1b110) = uVar8;
          *(uint *)(param_1 + 0xfc698) = uVar8;
          return;
        }
      }
      goto LAB_0800a8f4;
    }
    if (param_2 < 0x6c) {
      if (param_2 < 8) {
        if (5 < param_2) {
          return;
        }
        if (3 < param_2) {
          if (param_2 == 4) {
            param_3 = param_3 & 0xfffffff8 | *(byte *)(param_1 + 0x1b044) & 7;
          }
          goto LAB_0800a8f4;
        }
      }
      else if (0x57 < param_2) goto LAB_0800a8f4;
    }
    uVar1 = *(ushort *)(*(int *)(param_1 + 0xfba1c) + 0x14);
    iVar4 = *(int *)(param_1 + 0xfba20) + 0x1d98;
  }
  else {
    if (param_2 < 0x2a0) {
      if (param_2 < 0x290) {
        if (param_2 == 0x244) {
          FUN_080203f8(*(undefined4 *)(param_1 + 0xfba20),*(undefined4 *)(param_1 + 0x15020),4,
                       param_3);
          goto LAB_0800a8f4;
        }
        if (param_2 < 0x245) {
          if (param_2 == 0x240) {
            FUN_080203f8(*(undefined4 *)(param_1 + 0xfba20),*(undefined4 *)(param_1 + 0x15010),0,
                         param_3);
          }
          else if (param_2 < 0x241) {
            if (param_2 == 0x214) {
              *(uint *)(param_1 + 0x1b254) = ~param_3 & *(uint *)(param_1 + 0x1b254);
              iVar4 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
              *(uint *)(iVar4 + 0x2100) = ~param_3 & *(uint *)(iVar4 + 0x2100);
              return;
            }
            if (param_2 < 0x218) {
              return;
            }
          }
          else if (param_2 == 0x242) {
            FUN_080203f8(*(undefined4 *)(param_1 + 0xfba20),*(undefined4 *)(param_1 + 0x15018),2,
                         param_3);
          }
          else if (param_2 < 0x243) {
            FUN_080203f8(*(undefined4 *)(param_1 + 0xfba20),*(undefined4 *)(param_1 + 0x15014),1,
                         param_3);
          }
          else {
            FUN_080203f8(*(undefined4 *)(param_1 + 0xfba20),*(undefined4 *)(param_1 + 0x1501c),3,
                         param_3);
          }
          goto LAB_0800a8f4;
        }
        if (param_2 == 0x248) {
          FUN_080203f8(*(undefined4 *)(param_1 + 0xfba20),*(undefined4 *)(param_1 + 0x1502c),7,
                       param_3);
          goto LAB_0800a8f4;
        }
        if (param_2 < 0x249) {
          if (param_2 == 0x246) {
            FUN_080203f8(*(undefined4 *)(param_1 + 0xfba20),*(undefined4 *)(param_1 + 0x15028),6,
                         param_3);
          }
          else if (param_2 < 0x247) {
            FUN_080203f8(*(undefined4 *)(param_1 + 0xfba20),*(undefined4 *)(param_1 + 0x15024),5,
                         param_3);
          }
          else {
            param_3 = param_3 & 3;
            bVar6 = *(byte *)(param_1 + 0x1b287);
            if (bVar6 != param_3) {
              iVar4 = *(int *)(param_1 + 8);
              bVar11 = (bVar6 & 1) != 0;
              if (bVar11) {
                iVar3 = param_1;
                uVar8 = param_1 + 0x6b000;
              }
              else {
                iVar3 = param_1 + 0x10;
                uVar8 = param_2;
              }
              iVar9 = iVar4;
              if (bVar11) {
                iVar9 = uVar8 + 0x40;
                iVar3 = iVar4;
              }
              bVar11 = (bVar6 & 2) != 0;
              iVar7 = 0xfba04;
              *(int *)(param_1 + 0xfba0c) = iVar3;
              *(int *)(param_1 + 0xfba04) = iVar9;
              if (bVar11) {
                iVar7 = param_1 + 0x6b000;
              }
              iVar9 = *(int *)(param_1 + 0xfba2c);
              iVar3 = iVar4 + 0x4000;
              if (!bVar11) {
                iVar3 = param_1 + 0x4000;
                iVar7 = iVar4 + 0x4000;
              }
              iVar4 = *(int *)(iVar9 + 0x800004);
              if (bVar11) {
                iVar7 = iVar7 + 0x40;
              }
              else {
                iVar3 = iVar3 + 0x10;
              }
              uVar8 = *(uint *)(iVar4 + 0xfc7f4);
              *(int *)(param_1 + 0xfba10) = iVar3;
              uVar10 = *(uint *)(iVar4 + 0xfc7f8);
              *(int *)(param_1 + 0xfba08) = iVar7;
              if ((uVar8 < 0x3000001) && (0x4000000 < uVar10)) {
                FUN_0800a1fc(iVar9,0x3000000,uVar8 + 0xfd000000);
                iVar4 = 0x4000000 - uVar10;
              }
              else {
                iVar4 = 0x1000000;
                uVar8 = 0x3000000;
              }
              FUN_0800a1fc(iVar9,uVar8,iVar4);
              iVar4 = *(int *)(param_1 + 0xfba30);
              uVar8 = *(uint *)(*(int *)(iVar4 + 0x800004) + 0xfc7f4);
              uVar10 = *(uint *)(*(int *)(iVar4 + 0x800004) + 0xfc7f8);
              if ((uVar8 < 0x3000001) && (0x3800000 < uVar10)) {
                FUN_0800a1fc(iVar4,0x3000000,uVar8 + 0xfd000000);
                iVar3 = 0x3800000 - uVar10;
              }
              else {
                iVar3 = 0x800000;
                uVar8 = 0x3000000;
              }
              FUN_0800a1fc(iVar4,uVar8,iVar3);
              iVar4 = 0x3000000;
              do {
                iVar3 = *(int *)(param_1 + 0xfc80c);
                __pgoff = __aeabi_uidiv(0x408000,*(undefined4 *)(param_1 + 0xfc800));
                __start = (void *)(iVar4 + iVar3);
                iVar4 = iVar4 + 0x8000;
                remap_file_pages(__start,0x8000,0,__pgoff,0);
              } while (iVar4 != 0x4000000);
              *(char *)(param_1 + 0x23281) = (char)param_3;
            }
          }
          goto LAB_0800a8f4;
        }
        if (param_2 != 0x280) {
          if (param_2 == 0x281) {
            param_3 = param_3 & 0x7f;
            *(undefined *)(param_1 + 0xfc81c) = 0;
          }
          else if (param_2 == 0x249) {
            FUN_080203f8(*(undefined4 *)(param_1 + 0xfba20),*(undefined4 *)(param_1 + 0x15030),8,
                         param_3);
          }
          goto LAB_0800a8f4;
        }
      }
      *(undefined *)(param_1 + 0xfc81c) = 0;
      goto LAB_0800a8f4;
    }
    if (param_2 < 0x3c0) {
      if (param_2 < 0x380) {
        if (param_2 < 700) {
          if ((param_2 < 0x2b8) && (param_2 != 0x2b0)) {
            if (param_2 == 0x2b1) {
              param_3 = param_3 & 0x7f;
            }
          }
          else {
            *(undefined *)(param_1 + 0xfc81d) = 0;
          }
        }
        else if (0x32f < param_2) {
          if (param_2 < 0x340) {
            uVar8 = param_2 - 0x330 >> 1;
            uVar10 = FUN_0804c6cc(*(undefined4 *)(param_1 + 0xfba24),uVar8);
            if ((param_2 & 1) != 0) {
              param_3 = uVar10 & 0xff;
            }
            FUN_0804c6e0(*(undefined4 *)(param_1 + 0xfba24),uVar8,param_3);
          }
          else if (0x35f < param_2) {
            FUN_0804c748(*(undefined4 *)(param_1 + 0xfba24),param_2 - 0x360);
          }
        }
      }
      else {
        uVar8 = param_2 - 0x380 >> 1;
        uVar10 = FUN_0804c648(*(undefined4 *)(param_1 + 0xfba24),uVar8);
        if ((param_2 & 1) != 0) {
          param_3 = uVar10 & 0xff;
        }
        FUN_0804c65c(*(undefined4 *)(param_1 + 0xfba24),uVar8,param_3);
      }
      goto LAB_0800a8f4;
    }
    if (param_2 < 0x1058) {
      if (param_2 < 0x1008) {
        if (param_2 == 0x603) {
          param_3 = param_3 >> 6;
          if ((param_3 - 1 & 0xff) < 2) {
            iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008) + 0x2080);
            uVar8 = *(uint *)(iVar4 + 0x214) | 0x200000;
            *(uint *)(iVar4 + 0x214) = uVar8;
            iVar3 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
            if ((*(byte *)(iVar3 + 0x2105) & 6) == 0) {
              uVar8 = uVar8 & -*(int *)(iVar4 + 0x208) & *(uint *)(iVar4 + 0x210);
              *(uint *)(iVar3 + 0x2100) = uVar8;
            }
            else {
              uVar8 = *(uint *)(iVar3 + 0x2100);
            }
            if (uVar8 != 0) {
              *(uint *)(iVar3 + 0x237c) = *(uint *)(iVar3 + 0x237c) | 2;
            }
          }
          else {
            *(uint *)(param_1 + 0x1b254) = *(uint *)(param_1 + 0x1b254) & 0xffdfffff;
            iVar4 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
            *(uint *)(iVar4 + 0x2100) = *(uint *)(iVar4 + 0x2100) & 0xffdfffff;
          }
          goto LAB_0800a8f4;
        }
        if (param_2 < 0x603) goto LAB_0800a8f4;
        uVar8 = param_2 - 0x1000;
        goto joined_r0x0800b08c;
      }
    }
    else {
      uVar8 = param_2 - 0x106c;
joined_r0x0800b08c:
      if (3 < uVar8) goto LAB_0800a8f4;
    }
    uVar1 = *(ushort *)(*(int *)(param_1 + 0xfba1c) + 0x14);
    iVar4 = *(int *)(param_1 + 0xfba20) + 0x82cd8;
  }
  if (uVar1 < 0xc0) {
    FUN_08032cac(iVar4,param_2,param_3,1,uVar1);
  }
  else {
    local_2f = 1;
    local_38 = param_2;
    local_34 = param_3;
    FUN_08032168(iVar4,&local_38);
  }
LAB_0800a8f4:
  *(char *)(param_1 + (param_2 & 0x7fff) + 0x1b040) = (char)param_3;
  return;
}


