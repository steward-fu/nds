/*
 * Ghidra decompilation
 *
 * Function : FUN_080cf628
 * Address  : 080cf628
 * Program  : drastic16
 */


byte * FUN_080cf628(int param_1,byte *param_2,uint param_3,char *param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *local_130;
  uint local_124 [18];
  uint local_dc;
  int local_d8;
  uint local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  int local_c0;
  byte *local_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  byte local_a5;
  int local_a4;
  int local_94;
  uint local_90;
  byte local_8a;
  byte local_89;
  undefined4 local_88;
  int local_84;
  byte *local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  byte *local_68;
  uint local_64;
  byte local_5d;
  uint local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  byte *local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_80 = param_2;
  switch(*param_4) {
  case '\0':
    local_d0 = (uint)(byte)param_4[0xc];
    local_58 = 0;
    FUN_080afadc(param_1 + 0x34,param_3);
    pbVar2 = (byte *)FUN_080a609c(param_1 + 0x34,0);
    for (local_5c = 0; local_5c < local_d0; local_5c = local_5c + 1) {
      local_5d = 0;
      for (local_64 = local_5c; local_64 < param_3; local_64 = local_64 + local_d0) {
        local_5d = local_5d - param_2[local_58];
        pbVar2[local_64] = local_5d;
        local_58 = local_58 + 1;
      }
    }
    break;
  case '\x01':
  case '\x02':
    local_84 = *(int *)(param_1 + 0x4c50);
    local_88 = 0x1000000;
    if (*param_4 == '\x02') {
      local_89 = 0xe9;
    }
    else {
      local_89 = 0xe8;
    }
    local_c = 0;
    pbVar2 = param_2;
    while (local_130 = pbVar2, pbVar2 = local_80, local_c < (int)(param_3 - 4)) {
      pbVar2 = local_130 + 1;
      local_8a = *local_130;
      local_c = local_c + 1;
      if ((local_8a == 0xe8) || (local_8a == local_89)) {
        local_90 = local_c + local_84 & 0xffffff;
        local_94 = FUN_080d52a4(pbVar2);
        if (local_94 < 0) {
          if (-1 < (int)(local_94 + local_90)) {
            FUN_080d5314(pbVar2,local_94 + 0x1000000);
          }
        }
        else if (local_94 + -0x1000000 < 0) {
          FUN_080d5314(pbVar2,local_94 - local_90);
        }
        local_c = local_c + 4;
        pbVar2 = local_130 + 5;
      }
    }
    break;
  case '\x03':
    iVar5 = *(int *)(param_1 + 0x4c50);
    for (local_10 = 0; pbVar2 = param_2, local_10 < (int)(param_3 - 3); local_10 = local_10 + 4) {
      pbVar2 = param_2 + local_10;
      if (pbVar2[3] == 0xeb) {
        iVar4 = ((uint)*pbVar2 + ((uint)pbVar2[2] * 0x100 + (uint)pbVar2[1]) * 0x100) -
                ((uint)(iVar5 + local_10) >> 2);
        *pbVar2 = (byte)iVar4;
        pbVar2[1] = (byte)((uint)iVar4 >> 8);
        pbVar2[2] = (byte)((uint)iVar4 >> 0x10);
      }
    }
    break;
  case '\x04':
    local_b8 = (uint)(byte)param_4[0xc];
    local_20 = param_2;
    FUN_080afadc(param_1 + 0x34,param_3);
    local_bc = (byte *)FUN_080a609c(param_1 + 0x34,0);
    for (local_24 = 0; pbVar2 = local_bc, local_24 < local_b8; local_24 = local_24 + 1) {
      local_28 = 0;
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      memset(local_124,0,0x1c);
      local_48 = 0;
      for (local_44 = local_24; local_44 < param_3; local_44 = local_44 + local_b8) {
        local_c0 = local_34;
        iVar4 = local_2c - local_30;
        local_30 = local_2c;
        bVar1 = *local_20;
        local_c8 = (uint)bVar1;
        local_c4 = ((uint)(local_28 * 8 + local_2c * local_38 +
                          local_34 * local_40 + iVar4 * local_3c) >> 3 & 0xff) - local_c8;
        local_bc[local_44] = (byte)local_c4;
        local_cc = (char)bVar1 * 8;
        iVar5 = local_cc;
        if (local_cc < 0) {
          iVar5 = (char)bVar1 * -8;
        }
        uVar3 = local_124[0] + iVar5;
        iVar5 = local_cc - local_2c;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        local_124[1] = local_124[1] + iVar5;
        local_2c = local_cc + local_2c;
        if (local_2c < 0) {
          local_2c = -local_2c;
        }
        local_124[2] = local_124[2] + local_2c;
        iVar5 = local_cc - iVar4;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        local_124[3] = local_124[3] + iVar5;
        iVar5 = local_cc + iVar4;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        local_124[4] = local_124[4] + iVar5;
        iVar5 = local_cc - local_34;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        local_124[5] = local_124[5] + iVar5;
        local_34 = local_cc + local_34;
        if (local_34 < 0) {
          local_34 = -local_34;
        }
        local_124[6] = local_124[6] + local_34;
        local_124[0] = uVar3;
        if ((local_48 & 0x1f) == 0) {
          local_50 = 0;
          local_124[0] = 0;
          local_4c = uVar3;
          for (local_54 = 1; local_54 < 7; local_54 = local_54 + 1) {
            if (local_124[local_54] < local_4c) {
              local_4c = local_124[local_54];
              local_50 = local_54;
            }
            local_124[local_54] = 0;
          }
          switch(local_50) {
          case 1:
            if (local_38 + 0x10 < 0 == SCARRY4(local_38,0x10)) {
              local_38 = local_38 + -1;
            }
            break;
          case 2:
            if (local_38 < 0x10) {
              local_38 = local_38 + 1;
            }
            break;
          case 3:
            if (local_3c + 0x10 < 0 == SCARRY4(local_3c,0x10)) {
              local_3c = local_3c + -1;
            }
            break;
          case 4:
            if (local_3c < 0x10) {
              local_3c = local_3c + 1;
            }
            break;
          case 5:
            if (local_40 + 0x10 < 0 == SCARRY4(local_40,0x10)) {
              local_40 = local_40 + -1;
            }
            break;
          case 6:
            if (local_40 < 0x10) {
              local_40 = local_40 + 1;
            }
          }
        }
        local_48 = local_48 + 1;
        local_34 = iVar4;
        local_2c = (int)(char)((byte)local_c4 - (char)local_28);
        local_28 = local_c4;
        local_20 = local_20 + 1;
      }
    }
    break;
  case '\x05':
    local_d8 = *(int *)(param_4 + 0x10);
    local_dc = (uint)(byte)param_4[0x14];
    local_68 = param_2;
    FUN_080afadc(param_1 + 0x34,param_3);
    pbVar2 = (byte *)FUN_080a609c(param_1 + 0x34,0);
    for (local_6c = 0; local_6c < 3; local_6c = local_6c + 1) {
      local_70 = 0;
      for (local_74 = local_6c; local_74 < param_3; local_74 = local_74 + 3) {
        if ((int)(local_74 - local_d8) < 3) {
          local_78 = local_70;
        }
        else {
          uVar3 = (uint)pbVar2[local_74 - local_d8];
          local_78 = (uint)(pbVar2 + (local_74 - local_d8))[-3];
          iVar4 = (local_70 + uVar3) - local_78;
          iVar5 = iVar4 - local_70;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          iVar6 = iVar4 - uVar3;
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          iVar4 = iVar4 - local_78;
          if (iVar4 < 0) {
            iVar4 = -iVar4;
          }
          if ((iVar6 < iVar5) || (iVar4 < iVar5)) {
            if (iVar4 < iVar6) goto LAB_080d0104;
          }
          else {
            local_78 = local_70;
            uVar3 = local_78;
          }
          local_78 = uVar3;
        }
LAB_080d0104:
        local_70 = local_78 - *local_68 & 0xff;
        pbVar2[local_74] = (byte)(local_78 - *local_68);
        local_68 = local_68 + 1;
      }
    }
    for (local_7c = local_dc; local_7c < param_3 - 2; local_7c = local_7c + 3) {
      pbVar2[local_7c] = pbVar2[local_7c] + pbVar2[local_7c + 1];
      pbVar2[local_7c + 2] = pbVar2[local_7c + 2] + pbVar2[local_7c + 1];
    }
    break;
  case '\x06':
    local_14 = *(uint *)(param_1 + 0x4c50) >> 4;
    local_130 = param_2;
    for (local_18 = 0; pbVar2 = local_80, local_18 < (int)(param_3 - 0x15);
        local_18 = local_18 + 0x10) {
      local_a4 = (*local_130 & 0x1f) - 0x10;
      if ((-1 < local_a4) && (local_a5 = (&DAT_08102294)[*local_130 & 0x1f], local_a5 != 0)) {
        for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
          if (((int)(uint)local_a5 >> (local_1c & 0xff) & 1U) != 0) {
            local_ac = local_1c * 0x29 + 5;
            local_b0 = FUN_080cf3e0(param_1,local_130,local_1c * 0x29 + 0x2a,4);
            if (local_b0 == 5) {
              local_b4 = FUN_080cf3e0(param_1,local_130,local_ac + 0xd,0x14);
              FUN_080cf4e4(param_1,local_130,local_b4 - local_14 & 0xfffff,local_ac + 0xd,0x14);
            }
          }
        }
      }
      local_130 = local_130 + 0x10;
      local_14 = local_14 + 1;
    }
    break;
  default:
    pbVar2 = (byte *)0x0;
  }
  return pbVar2;
}


