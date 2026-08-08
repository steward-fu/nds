/*
 * Ghidra decompilation
 *
 * Function : FUN_08032d3c
 * Address  : 08032d3c
 * Program  : drastic16
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_08032d3c(int param_1,uint param_2,uint param_3,int *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int local_54;
  
  local_54 = *(int *)(param_1 + 0x1c);
  iVar6 = *(int *)(param_1 + 0x80f3c);
  iVar10 = *(int *)(param_1 + 0x20);
  iVar13 = param_1 + 0x20f38 + *(int *)(param_1 + 0x80f38) * 0xc;
  *(undefined *)(param_1 + iVar6 * 0xc + 0x20f40) = 0xff;
  uVar11 = (uint)*(byte *)(iVar13 + 8);
  if (local_54 == 0) {
    if (param_2 <= param_3) {
      do {
        while (uVar11 <= param_2) {
          FUN_08032168(param_1,iVar13);
          uVar11 = (uint)*(byte *)(iVar13 + 0x14);
          iVar13 = iVar13 + 0xc;
        }
        param_2 = param_2 + 1;
      } while (param_2 <= param_3);
      iVar6 = *(int *)(param_1 + 0x80f3c);
    }
  }
  else {
    if (param_2 <= param_3) {
      do {
        uVar7 = param_2;
        piVar9 = param_4;
        FUN_08030f98(param_1,local_54);
        if (uVar11 <= param_2) {
          iVar6 = iVar13 + 0xc;
LAB_08032e10:
          do {
            iVar13 = iVar6;
            piVar9 = *(int **)(iVar13 + -0xc);
            uVar11 = *(uint *)(iVar13 + -8);
            uVar12 = (uint)*(byte *)(iVar13 + -3);
            uVar5 = (undefined2)uVar11;
            if ((int *)0xfffff < piVar9) {
              if (piVar9 < (int *)0x200000) {
                uVar7 = *(uint *)(param_1 + 0xc);
              }
              else {
                *(undefined *)(param_1 + 0x96) = 1;
                uVar7 = *(uint *)(param_1 + 0x18);
              }
              if (uVar12 != 2) {
                piVar9 = (int *)((uint)piVar9 & 0x3ff);
                if (uVar12 == 4) {
                  *(uint *)(uVar7 + (int)piVar9) = uVar11;
                }
                else if (uVar12 == 1) {
                  *(char *)(uVar7 + (int)piVar9) = (char)uVar11;
                }
                goto switchD_08032e30_caseD_4;
              }
              piVar9 = (int *)((uint)piVar9 & 0x3ff);
              *(undefined2 *)(uVar7 + (int)piVar9) = uVar5;
              bVar2 = *(byte *)(iVar13 + 8);
              goto joined_r0x080339ac;
            }
            uVar7 = (uint)piVar9 & 0xfff;
            switch(uVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
              if (uVar12 < 4) {
                piVar9 = (int *)(((uint)piVar9 & 3) << 3);
                uVar7 = *(uint *)(param_1 + 0x70) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << (int)piVar9);
                uVar11 = uVar7 | uVar11 << (int)piVar9;
              }
              FUN_08032024(param_1,uVar11);
              bVar2 = *(byte *)(iVar13 + 8);
              goto joined_r0x080339ac;
            default:
              goto switchD_08032e30_caseD_4;
            case 8:
            case 9:
              iVar6 = ((uVar11 << 0x1a) >> 0x1c) * 0x4000;
              *(int *)(param_1 + 0xbc) = iVar6;
              iVar6 = iVar6 + *(int *)(param_1 + 0x78);
              iVar8 = ((uVar11 << 0x13) >> 0x1b) * 0x800;
              *(int *)(param_1 + 0xb8) = iVar8;
              *(int *)(param_1 + 0xb0) = iVar6;
              iVar8 = iVar8 + *(int *)(param_1 + 0x74);
              uVar3 = *(ushort *)(param_1 + 0x108);
              *(int *)(param_1 + 0xac) = iVar8;
              *(undefined2 *)(param_1 + 0x108) = uVar5;
              if (*(char *)(param_1 + 0x97) == '\x01') {
                uVar1 = SIMDExpandImmediate(1,5,0x1e);
                *(ulonglong *)(param_1 + 0xac) = CONCAT44(iVar6,iVar8) & ~uVar1;
              }
              if (((uVar11 ^ uVar3) & 3) != 0) {
                FUN_08031b14(param_1);
              }
              iVar6 = (int)(uVar11 << 0x12) >> 0x1f;
              uVar7 = -iVar6;
              piVar9 = *(int **)(*(int *)(param_1 + 0x10) + iVar6 * -8);
              *(int **)(param_1 + 0xa4) = piVar9;
              if (2 < uVar12) {
                uVar11 = uVar11 >> 0x10;
                goto switchD_08032e30_caseD_a;
              }
              goto switchD_08032e30_caseD_4;
            case 10:
            case 0xb:
switchD_08032e30_caseD_a:
              iVar6 = ((uVar11 << 0x1a) >> 0x1c) * 0x4000;
              iVar8 = ((uVar11 << 0x13) >> 0x1b) * 0x800;
              *(int *)(param_1 + 0x144) = iVar6;
              *(int *)(param_1 + 0x140) = iVar8;
              iVar6 = iVar6 + *(int *)(param_1 + 0x78);
              iVar8 = iVar8 + *(int *)(param_1 + 0x74);
              uVar3 = *(ushort *)(param_1 + 400);
              *(int *)(param_1 + 0x138) = iVar6;
              *(int *)(param_1 + 0x134) = iVar8;
              *(short *)(param_1 + 400) = (short)uVar11;
              if (*(char *)(param_1 + 0x97) == '\x01') {
                uVar1 = SIMDExpandImmediate(1,5,0x1e);
                *(ulonglong *)(param_1 + 0x134) = CONCAT44(iVar6,iVar8) & ~uVar1;
              }
              if (((uVar11 ^ uVar3) & 3) != 0) {
                FUN_08031b14(param_1);
              }
              uVar7 = ((int)(uVar11 << 0x12) >> 0x1f) * -2 + 1;
              piVar9 = *(int **)(*(int *)(param_1 + 0x10) + uVar7 * 4);
              *(int **)(param_1 + 300) = piVar9;
              bVar2 = *(byte *)(iVar13 + 8);
              goto joined_r0x080339ac;
            case 0xc:
            case 0xd:
              uVar7 = uVar11;
              FUN_08031e6c(param_1,2);
              if (2 < uVar12) {
                uVar11 = uVar11 >> 0x10;
                goto switchD_08032e30_caseD_e;
              }
switchD_08032e30_caseD_4:
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0xe:
            case 0xf:
switchD_08032e30_caseD_e:
              FUN_08031e6c(param_1,3);
              bVar2 = *(byte *)(iVar13 + 8);
              uVar7 = uVar11;
              goto joined_r0x080339ac;
            case 0x10:
            case 0x11:
              if (uVar12 < 2) {
                iVar6 = 1 << ((uVar12 & 0x1f) << 3);
                uVar7 = 0x10a;
LAB_08033ac4:
                iVar8 = ((uint)piVar9 & 1) << 3;
                uVar11 = (uint)*(ushort *)(param_1 + uVar7) & ~(iVar6 + -1 << iVar8) |
                         uVar11 << iVar8;
                piVar9 = (int *)(uVar11 & 0x1ff);
                *(ushort *)(param_1 + uVar7) = (ushort)((uVar11 << 0x17) >> 0x17);
                bVar2 = *(byte *)(iVar13 + 8);
              }
              else {
                piVar9 = (int *)0x10a;
                iVar6 = uVar11 << 0x17;
                uVar7 = uVar11 & 0x1ff;
                if (uVar12 != 2) {
                  uVar11 = uVar11 >> 0x10;
                }
                *(ushort *)(param_1 + 0x10a) = (ushort)((uint)iVar6 >> 0x17);
                if (uVar12 != 2) goto LAB_08033268;
                bVar2 = *(byte *)(iVar13 + 8);
              }
              goto joined_r0x080339ac;
            case 0x12:
            case 0x13:
              if (uVar12 < 2) {
                iVar6 = ((uint)piVar9 & 1) << 3;
                uVar7 = (uint)*(ushort *)(param_1 + 0x10c) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6);
                uVar11 = uVar7 | uVar11 << iVar6;
              }
LAB_08033268:
              piVar9 = (int *)0x10c;
              *(ushort *)(param_1 + 0x10c) = (ushort)((uVar11 << 0x17) >> 0x17);
              bVar2 = *(byte *)(iVar13 + 8);
              goto joined_r0x080339ac;
            case 0x14:
            case 0x15:
              if (uVar12 < 2) {
                iVar6 = 1 << ((uVar12 & 0x1f) << 3);
                uVar7 = 0x192;
                goto LAB_08033ac4;
              }
              piVar9 = (int *)0x192;
              iVar6 = uVar11 << 0x17;
              uVar7 = uVar11 & 0x1ff;
              if (uVar12 != 2) {
                uVar11 = uVar11 >> 0x10;
              }
              *(ushort *)(param_1 + 0x192) = (ushort)((uint)iVar6 >> 0x17);
              if (uVar12 != 2) goto LAB_08033398;
              bVar2 = *(byte *)(iVar13 + 8);
              goto joined_r0x080339ac;
            case 0x16:
            case 0x17:
              if (uVar12 < 2) {
                iVar6 = ((uint)piVar9 & 1) << 3;
                uVar7 = (uint)*(ushort *)(param_1 + 0x194) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6);
                uVar11 = uVar7 | uVar11 << iVar6;
              }
LAB_08033398:
              piVar9 = (int *)0x194;
              *(ushort *)(param_1 + 0x194) = (ushort)((uVar11 << 0x17) >> 0x17);
              bVar2 = *(byte *)(iVar13 + 8);
              goto joined_r0x080339ac;
            case 0x18:
            case 0x19:
              if (uVar12 < 2) {
                iVar6 = 1 << ((uVar12 & 0x1f) << 3);
                uVar7 = 0x21a;
                goto LAB_08033ac4;
              }
              piVar9 = (int *)0x21a;
              iVar6 = uVar11 << 0x17;
              uVar7 = uVar11 & 0x1ff;
              if (uVar12 != 2) {
                uVar11 = uVar11 >> 0x10;
              }
              *(ushort *)(param_1 + 0x21a) = (ushort)((uint)iVar6 >> 0x17);
              if (uVar12 != 2) goto LAB_0803334c;
              bVar2 = *(byte *)(iVar13 + 8);
joined_r0x080339ac:
              uVar11 = (uint)bVar2;
              iVar6 = iVar13 + 0xc;
              if (param_2 < uVar11) goto LAB_0803302c;
              goto LAB_08032e10;
            case 0x1a:
            case 0x1b:
              if (uVar12 < 2) {
                iVar6 = ((uint)piVar9 & 1) << 3;
                uVar7 = (uint)*(ushort *)(param_1 + 0x21c) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6);
                uVar11 = uVar7 | uVar11 << iVar6;
              }
LAB_0803334c:
              piVar9 = (int *)0x21c;
              *(ushort *)(param_1 + 0x21c) = (ushort)((uVar11 << 0x17) >> 0x17);
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x1c:
            case 0x1d:
              if (uVar12 < 2) {
                iVar6 = 1 << ((uVar12 & 0x1f) << 3);
                uVar7 = 0x2a2;
                goto LAB_08033ac4;
              }
              piVar9 = (int *)0x2a2;
              iVar6 = uVar11 << 0x17;
              uVar7 = uVar11 & 0x1ff;
              if (uVar12 != 2) {
                uVar11 = uVar11 >> 0x10;
              }
              *(ushort *)(param_1 + 0x2a2) = (ushort)((uint)iVar6 >> 0x17);
              if (uVar12 != 2) goto LAB_08033300;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x1e:
            case 0x1f:
              if (uVar12 < 2) {
                iVar6 = ((uint)piVar9 & 1) << 3;
                uVar7 = (uint)*(ushort *)(param_1 + 0x2a4) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6);
                uVar11 = uVar7 | uVar11 << iVar6;
              }
LAB_08033300:
              piVar9 = (int *)0x2a4;
              *(ushort *)(param_1 + 0x2a4) = (ushort)((uVar11 << 0x17) >> 0x17);
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x20:
            case 0x21:
              if (uVar12 < 2) {
                uVar7 = 0x21e;
LAB_08033a84:
                sVar4 = *(short *)(param_1 + uVar7);
                iVar6 = ((uint)piVar9 & 1) << 3;
                *(undefined *)(param_1 + 0x22e) = 1;
                piVar9 = (int *)((int)sVar4 & ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6) |
                                uVar11 << iVar6);
                *(short *)(param_1 + uVar7) = (short)piVar9;
                bVar2 = *(byte *)(iVar13 + 8);
              }
              else {
                piVar9 = (int *)0x21e;
                *(undefined *)(param_1 + 0x22e) = 1;
                *(undefined2 *)(param_1 + 0x21e) = uVar5;
                if (uVar12 != 2) {
                  uVar11 = uVar11 >> 0x10;
                  goto LAB_080332b4;
                }
                bVar2 = *(byte *)(iVar13 + 8);
              }
              break;
            case 0x22:
            case 0x23:
              if (uVar12 < 2) {
                iVar6 = ((uint)piVar9 & 1) << 3;
                uVar7 = (int)*(short *)(param_1 + 0x222) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6);
                uVar11 = uVar7 | uVar11 << iVar6;
              }
LAB_080332b4:
              piVar9 = (int *)0x222;
              *(undefined *)(param_1 + 0x22e) = 1;
              *(short *)(param_1 + 0x222) = (short)uVar11;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x24:
            case 0x25:
              if (uVar12 < 2) {
                uVar7 = 0x220;
                goto LAB_08033a84;
              }
              piVar9 = (int *)0x220;
              *(undefined *)(param_1 + 0x22e) = 1;
              *(undefined2 *)(param_1 + 0x220) = uVar5;
              if (uVar12 != 2) {
                uVar11 = uVar11 >> 0x10;
                goto LAB_08033508;
              }
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x26:
            case 0x27:
              if (uVar12 < 2) {
                iVar6 = ((uint)piVar9 & 1) << 3;
                uVar7 = (int)*(short *)(param_1 + 0x224) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6);
                uVar11 = uVar7 | uVar11 << iVar6;
              }
LAB_08033508:
              piVar9 = (int *)0x224;
              *(undefined *)(param_1 + 0x22e) = 1;
              *(short *)(param_1 + 0x224) = (short)uVar11;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
              uVar11 = (int)(uVar11 << 4) >> 4;
              if (uVar12 < 4) {
                piVar9 = (int *)(((uint)piVar9 & 3) << 3);
                uVar7 = *(uint *)(param_1 + 0x208) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << (int)piVar9);
                uVar11 = uVar7 | uVar11 << (int)piVar9;
              }
              *(undefined *)(param_1 + 0x22e) = 1;
              *(uint *)(param_1 + 0x208) = uVar11;
              *(uint *)(param_1 + 0x210) = uVar11;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x2f:
              uVar11 = (int)(uVar11 << 4) >> 4;
              if (uVar12 < 4) {
                piVar9 = (int *)(((uint)piVar9 & 3) << 3);
                uVar7 = *(uint *)(param_1 + 0x20c) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << (int)piVar9);
                uVar11 = uVar7 | uVar11 << (int)piVar9;
              }
              *(undefined *)(param_1 + 0x22e) = 1;
              *(uint *)(param_1 + 0x20c) = uVar11;
              *(uint *)(param_1 + 0x214) = uVar11;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x30:
            case 0x31:
              if (uVar12 < 2) {
                uVar7 = 0x2a6;
                iVar6 = ((uint)piVar9 & 1) << 3;
                *(undefined *)(param_1 + 0x2b6) = 1;
                piVar9 = (int *)((int)*(short *)(param_1 + 0x2a6) &
                                 ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6) | uVar11 << iVar6);
                *(short *)(param_1 + 0x2a6) = (short)piVar9;
                bVar2 = *(byte *)(iVar13 + 8);
              }
              else {
                piVar9 = (int *)0x2a6;
                *(undefined *)(param_1 + 0x2b6) = 1;
                *(undefined2 *)(param_1 + 0x2a6) = uVar5;
                if (uVar12 != 2) {
                  uVar11 = uVar11 >> 0x10;
                  goto LAB_080334bc;
                }
                bVar2 = *(byte *)(iVar13 + 8);
              }
              break;
            case 0x32:
            case 0x33:
              if (uVar12 < 2) {
                iVar6 = ((uint)piVar9 & 1) << 3;
                uVar7 = (int)*(short *)(param_1 + 0x2aa) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6);
                uVar11 = uVar7 | uVar11 << iVar6;
              }
LAB_080334bc:
              piVar9 = (int *)0x2aa;
              *(undefined *)(param_1 + 0x2b6) = 1;
              *(short *)(param_1 + 0x2aa) = (short)uVar11;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x34:
            case 0x35:
              if (uVar12 < 2) {
                iVar6 = ((uint)piVar9 & 1) << 3;
                *(undefined *)(param_1 + 0x2b6) = 1;
                uVar7 = (int)*(short *)(param_1 + 0x2a8) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6);
                piVar9 = (int *)(uVar7 | uVar11 << iVar6);
                *(short *)(param_1 + 0x2a8) = (short)piVar9;
                bVar2 = *(byte *)(iVar13 + 8);
              }
              else {
                *(undefined *)(param_1 + 0x2b6) = 1;
                *(undefined2 *)(param_1 + 0x2a8) = uVar5;
                if (uVar12 != 2) {
                  uVar11 = uVar11 >> 0x10;
                  goto LAB_08033470;
                }
                bVar2 = *(byte *)(iVar13 + 8);
              }
              break;
            case 0x36:
            case 0x37:
              if (uVar12 < 2) {
                piVar9 = (int *)(((uint)piVar9 & 1) << 3);
                uVar7 = (int)*(short *)(param_1 + 0x2ac) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << (int)piVar9);
                uVar11 = uVar7 | uVar11 << (int)piVar9;
              }
LAB_08033470:
              *(undefined *)(param_1 + 0x2b6) = 1;
              *(short *)(param_1 + 0x2ac) = (short)uVar11;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x38:
            case 0x39:
            case 0x3a:
            case 0x3b:
              uVar11 = (int)(uVar11 << 4) >> 4;
              if (uVar12 < 4) {
                piVar9 = (int *)(((uint)piVar9 & 3) << 3);
                uVar7 = *(uint *)(param_1 + 0x290) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << (int)piVar9);
                uVar11 = uVar7 | uVar11 << (int)piVar9;
              }
              *(undefined *)(param_1 + 0x2b6) = 1;
              *(uint *)(param_1 + 0x290) = uVar11;
              *(uint *)(param_1 + 0x298) = uVar11;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x3f:
              uVar11 = (int)(uVar11 << 4) >> 4;
              if (uVar12 < 4) {
                piVar9 = (int *)(((uint)piVar9 & 3) << 3);
                uVar7 = *(uint *)(param_1 + 0x294) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << (int)piVar9);
                uVar11 = uVar7 | uVar11 << (int)piVar9;
              }
              *(undefined *)(param_1 + 0x2b6) = 1;
              *(uint *)(param_1 + 0x294) = uVar11;
              *(uint *)(param_1 + 0x29c) = uVar11;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x40:
            case 0x41:
              if (uVar12 < 2) {
                iVar6 = ((uint)piVar9 & 1) << 3;
                piVar9 = (int *)((uint)*(ushort *)(param_1 + 0x8a) &
                                 ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6) | uVar11 << iVar6);
                uVar7 = *(byte *)(param_1 + 0x95) | 1;
                *(short *)(param_1 + 0x8a) = (short)piVar9;
                *(char *)(param_1 + 0x95) = (char)uVar7;
                bVar2 = *(byte *)(iVar13 + 8);
              }
              else {
                *(undefined2 *)(param_1 + 0x8a) = uVar5;
                if (uVar12 != 2) {
                  uVar11 = uVar11 >> 0x10;
                }
                piVar9 = (int *)(*(byte *)(param_1 + 0x95) | 1);
                *(char *)(param_1 + 0x95) = (char)piVar9;
                if (uVar12 != 2) goto LAB_08033424;
                bVar2 = *(byte *)(iVar13 + 8);
              }
              break;
            case 0x42:
            case 0x43:
              if (uVar12 < 2) {
                uVar7 = ((uint)piVar9 & 1) << 3;
                piVar9 = (int *)(uint)*(byte *)(param_1 + 0x95);
                uVar11 = (uint)*(ushort *)(param_1 + 0x8c) &
                         ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << uVar7) | uVar11 << uVar7;
              }
              else {
                piVar9 = (int *)(uint)*(byte *)(param_1 + 0x95);
              }
LAB_08033424:
              piVar9 = (int *)((uint)piVar9 | 2);
              *(short *)(param_1 + 0x8c) = (short)uVar11;
              *(char *)(param_1 + 0x95) = (char)piVar9;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x44:
            case 0x45:
              if (uVar12 < 2) {
                iVar6 = ((uint)piVar9 & 1) << 3;
                uVar7 = (uint)*(ushort *)(param_1 + 0x8e) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6);
                piVar9 = (int *)(uVar7 | uVar11 << iVar6);
                *(short *)(param_1 + 0x8e) = (short)piVar9;
                bVar2 = *(byte *)(iVar13 + 8);
              }
              else {
                *(undefined2 *)(param_1 + 0x8e) = uVar5;
                if (uVar12 != 2) {
                  uVar11 = uVar11 >> 0x10;
                  goto LAB_080333e0;
                }
                bVar2 = *(byte *)(iVar13 + 8);
              }
              break;
            case 0x46:
            case 0x47:
              if (uVar12 < 2) {
                piVar9 = (int *)(((uint)piVar9 & 1) << 3);
                uVar7 = (uint)*(ushort *)(param_1 + 0x90) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << (int)piVar9);
                uVar11 = uVar7 | uVar11 << (int)piVar9;
              }
LAB_080333e0:
              *(short *)(param_1 + 0x90) = (short)uVar11;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x48:
            case 0x49:
            case 0x4a:
            case 0x4b:
              if (uVar12 < 4) {
                iVar6 = ((uint)piVar9 & 3) << 3;
                uVar7 = *(uint *)(param_1 + 0x7c) & ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6);
                uVar11 = uVar7 | uVar11 << iVar6;
              }
              piVar9 = (int *)(uVar11 & 0x3f3f3f3f);
              *(int **)(param_1 + 0x7c) = piVar9;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x4c:
              if (uVar12 < 2) {
                piVar9 = (int *)(((uint)piVar9 & 1) << 3);
                uVar7 = (uint)*(ushort *)(param_1 + 0x88) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << (int)piVar9);
                uVar11 = uVar7 | uVar11 << (int)piVar9;
              }
              *(short *)(param_1 + 0x88) = (short)uVar11;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x50:
            case 0x51:
              if (uVar12 < 2) {
                iVar6 = ((uint)piVar9 & 1) << 3;
                uVar7 = (uint)*(ushort *)(param_1 + 0x80) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << iVar6);
                piVar9 = (int *)(uVar7 | uVar11 << iVar6);
                *(short *)(param_1 + 0x80) = (short)piVar9;
                bVar2 = *(byte *)(iVar13 + 8);
              }
              else {
                *(undefined2 *)(param_1 + 0x80) = uVar5;
                if (uVar12 != 2) {
                  uVar11 = uVar11 >> 0x10;
                  goto LAB_08033224;
                }
                bVar2 = *(byte *)(iVar13 + 8);
              }
              break;
            case 0x52:
            case 0x53:
              if (uVar12 < 2) {
                piVar9 = (int *)(((uint)piVar9 & 1) << 3);
                uVar7 = (uint)*(ushort *)(param_1 + 0x84) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << (int)piVar9);
                uVar11 = uVar7 | uVar11 << (int)piVar9;
              }
LAB_08033224:
              *(short *)(param_1 + 0x84) = (short)uVar11;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x54:
              if (uVar12 < 2) {
                piVar9 = (int *)(((uint)piVar9 & 1) << 3);
                uVar7 = (uint)*(ushort *)(param_1 + 0x82) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << (int)piVar9);
                uVar11 = uVar7 | uVar11 << (int)piVar9;
              }
              *(ushort *)(param_1 + 0x82) = (ushort)uVar11 & 0x1f;
              bVar2 = *(byte *)(iVar13 + 8);
              break;
            case 0x6c:
              if (uVar12 < 2) {
                piVar9 = (int *)(((uint)piVar9 & 1) << 3);
                uVar7 = (uint)*(ushort *)(param_1 + 0x86) &
                        ~((1 << ((uVar12 & 0x1f) << 3)) + -1 << (int)piVar9);
                uVar11 = uVar7 | uVar11 << (int)piVar9;
              }
              *(short *)(param_1 + 0x86) = (short)uVar11;
              bVar2 = *(byte *)(iVar13 + 8);
            }
            uVar11 = (uint)bVar2;
            iVar6 = iVar13 + 0xc;
          } while (uVar11 <= param_2);
        }
LAB_0803302c:
        param_2 = param_2 + 1;
        if (param_4 != (int *)0x0) {
          piVar9 = (int *)*param_4;
          uVar7 = (uint)*(ushort *)(param_4 + 2);
        }
        local_54 = local_54 + iVar10;
        if (param_4 != (int *)0x0) {
          *param_4 = (int)piVar9 + uVar7 * 2;
        }
      } while (param_2 <= param_3);
      iVar6 = *(int *)(param_1 + 0x80f3c);
    }
    *(int *)(param_1 + 0x1c) = local_54;
  }
  *(int *)(param_1 + 0x80f38) = iVar6;
  *(int *)(param_1 + 0x80f3c) = (iVar13 - (param_1 + 0x20f38) >> 2) * -0x55555555;
  return;
}


