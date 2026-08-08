/*
 * Ghidra decompilation
 *
 * Function : FUN_0806de38
 * Address  : 0806de38
 * Program  : drastic16
 */


undefined4 FUN_0806de38(int param_1,uint param_2)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  byte bStack_81;
  uint local_80;
  uint local_7c;
  int local_74;
  uint local_64;
  uint local_4c;
  int local_48;
  uint *local_44;
  int local_40;
  uint local_3c;
  short local_34;
  ushort local_32;
  ushort local_30;
  byte local_2b;
  char local_2a;
  
  cVar6 = *(char *)(param_1 + 0x2104);
  iVar15 = *(int *)(param_1 + 0x2084);
  local_48 = iVar15 + 0x1420018;
  local_2b = 0;
  uVar16 = param_2;
  local_3c = param_2;
  if (cVar6 == '\x01') {
    local_2b = 8;
    if (param_2 < 0xffff0000) {
      iVar7 = *(int *)(param_1 + 0x802380) + (param_2 >> 0x17) * 0x30;
      goto joined_r0x0806e030;
    }
    local_64 = 2;
    local_44 = (uint *)malloc(0x1c0);
    local_40 = *(int *)(iVar15 + 0x14da0e4);
    uVar24 = local_64;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x802380) + (param_2 >> 0x17) * 0x30;
