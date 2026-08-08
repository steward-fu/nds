/*
 * Ghidra decompilation
 *
 * Function : FUN_080e1a54
 * Address  : 080e1a54
 * Program  : drastic16
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_080e1a54(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint local_12c [4];
  byte *local_11c;
  int local_118;
  byte *local_114;
  int local_110;
  uint local_10c;
  int local_108;
  byte *local_104;
  byte *local_100;
  int local_fc;
  uint local_f8;
  undefined4 local_d0;
  byte *local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  int local_b0;
  byte *local_ac;
  int local_a8;
  byte local_a1;
  int local_a0;
  uint local_9c;
  byte *local_98;
  int local_94;
  char local_8e;
  char local_8d;
  undefined4 local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  byte *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  byte *local_4c;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  byte *local_34;
  int local_30;
  char local_29;
  int local_28;
  byte *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  byte *local_14;
  int local_10;
  char *local_c;
  
  pbVar2 = param_1;
  switch(param_2) {
  case 1:
  case 2:
    local_84 = *(uint *)(param_1 + 0x24);
    local_88 = *(int *)(param_1 + 0x2c);
    if ((local_84 < 0x3c000) && (3 < (int)local_84)) {
      local_8c = 0x1000000;
      if (param_2 == 2) {
        local_8d = -0x17;
      }
      else {
        local_8d = -0x18;
      }
      local_10 = 0;
      local_c = *(char **)(param_1 + 0x10);
      while (local_10 < (int)(local_84 - 4)) {
        pcVar3 = local_c + 1;
        local_8e = *local_c;
        local_10 = local_10 + 1;
        local_c = pcVar3;
        if ((local_8e == -0x18) || (local_8e == local_8d)) {
          local_94 = local_10 + local_88;
          pbVar2 = (byte *)FUN_080e2860(param_1,0,pcVar3);
          local_98 = pbVar2;
          if ((int)pbVar2 < 0) {
            if (-1 < (int)(pbVar2 + local_94)) {
              pbVar2 = (byte *)FUN_080e292c(param_1,0,local_c,pbVar2 + 0x1000000);
            }
          }
          else if ((int)pbVar2 < 0x1000000) {
            pbVar2 = (byte *)FUN_080e292c(param_1,0,local_c,(int)pbVar2 - local_94);
          }
          local_c = local_c + 4;
          local_10 = local_10 + 4;
        }
      }
    }
    break;
  case 3:
    local_14 = *(byte **)(param_1 + 0x10);
    local_9c = *(uint *)(param_1 + 0x24);
    if ((local_9c < 0x3c000) && (0x14 < (int)local_9c)) {
      local_18 = *(uint *)(param_1 + 0x2c) >> 4;
      for (local_1c = 0; local_1c < (int)(local_9c - 0x15); local_1c = local_1c + 0x10) {
        local_a0 = (*local_14 & 0x1f) - 0x10;
        if ((-1 < local_a0) && (local_a1 = (&DAT_08102314)[*local_14 & 0x1f], local_a1 != 0)) {
          for (local_20 = 0; (int)local_20 < 3; local_20 = local_20 + 1) {
            if (((int)(uint)local_a1 >> (local_20 & 0xff) & 1U) != 0) {
              local_a8 = local_20 * 0x29 + 5;
              pbVar2 = (byte *)FUN_080e2618(param_1,local_14,local_20 * 0x29 + 0x2a,4);
              local_ac = pbVar2;
              if (pbVar2 == (byte *)0x5) {
                local_b0 = FUN_080e2618(param_1,local_14,local_a8 + 0xd,0x14);
                pbVar2 = (byte *)FUN_080e271c(param_1,local_14,local_b0 - local_18 & 0xfffff,
                                              local_a8 + 0xd,0x14);
              }
            }
          }
        }
        local_14 = local_14 + 0x10;
        local_18 = local_18 + 1;
      }
    }
    break;
  case 4:
    local_c0 = *(uint *)(param_1 + 0x24);
    local_c4 = *(int *)(param_1 + 0x14) + -3;
    local_c8 = *(int *)(param_1 + 0x18);
    local_34 = *(byte **)(param_1 + 0x10);
    local_cc = local_34 + local_c0;
    local_d0 = 3;
    pbVar2 = (byte *)FUN_080e292c(param_1,0,*(int *)(param_1 + 0x10) + 0x3c020,local_c0);
    if ((local_c0 < 0x1e000) && (-1 < local_c8)) {
      for (local_38 = 0; local_38 < 3; local_38 = local_38 + 1) {
        local_3c = 0;
        for (local_40 = local_38; local_40 < (int)local_c0; local_40 = local_40 + 3) {
          if (local_40 - local_c4 < 3) {
            local_44 = local_3c;
          }
          else {
            uVar6 = (uint)local_cc[local_40 - local_c4];
            local_44 = (uint)(local_cc + (local_40 - local_c4))[-3];
            iVar4 = (local_3c + uVar6) - local_44;
            iVar7 = iVar4 - local_3c;
            if (iVar7 < 0) {
              iVar7 = -iVar7;
            }
            iVar5 = iVar4 - uVar6;
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            iVar4 = iVar4 - local_44;
            if (iVar4 < 0) {
              iVar4 = -iVar4;
            }
            if ((iVar5 < iVar7) || (iVar4 < iVar7)) {
              if (iVar4 < iVar5) goto LAB_080e2068;
            }
            else {
              local_44 = local_3c;
              uVar6 = local_44;
            }
            local_44 = uVar6;
          }
LAB_080e2068:
          pbVar2 = local_34 + 1;
          local_3c = local_44 - *local_34 & 0xff;
          local_cc[local_40] = (byte)(local_44 - *local_34);
          local_34 = pbVar2;
        }
      }
      for (local_48 = local_c8; local_48 < (int)(local_c0 - 2); local_48 = local_48 + 3) {
        local_cc[local_48] = local_cc[local_48] + local_cc[local_48 + 1];
        local_cc[local_48 + 2] = local_cc[local_48 + 2] + local_cc[local_48 + 1];
      }
    }
    break;
  case 5:
    local_f8 = *(uint *)(param_1 + 0x24);
    local_fc = *(int *)(param_1 + 0x14);
    local_4c = *(byte **)(param_1 + 0x10);
    local_100 = local_4c + local_f8;
    pbVar2 = (byte *)FUN_080e292c(param_1,0,*(int *)(param_1 + 0x10) + 0x3c020,local_f8);
    if (local_f8 < 0x1e000) {
      for (local_50 = 0; local_50 < local_fc; local_50 = local_50 + 1) {
        local_54 = 0;
        local_58 = 0;
        local_5c = 0;
        local_60 = (byte *)0x0;
        local_64 = 0;
        local_68 = 0;
        local_6c = 0;
        pbVar2 = (byte *)memset(local_12c,0,0x1c);
        local_74 = 0;
        for (local_70 = local_50; local_70 < (int)local_f8; local_70 = local_70 + local_fc) {
          local_104 = local_60;
          pbVar2 = (byte *)(local_58 - local_5c);
          local_5c = local_58;
          bVar1 = *local_4c;
          local_10c = (uint)bVar1;
          local_108 = ((uint)(local_54 * 8 + local_58 * local_64 +
                             (int)local_60 * local_6c + (int)pbVar2 * local_68) >> 3 & 0xff) -
                      local_10c;
          local_100[local_70] = (byte)local_108;
          local_110 = (char)bVar1 * 8;
          iVar7 = local_110;
          if (local_110 < 0) {
            iVar7 = (char)bVar1 * -8;
          }
          uVar6 = local_12c[0] + iVar7;
          iVar7 = local_110 - local_58;
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          local_12c[1] = local_12c[1] + iVar7;
          local_58 = local_110 + local_58;
          if (local_58 < 0) {
            local_58 = -local_58;
          }
          local_12c[2] = local_12c[2] + local_58;
          iVar7 = local_110 - (int)pbVar2;
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          local_12c[3] = local_12c[3] + iVar7;
          pbVar8 = pbVar2 + local_110;
          if ((int)pbVar8 < 0) {
            pbVar8 = (byte *)-(int)pbVar8;
          }
          local_11c = local_11c + (int)pbVar8;
          iVar7 = local_110 - (int)local_60;
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          local_118 = local_118 + iVar7;
          local_60 = local_60 + local_110;
          if ((int)local_60 < 0) {
            local_60 = (byte *)-(int)local_60;
          }
          local_114 = local_114 + (int)local_60;
          local_12c[0] = uVar6;
          if ((local_74 & 0x1f) == 0) {
            local_7c = 0;
            local_12c[0] = 0;
            local_78 = uVar6;
            for (local_80 = 1; local_80 < 7; local_80 = local_80 + 1) {
              if (local_12c[local_80] < local_78) {
                local_78 = local_12c[local_80];
                local_7c = local_80;
              }
              local_12c[local_80] = 0;
            }
            switch(local_7c) {
            case 1:
              if (local_64 + 0x10 < 0 == SCARRY4(local_64,0x10)) {
                local_64 = local_64 + -1;
              }
              break;
            case 2:
              if (local_64 < 0x10) {
                local_64 = local_64 + 1;
              }
              break;
            case 3:
              if (local_68 + 0x10 < 0 == SCARRY4(local_68,0x10)) {
                local_68 = local_68 + -1;
              }
              break;
            case 4:
              if (local_68 < 0x10) {
                local_68 = local_68 + 1;
              }
              break;
            case 5:
              if (local_6c + 0x10 < 0 == SCARRY4(local_6c,0x10)) {
                local_6c = local_6c + -1;
              }
              break;
            case 6:
              if (local_6c < 0x10) {
                local_6c = local_6c + 1;
              }
            }
          }
          local_74 = local_74 + 1;
          local_60 = pbVar2;
          local_58 = (int)(char)((byte)local_108 - (char)local_54);
          local_54 = local_108;
          local_4c = local_4c + 1;
        }
      }
    }
    break;
  case 6:
    local_b4 = *(uint *)(param_1 + 0x24);
    local_b8 = *(int *)(param_1 + 0x14);
    local_24 = (byte *)0x0;
    local_bc = local_b4 << 1;
    pbVar2 = (byte *)FUN_080e292c(param_1,0,*(int *)(param_1 + 0x10) + 0x3c020,local_b4);
    if (local_b4 < 0x1e000) {
      for (local_28 = 0; local_28 < local_b8; local_28 = local_28 + 1) {
        local_29 = '\0';
        for (local_30 = local_b4 + local_28; local_30 < local_bc; local_30 = local_30 + local_b8) {
          pbVar2 = local_24 + 1;
          local_29 = local_29 - local_24[*(int *)(param_1 + 0x10)];
          *(char *)(*(int *)(param_1 + 0x10) + local_30) = local_29;
          local_24 = pbVar2;
        }
      }
    }
  }
  return pbVar2;
}


