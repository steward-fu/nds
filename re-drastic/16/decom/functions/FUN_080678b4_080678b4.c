/*
 * Ghidra decompilation
 *
 * Function : FUN_080678b4
 * Address  : 080678b4
 * Program  : drastic16
 */


void FUN_080678b4(int param_1,uint **param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint local_58;
  uint *local_4c;
  uint local_44;
  uint local_38;
  int local_34;
  
  puVar6 = *param_2;
  puVar17 = puVar6 + (int)param_2[3];
  iVar15 = param_1 + 0x1da5188;
  iVar14 = param_1 + 0x1da7508;
  if (puVar6 < puVar17) {
    bVar3 = false;
    uVar10 = 0xffffffff;
    local_44 = 0xffffffff;
    local_58 = 0;
    local_38 = 0;
    local_34 = 0;
    local_4c = puVar6;
    do {
      uVar8 = *puVar6;
      uVar13 = puVar6[1];
      puVar12 = puVar6 + 2;
      uVar7 = uVar8 & 0xfffffff;
      puVar4 = puVar12;
      uVar5 = uVar10;
      uVar11 = local_58;
      if ((((uVar10 & 1) != 0) || ((uVar8 & 0xfeffffff) == 0xd0000000)) ||
         (uVar8 == 0xd2000000 || uVar8 >> 0x1c == 0xe)) {
        switch(uVar8 >> 0x1c) {
        case 0:
          uVar10 = uVar7 + local_58 & 0xfffffffc;
          uVar7 = *(uint *)(param_1 + (uVar7 + local_58 >> 0xb) * 4 + 0x1da7508);
          if ((uVar7 & 0x40000000) == 0) {
            *(uint *)(uVar10 + uVar7 * 4) = uVar13;
          }
          else if ((int)uVar7 < 0) {
            if (*(uint *)(uVar10 + uVar7 * 4) != uVar13) {
              FUN_0806dd54(iVar15,uVar10);
              bVar3 = true;
              *(uint *)(uVar10 + uVar7 * 4) = uVar13;
            }
          }
          else {
            printf("store %x to %x\n",uVar13,uVar10);
            FUN_0800f9a8(iVar14,uVar10,uVar13);
          }
          break;
        case 1:
          uVar8 = uVar7 + local_58 & 0xfffffffe;
          uVar10 = *(uint *)(param_1 + (uVar7 + local_58 >> 0xb) * 4 + 0x1da7508);
          iVar1 = uVar10 * 4;
          if ((uVar10 & 0x40000000) == 0) {
            *(short *)(iVar1 + uVar8) = (short)uVar13;
          }
          else if ((int)uVar10 < 0) {
            if (*(ushort *)(iVar1 + uVar8) != uVar13) {
              FUN_0806dc6c(iVar15,uVar8);
              bVar3 = true;
              *(short *)(iVar1 + uVar8) = (short)uVar13;
            }
          }
          else {
            printf("store %x to %x\n",uVar13,uVar8);
            FUN_0800f808(iVar14,uVar8,uVar13 & 0xffff);
          }
          break;
        case 2:
          uVar7 = uVar7 + local_58;
          uVar10 = *(uint *)(param_1 + (uVar7 >> 0xb) * 4 + 0x1da7508);
          if ((uVar10 & 0x40000000) == 0) {
            *(char *)(uVar7 + uVar10 * 4) = (char)uVar13;
          }
          else if ((int)uVar10 < 0) {
            if (*(byte *)(uVar7 + uVar10 * 4) != uVar13) {
              FUN_0806db7c(iVar15,uVar7);
              bVar3 = true;
              *(char *)(uVar7 + uVar10 * 4) = (char)uVar13;
            }
          }
          else {
            printf("store %x to %x\n",uVar13,uVar7);
            FUN_0800f668(iVar14,uVar7,uVar13 & 0xff);
          }
          break;
        case 3:
          if (uVar7 == 0) {
            uVar7 = local_58;
          }
          uVar10 = FUN_080101a4(iVar14,uVar7);
          uVar5 = uVar10 << 1;
          if (uVar10 < uVar13) {
            uVar5 = uVar10 << 1 | 1;
          }
          break;
        case 4:
          if (uVar7 == 0) {
            uVar7 = local_58;
          }
          uVar10 = FUN_080101a4(iVar14,uVar7);
          uVar5 = uVar10 << 1;
          if (uVar13 < uVar10) {
            uVar5 = uVar10 << 1 | 1;
          }
          break;
        case 5:
          if (uVar7 == 0) {
            uVar7 = local_58;
          }
          uVar7 = FUN_080101a4(iVar14,uVar7);
          uVar5 = uVar10 << 1;
          if (uVar13 == uVar7) {
LAB_08067bf4:
            uVar5 = uVar10 << 1 | 1;
          }
          break;
        case 6:
          if (uVar7 == 0) {
            uVar7 = local_58;
          }
          uVar10 = FUN_080101a4(iVar14,uVar7);
          uVar5 = uVar10 << 1;
          if (uVar13 != uVar10) {
            uVar5 = uVar10 << 1 | 1;
          }
          break;
        case 7:
          if (uVar7 == 0) {
            uVar7 = local_58;
          }
          uVar10 = FUN_0801001c(iVar14,uVar7);
          uVar5 = uVar10 << 1;
          if ((uVar10 & ~(uVar13 >> 0x10)) < (uVar13 & 0xffff)) {
            uVar5 = uVar10 << 1 | 1;
          }
          break;
        case 8:
          if (uVar7 == 0) {
            uVar7 = local_58;
          }
          uVar10 = FUN_0801001c(iVar14,uVar7);
          uVar5 = uVar10 << 1;
          if ((uVar13 & 0xffff) < (uVar10 & ~(uVar13 >> 0x10))) {
            uVar5 = uVar10 << 1 | 1;
          }
          break;
        case 9:
          if (uVar7 == 0) {
            uVar7 = local_58;
          }
          uVar10 = FUN_0801001c(iVar14,uVar7);
          uVar5 = uVar10 << 1;
          if ((uVar13 & 0xffff) == (uVar10 & ~(uVar13 >> 0x10))) {
            uVar5 = uVar10 << 1 | 1;
          }
          break;
        case 10:
          if (uVar7 == 0) {
            uVar7 = local_58;
          }
          uVar10 = FUN_0801001c(iVar14,uVar7);
          uVar5 = uVar10 << 1;
          if ((uVar13 & 0xffff) != (uVar10 & ~(uVar13 >> 0x10))) {
            uVar5 = uVar10 << 1 | 1;
          }
          break;
        case 0xb:
          uVar11 = FUN_080101a4(iVar14,uVar7 + local_58);
          break;
        case 0xc:
          if ((uVar8 & 0xffffff) == 0) {
            uVar7 = (uVar8 << 4) >> 0x1c;
            if (uVar7 == 5) {
              uVar5 = uVar10 << 1;
              if ((param_3 & 0xffff & uVar13) == uVar13 >> 0x10) goto LAB_08067bf4;
            }
            else if (uVar7 == 6) {
              uVar10 = uVar13 & 0xfffffffc;
              uVar7 = *(uint *)(param_1 + (uVar13 >> 0xb) * 4 + 0x1da7508);
              if ((uVar7 & 0x40000000) == 0) {
                *(uint *)(uVar10 + uVar7 * 4) = local_58;
              }
              else if ((int)uVar7 < 0) {
                if (*(uint *)(uVar10 + uVar7 * 4) != local_58) {
                  FUN_0806dd54(iVar15,uVar10);
                  bVar3 = true;
                  *(uint *)(uVar10 + uVar7 * 4) = local_58;
                }
              }
              else {
                printf("store %x to %x\n",local_58,uVar10);
                FUN_0800f9a8(iVar14,uVar10,local_58);
              }
            }
            else if (uVar7 == 0) {
              local_34 = uVar13 + 1;
              local_4c = puVar12;
              local_44 = uVar10;
            }
          }
          break;
        case 0xd:
          if ((uVar8 & 0xffffff) == 0) {
            uVar11 = uVar13;
            switch((uVar8 << 4) >> 0x1c) {
            case 0:
              uVar11 = local_58;
              if (uVar13 == 0) {
                uVar5 = uVar10 >> 1;
              }
              break;
            case 1:
              uVar11 = local_58;
              if ((uVar13 == 0) && (local_34 = local_34 + -1, puVar4 = local_4c, local_34 < 1)) {
                puVar4 = puVar12;
                uVar5 = local_44;
              }
              break;
            case 2:
              uVar11 = local_58;
              if ((uVar13 == 0) && (local_34 = local_34 + -1, puVar4 = local_4c, local_34 < 1)) {
                puVar4 = puVar12;
                uVar5 = 0xffffffff;
                uVar11 = uVar13;
                local_38 = uVar13;
              }
              break;
            case 4:
              uVar11 = local_58;
              local_38 = local_38 + uVar13;
              break;
            case 5:
              uVar11 = local_58;
              local_38 = uVar13;
              break;
            case 6:
              uVar10 = uVar13 + local_58 & 0xfffffffc;
              uVar7 = *(uint *)(param_1 + (uVar13 + local_58 >> 0xb) * 4 + 0x1da7508);
              if ((uVar7 & 0x40000000) == 0) {
                *(uint *)(uVar10 + uVar7 * 4) = local_38;
              }
              else if ((int)uVar7 < 0) {
                if (*(uint *)(uVar10 + uVar7 * 4) != local_38) {
                  FUN_0806dd54(iVar15,uVar10);
                  bVar3 = true;
                  *(uint *)(uVar10 + uVar7 * 4) = local_38;
                }
              }
              else {
                printf("store %x to %x\n",local_38,uVar10);
                FUN_0800f9a8(iVar14,uVar10,local_38);
              }
              uVar11 = local_58 + 4;
              break;
            case 7:
              uVar7 = uVar13 + local_58 & 0xfffffffe;
              uVar10 = *(uint *)(param_1 + (uVar13 + local_58 >> 0xb) * 4 + 0x1da7508);
              iVar1 = uVar10 * 4;
              if ((uVar10 & 0x40000000) == 0) {
                *(short *)(iVar1 + uVar7) = (short)local_38;
              }
              else if ((int)uVar10 < 0) {
                if (*(ushort *)(iVar1 + uVar7) != local_38) {
                  FUN_0806dc6c(iVar15,uVar7);
                  bVar3 = true;
                  *(short *)(iVar1 + uVar7) = (short)local_38;
                }
              }
              else {
                printf("store %x to %x\n",local_38,uVar7);
                FUN_0800f808(iVar14,uVar7,local_38 & 0xffff);
              }
              uVar11 = local_58 + 2;
              break;
            case 8:
              uVar13 = uVar13 + local_58;
              uVar10 = *(uint *)(param_1 + (uVar13 >> 0xb) * 4 + 0x1da7508);
              if ((uVar10 & 0x40000000) == 0) {
                *(char *)(uVar13 + uVar10 * 4) = (char)local_38;
              }
              else if ((int)uVar10 < 0) {
                if (*(byte *)(uVar13 + uVar10 * 4) != local_38) {
                  FUN_0806db7c(iVar15,uVar13);
                  bVar3 = true;
                  *(char *)(uVar13 + uVar10 * 4) = (char)local_38;
                }
              }
              else {
                printf("store %x to %x\n",local_38,uVar13);
                FUN_0800f668(iVar14,uVar13,local_38 & 0xff);
              }
              uVar11 = local_58 + 1;
              break;
            case 9:
              local_38 = FUN_080101a4(iVar14,uVar13 + local_58);
              uVar11 = local_58;
              break;
            case 10:
              local_38 = FUN_0801001c(iVar14,uVar13 + local_58);
              uVar11 = local_58;
              break;
            case 0xb:
              local_38 = FUN_0800fe98(iVar14,uVar13 + local_58);
              uVar11 = local_58;
              break;
            case 0xc:
              uVar11 = local_58 + uVar13;
            }
          }
          break;
        case 0xe:
          if (((uVar10 & 1) != 0) && (uVar13 != 0)) {
            pbVar9 = (byte *)((int)puVar6 + 7);
            uVar7 = uVar7 + local_58;
            uVar10 = uVar7 + uVar13;
            do {
              while( true ) {
                pbVar9 = pbVar9 + 1;
                bVar2 = *pbVar9;
                uVar16 = (uint)bVar2;
                uVar8 = *(uint *)(param_1 + (uVar7 >> 0xb) * 4 + 0x1da7508);
                if ((uVar8 & 0x40000000) != 0) break;
                *(byte *)(uVar7 + uVar8 * 4) = bVar2;
LAB_08067aec:
                uVar7 = uVar7 + 1;
                if (uVar7 == uVar10) goto LAB_08067b74;
              }
              if (-1 < (int)uVar8) {
                printf("store %x to %x\n",uVar16,uVar7);
                FUN_0800f668(iVar14,uVar7,uVar16);
                goto LAB_08067aec;
              }
              if (*(byte *)(uVar7 + uVar8 * 4) == uVar16) goto LAB_08067aec;
              FUN_0806db7c(iVar15,uVar7);
              bVar3 = true;
              *(byte *)(uVar7 + uVar8 * 4) = bVar2;
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar10);
          }
LAB_08067b74:
          puVar4 = (uint *)((int)puVar12 + (uVar13 + 7 & 0xfffffff8));
          break;
        case 0xf:
          if (uVar13 != 0) {
            do {
              while( true ) {
                uVar8 = local_58;
                uVar10 = FUN_0800fe98(iVar14,uVar8);
                uVar13 = (uVar7 - local_58) + uVar8;
                uVar11 = *(uint *)(param_1 + (uVar13 >> 0xb) * 4 + 0x1da7508);
                if ((uVar11 & 0x40000000) != 0) break;
                *(char *)(uVar13 + uVar11 * 4) = (char)uVar10;
LAB_080679e0:
                local_58 = uVar8 + 1;
                if (uVar8 + 1 == uVar13 + local_58) goto LAB_08067a6c;
              }
              if (-1 < (int)uVar11) {
                printf("store %x to %x\n",uVar10,uVar13);
                FUN_0800f668(iVar14,uVar13,uVar10);
                goto LAB_080679e0;
              }
              if (*(byte *)(uVar13 + uVar11 * 4) == uVar10) goto LAB_080679e0;
              FUN_0806db7c(iVar15,uVar13);
              bVar3 = true;
              *(char *)(uVar13 + uVar11 * 4) = (char)uVar10;
              local_58 = uVar8 + 1;
            } while (uVar8 + 1 != uVar13 + local_58);
LAB_08067a6c:
            uVar11 = uVar8 + 1;
          }
        }
      }
      local_58 = uVar11;
      uVar10 = uVar5;
      puVar6 = puVar4;
    } while (puVar6 < puVar17);
    if (bVar3) {
      puts("Cheat modified code.");
      fflush(stdout);
      FUN_08070818(iVar15,0x2000000);
      if (*(int *)(param_1 + 0x1da74f8) != 0) {
        FUN_0806f3f0(iVar15);
        iVar14 = FUN_0806d394(iVar15,*(undefined4 *)(param_1 + 0x1da74ac));
        *(int *)(param_1 + 0x1da74f8) = iVar14 + 8;
        return;
      }
    }
  }
  return;
}