joined_r0x0806e030:
    if (param_2 < 0x2000000) {
      local_44 = (uint *)malloc(0x1c0);
      local_40 = *(int *)(iVar15 + 0x14da0e4);
      if (cVar6 == '\x01') {
LAB_0806e0ac:
        local_64 = 0;
        uVar24 = 2;
      }
      else {
        local_64 = 2;
        uVar24 = 0;
      }
    }
    else {
      iVar7 = (**(code **)(iVar7 + 0x24))(*(undefined4 *)(param_1 + 0x802384),iVar7,param_2);
      uVar16 = local_3c;
      if (iVar7 == 0) {
        uVar5 = 0;
        goto LAB_0806eb34;
      }
      iVar7 = *(int *)(param_1 + 0x2084);
      cVar6 = *(char *)(param_1 + 0x2104);
      local_44 = (uint *)malloc(0x1c0);
      local_40 = *(int *)(iVar7 + 0x14da0e4);
      if (cVar6 == '\x01') {
        if (uVar16 < 0x2000000) goto LAB_0806e0ac;
        local_64 = 2;
        uVar24 = 2;
      }
      else {
        local_64 = 2;
        uVar24 = 0;
      }
    }
  }
  local_2a = '\0';
  local_30 = 0;
  if (uVar16 >> 0x18 == 2) {
    local_64 = 1;
  }
  local_80 = 0;
  iVar20 = 0;
  uVar19 = 0xf;
  local_74 = 0x10;
  iVar7 = 0;
  do {
    puVar10 = local_44;
    uVar22 = 0x806df70;
    uVar4 = FUN_080101a4(param_1 + 0x2380,uVar16);
    uVar11 = uVar16 + 8;
    uVar16 = uVar16 + 4;
    puVar10[iVar7 * 7] = uVar4;
    if (uVar4 == 0) {
      iVar20 = iVar20 + 1;
    }
    puVar10 = puVar10 + iVar7 * 7;
    if (uVar4 != 0) {
      iVar20 = 0;
    }
    puVar10[1] = uVar11;
    uVar8 = uVar24;
    uVar9 = uVar24;
    local_4c = uVar24;
    uVar17 = uVar24;
    uVar21 = uVar24;
    uVar11 = uVar24;
    if (uVar19 == 0xf) {
      local_7c = uVar4 >> 0x1c;
      uVar23 = uVar4 >> 0x1d;
      uVar12 = (uVar4 << 4) >> 0x1d;
LAB_0806dfb0:
      *(undefined *)((int)puVar10 + 0x16) = 0;
      *(undefined *)((int)puVar10 + 0x15) = 0;
      bStack_81 = (byte)((uint)*(undefined4 *)(&DAT_080e9ee8 + uVar23 * 4) >> 0x18);
      *(undefined2 *)((int)puVar10 + 0x12) = 0;
      *(undefined *)(puVar10 + 6) = 0;
      *(undefined *)((int)puVar10 + 0x17) = 1;
      switch(uVar12) {
      case 1:
        if (((uVar4 << 7) >> 0x1e == 2) && ((uVar4 & 0x100000) == 0)) {
          uVar8 = 0;
          if ((uVar4 << 0x10) >> 0x1c == 0xf) {
            uVar11 = 1 << (uVar4 & 0xf);
            if ((uVar4 & 0x400000) == 0) {
              local_4c = uVar4 & 0x80000;
              if (local_4c != 0) {
                local_4c = 0xf0;
              }
              if ((uVar4 & 0x10000) == 0) {
                uVar8 = 0;
                uVar9 = 0;
                uVar17 = 0;
                uVar21 = 0;
                uVar22 = local_80 & uVar11;
                uVar11 = uVar11 & 0xffff;
              }
              else {
LAB_0806ef24:
                uVar8 = 0;
                *(undefined *)((int)puVar10 + 0x16) = 4;
                uVar9 = uVar8;
                uVar17 = uVar8;
                uVar21 = uVar8;
                uVar22 = local_80 & (uVar11 | 0x7f00);
                uVar11 = uVar11 & 0xffff | 0x7f00;
              }
            }
            else {
              uVar22 = local_80 & uVar11;
LAB_0806e778:
              uVar8 = 0;
              uVar9 = uVar8;
              local_4c = uVar8;
              uVar17 = uVar8;
              uVar21 = uVar8;
              uVar11 = uVar11 & 0xffff;
            }
          }
          else {
LAB_0806e990:
            *(undefined *)(puVar10 + 6) = 1;
            uVar9 = uVar8;
            local_4c = uVar8;
            uVar17 = uVar8;
            uVar21 = uVar8;
            uVar22 = uVar8;
            uVar11 = uVar8;
          }
        }
        else {
          if ((uVar4 << 0x14) >> 0x1c == 0) {
            local_4c = 0xc0;
            uVar17 = 0;
          }
          else if ((uVar4 & 0x100000) == 0) {
            uVar17 = 0;
            local_4c = 0xc0;
          }
          else {
            uVar17 = 0x20;
            local_4c = 0xe0;
          }
          uVar23 = (uVar4 << 7) >> 0x1c;
          switch(uVar23) {
          case 2:
          case 3:
          case 4:
            uVar21 = (uVar4 << 0x10) >> 0x1c;
            uVar11 = 1 << ((uVar4 << 0xc) >> 0x1c);
            uVar9 = 1 << uVar21;
            if ((uVar4 & 0x100000) != 0) goto LAB_0806e4a4;
LAB_0806e4d8:
            uVar22 = local_80 & uVar11;
            uVar8 = uVar9 & 0xffff;
            local_4c = uVar17;
            uVar11 = uVar11 & 0xffff;
            break;
          case 5:
          case 6:
          case 7:
            uVar21 = (uVar4 << 0x10) >> 0x1c;
            bStack_81 = bStack_81 | 0x20;
            uVar11 = 1 << ((uVar4 << 0xc) >> 0x1c);
            uVar9 = 1 << uVar21;
            if ((uVar4 & 0x100000) == 0) goto LAB_0806e4d8;
LAB_0806e4a4:
            uVar8 = uVar9 & 0xffff;
            uVar22 = local_80 & uVar11;
            uVar11 = uVar11 & 0xffff;
            local_4c = 0xf0;
            break;
          case 8:
          case 9:
            uVar11 = 1 << ((uVar4 << 0xc) >> 0x1c);
            uVar8 = 0;
            uVar22 = local_80 & uVar11;
            uVar21 = (uVar4 << 0x10) >> 0x1c;
            uVar11 = uVar11 & 0xffff;
            uVar9 = 0;
            break;
          case 10:
          case 0xb:
            uVar11 = 1 << ((uVar4 << 0xc) >> 0x1c);
            uVar8 = 0;
            uVar21 = (uVar4 << 0x10) >> 0x1c;
            uVar22 = local_80 & uVar11;
            uVar11 = uVar11 & 0xffff;
            uVar9 = 0;
            local_4c = 0xf0;
            break;
          default:
            uVar21 = (uVar4 << 0x10) >> 0x1c;
            uVar11 = 1 << ((uVar4 << 0xc) >> 0x1c);
            uVar9 = 1 << uVar21;
            if ((uVar4 & 0x100000) == 0) goto LAB_0806e4d8;
            uVar8 = uVar9 & 0xffff;
            uVar22 = local_80 & uVar11;
            uVar11 = uVar11 & 0xffff;
            break;
          case 0xd:
          case 0xf:
            uVar21 = (uVar4 << 0x10) >> 0x1c;
            uVar9 = 1 << uVar21;
            if ((uVar4 & 0x100000) == 0) {
              local_4c = uVar17;
            }
            uVar22 = 0;
            uVar8 = uVar9 & 0xffff;
            uVar11 = uVar22;
          }
          if (uVar21 == 0xf) {
            uVar17 = uVar4 & 0x100000;
            uVar21 = uVar17;
            if ((uVar17 != 0) && (uVar17 = 0, uVar21 = uVar17, 3 < uVar23 - 8)) {
              local_4c = 0xf0;
              uVar21 = 0;
            }
          }
          else {
            uVar17 = 0;
            uVar21 = 0;
          }
        }
        break;
      case 2:
      case 3:
        if (local_7c == 0xf) {
          uVar8 = 0;
          uVar9 = 0;
          local_4c = 0;
          uVar17 = 0;
          uVar21 = 0;
          uVar22 = 0;
          uVar11 = 0;
        }
        else {
          uVar11 = uVar4 & 0x2000000;
          if (uVar11 != 0) {
            if ((uVar4 & 0x10) != 0) goto switchD_0806dfdc_caseD_6;
            uVar11 = 1 << (uVar4 & 0xf);
          }
          uVar9 = 1 << ((uVar4 << 0xc) >> 0x1c);
          uVar11 = uVar11 | uVar9;
          if ((uVar4 & 0x1200000) != 0x1200000) {
            uVar9 = 0;
          }
          uVar22 = (uVar4 << 0x10) >> 0x1c;
          if ((uVar4 & 0x100000) == 0) {
            uVar11 = uVar11 | 1 << uVar22;
LAB_0806e8a8:
            local_4c = uVar4 & 0x100000;
            *(undefined *)((int)puVar10 + 0x16) = 4;
            uVar8 = uVar9 & 0xffff;
            uVar17 = local_4c;
            uVar21 = local_4c;
            uVar22 = local_80 & uVar11;
            uVar11 = uVar11 & 0xffff;
          }
          else {
            uVar9 = uVar9 | 1 << uVar22;
            *(undefined *)((int)puVar10 + 0x16) = 8;
            uVar8 = uVar9 & 0xffff;
            local_4c = 0;
            uVar17 = 8;
            uVar21 = 0;
            uVar22 = local_80 & uVar11;
            uVar11 = uVar11 & 0xffff;
          }
        }
        break;
      case 4:
        uVar11 = 1 << ((uVar4 << 0xc) >> 0x1c);
        uVar22 = uVar4 & 0xffff;
        uVar9 = uVar4 & 0x200000;
        if ((uVar4 & 0x200000) != 0) {
          uVar9 = uVar11;
        }
        uVar8 = (uint)(byte)(&DAT_0aaec000)[uVar4 & 0xff] + (uint)(byte)(&DAT_0aaec000)[uVar22 >> 8]
        ;
        if (local_7c == 0xe && uVar8 != 0) {
          bVar25 = uVar8 != 1;
          if (bVar25) {
            uVar8 = uVar8 & 0xff;
          }
          cVar6 = (char)uVar8;
          if (!bVar25) {
            cVar6 = '\x02';
          }
          if ((uVar4 & 0x108000) != 0x108000) {
            *(char *)((int)puVar10 + 0x17) = cVar6;
            goto LAB_0806e1fc;
          }
          *(char *)((int)puVar10 + 0x17) = cVar6 + '\x01';
        }
        else {
LAB_0806e1fc:
          if ((uVar4 & 0x100000) == 0) {
            uVar11 = uVar11 | uVar22;
            goto LAB_0806e8a8;
          }
        }
        *(undefined *)((int)puVar10 + 0x16) = 8;
        uVar17 = 8;
        if ((uVar4 & 0x400000) == 0) {
          uVar8 = uVar9 & 0xffff | uVar22;
          uVar9 = uVar9 | uVar22;
          local_4c = 0;
          uVar21 = 0;
          uVar22 = local_80 & uVar11;
          uVar11 = uVar11 & 0xffff;
        }
        else {
          uVar8 = uVar9 & 0xffff;
          local_4c = 0;
          uVar21 = 0;
          uVar22 = local_80 & uVar11;
          uVar11 = uVar11 & 0xffff;
        }
        break;
      case 5:
        iVar18 = (int)(uVar4 << 8) >> 8;
        if (local_7c == 0xf) {
          uVar8 = 0xc000;
          uVar4 = ((iVar18 + 1) * 2 - ((int)(uVar4 << 7) >> 0x1f)) * 2 | 1;
        }
        else {
          if ((uVar4 & 0x1000000) == 0) {
            uVar8 = 0x8000;
          }
          else {
            uVar8 = 0xc000;
          }
          uVar4 = (iVar18 + 1) * 4;
        }
        uVar9 = uVar8;
        local_4c = 0;
        uVar17 = 0;
        uVar21 = uVar4 + uVar16;
        uVar22 = 0;
        uVar11 = 0;
        break;
      case 6:
switchD_0806dfdc_caseD_6:
        *(undefined *)(puVar10 + 6) = 1;
        uVar8 = 0;
        uVar9 = 0;
        local_4c = 0;
        uVar17 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar11 = 0;
        break;
      case 7:
        if ((uVar4 & 0x1000000) == 0) {
          if (uVar24 == 0) {
LAB_0806e950:
            *(undefined *)(puVar10 + 6) = 1;
            uVar22 = uVar24;
          }
          else {
            uVar8 = uVar4 & 0x10;
            if (uVar8 == 0) goto LAB_0806e990;
            uVar11 = (uVar4 << 0x10) >> 0x1c;
            if ((uVar4 & 0x100000) != 0) {
              uVar9 = 1 << uVar11;
              uVar8 = uVar9 & 0xffff;
              local_4c = 0;
              uVar17 = 0;
              uVar21 = 0;
              uVar22 = 0;
              uVar11 = 0;
              break;
            }
            uVar11 = 1 << uVar11;
            if ((uVar4 << 0x14) >> 0x1c != 0xf) {
LAB_0806e770:
              uVar22 = local_80 & uVar11;
              goto LAB_0806e778;
            }
            if ((uVar4 << 8) >> 0x1d != 0) {
LAB_0806f260:
              uVar22 = local_80 & uVar11;
              goto LAB_0806e778;
            }
            uVar22 = (uVar4 << 0xc) >> 0x1c;
            uVar4 = uVar4 & 0xef;
            local_4c = 0;
            if (uVar22 == 7) {
              if (uVar4 != 0x80 && uVar4 != 0x48) goto LAB_0806e770;
              *(undefined *)((int)puVar10 + 0x16) = 1;
              uVar8 = 0x8000;
              uVar9 = 0x8000;
              uVar17 = local_4c;
              uVar21 = local_4c;
              uVar22 = local_80 & (uVar11 | 0x8000);
              uVar11 = uVar11 & 0xffff | 0x8000;
            }
            else {
              if ((uVar22 != 9 || uVar4 != 1) && (uVar22 != 1 || uVar4 != 0)) goto LAB_0806f260;
              uVar8 = 0;
              *(undefined *)((int)puVar10 + 0x16) = 4;
              uVar9 = uVar8;
              local_4c = uVar8;
              uVar17 = uVar8;
              uVar21 = uVar8;
              uVar22 = local_80 & uVar11;
              uVar11 = uVar11 & 0xffff;
            }
          }
        }
        else {
          uVar8 = 0xc000;
          uVar9 = 0xc000;
          local_4c = 0;
          uVar17 = 0;
          uVar21 = 0;
          uVar22 = local_80 & 0x8000;
          uVar11 = 0x8000;
        }
        break;
      default:
        if ((uVar4 & 0x90) != 0x90) goto LAB_0806e7c8;
        if ((uVar4 >> 5 & 3) == 0) {
          uVar11 = (uVar4 << 7) >> 0x1c;
          if (uVar11 < 8) {
            if ((uVar4 & 0x800000) == 0) {
              uVar11 = 1 << (uVar4 & 0xf);
              bVar25 = (uVar4 & 0x200000) != 0;
              uVar23 = uVar11 | 1 << ((uVar4 << 0x14) >> 0x1c);
              if (bVar25) {
                uVar11 = (uVar4 << 0x10) >> 0x1c;
              }
              uVar9 = 1 << ((uVar4 << 0xc) >> 0x1c);
              if (bVar25) {
                uVar23 = uVar23 | 1 << (uVar11 & 0xff);
              }
            }
            else {
              uVar23 = 1 << (uVar4 & 0xf) | 1 << ((uVar4 << 0x14) >> 0x1c);
              uVar9 = 1 << ((uVar4 << 0x10) >> 0x1c) | 1 << ((uVar4 << 0xc) >> 0x1c);
              if ((uVar4 & 0x200000) != 0) {
                uVar23 = uVar23 | uVar9;
              }
            }
            local_4c = uVar4 & 0x100000;
            if (local_4c == 0) {
LAB_0806ebec:
              uVar8 = uVar9 & 0xffff;
              uVar17 = local_4c;
              uVar21 = local_4c;
              uVar22 = local_80 & uVar23;
              uVar11 = uVar23 & 0xffff;
            }
            else {
              uVar8 = uVar9 & 0xffff;
              local_4c = 0xc0;
              uVar17 = 0;
              uVar21 = 0;
              uVar22 = local_80 & uVar23;
              uVar11 = uVar23 & 0xffff;
            }
          }
          else {
            if ((uVar11 != 8) && (uVar8 = 0, uVar11 != 10)) goto LAB_0806e990;
            *(undefined *)((int)puVar10 + 0x16) = 4;
            if (local_7c == 0xe) {
              *(undefined *)((int)puVar10 + 0x17) = 2;
            }
            uVar9 = 1 << ((uVar4 << 0x10) >> 0x1c);
            uVar4 = 1 << (uVar4 & 0xf) | 1 << ((uVar4 << 0xc) >> 0x1c);
            uVar8 = uVar9 & 0xffff;
            local_4c = 0;
            uVar17 = 0;
            uVar21 = 0;
            uVar22 = local_80 & uVar4;
            uVar11 = uVar4 & 0xffff;
          }
        }
        else {
          uVar17 = uVar4 & 0x40;
          uVar11 = -((int)(uVar4 << 0xb) >> 0x1f);
          uVar8 = (uVar4 << 0x10) >> 0x1c;
          if (uVar17 != 0) {
            if (uVar11 == 0) {
              uVar11 = (uVar4 >> 5 ^ 1) & 1;
              uVar17 = 1;
              if (local_7c == 0xe) {
                *(undefined *)((int)puVar10 + 0x17) = 2;
              }
            }
            else {
              uVar17 = 0;
              uVar11 = 1;
            }
          }
          bVar25 = (uVar4 & 0x400000) == 0;
          uVar9 = 1 << ((uVar4 << 0xc) >> 0x1c);
          if (bVar25) {
            uVar22 = uVar4 & 0xf;
          }
          uVar23 = uVar9;
          if (bVar25) {
            uVar23 = uVar9 | 1 << (uVar22 & 0xff);
          }
          if ((uVar4 & 0x1200000) != 0x1200000) {
            uVar9 = 0;
          }
          if (uVar11 == 0) {
            uVar23 = uVar23 | 1 << uVar8;
            *(undefined *)((int)puVar10 + 0x16) = 4;
            if (uVar17 == 0) {
              local_4c = 0;
              goto LAB_0806ebec;
            }
            uVar23 = uVar23 | 1 << uVar8 + 1;
            uVar8 = uVar9 & 0xffff;
            local_4c = 0;
            uVar17 = 0;
            uVar21 = 0;
            uVar22 = local_80 & uVar23;
            uVar11 = uVar23 & 0xffff;
          }
          else {
            uVar9 = uVar9 | 1 << uVar8;
            *(undefined *)((int)puVar10 + 0x16) = 8;
            if (uVar17 != 0) {
              uVar9 = uVar9 | 1 << uVar8 + 1;
            }
            local_4c = (uint)(uVar8 == 0xf && local_7c == 0xe);
            if (uVar8 == 0xf && local_7c == 0xe) {
              *(undefined *)((int)puVar10 + 0x17) = 3;
              uVar8 = uVar9 & 0xffff;
              local_4c = 0;
              uVar17 = 8;
              uVar21 = 0;
              uVar22 = local_80 & uVar23;
              uVar11 = uVar23 & 0xffff;
            }
            else {
              uVar8 = uVar9 & 0xffff;
              uVar17 = 8;
              uVar21 = local_4c;
              uVar22 = local_80 & uVar23;
              uVar11 = uVar23 & 0xffff;
            }
          }
        }
      }
      goto LAB_0806e0e0;
    }
    uVar23 = uVar4 >> 0x1d;
    if (uVar23 != uVar19 >> 1) {
      uVar12 = (uVar4 << 4) >> 0x1d;
      local_7c = uVar4 >> 0x1c;
      goto LAB_0806dfb0;
    }
    if (uVar19 != uVar4 >> 0x1c) {
      uVar12 = uVar4 & 0xfffffff;
      uVar4 = uVar12 | 0xe0000000;
      local_7c = 0xe;
      uVar23 = 7;
      uVar12 = (uVar12 << 4) >> 0x1d;
      *puVar10 = uVar4;
      goto LAB_0806dfb0;
    }
    uVar4 = 0xe1a00000;
    *puVar10 = 0xe1a00000;
    *(undefined *)((int)puVar10 + 0x16) = 0;
    *(undefined *)((int)puVar10 + 0x15) = 0;
    *(undefined2 *)((int)puVar10 + 0x12) = 0;
    local_7c = 0xe;
    *(undefined *)(puVar10 + 6) = 0;
    bStack_81 = 0;
    *(undefined *)((int)puVar10 + 0x17) = 1;
LAB_0806e7c8:
    if ((uVar4 << 7) >> 0x1e == 2) {
      if ((uVar4 & 0x100000) == 0) {
        uVar23 = 0;
        if ((uVar4 & 0x80) == 0) {
          if ((uVar4 & 0x10) == 0) {
            if ((uVar4 & 0x200000) == 0) {
              bVar25 = (uVar4 & 0x400000) == 0;
              bVar13 = 0;
              if (bVar25) {
                bVar13 = bStack_81;
              }
              uVar9 = 1 << ((uVar4 << 0x10) >> 0x1c);
              if (bVar25) {
                bVar13 = bVar13 | 0xf0;
              }
              if (bVar25) {
                bStack_81 = bVar13;
              }
              uVar8 = uVar9 & 0xffff;
              local_4c = 0;
              uVar17 = 0;
              uVar21 = 0;
              uVar22 = 0;
              uVar11 = 0;
            }
            else {
              uVar11 = 1 << (uVar4 & 0xf);
              if ((uVar4 & 0x400000) == 0) {
                local_4c = uVar4 & 0x80000;
                if (local_4c != 0) {
                  local_4c = 0xf0;
                }
                if ((uVar4 & 0x10000) != 0) goto LAB_0806ef24;
                uVar8 = 0;
                uVar9 = 0;
                uVar17 = 0;
                uVar21 = 0;
                uVar22 = local_80 & uVar11;
                uVar11 = uVar11 & 0xffff;
              }
              else {
                uVar8 = 0;
                uVar9 = 0;
                local_4c = 0;
                uVar17 = 0;
                uVar21 = 0;
                uVar22 = local_80 & uVar11;
                uVar11 = uVar11 & 0xffff;
              }
            }
          }
          else {
            uVar12 = (uVar4 << 0x19) >> 0x1e;
            uVar22 = 0;
            if (uVar12 == 2) {
              if (uVar24 == 0) {
LAB_0806f284:
                *(undefined *)(puVar10 + 6) = 1;
                uVar8 = 0;
                uVar9 = 0;
                local_4c = 0;
                uVar17 = 0;
                uVar21 = 0;
                uVar11 = 0;
              }
              else {
                uVar9 = 1 << ((uVar4 << 0x10) >> 0x1c);
                uVar4 = 1 << (uVar4 & 0xf) | 1 << ((uVar4 << 0xc) >> 0x1c);
                uVar8 = uVar9 & 0xffff;
                local_4c = uVar23;
                uVar17 = uVar23;
                uVar21 = uVar23;
                uVar22 = local_80 & uVar4;
                uVar11 = uVar4 & 0xffff;
              }
            }
            else if (uVar12 == 3) {
              if ((uVar24 == 0) ||
                 (uVar8 = uVar22, uVar9 = uVar22, local_4c = uVar22, uVar17 = uVar22,
                 uVar21 = uVar22, uVar11 = uVar22, local_7c != 0xe)) goto LAB_0806f284;
            }
            else if (uVar12 == 1) {
              if (uVar24 == 0) goto LAB_0806f284;
              uVar4 = 1 << (uVar4 & 0xf);
              uVar8 = 0xc000;
              uVar9 = 0xc000;
              local_4c = uVar23;
              uVar17 = uVar23;
              uVar21 = uVar23;
              uVar22 = local_80 & (uVar4 | 0x8000);
              uVar11 = uVar4 & 0xffff | 0x8000;
            }
            else if ((uVar4 & 0x400000) == 0) {
              uVar4 = 1 << (uVar4 & 0xf);
              uVar8 = 0x8000;
              uVar9 = 0x8000;
              local_4c = 0;
              uVar17 = 0;
              uVar21 = 0;
              uVar22 = local_80 & uVar4;
              uVar11 = uVar4 & 0xffff;
            }
            else {
              uVar22 = uVar24;
              if (uVar24 != 0) {
                uVar11 = 1 << (uVar4 & 0xf);
                uVar9 = 1 << ((uVar4 << 0x10) >> 0x1c);
                uVar8 = uVar9 & 0xffff;
                local_4c = uVar23;
                uVar17 = uVar23;
                uVar21 = uVar23;
                uVar22 = local_80 & uVar11;
                uVar11 = uVar11 & 0xffff;
              }
            }
          }
        }
        else {
          if (uVar24 == 0) goto LAB_0806e950;
          uVar22 = (uVar4 << 9) >> 0x1e;
          uVar11 = 1 << (uVar4 & 0xf) | 1 << ((uVar4 << 0x14) >> 0x1c);
          uVar9 = 1 << ((uVar4 << 0xc) >> 0x1c);
          if (uVar22 == 1) {
            if ((uVar4 & 0x20) == 0) {
              uVar11 = uVar11 | 1 << ((uVar4 << 0x10) >> 0x1c);
              uVar8 = uVar9 & 0xffff;
              local_4c = 0;
              uVar17 = 0;
              uVar21 = 0;
              uVar22 = local_80 & uVar11;
              uVar11 = uVar11 & 0xffff;
            }
            else {
LAB_0806f2d4:
              uVar8 = uVar9 & 0xffff;
              local_4c = uVar23;
              uVar17 = uVar23;
              uVar21 = uVar23;
              uVar22 = local_80 & uVar11;
              uVar11 = uVar11 & 0xffff;
            }
          }
          else if (uVar22 == 2) {
            uVar9 = uVar9 | 1 << ((uVar4 << 0x10) >> 0x1c);
            uVar8 = uVar9 & 0xffff;
            local_4c = uVar23;
            uVar17 = uVar23;
            uVar21 = uVar23;
            uVar22 = local_80 & uVar11;
            uVar11 = uVar11 & 0xffff;
          }
          else {
            if ((uVar4 & 0x400000) != 0) goto LAB_0806f2d4;
            uVar11 = uVar11 | 1 << ((uVar4 << 0x10) >> 0x1c);
            uVar8 = uVar9 & 0xffff;
            local_4c = 0;
            uVar17 = 0;
            uVar21 = 0;
            uVar22 = local_80 & uVar11;
            uVar11 = uVar11 & 0xffff;
          }
        }
        goto LAB_0806e0e0;
      }
      uVar11 = 1 << (uVar4 & 0xf);
      if ((uVar4 & 0x10) != 0) goto LAB_0806e7f4;
LAB_0806e8e8:
      uVar22 = (uVar4 << 0x19) >> 0x1e;
      uVar9 = (uVar4 << 0x14) >> 0x1b;
      if ((uVar4 & 0x100000) == 0) {
        uVar17 = 0xc0;
        local_4c = 0;
      }
      else if ((uVar9 | uVar22) == 0) {
        uVar17 = 0xc0;
        local_4c = 0;
      }
      else {
        uVar17 = 0xe0;
        local_4c = 0x20;
      }
      if (uVar9 == 0 && uVar22 == 3) {
        bStack_81 = bStack_81 | 0x20;
      }
    }
    else {
      uVar11 = 1 << (uVar4 & 0xf);
      if ((uVar4 & 0x10) == 0) goto LAB_0806e8e8;
      if ((uVar4 & 0x100000) != 0) {
LAB_0806e7f4:
        *(undefined *)((int)puVar10 + 0x17) = 2;
        bStack_81 = bStack_81 | 0x20;
      }
      uVar11 = uVar11 | 1 << ((uVar4 << 0x14) >> 0x1c);
      local_4c = 0;
      uVar17 = 0xc0;
    }
    uVar22 = uVar4 & 0x100000;
    uVar21 = (uVar4 << 7) >> 0x1c;
    switch(uVar21) {
    case 2:
    case 3:
    case 4:
      uVar23 = (uVar4 << 0x10) >> 0x1c;
      uVar11 = uVar11 | 1 << ((uVar4 << 0xc) >> 0x1c);
      uVar9 = 1 << uVar23;
      uVar8 = uVar9 & 0xffff;
      if (uVar22 == 0) goto LAB_0806ed24;
LAB_0806eda4:
      uVar17 = 0xf0;
      goto LAB_0806eda8;
    case 5:
    case 6:
    case 7:
      uVar23 = (uVar4 << 0x10) >> 0x1c;
      uVar11 = uVar11 | 1 << ((uVar4 << 0xc) >> 0x1c);
      uVar9 = 1 << uVar23;
      bStack_81 = bStack_81 | 0x20;
      uVar8 = uVar9 & 0xffff;
      if (uVar22 != 0) goto LAB_0806eda4;
      goto LAB_0806ed24;
    case 8:
    case 9:
      break;
    case 10:
    case 0xb:
      uVar17 = 0xf0;
      break;
    default:
      uVar11 = uVar11 | 1 << ((uVar4 << 0xc) >> 0x1c);
      goto joined_r0x0806eee8;
    case 0xd:
    case 0xf:
joined_r0x0806eee8:
      uVar23 = (uVar4 << 0x10) >> 0x1c;
      uVar9 = 1 << uVar23;
      uVar8 = uVar9 & 0xffff;
      if (uVar22 == 0) goto LAB_0806ed24;
LAB_0806eda8:
      local_4c = uVar17;
      if (uVar23 != 0xf) goto LAB_0806ed24;
      goto LAB_0806f030;
    }
    uVar11 = uVar11 | 1 << ((uVar4 << 0xc) >> 0x1c);
    local_4c = uVar17;
    if ((uVar4 >> 0xc & 0xf) == 0xf) {
      if (uVar22 == 0) {
        uVar8 = 0;
        uVar9 = 0;
        goto LAB_0806ed24;
      }
      uVar8 = 0;
      uVar9 = uVar8;
LAB_0806f030:
      if (3 < uVar21 - 8) {
        uVar17 = 0xf0;
      }
      local_4c = uVar17;
      uVar17 = 0;
      uVar21 = 0;
      uVar22 = local_80 & uVar11;
      uVar11 = uVar11 & 0xffff;
    }
    else {
      uVar8 = 0;
      uVar9 = uVar8;
LAB_0806ed24:
      uVar17 = 0;
      uVar21 = 0;
      uVar22 = local_80 & uVar11;
      uVar11 = uVar11 & 0xffff;
    }
LAB_0806e0e0:
    *(short *)(puVar10 + 4) = (short)uVar8;
    if (uVar17 != 0) {
      uVar17 = uVar9 & 0xffff;
    }
    bVar25 = uVar22 != 0;
    if (bVar25) {
      uVar8 = (uint)*(byte *)((int)puVar10 + 0x17);
    }
    cVar6 = (char)uVar8;
    iVar18 = iVar7 + 1;
    if (bVar25) {
      cVar6 = cVar6 + '\x01';
    }
    if (bVar25) {
      *(char *)((int)puVar10 + 0x17) = cVar6;
    }
    uVar4 = local_4c & 0xff;
    *(short *)((int)puVar10 + 0xe) = (short)uVar11;
    *(byte *)(puVar10 + 5) = (byte)local_4c | bStack_81 >> 4;
    *(undefined2 *)(puVar10 + 3) = 0;
    if (iVar20 == 8) {
      iVar18 = iVar7 + -6;
      local_2a = '\x02';
      local_34 = (short)iVar18;
      local_32 = local_34 * 2;
LAB_0806ea18:
      if (iVar18 != 0) goto LAB_0806e6d4;
      goto LAB_0806ea20;
    }
    local_34 = (short)iVar18;
    if (((uVar16 < 0x2000000) && (*(char *)(param_1 + 0x2104) == '\x01')) &&
       (8 < *(byte *)(*(int *)(param_1 + 0x2084) + (uVar16 * 0x20000 >> 0x13) + 0x14b8020))) {
      local_2a = '\x04';
LAB_0806e6b8:
      if (iVar18 != 0x800) {
        local_32 = local_34 * 2;
        if (local_2a != '\0') goto LAB_0806ea18;
        goto LAB_0806ea20;
      }
      break;
    }
    if (*(char *)(puVar10 + 6) != '\0') {
LAB_0806e9f4:
      if (iVar18 == 1) {
        local_32 = 2;
        local_34 = 1;
      }
      else {
        local_32 = (ushort)(iVar7 << 1);
        local_34 = (short)iVar7;
        iVar18 = iVar7;
      }
      local_2a = '\x02';
      goto LAB_0806ea18;
    }
    if ((uVar9 & 0x8000) != 0) {
      if (uVar21 == 0) {
        *(ushort *)((int)puVar10 + 0x12) = ~(ushort)uVar9;
        *(byte *)((int)puVar10 + 0x15) = ~(byte)(uVar4 >> 4) & 0xf;
      }
      else {
        if (*(char *)(param_1 + 0x2104) == '\0') {
          if (uVar21 - 0x800000 < 0x1800000) goto LAB_0806e9f4;
LAB_0806e58c:
          uVar4 = 2;
        }
        else {
          if (*(char *)(param_1 + 0x2104) != '\x01') goto LAB_0806e58c;
          if (uVar21 < 0x2000000) {
            uVar4 = 0;
          }
          else {
            uVar4 = 2;
          }
        }
        uVar11 = (uint)local_30;
        local_30 = local_30 + 1;
        if (uVar21 >> 0x18 == 2) {
          uVar4 = 1;
        }
        iVar7 = local_40 + uVar11 * 0x1c;
        *(undefined4 *)(iVar7 + 0x14) = 0;
        *(uint *)(iVar7 + 0x10) = uVar16;
        *(uint *)(iVar7 + 0xc) = uVar21;
        *(short *)(iVar7 + 0x18) = local_34 + -1;
        *(undefined2 *)(iVar7 + 0x1a) = 0;
        if ((local_7c < 0xe) && (uVar21 < uVar16)) {
          uVar19 = local_7c;
        }
        if ((uVar4 != local_64) && (local_64 == 2 || uVar4 == 2)) {
          *(undefined4 *)(iVar7 + 0x14) = 4;
        }
        if ((uVar4 == 0) &&
           ((local_64 != 0 ||
            ((8 < *(byte *)(*(int *)(param_1 + 0x2084) + ((uVar21 << 0x11) >> 0x13) + 0x14b8020) &&
             ((uVar21 & 1) == 0)))))) {
          *(undefined4 *)(iVar7 + 0x14) = 2;
        }
      }
      if (0xdfffffff < *puVar10) goto LAB_0806e6b8;
      uVar4 = (uint)*(byte *)(puVar10 + 5);
    }
    if ((uVar4 & 0xf0) != 0) {
      uVar19 = 0xf;
    }
    if (iVar18 == local_74) {
      local_74 = iVar18 * 2;
      local_44 = (uint *)realloc(local_44,iVar18 * 0x38);
    }
    iVar7 = iVar18;
    local_80 = uVar17;
  } while (iVar18 != 0x800);
  local_34 = 0x800;
  local_32 = 0x1000;
  iVar18 = 0x800;
  local_2a = '\x01';
