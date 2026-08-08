/*
 * Ghidra decompilation
 *
 * Function : FUN_08086408
 * Address  : 08086408
 * Program  : drastic16
 */


void FUN_08086408(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  bool bVar19;
  int *local_3c;
  int local_30 [3];
  
  puVar11 = *(uint **)(param_1 + 0x4d8);
  uVar12 = *(uint *)(param_1 + 0x4a4);
  iVar15 = *(int *)(param_1 + 0x4e0);
  uVar7 = (uint)*(byte *)(puVar11 + 5);
  uVar13 = *puVar11;
  uVar14 = uVar7 & 0xf;
  if ((uVar14 & uVar12) != uVar14) {
    uVar2 = FUN_080800fc(param_1,0xfd,1,local_30);
    puVar17 = *(uint **)(param_1 + 0x4ac);
    uVar12 = (uVar14 | *(byte *)((int)puVar11 + 0x15)) & uVar12;
    uVar7 = uVar2 << 0xc;
    *puVar17 = uVar7 | 0xe51b0080;
    *(uint **)(param_1 + 0x4ac) = puVar17 + 1;
    puVar8 = puVar17 + 1;
    if (uVar12 != 0) {
      uVar14 = uVar2 << 0x10;
      puVar8 = puVar17 + 2;
      puVar17[1] = uVar12 | 0xe3c00200 | uVar7 | uVar14;
      *(uint **)(param_1 + 0x4ac) = puVar8;
      if ((uVar12 & 1) != 0) {
        puVar8 = puVar17 + 3;
        puVar17[2] = uVar7 | uVar14 | 0x63800201;
        *(uint **)(param_1 + 0x4ac) = puVar8;
      }
      puVar17 = puVar8;
      if ((uVar12 & 2) != 0) {
        puVar17 = puVar8 + 1;
        *puVar8 = uVar7 | uVar14 | 0x23800202;
        *(uint **)(param_1 + 0x4ac) = puVar17;
      }
      puVar16 = puVar17;
      if ((uVar12 & 4) != 0) {
        puVar16 = puVar17 + 1;
        *puVar17 = uVar7 | uVar14 | 0x3800204;
        *(uint **)(param_1 + 0x4ac) = puVar16;
      }
      puVar8 = puVar16;
      if ((uVar12 & 8) != 0) {
        puVar8 = puVar16 + 1;
        *puVar16 = uVar7 | uVar14 | 0x43800208;
      }
    }
    uVar1 = *(ushort *)(param_1 + 0x49c);
    *puVar8 = uVar2 | 0xe128f000;
    uVar12 = 0xf;
    *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
    *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar2 & 0xff));
    *(undefined4 *)(param_1 + 0x4a4) = 0xf;
    uVar7 = (uint)*(byte *)(puVar11 + 5);
  }
  uVar7 = *(uint *)(param_1 + 0x4a8) | uVar7 >> 4;
  *(uint *)(param_1 + 0x4a8) = uVar7;
  switch((uVar13 << 4) >> 0x1d) {
  case 1:
    if (((uVar13 << 7) >> 0x1e != 2) || ((uVar13 & 0x100000) != 0)) {
LAB_080869f0:
      FUN_0808159c(param_1,uVar13);
      uVar12 = *(uint *)(param_1 + 0x4a4);
      goto LAB_080865a0;
    }
    if ((uVar13 << 0x10) >> 0x1c == 0xf) {
      FUN_08082004(param_1,uVar13);
      uVar12 = *(uint *)(param_1 + 0x4a4);
      goto LAB_080865a0;
    }
    break;
  case 2:
  case 3:
    uVar14 = (uVar13 << 0xb) >> 0x1f;
    uVar2 = (uVar13 << 9) >> 0x1f;
    if ((uVar13 & 0x2000000) == 0) {
      FUN_080836c4(param_1,uVar13,uVar14,uVar2,0,0,0,0,uVar13 & 0xfff);
      uVar12 = *(uint *)(param_1 + 0x4a4);
      goto LAB_080865a0;
    }
    if ((uVar13 & 0x10) == 0) {
      FUN_080836c4(param_1,uVar13,uVar14,uVar2,0,0,0,2,0);
      uVar12 = *(uint *)(param_1 + 0x4a4);
      goto LAB_080865a0;
    }
    if (*(char *)(param_1 + 0x4f1) != '\0') {
      if ((uVar13 & 0x10000) != 0) {
        uVar14 = ((uVar13 << 0x10) >> 0x15) << 1;
        uVar18 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
        uVar5 = uVar14 & 0xff;
        uVar14 = uVar14 >> 8;
        uVar2 = uVar12 & uVar18;
        if ((uVar7 & uVar2 & 0xfffffffe) != 0) {
          uVar7 = FUN_080800fc(param_1,0xfd,1,local_30);
          if ((uVar18 & 0xfffffffe & ~(uVar12 & 0xfffffffe)) == 0) {
            puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
            **(uint **)(param_1 + 0x4ac) = uVar7 << 0xc | 0xe3a00000;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
          else {
            puVar17 = *(uint **)(param_1 + 0x4ac);
            puVar17[1] = uVar2 & 0xfffffffe | 0xe3c00200 | uVar7 << 0xc | uVar7 << 0x10;
            puVar8 = puVar17 + 2;
            *puVar17 = uVar7 << 0xc | 0xe51b0080;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
          uVar12 = uVar7 << 0xc;
          puVar17 = puVar8;
          if ((uVar2 & 2) != 0) {
            puVar17 = puVar8 + 1;
            *puVar8 = uVar7 << 0x10 | 0x23800202 | uVar12;
            *(uint **)(param_1 + 0x4ac) = puVar17;
          }
          puVar8 = puVar17;
          if ((uVar2 & 4) != 0) {
            puVar8 = puVar17 + 1;
            *puVar17 = uVar7 << 0x10 | 0x3800204 | uVar12;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
          puVar17 = puVar8;
          if ((uVar2 & 8) != 0) {
            puVar17 = puVar8 + 1;
            *puVar8 = uVar7 << 0x10 | 0x43800208 | uVar12;
          }
          uVar1 = *(ushort *)(param_1 + 0x49c);
          *puVar17 = uVar12 | 0xe50b0080;
          *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar7 & 0xff));
          *(uint **)(param_1 + 0x4ac) = puVar17 + 1;
        }
        local_3c = local_30;
        uVar12 = (uint)*(byte *)(param_1 + 0x405);
        uVar7 = 0;
        *(undefined4 *)(param_1 + 0x4a4) = 1;
        *(undefined4 *)(param_1 + 0x4a8) = 0;
        uVar2 = (uint)*(byte *)(param_1 + 0x48e);
        if (((uVar12 < 0xfd) &&
            (*(undefined *)(param_1 + uVar12 + 0x480) = 0xff, *(char *)(param_1 + 0x406) != '\0'))
           && (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar12 & 1U) != 0)) {
          uVar18 = (uVar12 + 0x3fffffeb) * 4;
          puVar8 = *(uint **)(param_1 + 0x4ac);
          if ((int)uVar18 < 0) {
            uVar18 = (uVar12 + 0x3fffffeb) * -4;
          }
          else {
            uVar7 = 0x800000;
          }
          *puVar8 = uVar7 | 0xe50b0000 | uVar18;
          *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
        }
        *(undefined *)(param_1 + 0x405) = 0xfd;
        *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | 1;
        if (uVar2 == 0xff) {
          puVar10 = *(undefined4 **)(param_1 + 0x4ac);
          *puVar10 = 0xe51b001c;
          *(undefined4 **)(param_1 + 0x4ac) = puVar10 + 1;
        }
        else if (uVar2 != 0) {
          puVar8 = *(uint **)(param_1 + 0x4ac);
          *puVar8 = uVar2 | 0xe1a00000;
          *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
        }
        uVar12 = *(uint *)(param_1 + 0x4d0);
        iVar15 = FUN_080800fc(param_1,0xe,0,local_3c);
        uVar7 = iVar15 << 0xc;
        *(undefined *)(param_1 + iVar15 * 8 + 0x406) = 1;
        puVar8 = *(uint **)(param_1 + 0x4ac);
        puVar17 = puVar8 + 1;
        *puVar8 = uVar12 & 0xfff | 0xe3000001 | ((uVar12 << 0x10) >> 0x1c) << 0x10 | uVar7;
        *(uint **)(param_1 + 0x4ac) = puVar17;
        if (uVar12 >> 0x10 != 0) {
          puVar17 = puVar8 + 2;
          uVar7 = (uVar12 << 4) >> 0x14 | (uVar12 >> 0x1c) << 0x10 | 0xe3400000 | uVar7;
          puVar8[1] = uVar7;
          *(uint **)(param_1 + 0x4ac) = puVar17;
        }
        puVar8 = puVar17;
        if (uVar5 != 0) {
          puVar8 = puVar17 + 1;
          *puVar17 = uVar5 | 0xe2800000;
          *(uint **)(param_1 + 0x4ac) = puVar8;
        }
        puVar17 = puVar8;
        if (uVar14 != 0) {
          puVar17 = puVar8 + 1;
          *puVar8 = uVar14 | 0xe2800c00;
          *(uint **)(param_1 + 0x4ac) = puVar17;
        }
        bVar19 = (uVar13 & 0x20000) == 0;
        if (bVar19) {
          uVar12 = 0xe3c00003;
          uVar7 = param_1;
        }
        else {
          uVar12 = 0xe3800001;
        }
        *puVar17 = uVar12;
        if (!bVar19) {
          uVar7 = param_1;
        }
        *(uint **)(param_1 + 0x4ac) = puVar17 + 1;
        FUN_0807ff08(uVar7);
        puVar8 = *(uint **)(param_1 + 0x4ac);
        *puVar8 = ((int)&LAB_0807b960 - (int)puVar8 >> 2) - 2U & 0xffffff | 0xea000000;
        *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
        uVar12 = *(uint *)(param_1 + 0x4a4);
        goto LAB_080865a0;
      }
      iVar3 = FUN_080800fc(param_1,0xe,0,local_30);
      iVar15 = ((int)(uVar13 << 0x10) >> 0x15) * 0x1000;
      *(undefined *)(param_1 + iVar3 * 8 + 0x406) = 1;
      iVar4 = *(int *)(param_1 + 0x4d8);
      puVar8 = *(uint **)(param_1 + 0x4ac);
      uVar7 = iVar15 + *(int *)(iVar4 + 4);
      *puVar8 = uVar7 & 0xfff | 0xe3000000 | (uVar7 * 0x10000 >> 0x1c) << 0x10 | iVar3 << 0xc;
      iVar4 = *(int *)(iVar4 + 4);
      *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
      uVar12 = iVar15 + iVar4;
      uVar7 = uVar12 >> 0x10;
      if (uVar7 != 0) {
        puVar8[1] = uVar7 & 0xfff | (uVar12 >> 0x1c) << 0x10 | 0xe3400000 | iVar3 << 0xc;
        *(uint **)(param_1 + 0x4ac) = puVar8 + 2;
        uVar12 = *(uint *)(param_1 + 0x4a4);
        goto LAB_080865a0;
      }
      goto LAB_08086a30;
    }
    break;
  case 4:
    FUN_08084de4(param_1,uVar13);
    uVar12 = *(uint *)(param_1 + 0x4a4);
    goto LAB_080865a0;
  case 5:
    uVar7 = uVar13 >> 0x1c;
    uVar12 = *(uint *)(param_1 + 0x4d0);
    if (*(char *)(param_1 + 0x4f1) != '\0') {
      uVar12 = uVar12 | 1;
    }
    if (uVar7 == 0xf) {
      iVar15 = FUN_080800fc(param_1,0xe,0,local_30);
      *(undefined *)(param_1 + iVar15 * 8 + 0x406) = 1;
      uVar13 = uVar12 >> 0x10;
      puVar8 = *(uint **)(param_1 + 0x4ac);
      if (uVar13 == 0) {
        uVar7 = 0xe;
      }
      *puVar8 = uVar12 & 0xfff | 0xe3000000 | ((uVar12 << 0x10) >> 0x1c) << 0x10 | iVar15 << 0xc;
      *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
      if (uVar13 != 0) {
        uVar7 = 0xe;
        puVar8[1] = uVar13 & 0xfff | (uVar12 >> 0x1c) << 0x10 | 0xe3400000 | iVar15 << 0xc;
        *(uint **)(param_1 + 0x4ac) = puVar8 + 2;
      }
    }
    else if ((uVar13 & 0x1000000) != 0) {
      FUN_08081f40(param_1,uVar12,uVar7);
    }
    FUN_0808085c(param_1,uVar7);
    uVar12 = *(uint *)(param_1 + 0x4a4);
    goto LAB_080865a0;
  case 6:
    if (*(int *)(*(int *)(param_1 + 0x4e0) + 0x2304) != 0) goto LAB_080865a0;
    break;
  case 7:
    if ((uVar13 & 0x1000000) != 0) {
      FUN_08085cc4(param_1,2,3,uVar13 >> 0x1c);
      uVar12 = *(uint *)(param_1 + 0x4a4);
      goto LAB_080865a0;
    }
    if (*(int *)(iVar15 + 0x2304) != 0) {
      if ((uVar13 & 0x10) == 0) goto LAB_080865a0;
      FUN_080826c4(param_1,uVar13);
      goto LAB_08086a30;
    }
    break;
  default:
    if ((uVar13 & 0x90) == 0x90) {
      if ((uVar13 >> 5 & 3) != 0) {
        uVar14 = (uVar13 << 0xb) >> 0x1f;
        uVar7 = (uVar13 << 0x19) >> 0x1f;
        uVar2 = uVar13 >> 5 & 1;
        uVar12 = (uVar14 ^ 1) & uVar7;
        if (uVar12 != 0) {
          uVar14 = uVar2 ^ 1;
          if ((uVar13 & 0x1000) != 0) break;
          uVar12 = 1;
        }
        if ((uVar13 & 0x400000) == 0) {
          FUN_080836c4(param_1,uVar13,uVar14,1,uVar2,uVar12,uVar7,1,0);
          uVar12 = *(uint *)(param_1 + 0x4a4);
        }
        else {
          FUN_080836c4(param_1,uVar13,uVar14,1,uVar2,uVar12,uVar7,0,
                       uVar13 >> 4 & 0xf0 | uVar13 & 0xf);
          uVar12 = *(uint *)(param_1 + 0x4a4);
        }
        goto LAB_080865a0;
      }
      uVar14 = uVar13 >> 0x15;
      uVar2 = uVar14 & 0xf;
      if (uVar2 < 8) {
        if ((uVar13 & 0x800000) == 0) {
          uVar14 = uVar13 & 0xf;
          uVar7 = (uVar13 << 0xc) >> 0x1c;
          uVar12 = (uVar13 << 0xb) >> 0x1f;
          if (uVar14 == 0xf) {
            uVar14 = *(uint *)(*(int *)(param_1 + 0x4d8) + 4);
            uVar2 = FUN_080800fc(param_1,0xfe,1,local_30);
            puVar8 = *(uint **)(param_1 + 0x4ac);
            *(uint *)(param_1 + (uVar2 + 0x80) * 8) = uVar14;
            *puVar8 = uVar14 & 0xfff | 0xe3000000 | ((uVar14 << 0x10) >> 0x1c) << 0x10 |
                      uVar2 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
            if (uVar14 >> 0x10 != 0) {
              puVar8[1] = uVar14 >> 0x10 & 0xfff | (uVar14 >> 0x1c) << 0x10 | 0xe3400000 |
                          uVar2 << 0xc;
              *(uint **)(param_1 + 0x4ac) = puVar8 + 2;
            }
          }
          else {
            uVar2 = FUN_080800fc(param_1,uVar14,1,local_30);
            if (local_30[0] != 0) {
              puVar8 = *(uint **)(param_1 + 0x4ac);
              *puVar8 = uVar14 * -4 + 0x54 | 0xe51b0000 | uVar2 << 0xc;
              *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
            }
          }
          local_3c = local_30;
          iVar15 = FUN_080814b4(param_1,(uVar13 << 0x14) >> 0x1c);
          if ((uVar13 & 0x200000) == 0) {
            if (uVar7 == 0xf) {
              uVar7 = (uint)*(byte *)(param_1 + 0x405);
              if (((uVar7 < 0xfd) &&
                  (*(undefined *)(param_1 + uVar7 + 0x480) = 0xff,
                  *(char *)(param_1 + 0x406) != '\0')) &&
                 (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
                uVar14 = (uVar7 + 0x3fffffeb) * 4;
                bVar19 = (int)uVar14 < 0;
                if (bVar19) {
                  uVar14 = (uVar7 + 0x3fffffeb) * -4;
                }
                puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
                **(uint **)(param_1 + 0x4ac) = uVar14 | (uint)!bVar19 << 0x17 | 0xe50b0000;
                *(uint **)(param_1 + 0x4ac) = puVar8;
              }
              else {
                puVar8 = *(uint **)(param_1 + 0x4ac);
              }
              iVar3 = 0;
              *(undefined *)(param_1 + 0x405) = 0xfd;
              *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | 1;
            }
            else {
              iVar3 = FUN_080800fc(param_1,uVar7,1,local_3c);
              *(undefined *)(param_1 + iVar3 * 8 + 0x406) = 1;
              if ((uVar13 >> 0x1c == 0xe) || (local_30[0] == 0)) {
                puVar8 = *(uint **)(param_1 + 0x4ac);
              }
              else {
                puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
                **(uint **)(param_1 + 0x4ac) = uVar7 * -4 + 0x54 | 0xe51b0000 | iVar3 << 0xc;
              }
            }
            *puVar8 = uVar13 & 0xf0000000 | 0x90 | uVar12 << 0x14 | uVar2 | iVar15 << 8 |
                      iVar3 << 0x10;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
            uVar12 = *(uint *)(param_1 + 0x4a4);
          }
          else {
            iVar3 = FUN_080814b4(param_1,(uVar13 << 0x10) >> 0x1c);
            iVar4 = FUN_08080b7c(param_1,uVar7,1,uVar13 >> 0x1c);
            puVar8 = *(uint **)(param_1 + 0x4ac);
            *puVar8 = uVar13 & 0xf0000000 | 0x200090 | uVar12 << 0x14 | uVar2 | iVar15 << 8 |
                      iVar4 << 0x10 | iVar3 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
            uVar12 = *(uint *)(param_1 + 0x4a4);
          }
        }
        else {
          uVar7 = FUN_080814b4(param_1,uVar13 & 0xf);
          iVar15 = FUN_080814b4(param_1,(uVar13 << 0x14) >> 0x1c);
          uVar12 = (uVar13 << 0x10) >> 0x1c;
          uVar2 = (uVar13 << 0xc) >> 0x1c;
          if ((uVar14 & 1) == 0) {
            iVar3 = FUN_08080b7c(param_1,uVar12,1,uVar13 >> 0x1c);
            iVar4 = FUN_08080b7c(param_1,uVar2,1,uVar13 >> 0x1c);
          }
          else {
            iVar3 = FUN_080814b4(param_1,uVar12);
            iVar4 = FUN_080814b4(param_1,uVar2);
            *(undefined *)(param_1 + iVar3 * 8 + 0x406) = 1;
            *(undefined *)(param_1 + iVar4 * 8 + 0x406) = 1;
          }
          puVar8 = *(uint **)(param_1 + 0x4ac);
          *puVar8 = uVar13 & 0xf0000000 | 0x90 | (uVar14 & 7) << 0x15 |
                    ((uVar13 << 0xb) >> 0x1f) << 0x14 | uVar7 | iVar15 << 8 | iVar4 << 0x10 |
                    iVar3 << 0xc;
          *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
          uVar12 = *(uint *)(param_1 + 0x4a4);
        }
        goto LAB_080865a0;
      }
      if (uVar2 == 8) {
        uVar14 = (uVar13 << 0xc) >> 0x1c;
        uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
        uVar2 = uVar12 & uVar5;
        if ((uVar7 & uVar2 & 0xfffffffe) != 0) {
          uVar7 = FUN_080800fc(param_1,0xfd,1,local_30);
          if ((uVar5 & 0xfffffffe & ~(uVar12 & 0xfffffffe)) == 0) {
            puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
            **(uint **)(param_1 + 0x4ac) = uVar7 << 0xc | 0xe3a00000;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
          else {
            puVar8 = *(uint **)(param_1 + 0x4ac);
            *puVar8 = uVar7 << 0xc | 0xe51b0080;
            puVar8[1] = uVar2 & 0xfffffffe | 0xe3c00200 | uVar7 << 0xc | uVar7 << 0x10;
            puVar8 = puVar8 + 2;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
          uVar12 = uVar7 << 0xc;
          puVar17 = puVar8;
          if ((uVar2 & 2) != 0) {
            puVar17 = puVar8 + 1;
            *puVar8 = uVar12 | uVar7 << 0x10 | 0x23800202;
            *(uint **)(param_1 + 0x4ac) = puVar17;
          }
          puVar8 = puVar17;
          if ((uVar2 & 4) != 0) {
            puVar8 = puVar17 + 1;
            *puVar17 = uVar12 | uVar7 << 0x10 | 0x3800204;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
          puVar17 = puVar8;
          if ((uVar2 & 8) != 0) {
            puVar17 = puVar8 + 1;
            *puVar8 = uVar12 | uVar7 << 0x10 | 0x43800208;
            *(uint **)(param_1 + 0x4ac) = puVar17;
          }
          uVar1 = *(ushort *)(param_1 + 0x49c);
          *puVar17 = uVar12 | 0xe50b0080;
          *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar7 & 0xff));
          *(uint **)(param_1 + 0x4ac) = puVar17 + 1;
        }
        *(undefined4 *)(param_1 + 0x4a8) = 0;
        *(undefined4 *)(param_1 + 0x4a4) = 1;
        FUN_0807fd88(param_1,uVar14,0);
        uVar7 = (uint)*(byte *)(param_1 + 0x40d);
        if (((uVar7 < 0xfd) &&
            (*(undefined *)(param_1 + 0x480 + uVar7) = 0xff, *(char *)(param_1 + 0x40e) != '\0')) &&
           (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
          uVar12 = (uVar7 + 0x3fffffeb) * 4;
          bVar19 = -1 < (int)uVar12;
          puVar8 = *(uint **)(param_1 + 0x4ac);
          if (!bVar19) {
            uVar12 = (uVar7 + 0x3fffffeb) * -4;
          }
          *puVar8 = uVar12 | (uint)bVar19 << 0x17 | 0xe50b1000;
          *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
        }
        uVar7 = (uint)*(byte *)(param_1 + 0x475);
        *(undefined *)(param_1 + 0x40d) = 0xfd;
        if (((uVar7 < 0xfd) &&
            (*(undefined *)(param_1 + 0x480 + uVar7) = 0xff, *(char *)(param_1 + 0x476) != '\0')) &&
           (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
          uVar12 = (uVar7 + 0x3fffffeb) * 4;
          bVar19 = (int)uVar12 < 0;
          if (bVar19) {
            uVar12 = (uVar7 + 0x3fffffeb) * -4;
          }
          puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
          **(uint **)(param_1 + 0x4ac) = uVar12 | (uint)!bVar19 << 0x17 | 0xe50be000;
          *(uint **)(param_1 + 0x4ac) = puVar8;
        }
        else {
          puVar8 = *(uint **)(param_1 + 0x4ac);
        }
        *(undefined *)(param_1 + 0x475) = 0xfd;
        if (uVar13 >> 0x1c < 0xe) {
          puVar17 = puVar8 + 1;
          *puVar8 = (uVar13 >> 0x1c ^ 1) << 0x1c | 0xa000000 | -((int)puVar8 >> 2) - 2U & 0xffffff;
          *(uint **)(param_1 + 0x4ac) = puVar17;
        }
        else {
          puVar17 = puVar8;
          puVar8 = (uint *)0x0;
        }
        iVar15 = (int)FUN_0807be30 - (int)puVar17;
        puVar6 = &LAB_0807cb40;
        puVar9 = &LAB_0807c500;
      }
      else {
        if (uVar2 != 10) break;
        uVar14 = (uVar13 << 0xc) >> 0x1c;
        uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
        uVar2 = uVar12 & uVar5;
        if ((uVar7 & uVar2 & 0xfffffffe) != 0) {
          uVar7 = FUN_080800fc(param_1,0xfd,1,local_30);
          if ((uVar5 & 0xfffffffe & ~(uVar12 & 0xfffffffe)) == 0) {
            puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
            **(uint **)(param_1 + 0x4ac) = uVar7 << 0xc | 0xe3a00000;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
          else {
            puVar8 = *(uint **)(param_1 + 0x4ac);
            *puVar8 = uVar7 << 0xc | 0xe51b0080;
            puVar8[1] = uVar2 & 0xfffffffe | 0xe3c00200 | uVar7 << 0xc | uVar7 << 0x10;
            puVar8 = puVar8 + 2;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
          uVar12 = uVar7 << 0xc;
          puVar17 = puVar8;
          if ((uVar2 & 2) != 0) {
            puVar17 = puVar8 + 1;
            *puVar8 = uVar12 | uVar7 << 0x10 | 0x23800202;
            *(uint **)(param_1 + 0x4ac) = puVar17;
          }
          puVar8 = puVar17;
          if ((uVar2 & 4) != 0) {
            puVar8 = puVar17 + 1;
            *puVar17 = uVar12 | uVar7 << 0x10 | 0x3800204;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
          puVar17 = puVar8;
          if ((uVar2 & 8) != 0) {
            puVar17 = puVar8 + 1;
            *puVar8 = uVar12 | uVar7 << 0x10 | 0x43800208;
            *(uint **)(param_1 + 0x4ac) = puVar17;
          }
          uVar1 = *(ushort *)(param_1 + 0x49c);
          *puVar17 = uVar12 | 0xe50b0080;
          *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar7 & 0xff));
          *(uint **)(param_1 + 0x4ac) = puVar17 + 1;
        }
        *(undefined4 *)(param_1 + 0x4a8) = 0;
        *(undefined4 *)(param_1 + 0x4a4) = 1;
        FUN_0807fd88(param_1,uVar14,0);
        uVar7 = (uint)*(byte *)(param_1 + 0x40d);
        if (((uVar7 < 0xfd) &&
            (*(undefined *)(param_1 + 0x480 + uVar7) = 0xff, *(char *)(param_1 + 0x40e) != '\0')) &&
           (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
          uVar12 = (uVar7 + 0x3fffffeb) * 4;
          bVar19 = -1 < (int)uVar12;
          puVar8 = *(uint **)(param_1 + 0x4ac);
          if (!bVar19) {
            uVar12 = (uVar7 + 0x3fffffeb) * -4;
          }
          *puVar8 = uVar12 | (uint)bVar19 << 0x17 | 0xe50b1000;
          *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
        }
        uVar7 = (uint)*(byte *)(param_1 + 0x475);
        *(undefined *)(param_1 + 0x40d) = 0xfd;
        if (((uVar7 < 0xfd) &&
            (*(undefined *)(param_1 + 0x480 + uVar7) = 0xff, *(char *)(param_1 + 0x476) != '\0')) &&
           (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
          uVar12 = (uVar7 + 0x3fffffeb) * 4;
          bVar19 = (int)uVar12 < 0;
          if (bVar19) {
            uVar12 = (uVar7 + 0x3fffffeb) * -4;
          }
          puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
          **(uint **)(param_1 + 0x4ac) = uVar12 | (uint)!bVar19 << 0x17 | 0xe50be000;
          *(uint **)(param_1 + 0x4ac) = puVar8;
        }
        else {
          puVar8 = *(uint **)(param_1 + 0x4ac);
        }
        *(undefined *)(param_1 + 0x475) = 0xfd;
        if (uVar13 >> 0x1c < 0xe) {
          puVar17 = puVar8 + 1;
          *puVar8 = (uVar13 >> 0x1c ^ 1) << 0x1c | 0xa000000 |
                    0xfffffffeU - ((int)puVar8 >> 2) & 0xffffff;
        }
        else {
          puVar17 = puVar8;
          puVar8 = (uint *)0x0;
        }
        iVar15 = (int)&LAB_0807bc70 - (int)puVar17;
        puVar6 = &LAB_0807c77c;
        puVar9 = &LAB_0807c13c;
      }
      uVar7 = (uVar13 << 0x10) >> 0x1c;
      uVar13 = uVar13 & 0xf;
      *puVar17 = (iVar15 >> 2) - 2U & 0xffffff | 0xeb000000;
      *(uint **)(param_1 + 0x4ac) = puVar17 + 1;
      if (*(char *)(param_1 + 0x4f0) == '\x01') {
        puVar6 = puVar9;
      }
      if (uVar14 == uVar7 || uVar13 == uVar7) {
        puVar17[1] = 0xe50b0100;
        *(uint **)(param_1 + 0x4ac) = puVar17 + 2;
        FUN_0807fd88(param_1,uVar14,0);
        FUN_0807fd88(param_1,uVar13,1);
        puVar17 = *(uint **)(param_1 + 0x4ac);
        puVar16 = *(uint **)(param_1 + 0x4c0);
        iVar3 = *(int *)(param_1 + 0x4bc);
        iVar15 = *(int *)(param_1 + 0x4c4);
        *puVar17 = ((int)puVar6 - (int)puVar17 >> 2) - 2U & 0xffffff | 0xeb000000;
        *(uint **)(param_1 + 0x4ac) = puVar17 + 1;
        uVar12 = (int)(puVar17 + 1) - iVar15 >> 2;
        uVar13 = *(int *)(param_1 + 0x4d0) - *(int *)(param_1 + 0x4c8);
        if (*(uint *)(param_1 + 0x4b8) <= (uint)((int)puVar16 - iVar3 >> 2)) {
          printf("FATAL: went past metadata storage of %d for block @ %p (%x)\n");
        }
        if (0xffff < uVar13) {
          printf("FATAL: pc_delta in stored PC metadata is %x\n",uVar13);
        }
        if (0xffff < uVar12) {
          printf("FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar12);
        }
        puVar10 = *(undefined4 **)(param_1 + 0x4ac);
        uVar1 = *(ushort *)(param_1 + 0x49c);
        iVar15 = *(int *)(param_1 + 0x4c0);
        *puVar16 = uVar13 | uVar12 << 0x10;
        *(int *)(param_1 + 0x4c0) = iVar15 + 4;
        *puVar10 = 0xe51b0100;
        *(ushort *)(param_1 + 0x49c) = uVar1 & 0xfffd;
        uVar12 = (uint)*(byte *)(param_1 + uVar7 + 0x480);
        *(undefined4 **)(param_1 + 0x4ac) = puVar10 + 1;
        if (uVar12 == 0xff) {
          uVar7 = uVar7 * -4 + 0x54 | 0xe50b0000;
        }
        else {
          uVar7 = uVar12 << 0xc | 0xe1a00000;
        }
        puVar10[1] = uVar7;
        *(undefined4 **)(param_1 + 0x4ac) = puVar10 + 2;
      }
      else {
        uVar12 = (uint)*(byte *)(param_1 + uVar7 + 0x480);
        if (uVar12 == 0xff) {
          uVar12 = (uVar7 + 0x3fffffeb) * 4;
          bVar19 = (int)uVar12 < 0;
          if (bVar19) {
            uVar12 = (uVar7 + 0x3fffffeb) * -4;
          }
          puVar17[1] = uVar12 | (uint)!bVar19 << 0x17 | 0xe50b0000;
          *(uint **)(param_1 + 0x4ac) = puVar17 + 2;
        }
        else {
          puVar17[1] = uVar12 << 0xc | 0xe1a00000;
          *(uint **)(param_1 + 0x4ac) = puVar17 + 2;
        }
        FUN_0807fd88(param_1,uVar14,0);
        FUN_0807fd88(param_1,uVar13,1);
        puVar17 = *(uint **)(param_1 + 0x4ac);
        puVar16 = *(uint **)(param_1 + 0x4c0);
        iVar3 = *(int *)(param_1 + 0x4bc);
        iVar15 = *(int *)(param_1 + 0x4c4);
        *puVar17 = ((int)puVar6 - (int)puVar17 >> 2) - 2U & 0xffffff | 0xeb000000;
        *(uint **)(param_1 + 0x4ac) = puVar17 + 1;
        uVar7 = (int)(puVar17 + 1) - iVar15 >> 2;
        uVar12 = *(int *)(param_1 + 0x4d0) - *(int *)(param_1 + 0x4c8);
        if (*(uint *)(param_1 + 0x4b8) <= (uint)((int)puVar16 - iVar3 >> 2)) {
          printf("FATAL: went past metadata storage of %d for block @ %p (%x)\n");
        }
        if (0xffff < uVar12) {
          printf("FATAL: pc_delta in stored PC metadata is %x\n",uVar12);
        }
        if (0xffff < uVar7) {
          printf("FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar7);
        }
        iVar15 = *(int *)(param_1 + 0x4c0);
        *puVar16 = uVar12 | uVar7 << 0x10;
        *(int *)(param_1 + 0x4c0) = iVar15 + 4;
      }
      if (puVar8 != (uint *)0x0) {
        *puVar8 = (*(int *)(param_1 + 0x4ac) - (int)puVar8 >> 2) - 2U & 0xffffff |
                  *puVar8 & 0xff000000;
        uVar12 = *(uint *)(param_1 + 0x4a4);
        goto LAB_080865a0;
      }
LAB_08086a30:
      uVar12 = *(uint *)(param_1 + 0x4a4);
      goto LAB_080865a0;
    }
    if (((uVar13 << 7) >> 0x1e != 2) || ((uVar13 & 0x100000) != 0)) goto LAB_080869f0;
    if ((uVar13 & 0x80) == 0) {
      if ((uVar13 & 0x10) == 0) {
        if ((uVar13 & 0x200000) == 0) {
          FUN_08086140(param_1,uVar13);
          uVar12 = *(uint *)(param_1 + 0x4a4);
        }
        else {
          FUN_08080c88();
          uVar12 = *(uint *)(param_1 + 0x4a4);
        }
        goto LAB_080865a0;
      }
      uVar7 = (uVar13 << 0x19) >> 0x1e;
      if (uVar7 == 2) {
        if (*(char *)(iVar15 + 0x2104) == '\x01') {
          uVar7 = FUN_080814b4(param_1,uVar13 & 0xf);
          iVar15 = FUN_080814b4(param_1,(uVar13 << 0xc) >> 0x1c);
          iVar3 = FUN_08080b7c(param_1,(uVar13 << 0x10) >> 0x1c,1,uVar13 >> 0x1c);
          puVar8 = *(uint **)(param_1 + 0x4ac);
          *puVar8 = uVar13 & 0xf0000000 | 0x1000050 | uVar13 & 0x700000 | uVar7 | iVar3 << 0xc |
                    iVar15 << 0x10;
          *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
          uVar12 = *(uint *)(param_1 + 0x4a4);
          goto LAB_080865a0;
        }
      }
      else {
        if (uVar7 != 3) {
          if (uVar7 == 1) {
            if (*(char *)(iVar15 + 0x2104) != '\x01') break;
          }
          else if ((uVar13 & 0x400000) != 0) {
            if (*(char *)(iVar15 + 0x2104) == '\x01') {
              uVar7 = FUN_080814b4(param_1,uVar13 & 0xf);
              iVar15 = FUN_08080b7c(param_1,(uVar13 << 0x10) >> 0x1c,1,uVar13 >> 0x1c);
              puVar8 = *(uint **)(param_1 + 0x4ac);
              *puVar8 = uVar13 & 0xf0000000 | 0x16f0f10 | uVar7 | iVar15 << 0xc;
              *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
              uVar12 = *(uint *)(param_1 + 0x4a4);
            }
            goto LAB_080865a0;
          }
          FUN_08003670(param_1,uVar13);
          uVar12 = *(uint *)(param_1 + 0x4a4);
          goto LAB_080865a0;
        }
        if ((*(char *)(iVar15 + 0x2104) == '\x01') && (uVar13 >> 0x1c == 0xe)) {
          FUN_08085cc4(param_1,3,4);
          uVar12 = *(uint *)(param_1 + 0x4a4);
          goto LAB_080865a0;
        }
      }
    }
    else if (*(char *)(iVar15 + 0x2104) == '\x01') {
      uVar7 = (uVar13 << 9) >> 0x1e;
      uVar12 = uVar13 & 0xf;
      if (uVar7 == 1) {
        uVar2 = (uVar13 << 0x19) >> 0x1f;
        uVar14 = (uVar13 << 0x14) >> 0x1c;
        uVar7 = (uVar13 << 0xc) >> 0x1c;
        if (uVar12 == 0xf) {
          uVar12 = *(uint *)(*(int *)(param_1 + 0x4d8) + 4);
          uVar5 = FUN_080800fc(param_1,0xfe,1,local_30);
          puVar8 = *(uint **)(param_1 + 0x4ac);
          *(uint *)(param_1 + (uVar5 + 0x80) * 8) = uVar12;
          *puVar8 = uVar12 & 0xfff | 0xe3000000 | ((uVar12 << 0x10) >> 0x1c) << 0x10 | uVar5 << 0xc;
          *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
          if (uVar12 >> 0x10 != 0) {
            puVar8[1] = uVar12 >> 0x10 & 0xfff | (uVar12 >> 0x1c) << 0x10 | 0xe3400000 |
                        uVar5 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 2;
          }
        }
        else {
          uVar5 = FUN_080800fc(param_1,uVar12,1,local_30);
          if (local_30[0] != 0) {
            puVar8 = *(uint **)(param_1 + 0x4ac);
            *puVar8 = uVar12 * -4 + 0x54 | 0xe51b0000 | uVar5 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
          }
        }
        local_3c = local_30;
        if (uVar14 == 0xf) {
          uVar12 = *(uint *)(*(int *)(param_1 + 0x4d8) + 4);
          iVar15 = FUN_080800fc(param_1,0xfe,1,local_3c);
          puVar8 = *(uint **)(param_1 + 0x4ac);
          *(uint *)(param_1 + (iVar15 + 0x80) * 8) = uVar12;
          *puVar8 = uVar12 & 0xfff | 0xe3000000 | ((uVar12 << 0x10) >> 0x1c) << 0x10 | iVar15 << 0xc
          ;
          *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
          if (uVar12 >> 0x10 != 0) {
            puVar8[1] = uVar12 >> 0x10 & 0xfff | (uVar12 >> 0x1c) << 0x10 | 0xe3400000 |
                        iVar15 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 2;
          }
        }
        else {
          iVar15 = FUN_080800fc(param_1,uVar14,1,local_3c);
          if (local_30[0] != 0) {
            puVar8 = *(uint **)(param_1 + 0x4ac);
            *puVar8 = uVar14 * -4 + 0x54 | 0xe51b0000 | iVar15 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
          }
        }
        if ((uVar13 & 0x20) == 0) {
          iVar4 = FUN_080814b4(param_1,(uVar13 << 0x10) >> 0x1c);
          iVar3 = FUN_08080b7c(param_1,uVar7,1,uVar13 >> 0x1c);
          puVar8 = *(uint **)(param_1 + 0x4ac);
          uVar7 = uVar13 & 0xf0000000 | 0x1200080 | uVar2 << 6;
LAB_08087d24:
          *puVar8 = uVar7 | uVar5 | iVar15 << 8 | iVar3 << 0x10 | iVar4 << 0xc;
          *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
          uVar12 = *(uint *)(param_1 + 0x4a4);
          goto LAB_080865a0;
        }
        if (uVar7 == 0xf) {
          uVar7 = (uint)*(byte *)(param_1 + 0x405);
          if (((uVar7 < 0xfd) &&
              (*(undefined *)(param_1 + uVar7 + 0x480) = 0xff, *(char *)(param_1 + 0x406) != '\0'))
             && (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
            uVar12 = (uVar7 + 0x3fffffeb) * 4;
            bVar19 = (int)uVar12 < 0;
            if (bVar19) {
              uVar12 = (uVar7 + 0x3fffffeb) * -4;
            }
            puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
            **(uint **)(param_1 + 0x4ac) = uVar12 | (uint)!bVar19 << 0x17 | 0xe50b0000;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
          else {
            puVar8 = *(uint **)(param_1 + 0x4ac);
          }
          iVar3 = 0;
          *(undefined *)(param_1 + 0x405) = 0xfd;
          *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | 1;
        }
        else {
          iVar3 = FUN_080800fc(param_1,uVar7,1,local_3c);
          *(undefined *)(param_1 + iVar3 * 8 + 0x406) = 1;
          if (uVar13 >> 0x1c == 0xe) {
            puVar8 = *(uint **)(param_1 + 0x4ac);
          }
          else if (local_30[0] == 0) {
            puVar8 = *(uint **)(param_1 + 0x4ac);
          }
          else {
            puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
            **(uint **)(param_1 + 0x4ac) = uVar7 * -4 + 0x54 | 0xe51b0000 | iVar3 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
        }
        uVar7 = uVar13 & 0xf0000000 | 0x12000a0;
      }
      else {
        if (uVar7 == 2) {
          uVar7 = (uVar13 << 0xc) >> 0x1c;
          uVar14 = (uVar13 << 0x10) >> 0x1c;
          if (uVar12 == 0xf) {
            uVar12 = *(uint *)(*(int *)(param_1 + 0x4d8) + 4);
            uVar2 = FUN_080800fc(param_1,0xfe,1,local_30);
            puVar8 = *(uint **)(param_1 + 0x4ac);
            *(uint *)(param_1 + (uVar2 + 0x80) * 8) = uVar12;
            *puVar8 = uVar12 & 0xfff | 0xe3000000 | ((uVar12 << 0x10) >> 0x1c) << 0x10 |
                      uVar2 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
            if (uVar12 >> 0x10 != 0) {
              puVar8[1] = uVar12 >> 0x10 & 0xfff | (uVar12 >> 0x1c) << 0x10 | 0xe3400000 |
                          uVar2 << 0xc;
              *(uint **)(param_1 + 0x4ac) = puVar8 + 2;
            }
          }
          else {
            uVar2 = FUN_080800fc(param_1,uVar12,1,local_30);
            if (local_30[0] != 0) {
              puVar8 = *(uint **)(param_1 + 0x4ac);
              *puVar8 = uVar12 * -4 + 0x54 | 0xe51b0000 | uVar2 << 0xc;
              *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
            }
          }
          local_3c = local_30;
          iVar15 = FUN_080814b4(param_1,(uVar13 << 0x14) >> 0x1c);
          if (uVar14 == 0xf) {
            uVar14 = *(uint *)(*(int *)(param_1 + 0x4d8) + 4);
            iVar3 = FUN_080800fc(param_1,0xfe,1,local_3c);
            puVar8 = *(uint **)(param_1 + 0x4ac);
            uVar12 = iVar3 << 0xc;
            *(uint *)(param_1 + (iVar3 + 0x80) * 8) = uVar14;
            *puVar8 = uVar14 & 0xfff | 0xe3000000 | ((uVar14 << 0x10) >> 0x1c) << 0x10 | uVar12;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
            if (uVar14 >> 0x10 != 0) {
              puVar8[1] = uVar14 >> 0x10 & 0xfff | (uVar14 >> 0x1c) << 0x10 | 0xe3400000 | uVar12;
              *(uint **)(param_1 + 0x4ac) = puVar8 + 2;
            }
          }
          else {
            iVar3 = FUN_080800fc(param_1,uVar14,1,local_3c);
            if (local_30[0] == 0) {
              uVar12 = iVar3 << 0xc;
            }
            else {
              puVar8 = *(uint **)(param_1 + 0x4ac);
              uVar12 = iVar3 << 0xc;
              *puVar8 = uVar14 * -4 + 0x54 | 0xe51b0000 | uVar12;
              *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
            }
          }
          if (uVar7 == 0xf) {
            uVar7 = *(uint *)(*(int *)(param_1 + 0x4d8) + 4);
            iVar4 = FUN_080800fc(param_1,0xfe,1,local_3c);
            puVar17 = *(uint **)(param_1 + 0x4ac);
            *(uint *)(param_1 + (iVar4 + 0x80) * 8) = uVar7;
            puVar8 = puVar17 + 1;
            *puVar17 = uVar7 & 0xfff | 0xe3000000 | ((uVar7 << 0x10) >> 0x1c) << 0x10 | iVar4 << 0xc
            ;
            *(uint **)(param_1 + 0x4ac) = puVar8;
            if (uVar7 >> 0x10 != 0) {
              puVar8 = puVar17 + 2;
              puVar17[1] = uVar7 >> 0x10 & 0xfff | (uVar7 >> 0x1c) << 0x10 | 0xe3400000 |
                           iVar4 << 0xc;
              *(uint **)(param_1 + 0x4ac) = puVar8;
            }
          }
          else {
            iVar4 = FUN_080800fc(param_1,uVar7,1,local_3c);
            if (local_30[0] == 0) {
              puVar8 = *(uint **)(param_1 + 0x4ac);
            }
            else {
              puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
              **(uint **)(param_1 + 0x4ac) = uVar7 * -4 + 0x54 | 0xe51b0000 | iVar4 << 0xc;
            }
          }
          *(undefined *)(param_1 + iVar3 * 8 + 0x406) = 1;
          *(undefined *)(param_1 + iVar4 * 8 + 0x406) = 1;
          *puVar8 = uVar13 & 0xf0000000 | 0x1400080 | ((uVar13 << 0x1a) >> 0x1f) << 5 |
                    ((uVar13 << 0x19) >> 0x1f) << 6 | uVar2 | iVar15 << 8 | uVar12 | iVar4 << 0x10;
          *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
          uVar12 = *(uint *)(param_1 + 0x4a4);
          goto LAB_080865a0;
        }
        uVar18 = (uVar13 << 0x1a) >> 0x1f;
        uVar14 = (uVar13 << 0x14) >> 0x1c;
        uVar2 = (uVar13 << 0x19) >> 0x1f;
        uVar7 = (uVar13 << 0xc) >> 0x1c;
        if (uVar12 == 0xf) {
          uVar12 = *(uint *)(*(int *)(param_1 + 0x4d8) + 4);
          uVar5 = FUN_080800fc(param_1,0xfe,1,local_30);
          puVar8 = *(uint **)(param_1 + 0x4ac);
          *(uint *)(param_1 + (uVar5 + 0x80) * 8) = uVar12;
          *puVar8 = uVar12 & 0xfff | 0xe3000000 | ((uVar12 << 0x10) >> 0x1c) << 0x10 | uVar5 << 0xc;
          *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
          if (uVar12 >> 0x10 != 0) {
            puVar8[1] = uVar12 >> 0x10 & 0xfff | (uVar12 >> 0x1c) << 0x10 | 0xe3400000 |
                        uVar5 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 2;
          }
        }
        else {
          uVar5 = FUN_080800fc(param_1,uVar12,1,local_30);
          if (local_30[0] != 0) {
            puVar8 = *(uint **)(param_1 + 0x4ac);
            *puVar8 = uVar12 * -4 + 0x54 | 0xe51b0000 | uVar5 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
          }
        }
        local_3c = local_30;
        if (uVar14 == 0xf) {
          uVar12 = *(uint *)(*(int *)(param_1 + 0x4d8) + 4);
          iVar15 = FUN_080800fc(param_1,0xfe,1,local_3c);
          puVar8 = *(uint **)(param_1 + 0x4ac);
          *(uint *)(param_1 + (iVar15 + 0x80) * 8) = uVar12;
          *puVar8 = uVar12 & 0xfff | 0xe3000000 | ((uVar12 << 0x10) >> 0x1c) << 0x10 | iVar15 << 0xc
          ;
          *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
          if (uVar12 >> 0x10 != 0) {
            puVar8[1] = uVar12 >> 0x10 & 0xfff | (uVar12 >> 0x1c) << 0x10 | 0xe3400000 |
                        iVar15 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 2;
          }
        }
        else {
          iVar15 = FUN_080800fc(param_1,uVar14,1,local_3c);
          if (local_30[0] != 0) {
            puVar8 = *(uint **)(param_1 + 0x4ac);
            *puVar8 = uVar14 * -4 + 0x54 | 0xe51b0000 | iVar15 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
          }
        }
        if ((uVar13 & 0x200000) == 0) {
          iVar4 = FUN_080814b4(param_1,(uVar13 << 0x10) >> 0x1c);
          iVar3 = FUN_08080b7c(param_1,uVar7,1,uVar13 >> 0x1c);
          puVar8 = *(uint **)(param_1 + 0x4ac);
          uVar7 = uVar13 & 0xf0000000 | 0x1000080 | uVar18 << 5 | uVar2 << 6;
          goto LAB_08087d24;
        }
        if (uVar7 == 0xf) {
          uVar7 = (uint)*(byte *)(param_1 + 0x405);
          if (((uVar7 < 0xfd) &&
              (*(undefined *)(param_1 + uVar7 + 0x480) = 0xff, *(char *)(param_1 + 0x406) != '\0'))
             && (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
            uVar12 = (uVar7 + 0x3fffffeb) * 4;
            bVar19 = (int)uVar12 < 0;
            if (bVar19) {
              uVar12 = (uVar7 + 0x3fffffeb) * -4;
            }
            puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
            **(uint **)(param_1 + 0x4ac) = uVar12 | (uint)!bVar19 << 0x17 | 0xe50b0000;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
          else {
            puVar8 = *(uint **)(param_1 + 0x4ac);
          }
          iVar3 = 0;
          *(undefined *)(param_1 + 0x405) = 0xfd;
          *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | 1;
        }
        else {
          iVar3 = FUN_080800fc(param_1,uVar7,1,local_3c);
          *(undefined *)(param_1 + iVar3 * 8 + 0x406) = 1;
          if (uVar13 >> 0x1c == 0xe) {
            puVar8 = *(uint **)(param_1 + 0x4ac);
          }
          else if (local_30[0] == 0) {
            puVar8 = *(uint **)(param_1 + 0x4ac);
          }
          else {
            puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
            **(uint **)(param_1 + 0x4ac) = uVar7 * -4 + 0x54 | 0xe51b0000 | iVar3 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar8;
          }
        }
        uVar7 = uVar13 & 0xf0000000 | 0x1600080 | uVar18 << 5;
      }
      *puVar8 = uVar7 | uVar2 << 6 | uVar5 | iVar15 << 8 | iVar3 << 0x10;
      *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
      uVar12 = *(uint *)(param_1 + 0x4a4);
      goto LAB_080865a0;
    }
  }
  FUN_08085cc4(param_1,1,5,0xe);
  uVar12 = *(uint *)(param_1 + 0x4a4);
LAB_080865a0:
  *(uint *)(param_1 + 0x4a4) = uVar12 | *(byte *)(puVar11 + 5) >> 4;
  return;
}


