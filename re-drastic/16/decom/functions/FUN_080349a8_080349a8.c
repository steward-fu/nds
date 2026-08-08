/*
 * Ghidra decompilation
 *
 * Function : FUN_080349a8
 * Address  : 080349a8
 * Program  : drastic16
 */


void FUN_080349a8(int param_1,int param_2,uint *param_3,int param_4,uint param_5)

{
  undefined2 uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  int *piVar16;
  uint *local_84;
  uint local_80;
  uint local_74;
  uint local_6c;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_6c = param_3[0x2800];
  piVar16 = (int *)(param_2 + 0xc02c);
  *(undefined4 *)(param_2 + 0x1000) = 0;
  *(undefined4 *)(param_2 + 0x2004) = 0;
  piVar5 = (int *)(param_2 + 0xa024);
  piVar3 = (int *)(param_2 + 0xb028);
  *(undefined4 *)(param_2 + 0x3008) = 0;
  *(undefined4 *)(param_2 + 0x400c) = 0;
  *(undefined4 *)(param_2 + 0x5010) = 0;
  *(undefined4 *)(param_2 + 0x6014) = 0;
  *(undefined4 *)(param_2 + 0x7018) = 0;
  *(undefined4 *)(param_2 + 0x801c) = 0;
  *(undefined4 *)(param_2 + 0x9020) = 0;
  *piVar5 = 0;
  *piVar3 = 0;
  *piVar16 = 0;
  if (local_6c != 0) {
    local_30 = 0;
    local_34 = 0xffffffff;
    local_80 = 0;
    local_2c = 0xffffffff;
    local_84 = param_3;
    do {
      uVar11 = local_84[2];
      uVar10 = uVar11 & 0xf;
      iVar8 = param_4 + (uint)*(ushort *)((int)local_84 + 0x12) * 0x10;
      uVar6 = *(uint *)(param_4 + (uint)*(ushort *)((int)local_84 + 0x12) * 0x10);
      uVar7 = (uint)*(ushort *)(iVar8 + 6);
      if (uVar10 - 2 < 7) {
        uVar4 = (uint)*(ushort *)(iVar8 + 0x16);
        uVar14 = *(ushort *)(iVar8 + 0x18) & *(ushort *)(iVar8 + 8);
        uVar12 = *(ushort *)(iVar8 + 0x18) | *(ushort *)(iVar8 + 8);
        uVar9 = uVar7;
        if (uVar4 < uVar7) {
          uVar9 = uVar4;
        }
        local_74 = (uint)(uVar4 < uVar7);
        if (uVar7 < uVar4) {
          uVar7 = uVar4;
        }
        uVar13 = *(ushort *)(iVar8 + 0x1a) & *(ushort *)(iVar8 + 10);
        uVar4 = *(uint *)(iVar8 + 0x10) & uVar6;
        uVar15 = *(ushort *)(iVar8 + 0x1a) | *(ushort *)(iVar8 + 10);
        uVar6 = *(uint *)(iVar8 + 0x10) | uVar6;
        if (uVar10 != 2) {
          uVar2 = (uint)*(ushort *)(iVar8 + 0x26);
          uVar4 = uVar4 & *(uint *)(iVar8 + 0x20);
          uVar6 = uVar6 | *(uint *)(iVar8 + 0x20);
          if (uVar2 < uVar9) {
            local_74 = 2;
            uVar9 = uVar2;
          }
          if (uVar7 < uVar2) {
            uVar7 = uVar2;
          }
          uVar14 = uVar14 & *(ushort *)(iVar8 + 0x28);
          uVar12 = uVar12 | *(ushort *)(iVar8 + 0x28);
          uVar13 = uVar13 & *(ushort *)(iVar8 + 0x2a);
          uVar15 = uVar15 | *(ushort *)(iVar8 + 0x2a);
          if (uVar10 != 3) {
            uVar2 = (uint)*(ushort *)(iVar8 + 0x36);
            uVar14 = uVar14 & *(ushort *)(iVar8 + 0x38);
            uVar12 = uVar12 | *(ushort *)(iVar8 + 0x38);
            if (uVar2 < uVar9) {
              local_74 = 3;
              uVar9 = uVar2;
            }
            if (uVar7 < uVar2) {
              uVar7 = uVar2;
            }
            uVar4 = uVar4 & *(uint *)(iVar8 + 0x30);
            uVar6 = uVar6 | *(uint *)(iVar8 + 0x30);
            uVar13 = uVar13 & *(ushort *)(iVar8 + 0x3a);
            uVar15 = uVar15 | *(ushort *)(iVar8 + 0x3a);
            if (uVar10 != 4) {
              uVar2 = (uint)*(ushort *)(iVar8 + 0x46);
              uVar4 = uVar4 & *(uint *)(iVar8 + 0x40);
              uVar6 = uVar6 | *(uint *)(iVar8 + 0x40);
              if (uVar2 < uVar9) {
                local_74 = 4;
                uVar9 = uVar2;
              }
              if (uVar7 < uVar2) {
                uVar7 = uVar2;
              }
              uVar14 = uVar14 & *(ushort *)(iVar8 + 0x48);
              uVar12 = uVar12 | *(ushort *)(iVar8 + 0x48);
              uVar13 = uVar13 & *(ushort *)(iVar8 + 0x4a);
              uVar15 = uVar15 | *(ushort *)(iVar8 + 0x4a);
              if (uVar10 != 5) {
                uVar2 = (uint)*(ushort *)(iVar8 + 0x56);
                uVar14 = uVar14 & *(ushort *)(iVar8 + 0x58);
                uVar12 = uVar12 | *(ushort *)(iVar8 + 0x58);
                if (uVar2 < uVar9) {
                  local_74 = 5;
                  uVar9 = uVar2;
                }
                if (uVar7 < uVar2) {
                  uVar7 = uVar2;
                }
                uVar4 = uVar4 & *(uint *)(iVar8 + 0x50);
                uVar6 = uVar6 | *(uint *)(iVar8 + 0x50);
                uVar13 = uVar13 & *(ushort *)(iVar8 + 0x5a);
                uVar15 = uVar15 | *(ushort *)(iVar8 + 0x5a);
                if (uVar10 != 6) {
                  uVar2 = (uint)*(ushort *)(iVar8 + 0x66);
                  uVar14 = uVar14 & *(ushort *)(iVar8 + 0x68);
                  uVar12 = uVar12 | *(ushort *)(iVar8 + 0x68);
                  if (uVar2 < uVar9) {
                    local_74 = 6;
                    uVar9 = uVar2;
                  }
                  if (uVar7 < uVar2) {
                    uVar7 = uVar2;
                  }
                  uVar13 = uVar13 & *(ushort *)(iVar8 + 0x6a);
                  uVar15 = uVar15 | *(ushort *)(iVar8 + 0x6a);
                  uVar4 = uVar4 & *(uint *)(iVar8 + 0x60);
                  uVar6 = uVar6 | *(uint *)(iVar8 + 0x60);
                  if (uVar10 == 8) {
                    uVar2 = (uint)*(ushort *)(iVar8 + 0x76);
                    uVar4 = uVar4 & *(uint *)(iVar8 + 0x70);
                    uVar6 = uVar6 | *(uint *)(iVar8 + 0x70);
                    if (uVar2 < uVar9) {
                      local_74 = 7;
                      uVar9 = uVar2;
                    }
                    if (uVar7 < uVar2) {
                      uVar7 = uVar2;
                    }
                    uVar14 = uVar14 & *(ushort *)(iVar8 + 0x78);
                    uVar12 = uVar12 | *(ushort *)(iVar8 + 0x78);
                    uVar13 = uVar13 & *(ushort *)(iVar8 + 0x7a);
                    uVar15 = uVar15 | *(ushort *)(iVar8 + 0x7a);
                  }
                }
              }
            }
          }
        }
        if (uVar9 != uVar7) {
          if (0xbf < uVar7) {
            uVar7 = 0xc0;
          }
          uVar2 = param_5;
          if (uVar13 == uVar15) {
            uVar2 = param_5 | 4;
          }
          if ((*(byte *)(param_1 + 0x9a91) & 2) == 0) {
            if (uVar14 == uVar12) {
              uVar2 = uVar2 | 0x10;
            }
            if (uVar4 == uVar6) {
              uVar2 = uVar2 | 0x20;
            }
          }
          else {
            if (uVar4 == uVar6) {
              uVar2 = uVar2 | 0x30;
            }
            uVar2 = uVar2 | 8;
          }
          uVar6 = *local_84;
          if (((uVar6 & 0x1c000000) != 0) && ((local_84[1] << 0x1a) >> 0x1e != 3)) {
            uVar4 = (uint)*(ushort *)(local_84 + 4);
            uVar2 = uVar2 | 2;
            if (uVar6 != local_2c || uVar4 != local_34) {
              local_30 = FUN_08058628(*(undefined4 *)(param_1 + 0x9a1c),uVar6,uVar4);
              uVar11 = local_84[2];
              local_34 = uVar4;
              local_2c = uVar6;
            }
            local_84[3] = local_30;
          }
          uVar6 = uVar11 | uVar7 << 0x18 | uVar2 << 8;
          local_84[2] = uVar6;
          if (uVar10 == 4) {
            if ((uVar11 & 0x40) == 0) {
              uVar6 = uVar6 | 0x200000;
              local_74 = local_74 << 0x10;
            }
            else {
              if (local_74 == 2) {
                if (*(ushort *)(iVar8 + 0x36) == uVar9) {
                  local_74 = 0x30000;
                }
                else {
                  local_74 = 0x20000;
                }
              }
              else {
                local_74 = local_74 << 0x10;
              }
              uVar6 = uVar6 | 0x480000;
            }
            local_84[2] = local_74 | uVar6;
            FUN_08034788(local_84,iVar8);
          }
          else {
            local_84[2] = uVar10 << 0x13 | local_74 << 0x10 | uVar6;
          }
          iVar8 = uVar7 - 1;
          if (iVar8 < 0) {
            iVar8 = uVar7 + 0xe;
          }
          uVar7 = 0xfff << ((int)uVar9 >> 4 & 0xffU) & 0xfffU >> (0xbU - (iVar8 >> 4) & 0xff);
          uVar1 = (undefined2)local_80;
          if ((uVar7 & 1) != 0) {
            iVar8 = *(int *)(param_2 + 0x1000);
            *(undefined2 *)(param_2 + iVar8 * 2) = uVar1;
            *(int *)(param_2 + 0x1000) = iVar8 + 1;
          }
          if ((uVar7 & 2) != 0) {
            iVar8 = *(int *)(param_2 + 0x2004);
            *(undefined2 *)(param_2 + iVar8 * 2 + 0x1004) = uVar1;
            *(int *)(param_2 + 0x2004) = iVar8 + 1;
          }
          if ((uVar7 & 4) != 0) {
            iVar8 = *(int *)(param_2 + 0x3008);
            *(undefined2 *)(param_2 + iVar8 * 2 + 0x2008) = uVar1;
            *(int *)(param_2 + 0x3008) = iVar8 + 1;
          }
          if ((uVar7 & 8) != 0) {
            iVar8 = *(int *)(param_2 + 0x400c);
            *(undefined2 *)(param_2 + iVar8 * 2 + 0x300c) = uVar1;
            *(int *)(param_2 + 0x400c) = iVar8 + 1;
          }
          if ((uVar7 & 0x10) != 0) {
            iVar8 = *(int *)(param_2 + 0x5010);
            *(undefined2 *)(param_2 + iVar8 * 2 + 0x4010) = uVar1;
            *(int *)(param_2 + 0x5010) = iVar8 + 1;
          }
          if ((uVar7 & 0x20) != 0) {
            iVar8 = *(int *)(param_2 + 0x6014);
            *(undefined2 *)(param_2 + iVar8 * 2 + 0x5014) = uVar1;
            *(int *)(param_2 + 0x6014) = iVar8 + 1;
          }
          if ((uVar7 & 0x40) != 0) {
            iVar8 = *(int *)(param_2 + 0x7018);
            *(undefined2 *)(param_2 + iVar8 * 2 + 0x6018) = uVar1;
            *(int *)(param_2 + 0x7018) = iVar8 + 1;
          }
          if ((uVar7 & 0x80) != 0) {
            iVar8 = *(int *)(param_2 + 0x801c);
            *(undefined2 *)(param_2 + iVar8 * 2 + 0x701c) = uVar1;
            *(int *)(param_2 + 0x801c) = iVar8 + 1;
          }
          if ((uVar7 & 0x100) != 0) {
            iVar8 = *(int *)(param_2 + 0x9020);
            *(undefined2 *)(param_2 + iVar8 * 2 + 0x8020) = uVar1;
            *(int *)(param_2 + 0x9020) = iVar8 + 1;
          }
          if ((uVar7 & 0x200) != 0) {
            iVar8 = *piVar5;
            *(undefined2 *)(param_2 + iVar8 * 2 + 0x9024) = uVar1;
            *piVar5 = iVar8 + 1;
          }
          if ((uVar7 & 0x400) != 0) {
            iVar8 = *piVar3;
            *(undefined2 *)(param_2 + iVar8 * 2 + 41000) = uVar1;
            *piVar3 = iVar8 + 1;
          }
          if ((uVar7 & 0x800) == 0) {
            local_6c = param_3[0x2800];
          }
          else {
            iVar8 = *piVar16;
            local_6c = param_3[0x2800];
            *(undefined2 *)(param_2 + iVar8 * 2 + 0xb02c) = uVar1;
            *piVar16 = iVar8 + 1;
          }
        }
      }
      local_80 = local_80 + 1;
      local_84 = local_84 + 5;
    } while (local_80 < local_6c);
  }
  return;
}