LAB_0806e6d4:
  *(undefined *)((int)local_44 + iVar18 * 0x1c + -7) = 0xf;
  *(undefined2 *)((int)local_44 + iVar18 * 0x1c + -10) = 0x7fff;
LAB_0806ea20:
  iVar7 = *(int *)(param_1 + 0x2084);
  uVar16 = *(int *)(iVar7 + 0x14da0e4) + (uint)local_30 * 0x1c;
  *(uint *)(iVar7 + 0x14da0e4) = uVar16;
  if (iVar7 + 0x1420000U <= uVar16) {
    puts("Translation stack overflow!");
    fflush(stdout);
  }
  FUN_0806991c(param_1 + 0x2084,&local_48,0);
  if ((local_30 != 0) && ((*(uint *)(local_40 + 0xc) & 0xfffffffe) == local_3c)) {
    uVar3 = 0;
    uVar16 = 0;
    uVar24 = *(ushort *)(local_40 + 0x18) + 1;
    puVar10 = local_44;
    do {
      uVar16 = uVar16 + 1;
      puVar1 = puVar10 + 4;
      puVar10 = puVar10 + 7;
      uVar3 = uVar3 | *(ushort *)puVar1;
    } while (uVar16 < uVar24);
    uVar16 = 0;
    uVar14 = ~uVar3 & 0x7fff;
    puVar10 = local_44;
    do {
      if ((*(byte *)((int)puVar10 + 0x16) & 4) != 0) goto LAB_0806eab8;
      uVar2 = *(ushort *)((int)puVar10 + 0xe);
      if (uVar2 == (uVar2 & uVar14)) {
        if (0xdfffffff < *puVar10) {
          uVar14 = uVar14 | *(ushort *)(puVar10 + 4);
        }
      }
      else if ((uVar2 & uVar3) != 0) goto LAB_0806eab8;
      uVar16 = uVar16 + 1;
      puVar10 = puVar10 + 7;
    } while (uVar16 < uVar24);
    local_2b = local_2b | 4;
  }
LAB_0806eab8:
  FUN_08069a54(param_1,param_2,(uint)local_32 << 1);
  iVar7 = *(int *)(iVar15 + 0x14a001c);
  *(uint *)(iVar15 + 0x142001c + (iVar7 + 0x18000) * 4) = param_2;
  *(int *)(iVar15 + 0x14a001c) = iVar7 + 1;
  FUN_0806cf4c(param_1,&local_48,0);
  *(int *)(iVar15 + 0x14a001c) = *(int *)(iVar15 + 0x14a001c) + -1;
  FUN_08069828(&local_48);
  uVar5 = FUN_0808892c(&local_48,param_1,param_2,0);
LAB_0806eb34:
  free(local_44);
  return uVar5;
}


