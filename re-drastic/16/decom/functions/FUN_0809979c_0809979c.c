/*
 * Ghidra decompilation
 *
 * Function : FUN_0809979c
 * Address  : 0809979c
 * Program  : drastic16
 */


undefined4 FUN_0809979c(uint *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  uint uVar14;
  int local_24;
  
  pbVar3 = param_2 + param_3;
  uVar8 = param_1[0xb];
  uVar7 = param_1[0xd];
  uVar9 = uVar8 & ~(-1 << (param_1[2] & 0xff));
  uVar6 = param_1[7];
  uVar11 = param_1[4];
  uVar14 = param_1[8];
  if (uVar6 < 0x1000000) {
    if (pbVar3 <= param_2) {
      return 0;
    }
    bVar1 = *param_2;
    uVar6 = uVar6 << 8;
    param_2 = param_2 + 1;
    uVar14 = (uint)bVar1 | uVar14 << 8;
  }
  uVar4 = (uint)*(ushort *)(uVar11 + (uVar9 + uVar7 * 0x10) * 2) * (uVar6 >> 0xb);
  if (uVar4 <= uVar14) {
    uVar6 = uVar6 - uVar4;
    uVar14 = uVar14 - uVar4;
    iVar12 = (uVar7 + 0xc0) * 2;
    if (uVar6 < 0x1000000) {
      if (pbVar3 <= param_2) {
        return 0;
      }
      bVar1 = *param_2;
      uVar6 = uVar6 * 0x100;
      param_2 = param_2 + 1;
      uVar14 = (uint)bVar1 | uVar14 * 0x100;
    }
    uVar8 = (uint)*(ushort *)(uVar11 + iVar12) * (uVar6 >> 0xb);
    if (uVar14 < uVar8) {
      uVar2 = 2;
      puVar13 = (ushort *)(uVar11 + 0x664);
      uVar6 = 0;
    }
    else {
      uVar6 = uVar6 - uVar8;
      iVar12 = uVar11 + iVar12;
      uVar14 = uVar14 - uVar8;
      if (uVar6 < 0x1000000) {
        if (pbVar3 <= param_2) {
          return 0;
        }
        bVar1 = *param_2;
        uVar6 = uVar6 * 0x100;
        param_2 = param_2 + 1;
        uVar14 = (uint)bVar1 | uVar14 * 0x100;
      }
      uVar8 = (uint)*(ushort *)(iVar12 + 0x18) * (uVar6 >> 0xb);
      if (uVar14 < uVar8) {
        if (uVar8 < 0x1000000) {
          if (pbVar3 <= param_2) {
            return 0;
          }
          bVar1 = *param_2;
          uVar8 = uVar8 * 0x100;
          param_2 = param_2 + 1;
          uVar14 = (uint)bVar1 | uVar14 << 8;
        }
        uVar6 = (uint)*(ushort *)(uVar11 + (uVar9 + (uVar7 + 0xf) * 0x10) * 2) * (uVar8 >> 0xb);
        if (uVar14 < uVar6) {
          if ((uVar6 < 0x1000000) && (pbVar3 <= param_2)) {
            return 0;
          }
          return 3;
        }
        uVar8 = uVar8 - uVar6;
        uVar14 = uVar14 - uVar6;
      }
      else {
        uVar6 = uVar6 - uVar8;
        uVar14 = uVar14 - uVar8;
        if (uVar6 < 0x1000000) {
          if (pbVar3 <= param_2) {
            return 0;
          }
          bVar1 = *param_2;
          uVar6 = uVar6 * 0x100;
          param_2 = param_2 + 1;
          uVar14 = (uint)bVar1 | uVar14 * 0x100;
        }
        uVar8 = (uint)*(ushort *)(iVar12 + 0x30) * (uVar6 >> 0xb);
        if (uVar8 <= uVar14) {
          uVar6 = uVar6 - uVar8;
          uVar14 = uVar14 - uVar8;
          if (uVar6 < 0x1000000) {
            if (pbVar3 <= param_2) {
              return 0;
            }
            bVar1 = *param_2;
            uVar6 = uVar6 * 0x100;
            param_2 = param_2 + 1;
            uVar14 = (uint)bVar1 | uVar14 * 0x100;
          }
          uVar8 = (uint)*(ushort *)(iVar12 + 0x48) * (uVar6 >> 0xb);
          if (uVar8 <= uVar14) {
            uVar14 = uVar14 - uVar8;
            uVar8 = uVar6 - uVar8;
          }
        }
      }
      uVar2 = 3;
      puVar13 = (ushort *)(uVar11 + 0xa68);
      uVar6 = 0xc;
    }
    if (uVar8 < 0x1000000) {
      if (pbVar3 <= param_2) {
        return 0;
      }
      bVar1 = *param_2;
      uVar8 = uVar8 << 8;
      param_2 = param_2 + 1;
      uVar14 = (uint)bVar1 | uVar14 << 8;
    }
    uVar4 = (uint)*puVar13 * (uVar8 >> 0xb);
    if (uVar14 < uVar4) {
      uVar7 = 8;
      puVar13 = puVar13 + uVar9 * 8 + 2;
      local_24 = 0;
    }
    else {
      uVar8 = uVar8 - uVar4;
      uVar14 = uVar14 - uVar4;
      if (uVar8 < 0x1000000) {
        if (pbVar3 <= param_2) {
          return 0;
        }
        bVar1 = *param_2;
        uVar8 = uVar8 * 0x100;
        param_2 = param_2 + 1;
        uVar14 = (uint)bVar1 | uVar14 * 0x100;
      }
      uVar4 = (uint)puVar13[1] * (uVar8 >> 0xb);
      if (uVar14 < uVar4) {
        uVar7 = 8;
        local_24 = 8;
        puVar13 = puVar13 + uVar9 * 8 + 0x82;
      }
      else {
        uVar14 = uVar14 - uVar4;
        puVar13 = puVar13 + 0x102;
        uVar4 = uVar8 - uVar4;
        local_24 = 0x10;
        uVar7 = 0x100;
      }
    }
    uVar8 = 1;
    do {
      uVar9 = uVar8 * 2;
      uVar5 = uVar4;
      if (uVar4 < 0x1000000) {
        uVar5 = uVar4 << 8;
        if (pbVar3 <= param_2) {
          return 0;
        }
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        uVar14 = (uint)bVar1 | uVar14 << 8;
      }
      uVar4 = (uint)puVar13[uVar8] * (uVar5 >> 0xb);
      uVar8 = uVar9;
      if (uVar4 <= uVar14) {
        uVar14 = uVar14 - uVar4;
        uVar4 = uVar5 - uVar4;
        uVar8 = uVar9 + 1;
      }
    } while (uVar8 < uVar7);
    if (uVar6 < 4) {
      uVar6 = 1;
      uVar8 = (local_24 - uVar7) + uVar8;
      if (uVar8 < 4) {
        iVar12 = uVar8 * 0x80 + 0x360;
      }
      else {
        iVar12 = 0x4e0;
      }
      do {
        uVar6 = uVar6 * 2;
        uVar7 = uVar4;
        if (uVar4 < 0x1000000) {
          uVar7 = uVar4 << 8;
          if (pbVar3 <= param_2) {
            return 0;
          }
          bVar1 = *param_2;
          param_2 = param_2 + 1;
          uVar14 = (uint)bVar1 | uVar14 << 8;
        }
        uVar4 = (uint)*(ushort *)(uVar11 + iVar12 + uVar6) * (uVar7 >> 0xb);
        if (uVar4 <= uVar14) {
          uVar14 = uVar14 - uVar4;
          uVar4 = uVar7 - uVar4;
          uVar6 = uVar6 + 1;
        }
      } while (uVar6 < 0x40);
      uVar7 = uVar6 - 0x40;
      if (3 < uVar7) {
        uVar8 = (uVar7 >> 1) - 1;
        if (uVar7 < 0xe) {
          iVar12 = uVar11 + ((0x2ef - uVar6) + ((uVar7 & 1 | 2) << (uVar8 & 0xff))) * 2;
        }
        else {
          iVar12 = (uVar7 >> 1) - 5;
          do {
            if (uVar4 < 0x1000000) {
              uVar4 = uVar4 << 8;
              if (pbVar3 <= param_2) {
                return 0;
              }
              bVar1 = *param_2;
              param_2 = param_2 + 1;
              uVar14 = (uint)bVar1 | uVar14 << 8;
            }
            uVar4 = uVar4 >> 1;
            iVar12 = iVar12 + -1;
            uVar14 = uVar14 - (0xffffffffU - ((int)(uVar14 - uVar4) >> 0x1f) & uVar4);
          } while (iVar12 != 0);
          uVar8 = 4;
          iVar12 = uVar11 + 0x644;
        }
        iVar10 = 1;
        do {
          iVar10 = iVar10 * 2;
          uVar6 = uVar4;
          if (uVar4 < 0x1000000) {
            uVar6 = uVar4 << 8;
            if (pbVar3 <= param_2) {
              return 0;
            }
            bVar1 = *param_2;
            param_2 = param_2 + 1;
            uVar14 = (uint)bVar1 | uVar14 << 8;
          }
          uVar4 = (uint)*(ushort *)(iVar12 + iVar10) * (uVar6 >> 0xb);
          if (uVar4 <= uVar14) {
            uVar14 = uVar14 - uVar4;
            uVar4 = uVar6 - uVar4;
            iVar10 = iVar10 + 1;
          }
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    goto LAB_08099880;
  }
  iVar12 = uVar11 + 0xe6c;
  if ((param_1[0xc] == 0) && (uVar8 == 0)) {
    if (uVar7 < 7) goto LAB_08099828;
LAB_08099ae0:
    uVar6 = 0x100;
    if (param_1[9] < param_1[0xe]) {
      uVar7 = param_1[10];
    }
    else {
      uVar7 = 0;
    }
    uVar8 = 1;
    uVar7 = (uint)*(byte *)(param_1[5] + uVar7 + (param_1[9] - param_1[0xe]));
    do {
      uVar7 = uVar7 << 1;
      uVar9 = uVar6 & uVar7;
      if (uVar4 < 0x1000000) {
        uVar4 = uVar4 << 8;
        if (pbVar3 <= param_2) {
          return 0;
        }
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        uVar14 = (uint)bVar1 | uVar14 << 8;
      }
      uVar11 = (uint)*(ushort *)(iVar12 + (uVar6 + uVar8 + uVar9) * 2) * (uVar4 >> 0xb);
      uVar4 = uVar4 - uVar11;
      if (uVar14 < uVar11) {
        uVar8 = uVar8 << 1;
        uVar9 = ~uVar9;
        uVar4 = uVar11;
      }
      else {
        uVar8 = uVar8 * 2 + 1;
        uVar14 = uVar14 - uVar11;
      }
      uVar6 = uVar6 & uVar9;
    } while (uVar8 < 0x100);
  }
  else {
    uVar6 = param_1[9];
    if (uVar6 == 0) {
      uVar6 = param_1[10];
    }
    iVar12 = iVar12 + (((uVar8 & ~(-1 << (param_1[1] & 0xff))) << (*param_1 & 0xff)) +
                      ((int)(uint)*(byte *)(param_1[5] + (uVar6 - 1)) >> (8 - *param_1 & 0xff))) *
                      0x600;
    if (6 < uVar7) goto LAB_08099ae0;
LAB_08099828:
    uVar6 = 1;
    do {
      uVar6 = uVar6 * 2;
      uVar7 = uVar4;
      if (uVar4 < 0x1000000) {
        uVar7 = uVar4 << 8;
        if (pbVar3 <= param_2) {
          return 0;
        }
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        uVar14 = (uint)bVar1 | uVar14 << 8;
      }
      uVar4 = (uint)*(ushort *)(iVar12 + uVar6) * (uVar7 >> 0xb);
      if (uVar4 <= uVar14) {
        uVar14 = uVar14 - uVar4;
        uVar4 = uVar7 - uVar4;
        uVar6 = uVar6 + 1;
      }
    } while (uVar6 < 0x100);
  }
  uVar2 = 1;
LAB_08099880:
  if (0xffffff < uVar4) {
    return uVar2;
  }
  if (pbVar3 <= param_2) {
    return 0;
  }
  return uVar2;
}


