/*
 * Ghidra decompilation
 *
 * Function : FUN_08007018
 * Address  : 08007018
 * Program  : drastic16
 */


void FUN_08007018(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  bVar2 = (byte)param_3;
  if (param_2 < 0x1c2) {
    if (0x1bf < param_2) {
      puts("spi control8");
      goto LAB_0800712c;
    }
    if (param_2 == 0x138) {
      param_3 = FUN_0805cd0c(*(undefined4 *)(param_1 + 0xfc7f0),param_3,param_3,0xfc7f0,param_4);
      goto LAB_0800712c;
    }
    if (param_2 < 0x139) {
      if (param_2 < 0x132) {
        if (0x12f < param_2) {
          return;
        }
        if (param_2 == 4) {
          param_3 = param_3 & 0xf8 | *(byte *)(param_1 + 0x23044) & 7;
          goto LAB_0800712c;
        }
        if ((3 < param_2) && (param_2 - 6 < 2)) {
          return;
        }
      }
      else if (0x135 < param_2) {
        return;
      }
    }
    else {
      if (param_2 == 0x185) {
        bVar5 = *(byte *)(param_1 + 0x231c5);
        if (((param_3 & 4) != 0) && ((*(byte *)(param_1 + 0xfc7e6) & 1) == 0)) {
          iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0xfba30) + 0x800008) + 0x2080);
          uVar4 = *(uint *)(iVar6 + 0x214) | 0x40000;
          *(uint *)(iVar6 + 0x214) = uVar4;
          iVar7 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
          if ((*(byte *)(iVar7 + 0x2105) & 6) == 0) {
            uVar4 = uVar4 & -*(int *)(iVar6 + 0x208) & *(uint *)(iVar6 + 0x210);
            *(uint *)(iVar7 + 0x2100) = uVar4;
          }
          else {
            uVar4 = *(uint *)(iVar7 + 0x2100);
          }
          if (uVar4 != 0) {
            *(uint *)(iVar7 + 0x237c) = *(uint *)(iVar7 + 0x237c) | 2;
          }
        }
        if ((param_3 & 0x40) != 0) {
          bVar5 = bVar5 & 0xbf;
        }
        *(byte *)(param_1 + 0x231c5) = bVar5 & 0x7b | bVar2 & 0x84;
        return;
      }
      if (param_2 < 0x186) {
        if (param_2 == 0x181) {
          if (((param_3 & 0x20) != 0) && ((*(byte *)(param_1 + 0x1b1c1) & 0x40) != 0)) {
            iVar6 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
            if (*(char *)(iVar6 + 0x2104) == '\x01') {
              *(uint *)(iVar6 + 0x237c) = *(uint *)(iVar6 + 0x237c) | 4;
            }
            iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008) + 0x2080);
            uVar4 = *(uint *)(iVar6 + 0x214) | 0x10000;
            *(uint *)(iVar6 + 0x214) = uVar4;
            iVar7 = *(int *)(*(int *)(param_1 + 0xfba2c) + 0x800008);
            if ((*(byte *)(iVar7 + 0x2105) & 6) == 0) {
              *(uint *)(iVar7 + 0x2100) =
                   uVar4 & -*(int *)(iVar6 + 0x208) & *(uint *)(iVar6 + 0x210);
            }
          }
          *(byte *)(param_1 + 0x1b1c0) = bVar2 & 0xf;
          *(ushort *)(param_1 + 0x231c1) = (ushort)param_3 & 0x4f;
          goto LAB_0800712c;
        }
        if (param_2 == 0x184) {
          if (((param_3 & 4) != 0) && ((*(byte *)(param_1 + 0xfc796) & 1) != 0)) {
            iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0xfba30) + 0x800008) + 0x2080);
            uVar4 = *(uint *)(iVar6 + 0x214) | 0x20000;
            *(uint *)(iVar6 + 0x214) = uVar4;
            iVar7 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
            if ((*(byte *)(iVar7 + 0x2105) & 6) == 0) {
              uVar4 = uVar4 & -*(int *)(iVar6 + 0x208) & *(uint *)(iVar6 + 0x210);
              *(uint *)(iVar7 + 0x2100) = uVar4;
            }
            else {
              uVar4 = *(uint *)(iVar7 + 0x2100);
            }
            if (uVar4 != 0) {
              *(uint *)(iVar7 + 0x237c) = *(uint *)(iVar7 + 0x237c) | 2;
            }
          }
          if ((param_3 & 8) != 0) {
            FUN_0801d8fc(param_1 + 0xfc748);
          }
          *(byte *)(param_1 + 0x231c4) = (byte)(param_3 & 4) | *(byte *)(param_1 + 0x231c4) & 0xfb;
          return;
        }
        if (param_2 == 0x180) goto LAB_0800712c;
      }
      else {
        if (param_2 == 0x1a2) {
          uVar1 = *(ushort *)(param_1 + 0x1b1e0);
          uVar3 = FUN_0805d3d0(*(int *)(param_1 + 0xfc7e8) + 0x8b4,param_3);
          if ((uVar1 & 0x40) == 0) {
            FUN_0805d7b8(*(int *)(param_1 + 0xfc7e8) + 0x8b4);
          }
          *(undefined *)(param_1 + 0x1b1e2) = uVar3;
          return;
        }
        if (param_2 < 0x1a3) {
          if (param_2 - 0x188 < 4) {
            puts("store io8 ARM9 IPCFIFOSEND");
            return;
          }
        }
        else if (param_2 == 0x1a3) {
          return;
        }
      }
    }
  }
  else {
    if (param_2 == 0x213) {
      uVar4 = *(uint *)(param_1 + 0x23250);
      param_3 = uVar4 & 0xffffff | param_3 << 0x18;
      *(uint *)(param_1 + 0x23250) = param_3;
      if ((param_3 & ~uVar4) == 0) {
        return;
      }
      goto LAB_08007088;
    }
    if (param_2 < 0x214) {
      if (param_2 < 0x20c) {
        if (0x208 < param_2) {
          return;
        }
        if (param_2 == 0x1c3) {
          return;
        }
        if (param_2 < 0x1c3) {
          uVar3 = FUN_0805c830(*(undefined4 *)(param_1 + 0xfc7ec),param_3);
          *(undefined *)(param_1 + 0x23202) = uVar3;
          return;
        }
        if (param_2 == 0x208) {
          param_3 = param_3 & 1;
          iVar6 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
          if ((param_3 == 0) || (*(int *)(param_1 + 0x23248) != 0)) {
            *(undefined4 *)(iVar6 + 0x2100) = 0;
          }
          else {
            uVar4 = *(uint *)(param_1 + 0x23250) & *(uint *)(param_1 + 0x23254);
            *(uint *)(iVar6 + 0x2100) = uVar4;
            if (uVar4 == 0) {
              param_3 = 1;
            }
            else {
              param_3 = 1;
              *(uint *)(iVar6 + 0x237c) = *(uint *)(iVar6 + 0x237c) | 2;
            }
          }
          goto LAB_0800712c;
        }
      }
      else {
        if (param_2 == 0x211) {
          uVar4 = *(uint *)(param_1 + 0x23250);
          param_3 = uVar4 & 0xffff00ff | param_3 << 8;
          *(uint *)(param_1 + 0x23250) = param_3;
          if ((param_3 & ~uVar4) == 0) {
            return;
          }
LAB_08007088:
          param_3 = -*(int *)(param_1 + 0x23248) & *(uint *)(param_1 + 0x23254) & param_3;
          iVar6 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
          *(uint *)(iVar6 + 0x2100) = param_3;
          if (param_3 != 0) {
            *(uint *)(iVar6 + 0x237c) = *(uint *)(iVar6 + 0x237c) | 2;
          }
          return;
        }
        if (0x211 < param_2) {
          uVar4 = *(uint *)(param_1 + 0x23250);
          param_3 = uVar4 & 0xff00ffff | param_3 << 0x10;
          *(uint *)(param_1 + 0x23250) = param_3;
          if ((param_3 & ~uVar4) == 0) {
            return;
          }
          goto LAB_08007088;
        }
        if (param_2 == 0x210) {
          uVar4 = *(uint *)(param_1 + 0x23250);
          param_3 = param_3 | uVar4 & 0xffffff00;
          *(uint *)(param_1 + 0x23250) = param_3;
          if ((param_3 & ~uVar4) == 0) {
            return;
          }
          goto LAB_08007088;
        }
      }
    }
    else {
      if (param_2 == 0x301) {
        uVar4 = (param_3 << 0x12) >> 0x18;
        if (uVar4 == 2) {
          iVar6 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
          *(uint *)(iVar6 + 0x237c) = *(uint *)(iVar6 + 0x237c) | 0x10;
          FUN_0801bda0(iVar6);
        }
        else if (uVar4 == 3) {
          iVar6 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
          puts("Entering sleep mode.");
          *(uint *)(iVar6 + 0x237c) = *(uint *)(iVar6 + 0x237c) | 0x10;
          FUN_0801bda0(iVar6);
          *(undefined *)(iVar6 + 0x2105) = 2;
          *(byte *)(*(int *)(iVar6 + 0x2378) + 0x2105) =
               *(byte *)(*(int *)(iVar6 + 0x2378) + 0x2105) | 2;
        }
        else if (uVar4 == 1) {
          puts("Enter GBA mode: unsupported.");
        }
        goto LAB_0800712c;
      }
      if (param_2 < 0x302) {
        if (param_2 < 0x218) {
          if (0x214 < param_2) {
            return;
          }
          *(uint *)(param_1 + 0x23254) = ~param_3 & *(uint *)(param_1 + 0x23254);
          iVar6 = *(int *)(*(int *)(param_1 + 0xfba30) + 0x800008);
          *(uint *)(iVar6 + 0x2100) = ~param_3 & *(uint *)(iVar6 + 0x2100);
          return;
        }
        if (param_2 == 0x241) {
          return;
        }
      }
      else if (0x3ff < param_2) {
        if (param_2 < 0x500) {
          iVar7 = param_1 + param_2;
          iVar6 = *(int *)(param_1 + 0xfba28);
          uVar4 = (param_2 << 0x18) >> 0x1c;
          *(byte *)(iVar7 + 0x23040) = bVar2;
          switch(param_2 & 0xfffff00f) {
          case 0:
          case 1:
          case 2:
            iVar6 = uVar4 * 0xb8 + iVar6;
            *(byte *)(iVar6 + 0x400c9) = *(byte *)(iVar6 + 0x400c9) | 2;
            *(byte *)(iVar7 + 0x23040) = bVar2;
            return;
          case 3:
            goto switchD_08007540_caseD_3;
          default:
            return;
          case 8:
          case 9:
            iVar6 = uVar4 * 0xb8 + iVar6;
            *(byte *)(iVar6 + 0x400c9) = *(byte *)(iVar6 + 0x400c9) | 1;
            *(byte *)(iVar7 + 0x23040) = bVar2;
            return;
          }
        }
        if (param_2 - 0x508 < 2) {
          FUN_080593f4(*(undefined4 *)(param_1 + 0xfba28));
          goto LAB_0800712c;
        }
      }
    }
  }
  if (0x7fffff < param_2) {
    return;
  }
LAB_0800712c:
  *(char *)(param_1 + (param_2 & 0x7fff) + 0x23040) = (char)param_3;
  return;
switchD_08007540_caseD_3:
  if ((param_3 & 0x80) == 0) {
    *(undefined *)(uVar4 * 0xb8 + iVar6 + 0x400ca) = 0;
  }
  else {
    FUN_080591bc(iVar6,uVar4);
  }
  iVar6 = uVar4 * 0xb8 + iVar6;
  *(byte *)(iVar6 + 0x400c9) = *(byte *)(iVar6 + 0x400c9) | 2;
  return;
}


