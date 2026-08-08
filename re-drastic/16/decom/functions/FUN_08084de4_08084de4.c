/*
 * Ghidra decompilation
 *
 * Function : FUN_08084de4
 * Address  : 08084de4
 * Program  : drastic16
 */


void FUN_08084de4(int param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  bool bVar18;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d0 [2];
  undefined auStack_c8 [5];
  byte local_c3 [159];
  
  uVar10 = param_2 & 0xffff;
  local_e4 = (param_2 << 0xc) >> 0x1c;
  uVar4 = 1;
  iVar11 = (uint)(byte)(&DAT_0aaec000)[param_2 & 0xff] + (uint)(byte)(&DAT_0aaec000)[uVar10 >> 8];
  uVar13 = 1 << local_e4;
  local_d8 = (param_2 << 10) >> 0x1f;
  uVar7 = iVar11 * 4;
  if ((iVar11 == 1) && ((param_2 & 0x400000) == 0)) {
    if ((param_2 & 0x200000) == 0) {
      uVar13 = param_2 & 0x1000000;
      if ((param_2 & 0x1000000) != 0) goto joined_r0x08085b1c;
    }
    else {
      uVar4 = (param_2 << 7) >> 0x1f;
joined_r0x08085b1c:
      uVar13 = uVar7;
      if ((param_2 & 0x800000) != 0) {
        uVar13 = 4;
        uVar7 = param_2 & 0xf01f0000 | 0x4800000 | (0x1f - LZCOUNT(uVar10)) * 0x1000;
        goto LAB_080856dc;
      }
    }
    uVar7 = param_2 & 0xf01f0000 | 0x4000000 | (0x1f - LZCOUNT(uVar10)) * 0x1000;
LAB_080856dc:
    if (uVar4 != 0) {
      uVar7 = uVar7 | param_2 & 0x200000 | 0x1000000;
    }
    FUN_080836c4(param_1,uVar7 | uVar13,(param_2 << 0xb) >> 0x1f,0,0,0,0,0,uVar13);
    return;
  }
  local_dc = param_2 & 0x400000;
  uVar14 = *(uint *)(param_1 + 0x4a4);
  uVar15 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
  uVar4 = uVar15 & uVar14;
  if ((uVar4 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
    uVar5 = FUN_080800fc(param_1,0xfd,1,auStack_c8);
    if ((uVar15 & 0xfffffffe & ~(uVar14 & 0xfffffffe)) == 0) {
      puVar16 = *(uint **)(param_1 + 0x4ac) + 1;
      **(uint **)(param_1 + 0x4ac) = uVar5 << 0xc | 0xe3a00000;
      *(uint **)(param_1 + 0x4ac) = puVar16;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x4ac);
      puVar9[1] = uVar4 & 0xfffffffe | 0xe3c00200 | uVar5 << 0xc | uVar5 << 0x10;
      puVar16 = puVar9 + 2;
      *puVar9 = uVar5 << 0xc | 0xe51b0080;
      *(uint **)(param_1 + 0x4ac) = puVar16;
    }
    uVar14 = uVar5 << 0xc;
    puVar9 = puVar16;
    if ((uVar4 & 2) != 0) {
      puVar9 = puVar16 + 1;
      *puVar16 = uVar5 << 0x10 | 0x23800202 | uVar14;
      *(uint **)(param_1 + 0x4ac) = puVar9;
    }
    puVar16 = puVar9;
    if ((uVar4 & 4) != 0) {
      puVar16 = puVar9 + 1;
      *puVar9 = uVar5 << 0x10 | 0x3800204 | uVar14;
      *(uint **)(param_1 + 0x4ac) = puVar16;
    }
    puVar9 = puVar16;
    if ((uVar4 & 8) != 0) {
      puVar9 = puVar16 + 1;
      *puVar16 = uVar5 << 0x10 | 0x43800208 | uVar14;
    }
    uVar2 = *(ushort *)(param_1 + 0x49c);
    *puVar9 = uVar14 | 0xe50b0080;
    *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
    *(ushort *)(param_1 + 0x49c) = uVar2 & ~(ushort)(1 << (uVar5 & 0xff));
  }
  puVar16 = (uint *)0x0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 1;
  if (param_2 >> 0x1c < 0xe) {
    memcpy(auStack_c8,(void *)(param_1 + 0x400),0xa0);
    puVar16 = *(uint **)(param_1 + 0x4ac);
    *puVar16 = 0xfffffffeU - ((int)puVar16 >> 2) & 0xffffff | 0xa000000 |
               (param_2 >> 0x1c ^ 1) << 0x1c;
    *(uint **)(param_1 + 0x4ac) = puVar16 + 1;
  }
  FUN_0807fd88(param_1,local_e4);
  if (local_dc == 0) {
    local_e0 = local_dc;
  }
  else if ((param_2 & 0x108000) == 0x108000) {
    local_e0 = 0;
  }
  else {
    puVar8 = *(undefined4 **)(param_1 + 0x4ac);
    *puVar8 = 0xe50b00fc;
    puVar8[1] = 0xe51b0284;
    puVar8[2] = 0xe50b0100;
    puVar8[3] = 0xe3a01000;
    *(undefined4 **)(param_1 + 0x4ac) = puVar8 + 4;
    FUN_0807ff08(param_1);
    puVar9 = *(uint **)(param_1 + 0x4ac);
    puVar9[1] = 0xe51b00fc;
    local_e0 = 1;
    *puVar9 = ((int)&UNK_0807fb00 - (int)puVar9 >> 2) - 2U & 0xffffff | 0xeb000000;
    *(uint **)(param_1 + 0x4ac) = puVar9 + 2;
  }
  if ((((uVar13 & uVar10) == 0) || ((param_2 & 0x100000) == 0)) || ((uVar10 & ~uVar13) == 0)) {
    uVar4 = (param_2 << 7) >> 0x1e;
    if (uVar4 != 2) goto LAB_08084f54;
LAB_08085254:
    uVar13 = iVar11 * -4;
LAB_08085258:
    if (uVar13 == 0) goto joined_r0x08085288;
    if ((int)uVar13 < 0) {
      puVar9 = *(uint **)(param_1 + 0x4ac);
      *puVar9 = -uVar13 | 0xe2400000;
      *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
      goto joined_r0x08085288;
    }
    uVar4 = uVar13 | 0xe2800000;
  }
  else {
    uVar4 = (param_2 << 7) >> 0x1e;
    if ((-uVar13 & uVar10) == uVar13) {
      local_d8 = 0;
    }
    if (uVar4 == 2) goto LAB_08085254;
LAB_08084f54:
    if (uVar4 != 3) {
      if (uVar4 != 0) {
        uVar13 = 0;
        goto joined_r0x08085288;
      }
      uVar13 = iVar11 * -4 + 4;
      goto LAB_08085258;
    }
    uVar4 = 0xe2800004;
    uVar13 = 4;
  }
  puVar9 = *(uint **)(param_1 + 0x4ac);
  *puVar9 = uVar4;
  *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
joined_r0x08085288:
  if ((param_2 & 0x100000) == 0) {
    uVar4 = param_2 & 0x100000;
    uVar14 = uVar4;
    uVar15 = uVar4;
    for (; uVar10 != 0; uVar10 = uVar10 >> 1) {
      while ((uVar10 & 1) != 0) {
        iVar6 = FUN_080813d4(param_1,uVar14,0);
        uVar5 = uVar15 - 0xc0;
        puVar9 = *(uint **)(param_1 + 0x4ac);
        uVar3 = 0x800000;
        if ((int)uVar5 < 0) {
          uVar5 = -uVar5;
          uVar3 = 0;
        }
        uVar10 = uVar10 >> 1;
        uVar15 = uVar15 + 4;
        *puVar9 = iVar6 << 0xc | 0xe50b0000U | uVar3 | uVar5;
        *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
        uVar14 = uVar14 + 1;
        if (uVar10 == 0) goto LAB_08084ff4;
      }
      uVar14 = uVar14 + 1;
    }
LAB_08084ff4:
    if (local_d8 != 0) {
      if (local_e4 == 0xf) {
        uVar10 = (uint)*(byte *)(param_1 + 0x405);
        if (((uVar10 < 0xfd) &&
            (*(undefined *)(param_1 + uVar10 + 0x480) = 0xff, *(char *)(param_1 + 0x406) != '\0'))
           && (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar10 & 1U) != 0)) {
          uVar14 = (uVar10 + 0x3fffffeb) * 4;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar10 + 0x3fffffeb) * -4;
            uVar10 = 0;
          }
          else {
            uVar10 = 0x800000;
          }
          puVar9 = *(uint **)(param_1 + 0x4ac) + 1;
          **(uint **)(param_1 + 0x4ac) = uVar10 | 0xe50b0000 | uVar14;
          *(uint **)(param_1 + 0x4ac) = puVar9;
        }
        else {
          puVar9 = *(uint **)(param_1 + 0x4ac);
        }
        *(undefined *)(param_1 + 0x405) = 0xfd;
      }
      else {
        iVar6 = FUN_080800fc(param_1,local_e4,0,local_d0);
        uVar4 = iVar6 << 0xc;
        *(undefined *)(param_1 + iVar6 * 8 + 0x406) = 1;
        puVar9 = *(uint **)(param_1 + 0x4ac);
      }
      if ((param_2 & 0x800000) == 0) {
        uVar7 = -(uVar13 + uVar7);
      }
      else {
        uVar7 = uVar7 - uVar13;
      }
      if ((int)uVar7 < 0) {
        *puVar9 = uVar4 | 0xe2400000 | -uVar7;
      }
      else {
        *puVar9 = uVar4 | 0xe2800000 | uVar7;
      }
      *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
    }
    FUN_0807fcac(param_1);
    puVar9 = *(uint **)(param_1 + 0x4ac);
    puVar12 = *(uint **)(param_1 + 0x4c0);
    iVar17 = *(int *)(param_1 + 0x4bc);
    iVar6 = *(int *)(param_1 + 0x4c4);
    *puVar9 = ((int)(&PTR_LAB_0810193c)[(uint)*(byte *)(param_1 + 0x4f0) * 0x10 + iVar11] -
               (int)puVar9 >> 2) - 2U & 0xffffff | 0xeb000000;
    *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
    uVar7 = (int)(puVar9 + 1) - iVar6 >> 2;
    uVar10 = *(int *)(param_1 + 0x4d0) - *(int *)(param_1 + 0x4c8);
    if (*(uint *)(param_1 + 0x4b8) <= (uint)((int)puVar12 - iVar17 >> 2)) {
      printf("FATAL: went past metadata storage of %d for block @ %p (%x)\n");
    }
    if (0xffff < uVar10) {
      printf("FATAL: pc_delta in stored PC metadata is %x\n",uVar10);
    }
    if (0xffff < uVar7) {
      printf("FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar7);
    }
    iVar11 = *(int *)(param_1 + 0x4c0);
    *puVar12 = uVar10 | uVar7 << 0x10;
    *(int *)(param_1 + 0x4c0) = iVar11 + 4;
    if (local_e0 != 0) {
      FUN_0807ff08(param_1);
      puVar8 = *(undefined4 **)(param_1 + 0x4ac);
      *puVar8 = 0xe51b1100;
      puVar8[1] = ((int)&UNK_0807fb00 - (int)(puVar8 + 1) >> 2) - 2U & 0xffffff | 0xeb000000;
      *(undefined4 **)(param_1 + 0x4ac) = puVar8 + 2;
    }
  }
  else {
    if (local_d8 == 0) {
      local_e4 = 0xff;
    }
    else {
      if (local_e4 == 0xf) {
        uVar10 = (uint)*(byte *)(param_1 + 0x405);
        if (((uVar10 < 0xfd) &&
            (*(undefined *)(param_1 + 0x480 + uVar10) = 0xff, *(char *)(param_1 + 0x406) != '\0'))
           && (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar10 & 1U) != 0)) {
          uVar4 = (uVar10 + 0x3fffffeb) * 4;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar10 + 0x3fffffeb) * -4;
            uVar10 = 0;
          }
          else {
            uVar10 = 0x800000;
          }
          puVar9 = *(uint **)(param_1 + 0x4ac) + 1;
          **(uint **)(param_1 + 0x4ac) = uVar10 | 0xe50b0000 | uVar4;
          *(uint **)(param_1 + 0x4ac) = puVar9;
        }
        else {
          puVar9 = *(uint **)(param_1 + 0x4ac);
        }
        uVar10 = 0;
        *(undefined *)(param_1 + 0x405) = 0xfd;
      }
      else {
        iVar11 = FUN_080800fc(param_1,local_e4,0,local_d0);
        uVar10 = iVar11 << 0xc;
        *(undefined *)(param_1 + iVar11 * 8 + 0x406) = 1;
        puVar9 = *(uint **)(param_1 + 0x4ac);
      }
      if ((param_2 & 0x800000) == 0) {
        uVar13 = -(uVar13 + uVar7);
      }
      else {
        uVar13 = uVar7 - uVar13;
      }
      if ((int)uVar13 < 0) {
        *puVar9 = uVar10 | 0xe2400000 | -uVar13;
      }
      else {
        *puVar9 = uVar10 | 0xe2800000 | uVar13;
      }
      *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
    }
    iVar11 = param_1 + 0x480;
    FUN_0807fcac(param_1);
    if ((*(char *)(param_1 + 0x4f0) == '\x01') && (*(int *)(param_1 + 0x4e4) == 0)) {
      puVar8 = *(undefined4 **)(param_1 + 0x4ac);
      iVar6 = *(int *)(&DAT_081018fc + uVar7);
      *puVar8 = 0xe31003ff;
      puVar8[1] = (iVar6 - (int)(puVar8 + 1) >> 2) - 2U & 0xffffff | 0x1b000000;
      *(undefined4 **)(param_1 + 0x4ac) = puVar8 + 2;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x4ac);
      *puVar9 = (*(int *)(&DAT_081018fc + uVar7) - (int)puVar9 >> 2) - 2U & 0xffffff | 0xeb000000;
      *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
    }
    uVar7 = (uint)*(byte *)(param_1 + 0x405);
    if (((uVar7 < 0xfd) &&
        (*(undefined *)(iVar11 + uVar7) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
      uVar10 = (uVar7 + 0x3fffffeb) * 4;
      puVar9 = *(uint **)(param_1 + 0x4ac);
      if ((int)uVar10 < 0) {
        uVar10 = (uVar7 + 0x3fffffeb) * -4;
        uVar7 = 0;
      }
      else {
        uVar7 = 0x800000;
      }
      *puVar9 = uVar7 | 0xe50b0000 | uVar10;
      *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
    }
    uVar7 = (uint)*(byte *)(param_1 + 0x40d);
    *(undefined *)(param_1 + 0x405) = 0xfd;
    *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | 1;
    if (((uVar7 < 0xfd) &&
        (*(undefined *)(iVar11 + uVar7) = 0xff, *(char *)(param_1 + 0x40e) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
      puVar9 = *(uint **)(param_1 + 0x4ac);
      uVar10 = (uVar7 + 0x3fffffeb) * 4;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar7 + 0x3fffffeb) * -4;
        uVar7 = 0;
      }
      else {
        uVar7 = 0x800000;
      }
      *puVar9 = uVar7 | 0xe50b1000 | uVar10;
      *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
    }
    uVar7 = (uint)*(byte *)(param_1 + 0x475);
    *(undefined *)(param_1 + 0x40d) = 0xff;
    if (((uVar7 < 0xfd) &&
        (*(undefined *)(iVar11 + uVar7) = 0xff, *(char *)(param_1 + 0x476) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
      uVar10 = (uVar7 + 0x3fffffeb) * 4;
      puVar9 = *(uint **)(param_1 + 0x4ac);
      if ((int)uVar10 < 0) {
        uVar10 = (uVar7 + 0x3fffffeb) * -4;
        uVar7 = 0;
      }
      else {
        uVar7 = 0x800000;
      }
      *puVar9 = uVar7 | 0xe50be000 | uVar10;
      *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
    }
    uVar7 = param_2 & 0x7fff;
    *(undefined *)(param_1 + 0x475) = 0xff;
    if (uVar7 != 0) {
      uVar14 = 0;
      uVar4 = 0;
      uVar13 = 0;
      iVar11 = param_1;
      uVar10 = 0xffffffff;
      do {
        uVar15 = uVar10;
        if ((uVar7 & 1) != 0) {
          uVar15 = (uint)*(byte *)(iVar11 + 0x480);
          if (uVar15 == 0xff || uVar4 == local_e4) {
            if (uVar13 != 0) {
              puVar9 = *(uint **)(param_1 + 0x4ac);
              *puVar9 = uVar13 | 0xe8b00000;
              *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
            }
            local_d0[uVar14] = uVar4;
            if (uVar14 == 1) {
              puVar8 = *(undefined4 **)(param_1 + 0x4ac);
              puVar9 = puVar8 + 1;
              *puVar8 = 0xe8b04002;
              *(uint **)(param_1 + 0x4ac) = puVar9;
              if (local_d0[0] != local_e4) {
                puVar9 = puVar8 + 2;
                uVar10 = (local_d0[0] + 0x3fffffeb) * 4;
                if ((int)uVar10 < 0) {
                  uVar10 = (local_d0[0] + 0x3fffffeb) * -4;
                  uVar13 = 0;
                }
                else {
                  uVar13 = 0x800000;
                }
                puVar8[1] = uVar13 | 0xe50b1000 | uVar10;
                *(uint **)(param_1 + 0x4ac) = puVar9;
              }
              if (local_d0[1] == local_e4) {
                uVar14 = 0;
                uVar13 = uVar14;
              }
              else {
                uVar14 = 0;
                uVar10 = (local_d0[1] + 0x3fffffeb) * 4;
                if ((int)uVar10 < 0) {
                  uVar10 = (local_d0[1] + 0x3fffffeb) * -4;
                  uVar13 = 0;
                }
                else {
                  uVar13 = 0x800000;
                }
                *puVar9 = uVar13 | 0xe50be000 | uVar10;
                *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
                uVar13 = uVar14;
              }
            }
            else {
              uVar14 = 1;
              uVar13 = 0;
            }
          }
          else {
            if (uVar14 != 0) {
              puVar8 = *(undefined4 **)(param_1 + 0x4ac);
              *puVar8 = 0xe8b00002;
              *(undefined4 **)(param_1 + 0x4ac) = puVar8 + 1;
              if (local_d0[0] != local_e4) {
                uVar14 = (local_d0[0] + 0x3fffffeb) * 4;
                if ((int)uVar14 < 0) {
                  uVar14 = (local_d0[0] + 0x3fffffeb) * -4;
                  uVar5 = 0;
                }
                else {
                  uVar5 = 0x800000;
                }
                puVar8[1] = uVar5 | 0xe50b1000 | uVar14;
                *(undefined4 **)(param_1 + 0x4ac) = puVar8 + 2;
              }
            }
            uVar5 = uVar13;
            if ((uVar15 <= uVar10) && (uVar13 != 0)) {
              puVar9 = *(uint **)(param_1 + 0x4ac);
              uVar5 = 0;
              *puVar9 = uVar13 | 0xe8b00000;
              *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
            }
            uVar14 = 0;
            uVar13 = uVar5 | 1 << uVar15;
          }
        }
        uVar7 = uVar7 >> 1;
        uVar4 = uVar4 + 1;
        iVar11 = iVar11 + 1;
        uVar10 = uVar15;
      } while (uVar7 != 0);
      if (uVar13 == 0) {
        if (uVar14 != 0) {
          puVar8 = *(undefined4 **)(param_1 + 0x4ac);
          *puVar8 = 0xe8b00002;
          uVar7 = (local_d0[0] + 0x3fffffeb) * 4;
          if ((int)uVar7 < 0) {
            uVar7 = (local_d0[0] + 0x3fffffeb) * -4;
            uVar10 = 0;
          }
          else {
            uVar10 = 0x800000;
          }
          puVar8[1] = uVar10 | 0xe50b1000 | uVar7;
          *(undefined4 **)(param_1 + 0x4ac) = puVar8 + 2;
        }
      }
      else {
        puVar9 = *(uint **)(param_1 + 0x4ac);
        *puVar9 = uVar13 | 0xe8b00000;
        *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
      }
    }
    if (local_e0 != 0) {
      FUN_0807ff08(param_1);
      puVar8 = *(undefined4 **)(param_1 + 0x4ac);
      *puVar8 = 0xe51b1100;
      puVar8[1] = ((int)&UNK_0807fb00 - (int)(puVar8 + 1) >> 2) - 2U & 0xffffff | 0xeb000000;
      *(undefined4 **)(param_1 + 0x4ac) = puVar8 + 2;
    }
    if ((param_2 & 0x8000) != 0) {
      puVar8 = *(undefined4 **)(param_1 + 0x4ac);
      *puVar8 = 0xe5900000;
      *(undefined4 **)(param_1 + 0x4ac) = puVar8 + 1;
      if (local_dc == 0) {
        if (*(char *)(param_1 + 0x4f0) != '\x01') {
          if (*(char *)(param_1 + 0x4f1) == '\0') {
            puVar8[1] = 0xe3c00003;
            *(undefined4 **)(param_1 + 0x4ac) = puVar8 + 2;
          }
          else if (*(char *)(param_1 + 0x4f1) == '\x01') {
            puVar8[1] = 0xe3800001;
            *(undefined4 **)(param_1 + 0x4ac) = puVar8 + 2;
          }
        }
        FUN_0807ff08(param_1);
        puVar9 = *(uint **)(param_1 + 0x4ac);
        *puVar9 = ((int)&LAB_0807b960 - (int)puVar9 >> 2) - 2U & 0xffffff | 0xea000000;
        *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
      }
      else {
        puVar8[1] = ((int)&LAB_0807f794 - (int)(puVar8 + 1) >> 2) - 2U & 0xffffff | 0xea000000;
        *(undefined4 **)(param_1 + 0x4ac) = puVar8 + 2;
      }
    }
  }
  if (puVar16 != (uint *)0x0) {
    iVar6 = param_1 + 0x480;
    uVar7 = 0;
    iVar11 = param_1;
    do {
      while( true ) {
        uVar10 = (uint)*(byte *)(iVar11 + 0x405);
        bVar1 = local_c3[uVar7 * 8];
        uVar13 = (uint)bVar1;
        if (uVar10 != uVar13) break;
LAB_080850f8:
        uVar7 = uVar7 + 1;
        iVar11 = iVar11 + 8;
        if (uVar7 == 0xf) goto LAB_080851f4;
      }
      iVar17 = uVar13 - uVar10;
      uVar4 = (uint)*(byte *)(iVar6 + uVar13);
      if (iVar17 != 0) {
        iVar17 = 1;
      }
      if (0xfc < uVar10) {
        iVar17 = 0;
      }
      if (((iVar17 != 0) &&
          (*(undefined *)(iVar6 + uVar10) = 0xff, *(char *)(iVar11 + 0x406) != '\0')) &&
         (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar10 & 1U) != 0)) {
        puVar9 = *(uint **)(param_1 + 0x4ac);
        uVar14 = (uVar10 + 0x3fffffeb) * 4;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar10 + 0x3fffffeb) * -4;
          uVar10 = 0;
        }
        else {
          uVar10 = 0x800000;
        }
        *puVar9 = uVar7 << 0xc | 0xe50b0000 | uVar10 | uVar14;
        *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
      }
      if (uVar13 < 0xfd) {
        *(char *)(iVar6 + uVar13) = (char)uVar7;
      }
      *(byte *)(iVar11 + 0x405) = bVar1;
      if (0xfc < uVar13) goto LAB_080850f8;
      if (uVar4 < 0xfd) {
        if (uVar7 != uVar4) {
          puVar9 = *(uint **)(param_1 + 0x4ac);
          *puVar9 = uVar7 << 0xc | 0xe1a00000 | uVar4;
          *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
        }
        goto LAB_080850f8;
      }
      uVar10 = uVar7 << 0xc;
      puVar9 = *(uint **)(param_1 + 0x4ac);
      uVar4 = (uVar13 - 0x15) * 4;
      bVar18 = (int)uVar4 < 0;
      uVar7 = uVar7 + 1;
      if (bVar18) {
        uVar4 = (uVar13 - 0x15) * -4;
      }
      if (bVar18) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0x800000;
      }
      iVar11 = iVar11 + 8;
      *puVar9 = uVar10 | 0xe51b0000 | uVar13 | uVar4;
      *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
    } while (uVar7 != 0xf);
LAB_080851f4:
    *puVar16 = (*(int *)(param_1 + 0x4ac) - (int)puVar16 >> 2) - 2U & 0xffffff |
               *puVar16 & 0xff000000;
  }
  return;
}


