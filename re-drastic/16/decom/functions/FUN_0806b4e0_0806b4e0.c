/*
 * Ghidra decompilation
 *
 * Function : FUN_0806b4e0
 * Address  : 0806b4e0
 * Program  : drastic16
 */


void FUN_0806b4e0(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  char cVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  bool bVar28;
  uint local_84;
  void *local_80;
  uint local_7c;
  uint local_78;
  uint local_70;
  int local_68;
  uint local_34;
  int local_30 [3];
  
  uVar17 = *(uint *)(param_1 + 0xc);
  pvVar3 = malloc(0x1c0);
  uVar24 = *(undefined4 *)(*(int *)(param_2 + 0x2084) + 0x14da0e4);
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined *)(param_1 + 0x1e) = 0;
  uVar19 = param_3;
  if (param_3 != 0) {
    uVar19 = 1;
  }
  *(undefined4 *)(param_1 + 8) = uVar24;
  *(void **)(param_1 + 4) = pvVar3;
  if (*(char *)(param_2 + 0x2104) == '\x01') {
    uVar12 = uVar19 | 2;
    if (uVar17 < 0x2000000) {
      iVar8 = 0;
    }
    else {
      iVar8 = 2;
    }
  }
  else {
    iVar8 = 2;
    uVar12 = uVar19;
  }
  uVar20 = uVar12 & 2;
  uVar12 = uVar12 & 1;
  local_70 = 0;
  uVar22 = 0xf;
  if (uVar17 >> 0x18 == 2) {
    iVar8 = 1;
  }
  bVar2 = false;
  local_80 = (void *)0x0;
  local_68 = 0x10;
  iVar27 = 0;
  do {
    puVar16 = (uint *)((int)pvVar3 + iVar27 * 0x1c);
    uVar6 = uVar20;
    uVar14 = uVar20;
    uVar10 = uVar20;
    uVar26 = uVar20;
    local_84 = uVar20;
    uVar21 = uVar20;
    if (uVar19 == 0) {
      uVar5 = FUN_080101a4(param_2 + 0x2380,uVar17);
      *(uint *)((int)pvVar3 + iVar27 * 0x1c) = uVar5;
      if (uVar5 == 0) {
        local_80 = (void *)((int)local_80 + 1);
      }
      else {
        pvVar3 = (void *)0x0;
      }
      if (uVar5 != 0) {
        local_80 = pvVar3;
      }
      uVar18 = uVar17 + 4;
      puVar16[1] = uVar17 + 8;
      if (uVar22 != 0xf) goto LAB_0806b664;
LAB_0806ba80:
      uVar13 = uVar5 & 0xe000010;
      uVar25 = uVar5 >> 0x1c;
      uVar17 = uVar5 >> 0x1d;
      uVar9 = (uVar5 << 4) >> 0x1d;
LAB_0806b684:
      *(undefined *)((int)puVar16 + 0x16) = 0;
      *(undefined *)((int)puVar16 + 0x15) = 0;
      local_78 = *(uint *)(&DAT_080e9ee8 + uVar17 * 4);
      *(undefined2 *)((int)puVar16 + 0x12) = 0;
      *(undefined *)(puVar16 + 6) = 0;
      *(undefined *)((int)puVar16 + 0x17) = 1;
      switch(uVar9) {
      case 1:
        if (((uVar5 << 7) >> 0x1e == 2) && ((uVar5 & 0x100000) == 0)) {
          if ((uVar5 << 0x10) >> 0x1c == 0xf) {
            uVar17 = 1 << (uVar5 & 0xf);
            if ((uVar5 & 0x400000) != 0) {
              local_84 = local_70 & uVar17;
              goto LAB_0806bd60;
            }
            uVar14 = uVar5 & 0x80000;
            if (uVar14 != 0) {
              uVar14 = 0xf0;
            }
            if ((uVar5 & 0x10000) == 0) {
              uVar6 = 0;
              uVar10 = 0;
              uVar26 = 0;
              local_84 = local_70 & uVar17;
              local_7c = 0;
              uVar21 = uVar17 & 0xffff;
            }
            else {
              *(undefined *)((int)puVar16 + 0x16) = 4;
              uVar6 = 0;
              uVar10 = 0;
              uVar26 = 0;
              local_84 = local_70 & (uVar17 | 0x7f00);
              local_7c = 0;
              uVar21 = uVar17 & 0xffff | 0x7f00;
            }
          }
          else {
LAB_0806c2d8:
            local_84 = 0;
            *(undefined *)(puVar16 + 6) = 1;
            uVar6 = local_84;
            uVar14 = local_84;
            uVar10 = local_84;
            uVar26 = local_84;
            local_7c = local_84;
            uVar21 = local_84;
          }
        }
        else {
          if ((uVar5 << 0x14) >> 0x1c == 0) {
            uVar17 = 0xc0;
            uVar14 = 0;
          }
          else if ((uVar5 & 0x100000) == 0) {
            uVar17 = 0xc0;
            uVar14 = 0;
          }
          else {
            uVar17 = 0xe0;
            uVar14 = 0x20;
          }
          uVar25 = (uVar5 << 7) >> 0x1c;
          switch(uVar25) {
          case 2:
          case 3:
          case 4:
            uVar26 = (uVar5 << 0x10) >> 0x1c;
            uVar17 = 1 << ((uVar5 << 0xc) >> 0x1c);
            uVar6 = 1 << uVar26;
            if ((uVar5 & 0x100000) == 0) {
              uVar10 = uVar6 & 0xffff;
              local_84 = local_70 & uVar17;
              local_70 = uVar17 & 0xffff;
            }
            else {
              uVar14 = 0xf0;
              local_84 = local_70 & uVar17;
              local_70 = uVar17 & 0xffff;
              uVar10 = uVar6 & 0xffff;
            }
            break;
          case 5:
          case 6:
          case 7:
            uVar26 = (uVar5 << 0x10) >> 0x1c;
            local_78 = local_78 | 0x20000000;
            uVar21 = 1 << ((uVar5 << 0xc) >> 0x1c);
            uVar6 = 1 << uVar26;
            if ((uVar5 & 0x100000) == 0) {
LAB_0806c31c:
              local_84 = local_70 & uVar21;
              local_70 = uVar21 & 0xffff;
              uVar10 = uVar6 & 0xffff;
            }
            else {
              uVar10 = uVar6 & 0xffff;
              local_84 = local_70 & uVar21;
              local_70 = uVar21 & 0xffff;
              uVar14 = 0xf0;
            }
            break;
          case 8:
          case 9:
            uVar14 = 1 << ((uVar5 << 0xc) >> 0x1c);
            uVar10 = 0;
            uVar26 = (uVar5 << 0x10) >> 0x1c;
            uVar6 = 0;
            local_84 = local_70 & uVar14;
            local_70 = uVar14 & 0xffff;
            uVar14 = uVar17;
            break;
          case 10:
          case 0xb:
            uVar17 = 1 << ((uVar5 << 0xc) >> 0x1c);
            uVar10 = 0;
            local_84 = local_70 & uVar17;
            uVar6 = 0;
            local_70 = uVar17 & 0xffff;
            uVar26 = (uVar5 << 0x10) >> 0x1c;
            uVar14 = 0xf0;
            break;
          default:
            uVar26 = (uVar5 << 0x10) >> 0x1c;
            uVar21 = 1 << ((uVar5 << 0xc) >> 0x1c);
            uVar6 = 1 << uVar26;
            if ((uVar5 & 0x100000) == 0) goto LAB_0806c31c;
            uVar10 = uVar6 & 0xffff;
            local_84 = local_70 & uVar21;
            local_70 = uVar21 & 0xffff;
            uVar14 = uVar17;
            break;
          case 0xd:
          case 0xf:
            bVar28 = (uVar5 & 0x100000) == 0;
            uVar26 = (uVar5 << 0x10) >> 0x1c;
            if (bVar28) {
              uVar17 = 0;
            }
            uVar6 = 1 << uVar26;
            local_70 = uVar17;
            if (!bVar28) {
              local_70 = 0;
              uVar14 = uVar17;
            }
            local_84 = 0;
            uVar10 = uVar6 & 0xffff;
          }
          uVar21 = local_70;
          if (uVar26 == 0xf) {
            uVar26 = uVar5 & 0x100000;
            local_7c = uVar26;
            if ((uVar26 != 0) && (uVar26 = 0, local_7c = uVar26, 3 < uVar25 - 8)) {
              local_7c = 0;
              uVar14 = 0xf0;
            }
          }
          else {
            local_7c = 0;
            uVar26 = 0;
          }
        }
        break;
      case 2:
      case 3:
        if (uVar25 == 0xf) {
          local_70 = 0;
          local_84 = 0;
          local_7c = 0;
          uVar6 = 0;
          uVar14 = 0;
          uVar10 = 0;
          uVar26 = 0;
          uVar21 = local_70;
        }
        else {
          uVar17 = uVar5 & 0x2000000;
          if (uVar17 != 0) {
            if ((uVar5 & 0x10) != 0) {
              if (uVar12 != 0) {
                if ((uVar5 & 0x10000) == 0) {
                  uVar6 = 0x4000;
                }
                else {
                  uVar6 = 0xc000;
                }
                goto LAB_0806bef8;
              }
              *(undefined *)(puVar16 + 6) = 1;
              uVar6 = 0;
              uVar14 = uVar6;
              uVar10 = uVar6;
              uVar26 = uVar6;
              local_84 = uVar6;
              local_7c = uVar6;
              uVar21 = uVar6;
              break;
            }
            uVar17 = 1 << (uVar5 & 0xf);
          }
          uVar10 = 1 << ((uVar5 << 0xc) >> 0x1c);
          uVar6 = (uVar5 << 0x10) >> 0x1c;
          uVar17 = uVar17 | uVar10;
          if ((uVar5 & 0x1200000) != 0x1200000) {
            uVar10 = 0;
          }
          if ((uVar5 & 0x100000) == 0) {
            uVar17 = uVar17 | 1 << uVar6;
LAB_0806bf24:
            local_84 = local_70 & uVar17;
            uVar14 = uVar5 & 0x100000;
            *(undefined *)((int)puVar16 + 0x16) = 4;
            uVar6 = uVar10;
            uVar10 = uVar10 & 0xffff;
            uVar26 = uVar14;
            local_7c = uVar14;
            uVar21 = uVar17 & 0xffff;
          }
          else {
            uVar6 = uVar10 | 1 << uVar6;
            *(undefined *)((int)puVar16 + 0x16) = 8;
            local_7c = 0;
            uVar14 = 0;
            uVar10 = uVar6 & 0xffff;
            uVar26 = 8;
            local_84 = local_70 & uVar17;
            uVar21 = uVar17 & 0xffff;
          }
        }
        break;
      case 4:
        uVar21 = uVar5 & 0xffff;
        uVar17 = 1 << ((uVar5 << 0xc) >> 0x1c);
        uVar10 = uVar5 & 0x200000;
        if ((uVar5 & 0x200000) != 0) {
          uVar10 = uVar17;
        }
        iVar4 = (uint)(byte)(&DAT_0aaec000)[uVar5 & 0xff] + (uint)(byte)(&DAT_0aaec000)[uVar21 >> 8]
        ;
        if (uVar25 == 0xe && iVar4 != 0) {
          if (iVar4 == 1) {
            cVar23 = '\x02';
          }
          else {
            cVar23 = (char)iVar4;
          }
          if ((uVar5 & 0x108000) != 0x108000) {
            *(char *)((int)puVar16 + 0x17) = cVar23;
            goto LAB_0806b8b0;
          }
          *(char *)((int)puVar16 + 0x17) = cVar23 + '\x01';
        }
        else {
LAB_0806b8b0:
          if ((uVar5 & 0x100000) == 0) {
            uVar17 = uVar17 | uVar21;
            goto LAB_0806bf24;
          }
        }
        *(undefined *)((int)puVar16 + 0x16) = 8;
        uVar26 = 8;
        if ((uVar5 & 0x400000) == 0) {
          uVar6 = uVar10 | uVar21;
          uVar14 = 0;
          uVar10 = uVar10 & 0xffff | uVar21;
          local_84 = local_70 & uVar17;
          local_7c = 0;
          uVar21 = uVar17 & 0xffff;
        }
        else {
          local_7c = 0;
          uVar6 = uVar10;
          uVar14 = 0;
          uVar10 = uVar10 & 0xffff;
          local_84 = local_70 & uVar17;
          uVar21 = uVar17 & 0xffff;
        }
        break;
      case 5:
        iVar4 = (int)(uVar5 << 8) >> 8;
        if (uVar25 == 0xf) {
          uVar6 = 0xc000;
          uVar17 = ((iVar4 + 1) * 2 - ((int)(uVar5 << 7) >> 0x1f)) * 2;
          if (uVar12 == 0) {
            uVar17 = uVar17 | 1;
          }
        }
        else {
          iVar4 = iVar4 + 1;
          if (uVar12 == 0) {
            uVar17 = iVar4 * 4;
          }
          else {
            uVar17 = iVar4 * 2;
          }
          if ((uVar5 & 0x1000000) == 0) {
            uVar6 = 0x8000;
          }
          else {
            uVar6 = 0xc000;
          }
          if (uVar12 != 0) {
            uVar17 = uVar17 | 1;
          }
        }
        local_70 = 0;
        local_84 = 0;
        uVar14 = 0;
        uVar10 = uVar6;
        uVar26 = 0;
        local_7c = uVar17 + uVar18;
        uVar21 = local_70;
        break;
      case 6:
        local_70 = 0;
        local_84 = 0;
        local_7c = 0;
        *(undefined *)(puVar16 + 6) = 1;
        uVar6 = 0;
        uVar14 = 0;
        uVar10 = 0;
        uVar26 = 0;
        uVar21 = local_70;
        break;
      case 7:
        if ((uVar5 & 0x1000000) == 0) {
          if (uVar20 == 0) {
            *(undefined *)(puVar16 + 6) = 1;
            local_7c = uVar20;
          }
          else {
            if ((uVar5 & 0x10) == 0) goto LAB_0806c2d8;
            uVar17 = (uVar5 << 0x10) >> 0x1c;
            if ((uVar5 & 0x100000) == 0) {
              uVar17 = 1 << uVar17;
              if ((uVar5 << 0x14) >> 0x1c == 0xf) {
                if ((uVar5 << 8) >> 0x1d == 0) {
                  uVar10 = (uVar5 << 0xc) >> 0x1c;
                  uVar6 = uVar5 & 0xef;
                  uVar14 = 0;
                  if (uVar10 == 7) {
                    if (uVar6 != 0x80 && uVar6 != 0x48) {
                      local_84 = local_70 & uVar17;
                      goto LAB_0806bd60;
                    }
                    *(undefined *)((int)puVar16 + 0x16) = 1;
                    uVar6 = 0x8000;
                    uVar10 = 0x8000;
                    uVar26 = uVar14;
                    local_84 = local_70 & (uVar17 | 0x8000);
                    local_7c = uVar14;
                    uVar21 = uVar17 & 0xffff | 0x8000;
                  }
                  else {
                    if ((uVar10 != 9 || uVar6 != 1) && (uVar10 != 1 || uVar6 != 0))
                    goto LAB_0806c9e8;
                    uVar6 = 0;
                    local_84 = local_70 & uVar17;
                    *(undefined *)((int)puVar16 + 0x16) = 4;
                    uVar14 = uVar6;
                    uVar10 = uVar6;
                    uVar26 = uVar6;
                    local_7c = uVar6;
                    uVar21 = uVar17 & 0xffff;
                  }
                  break;
                }
LAB_0806c9e8:
                local_84 = local_70 & uVar17;
              }
              else {
                local_84 = local_70 & uVar17;
              }
LAB_0806bd60:
              uVar6 = 0;
              uVar14 = uVar6;
              uVar10 = uVar6;
              uVar26 = uVar6;
              local_7c = uVar6;
              uVar21 = uVar17 & 0xffff;
            }
            else {
              uVar6 = 1 << uVar17;
              uVar14 = 0;
              uVar10 = uVar6 & 0xffff;
              uVar26 = 0;
              local_84 = 0;
              local_7c = 0;
              uVar21 = 0;
            }
          }
        }
        else {
          uVar6 = 0xc000;
LAB_0806bef8:
          uVar14 = 0;
          local_84 = local_70 & 0x8000;
          local_70 = 0x8000;
          uVar10 = uVar6;
          uVar26 = uVar14;
          local_7c = uVar14;
          uVar21 = local_70;
        }
        break;
      default:
        if ((uVar5 & 0x90) != 0x90) goto LAB_0806bdb8;
        if ((uVar5 >> 5 & 3) == 0) {
          uVar17 = (uVar5 << 7) >> 0x1c;
          if (uVar17 < 8) {
            if ((uVar5 & 0x800000) == 0) {
              uVar17 = 1 << (uVar5 & 0xf);
              bVar28 = (uVar5 & 0x200000) != 0;
              uVar21 = uVar17 | 1 << ((uVar5 << 0x14) >> 0x1c);
              if (bVar28) {
                uVar17 = (uVar5 << 0x10) >> 0x1c;
              }
              uVar6 = 1 << ((uVar5 << 0xc) >> 0x1c);
              if (bVar28) {
                uVar21 = uVar21 | 1 << (uVar17 & 0xff);
              }
            }
            else {
              uVar21 = 1 << (uVar5 & 0xf) | 1 << ((uVar5 << 0x14) >> 0x1c);
              uVar6 = 1 << ((uVar5 << 0x10) >> 0x1c) | 1 << ((uVar5 << 0xc) >> 0x1c);
              if ((uVar5 & 0x200000) != 0) {
                uVar21 = uVar21 | uVar6;
              }
            }
            uVar17 = uVar5 & 0x100000;
            if (uVar17 == 0) goto LAB_0806c8cc;
            local_7c = 0;
            uVar14 = 0xc0;
            uVar10 = uVar6 & 0xffff;
            uVar26 = 0;
            local_84 = local_70 & uVar21;
            uVar21 = uVar21 & 0xffff;
          }
          else {
            if ((uVar17 != 8) && (uVar17 != 10)) goto LAB_0806c2d8;
            if (uVar25 == 0xe) {
              *(undefined *)((int)puVar16 + 0x17) = 2;
            }
            uVar6 = 1 << ((uVar5 << 0x10) >> 0x1c);
            uVar17 = 1 << (uVar5 & 0xf) | 1 << ((uVar5 << 0xc) >> 0x1c);
            *(undefined *)((int)puVar16 + 0x16) = 4;
            local_7c = 0;
            uVar14 = 0;
            uVar10 = uVar6 & 0xffff;
            uVar26 = 0;
            local_84 = local_70 & uVar17;
            uVar21 = uVar17 & 0xffff;
          }
        }
        else {
          uVar14 = -((int)(uVar5 << 0xb) >> 0x1f);
          uVar10 = (uVar5 << 0x10) >> 0x1c;
          uVar17 = local_78;
          if ((uVar5 & 0x40) == 0) {
            local_34 = 0;
          }
          else if (uVar14 == 0) {
            uVar14 = (uVar5 >> 5 ^ 1) & 1;
            if (uVar25 == 0xe) {
              *(undefined *)((int)puVar16 + 0x17) = 2;
              local_34 = 1;
            }
            else {
              local_34 = 1;
              uVar17 = 1;
            }
          }
          else {
            uVar14 = 1;
            local_34 = 0;
          }
          bVar28 = (uVar5 & 0x400000) == 0;
          if (bVar28) {
            uVar17 = uVar5 & 0xf;
          }
          uVar6 = 1 << ((uVar5 << 0xc) >> 0x1c);
          uVar26 = uVar6;
          if (bVar28) {
            uVar17 = uVar6 | 1 << (uVar17 & 0xff);
            uVar26 = local_7c;
          }
          local_7c = uVar26;
          if (bVar28) {
            local_7c = uVar17;
          }
          uVar17 = local_7c;
          if ((uVar5 & 0x1200000) != 0x1200000) {
            uVar6 = 0;
          }
          if (uVar14 == 0) {
            uVar21 = local_7c | 1 << uVar10;
            *(undefined *)((int)puVar16 + 0x16) = 4;
            if (local_34 != 0) {
              uVar21 = uVar21 | 1 << uVar10 + 1;
              goto LAB_0806c920;
            }
            local_7c = local_34;
            uVar14 = 0;
            uVar10 = uVar6 & 0xffff;
            uVar26 = 0;
            local_84 = local_70 & uVar21;
            uVar21 = uVar21 & 0xffff;
          }
          else {
            uVar6 = uVar6 | 1 << uVar10;
            *(undefined *)((int)puVar16 + 0x16) = 8;
            if (local_34 != 0) {
              uVar6 = uVar6 | 1 << uVar10 + 1;
            }
            uVar14 = (uint)(uVar10 == 0xf && uVar25 == 0xe);
            if (uVar10 == 0xf && uVar25 == 0xe) {
              local_7c = 0;
              *(undefined *)((int)puVar16 + 0x17) = 3;
              uVar14 = 0;
              uVar10 = uVar6 & 0xffff;
              uVar26 = 8;
              local_84 = local_70 & uVar17;
              uVar21 = uVar17 & 0xffff;
            }
            else {
              uVar21 = local_7c & 0xffff;
              uVar10 = uVar6 & 0xffff;
              uVar26 = 8;
              local_84 = local_70 & local_7c;
              local_7c = uVar14;
            }
          }
        }
      }
      goto LAB_0806b6fc;
    }
    iVar4 = FUN_0801001c();
    uVar18 = uVar17 + 2;
    uVar17 = uVar17 + 4;
    if (iVar4 == 0) {
      local_80 = (void *)((int)local_80 + 1);
    }
    else {
      local_80 = (void *)0x0;
    }
    uVar5 = FUN_0801cd34(iVar4,local_30);
    if (local_30[0] != 0) {
      uVar17 = uVar17 & 0xfffffffd;
    }
    puVar16[1] = uVar17;
    *puVar16 = uVar5;
    if (uVar22 == 0xf) goto LAB_0806ba80;
LAB_0806b664:
    uVar17 = uVar5 >> 0x1d;
    if (uVar17 != uVar22 >> 1) {
      uVar13 = uVar5 & 0xe000010;
      uVar25 = uVar5 >> 0x1c;
      uVar9 = (uVar5 << 4) >> 0x1d;
      goto LAB_0806b684;
    }
    if (uVar22 != uVar5 >> 0x1c) {
      uVar7 = uVar5 & 0xfffffff | 0xe0000000;
      uVar13 = uVar5 & 0xe000010;
      uVar9 = ((uVar5 & 0xfffffff) << 4) >> 0x1d;
      uVar17 = 7;
      uVar25 = 0xe;
      *puVar16 = uVar7;
      uVar5 = uVar7;
      goto LAB_0806b684;
    }
    uVar5 = 0xe1a00000;
    uVar13 = 0;
    uVar25 = 0xe;
    local_78 = 0;
    *puVar16 = 0xe1a00000;
    *(undefined *)((int)puVar16 + 0x16) = 0;
    *(undefined *)((int)puVar16 + 0x15) = 0;
    *(undefined2 *)((int)puVar16 + 0x12) = 0;
    *(undefined *)(puVar16 + 6) = 0;
    *(undefined *)((int)puVar16 + 0x17) = 1;
LAB_0806bdb8:
    if ((uVar5 << 7) >> 0x1e == 2) {
      if ((uVar5 & 0x100000) == 0) {
        uVar17 = 0;
        local_7c = uVar17;
        if ((uVar5 & 0x80) == 0) {
          if ((uVar5 & 0x10) == 0) {
            if ((uVar5 & 0x200000) == 0) {
              bVar28 = (uVar5 & 0x400000) == 0;
              uVar17 = (uVar5 << 0x10) >> 0x1c;
              uVar6 = 1 << uVar17;
              if (bVar28) {
                uVar17 = local_78 | 0xf0000000;
              }
              if (bVar28) {
                local_78 = uVar17;
              }
              uVar14 = 0;
              uVar10 = uVar6 & 0xffff;
              uVar26 = 0;
              local_84 = 0;
              local_7c = 0;
              uVar21 = 0;
            }
            else {
              uVar17 = 1 << (uVar5 & 0xf);
              if ((uVar5 & 0x400000) == 0) {
                uVar14 = uVar5 & 0x80000;
                if (uVar14 != 0) {
                  uVar14 = 0xf0;
                }
                if ((uVar5 & 0x10000) == 0) {
                  uVar6 = 0;
                  uVar10 = 0;
                  uVar26 = 0;
                  local_84 = local_70 & uVar17;
                  local_7c = 0;
                  uVar21 = uVar17 & 0xffff;
                }
                else {
                  *(undefined *)((int)puVar16 + 0x16) = 4;
                  uVar6 = 0;
                  uVar10 = 0;
                  uVar26 = 0;
                  local_84 = local_70 & (uVar17 | 0x7f00);
                  local_7c = 0;
                  uVar21 = uVar17 & 0xffff | 0x7f00;
                }
              }
              else {
                uVar6 = 0;
                uVar14 = 0;
                uVar10 = 0;
                uVar26 = 0;
                local_84 = local_70 & uVar17;
                local_7c = 0;
                uVar21 = uVar17 & 0xffff;
              }
            }
          }
          else {
            uVar9 = (uVar5 << 0x19) >> 0x1e;
            local_84 = 0;
            if (uVar9 == 2) {
              if (uVar20 == 0) {
LAB_0806cb1c:
                *(undefined *)(puVar16 + 6) = 1;
                local_70 = 0;
                local_7c = 0;
                uVar6 = 0;
                uVar14 = 0;
                uVar10 = 0;
                uVar26 = 0;
                uVar21 = local_70;
              }
              else {
                uVar21 = 1 << (uVar5 & 0xf) | 1 << ((uVar5 << 0xc) >> 0x1c);
LAB_0806c7c8:
                uVar6 = 1 << ((uVar5 << 0x10) >> 0x1c);
                uVar14 = uVar17;
                uVar10 = uVar6 & 0xffff;
                uVar26 = uVar17;
                local_84 = local_70 & uVar21;
                local_7c = uVar17;
                uVar21 = uVar21 & 0xffff;
              }
            }
            else if (uVar9 == 3) {
              if ((uVar20 == 0) ||
                 (uVar6 = local_84, uVar14 = local_84, uVar10 = local_84, uVar26 = local_84,
                 local_7c = local_84, uVar21 = local_84, uVar25 != 0xe)) goto LAB_0806cb1c;
            }
            else if (uVar9 == 1) {
              if (uVar20 == 0) goto LAB_0806cb1c;
              uVar21 = 1 << (uVar5 & 0xf);
              uVar6 = 0xc000;
              uVar14 = uVar17;
              uVar10 = 0xc000;
              uVar26 = uVar17;
              local_84 = local_70 & (uVar21 | 0x8000);
              uVar21 = uVar21 & 0xffff | 0x8000;
            }
            else if ((uVar5 & 0x400000) == 0) {
              uVar17 = 1 << (uVar5 & 0xf);
              uVar6 = 0x8000;
              uVar14 = 0;
              uVar10 = 0x8000;
              uVar26 = 0;
              local_84 = local_70 & uVar17;
              local_7c = 0;
              uVar21 = uVar17 & 0xffff;
            }
            else {
              local_84 = uVar20;
              local_7c = uVar20;
              if (uVar20 != 0) {
                uVar21 = 1 << (uVar5 & 0xf);
                goto LAB_0806c7c8;
              }
            }
          }
        }
        else if (uVar20 == 0) {
          *(undefined *)(puVar16 + 6) = 1;
          local_7c = uVar20;
        }
        else {
          uVar14 = (uVar5 << 9) >> 0x1e;
          uVar21 = 1 << (uVar5 & 0xf) | 1 << ((uVar5 << 0x14) >> 0x1c);
          uVar6 = 1 << ((uVar5 << 0xc) >> 0x1c);
          if (uVar14 == 1) {
            if ((uVar5 & 0x20) != 0) goto LAB_0806c8cc;
            uVar21 = uVar21 | 1 << ((uVar5 << 0x10) >> 0x1c);
LAB_0806c920:
            uVar14 = 0;
            uVar10 = uVar6 & 0xffff;
            uVar26 = uVar14;
            local_84 = local_70 & uVar21;
            local_7c = uVar14;
            uVar21 = uVar21 & 0xffff;
          }
          else if (uVar14 == 2) {
            uVar6 = uVar6 | 1 << ((uVar5 << 0x10) >> 0x1c);
            uVar14 = uVar17;
            uVar10 = uVar6 & 0xffff;
            uVar26 = uVar17;
            local_84 = local_70 & uVar21;
            uVar21 = uVar21 & 0xffff;
          }
          else {
            if ((uVar5 & 0x400000) == 0) {
              uVar21 = uVar21 | 1 << ((uVar5 << 0x10) >> 0x1c);
              goto LAB_0806c920;
            }
LAB_0806c8cc:
            local_84 = local_70 & uVar21;
            uVar14 = uVar17;
            uVar10 = uVar6 & 0xffff;
            uVar26 = uVar17;
            local_7c = uVar17;
            uVar21 = uVar21 & 0xffff;
          }
        }
        goto LAB_0806b6fc;
      }
      local_34 = 1 << (uVar5 & 0xf);
      if ((uVar5 & 0x10) != 0) goto LAB_0806c1f0;
LAB_0806bf7c:
      uVar17 = (uVar5 << 0x19) >> 0x1e;
      uVar6 = (uVar5 << 0x14) >> 0x1b;
      if ((uVar5 & 0x100000) == 0) {
        uVar14 = 0xc0;
        local_7c = 0;
      }
      else if ((uVar6 | uVar17) == 0) {
        uVar14 = 0xc0;
        local_7c = 0;
      }
      else {
        uVar14 = 0xe0;
        local_7c = 0x20;
      }
      if (uVar6 == 0 && uVar17 == 3) {
        local_78 = local_78 | 0x20000000;
      }
    }
    else {
      local_34 = 1 << (uVar5 & 0xf);
      if ((uVar5 & 0x10) == 0) goto LAB_0806bf7c;
      if ((uVar5 & 0x100000) != 0) {
LAB_0806c1f0:
        *(undefined *)((int)puVar16 + 0x17) = 2;
        local_78 = local_78 | 0x20000000;
      }
      local_34 = local_34 | 1 << ((uVar5 << 0x14) >> 0x1c);
      uVar14 = 0xc0;
      local_7c = 0;
    }
    uVar17 = uVar5 & 0x100000;
    uVar26 = (uVar5 << 7) >> 0x1c;
    switch(uVar26) {
    case 2:
    case 3:
    case 4:
      goto LAB_0806c508;
    case 5:
    case 6:
    case 7:
      local_78 = local_78 | 0x20000000;
LAB_0806c508:
      uVar14 = (uVar5 << 0xc) >> 0x1c;
      local_34 = local_34 | 1 << uVar14;
      if (uVar17 != 0) {
        uVar14 = 0xf0;
      }
      break;
    case 8:
    case 9:
      local_34 = local_34 | 1 << ((uVar5 << 0xc) >> 0x1c);
      if ((uVar5 >> 0xc & 0xf) == 0xf) goto LAB_0806c5d0;
LAB_0806c578:
      uVar10 = 0;
      uVar6 = 0;
      goto LAB_0806c584;
    case 10:
    case 0xb:
      local_34 = local_34 | 1 << ((uVar5 << 0xc) >> 0x1c);
      uVar14 = 0xf0;
      if ((uVar5 >> 0xc & 0xf) != 0xf) goto LAB_0806c578;
LAB_0806c5d0:
      if (uVar17 != 0) {
        uVar6 = 0;
        uVar10 = uVar6;
        goto LAB_0806c5e0;
      }
      uVar6 = 0;
      uVar10 = 0;
      goto LAB_0806c530;
    default:
      local_34 = local_34 | 1 << ((uVar5 << 0xc) >> 0x1c);
      break;
    case 0xd:
    case 0xf:
    }
    uVar21 = (uVar5 << 0x10) >> 0x1c;
    uVar6 = 1 << uVar21;
    uVar10 = uVar6 & 0xffff;
    if (uVar17 == 0) {
      uVar14 = local_7c;
      if (uVar21 != 0xf) goto LAB_0806c584;
LAB_0806c530:
      local_7c = 0;
      uVar26 = 0;
      local_84 = local_70 & local_34;
      uVar21 = local_34 & 0xffff;
    }
    else {
      if (uVar21 == 0xf) {
LAB_0806c5e0:
        if (3 < uVar26 - 8) {
          local_7c = 0;
          uVar14 = 0xf0;
          uVar26 = 0;
          local_84 = local_70 & local_34;
          uVar21 = local_34 & 0xffff;
          goto LAB_0806b6fc;
        }
      }
LAB_0806c584:
      local_7c = 0;
      uVar26 = 0;
      local_84 = local_70 & local_34;
      uVar21 = local_34 & 0xffff;
    }
LAB_0806b6fc:
    local_70 = uVar21;
    uVar17 = local_70;
    if (uVar26 == 0) {
      local_70 = 0;
    }
    if (uVar26 != 0) {
      local_70 = uVar6 & 0xffff;
    }
    bVar28 = local_84 != 0;
    *(short *)(puVar16 + 4) = (short)uVar10;
    uVar10 = uVar14 & 0xff;
    if (bVar28) {
      local_84 = (uint)*(byte *)((int)puVar16 + 0x17);
    }
    cVar23 = (char)local_84;
    if (bVar28) {
      cVar23 = cVar23 + '\x01';
    }
    *(short *)((int)puVar16 + 0xe) = (short)uVar17;
    if (bVar28) {
      *(char *)((int)puVar16 + 0x17) = cVar23;
    }
    *(byte *)(puVar16 + 5) = (byte)uVar14 | (byte)(local_78 >> 0x1c);
    *(undefined2 *)(puVar16 + 3) = 0;
    if ((uVar13 == 0x6000010) && (uVar19 != 0)) {
      if ((uVar5 & 0x10000) == 0) {
        bVar2 = true;
      }
      else if (bVar2) {
        bVar28 = (uVar5 & 0x20000) != 0;
        uVar17 = uVar18 + ((int)(((uVar5 << 0x10) >> 0x15 | ((puVar16[-7] << 0x10) >> 0x15) << 0xb)
                                << 10) >> 10) * 2;
        if (bVar28) {
          uVar17 = uVar17 | 1;
          uVar14 = 0xfffffffeU - ((int)puVar16 >> 2) & 0xffffff | 0xeb000000;
          local_7c = uVar17;
        }
        else {
          uVar14 = 0xfa000000;
          uVar17 = uVar17 & 0xfffffffc;
        }
        *puVar16 = uVar14;
        bVar2 = false;
        if (!bVar28) {
          local_7c = uVar17;
        }
        puVar16[-7] = 0xe1a00000;
      }
    }
    else {
      bVar2 = false;
    }
    iVar4 = iVar27 + 1;
    if (local_80 == (void *)0x8) {
      iVar4 = iVar27 + -6;
      *(undefined *)(param_1 + 0x1e) = 2;
      sVar11 = (short)iVar4;
LAB_0806c37c:
      if (iVar4 != 0) goto LAB_0806bca4;
      goto LAB_0806c384;
    }
    sVar11 = (short)iVar4;
    if ((((uVar18 < 0x2000000) && (*(char *)(param_2 + 0x2104) == '\x01')) && (param_3 == 0)) &&
       (8 < *(byte *)(*(int *)(param_2 + 0x2084) + ((uVar18 << 0x11) >> 0x13) + 0x14b8020))) {
      *(undefined *)(param_1 + 0x1e) = 4;
LAB_0806bc88:
      if (iVar4 != 0x800) {
        if (*(char *)(param_1 + 0x1e) != '\0') goto LAB_0806c37c;
        goto LAB_0806c384;
      }
LAB_0806bc90:
      sVar11 = 0x800;
      iVar4 = 0x800;
      *(undefined *)(param_1 + 0x1e) = 1;
LAB_0806bca4:
      iVar8 = *(int *)(param_1 + 4) + iVar4 * 0x1c + -0x1c;
      *(undefined *)(iVar8 + 0x15) = 0xf;
      *(undefined2 *)(iVar8 + 0x12) = 0x7fff;
LAB_0806c384:
      iVar8 = *(int *)(param_2 + 0x2084);
      *(short *)(param_1 + 0x14) = sVar11;
      if (uVar19 == 0) {
        sVar11 = (short)(iVar4 << 1);
      }
      iVar27 = *(int *)(iVar8 + 0x14da0e4);
      *(short *)(param_1 + 0x16) = sVar11;
      uVar17 = iVar27 + (uint)*(ushort *)(param_1 + 0x18) * 0x1c;
      *(uint *)(iVar8 + 0x14da0e4) = uVar17;
      if (iVar8 + 0x1420000U <= uVar17) {
        puts("Translation stack overflow!");
        fflush(stdout);
      }
      return;
    }
    if (*(char *)(puVar16 + 6) != '\0') {
      sVar11 = (short)iVar27;
      if (iVar4 == 1) {
        iVar27 = iVar4;
        sVar11 = 1;
      }
      iVar4 = iVar27;
      *(undefined *)(param_1 + 0x1e) = 2;
      goto LAB_0806c37c;
    }
    if ((uVar6 & 0x8000) != 0) {
      if (local_7c == 0) {
        uVar17 = *puVar16;
        *(ushort *)((int)puVar16 + 0x12) = ~(ushort)uVar6;
        *(byte *)((int)puVar16 + 0x15) = ~(byte)(uVar10 >> 4) & 0xf;
      }
      else {
        if (*(char *)(param_2 + 0x2104) == '\0') {
          if (local_7c - 0x800000 < 0x1800000) {
            sVar11 = (short)iVar27;
            if (iVar4 == 1) {
              iVar27 = iVar4;
              sVar11 = 1;
            }
            iVar4 = iVar27;
            *(undefined *)(param_1 + 0x1e) = 2;
            goto LAB_0806c37c;
          }
LAB_0806bb44:
          iVar27 = 2;
        }
        else {
          if (*(char *)(param_2 + 0x2104) != '\x01') goto LAB_0806bb44;
          if (local_7c < 0x2000000) {
            iVar27 = 0;
          }
          else {
            iVar27 = 2;
          }
        }
        uVar17 = *puVar16;
        uVar1 = *(ushort *)(param_1 + 0x18);
        if (local_7c >> 0x18 == 2) {
          iVar27 = 1;
        }
        iVar15 = *(int *)(param_1 + 8) + (uint)uVar1 * 0x1c;
        *(short *)(iVar15 + 0x18) = sVar11 + -1;
        *(undefined4 *)(iVar15 + 0x14) = 0;
        *(uint *)(iVar15 + 0x10) = uVar18;
        *(uint *)(iVar15 + 0xc) = local_7c;
        *(undefined2 *)(iVar15 + 0x1a) = 0;
        *(ushort *)(param_1 + 0x18) = uVar1 + 1;
        if ((uVar17 >> 0x1c < 0xe) && (local_7c < uVar18)) {
          uVar22 = uVar17 >> 0x1c;
        }
        if ((iVar27 != iVar8) && (iVar8 == 2 || iVar27 == 2)) {
          *(undefined4 *)(iVar15 + 0x14) = 4;
        }
        if ((iVar27 == 0) &&
           ((iVar8 != 0 ||
            ((8 < *(byte *)(*(int *)(param_2 + 0x2084) + ((local_7c << 0x11) >> 0x13) + 0x14b8020)
             && ((local_7c & 1) == 0)))))) {
          *(undefined4 *)(iVar15 + 0x14) = 2;
        }
      }
      if (0xdfffffff < uVar17) goto LAB_0806bc88;
      uVar10 = (uint)*(byte *)(puVar16 + 5);
    }
    if ((uVar10 & 0xf0) != 0) {
      uVar22 = 0xf;
    }
    if (iVar4 == local_68) {
      local_68 = iVar4 * 2;
      pvVar3 = realloc(*(void **)(param_1 + 4),iVar4 * 0x38);
      *(void **)(param_1 + 4) = pvVar3;
    }
    if (iVar4 == 0x800) goto LAB_0806bc90;
    pvVar3 = *(void **)(param_1 + 4);
    uVar17 = uVar18;
    iVar27 = iVar4;
  } while( true );
}


