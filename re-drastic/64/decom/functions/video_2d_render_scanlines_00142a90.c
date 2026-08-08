/*
 * Ghidra decompilation
 *
 * Function : video_2d_render_scanlines
 * Address  : 00142a90
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */

void video_2d_render_scanlines(long **param_1,uint param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  long **pplVar6;
  long *plVar7;
  uint uVar8;
  uint *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar14;
  ulong uVar15;
  uint uVar13;
  
  uVar11 = *(uint *)(param_1 + 0x10283);
  uVar8 = *(uint *)((long)param_1 + 0x8141c);
  *(undefined *)((long)param_1 + (ulong)uVar8 * 0xc + 0x21420) = 0xff;
  puVar9 = (uint *)((long)(param_1 + 0x4283) + (ulong)uVar11 * 0xc);
  uVar11 = (uint)*(byte *)((long)param_1 + (ulong)uVar11 * 0xc + 0x21420);
  if (param_2 <= param_3) {
    do {
      if (param_1[7] != (long *)0x0) {
        render_scanline(param_1,(long)param_1[7] + (ulong)(param_2 * *(int *)(param_1 + 8)),param_2,
                        param_4);
      }
      while (uVar11 <= param_2) {
        while( true ) {
          uVar11 = *puVar9;
          uVar8 = puVar9[1];
          uVar15 = (ulong)uVar8;
          bVar4 = *(byte *)((long)puVar9 + 9);
          uVar12 = (uint)bVar4;
          uVar13 = (uint)bVar4;
          uVar2 = (ushort)uVar8;
          if (uVar11 < 0x100000) break;
          uVar1 = uVar11 & 0x3ff;
          if (uVar11 < 0x200000) {
            plVar7 = param_1[3];
          }
          else {
            *(undefined *)((long)param_1 + 0xb6) = 1;
            plVar7 = param_1[6];
          }
          if (uVar13 == 2) {
            *(ushort *)((long)plVar7 + (ulong)uVar1) = uVar2;
            bVar4 = *(byte *)(puVar9 + 5);
          }
          else {
            if (uVar12 == 4) {
              *(uint *)((long)plVar7 + (ulong)uVar1) = uVar8;
              bVar4 = *(byte *)(puVar9 + 5);
              goto joined_r0x00142e4c;
            }
            if (uVar12 != 1) goto switchD_00142b78_caseD_4;
            *(char *)((long)plVar7 + (ulong)uVar1) = (char)uVar8;
            bVar4 = *(byte *)(puVar9 + 5);
          }
          uVar11 = (uint)bVar4;
          puVar9 = puVar9 + 3;
          if (param_2 < uVar11) goto LAB_00142bc0;
        }
        uVar1 = uVar11 & 0xfff;
        if (0x6c < uVar1) {
          if (uVar1 != 0x305) goto switchD_00142b78_caseD_4;
          bVar4 = *(byte *)((long)param_1 + 0xb7);
          bVar10 = bVar4;
          if (((uVar8 >> 7 & 1) == 0) &&
             (bVar10 = bVar4 ^ 1, *(int *)(*(long *)(**param_1 + 0xfba68) + 0x85a40) != 0)) {
            bVar10 = bVar4;
          }
          plVar7 = (long *)get_screen_ptr(bVar10);
          if (*(char *)(param_1 + 0x17) != '\0') {
            plVar7 = (long *)0x0;
          }
          param_1[7] = plVar7;
          uVar5 = get_screen_pitch(bVar10);
          *(undefined4 *)(param_1 + 8) = uVar5;
          bVar4 = *(byte *)(puVar9 + 5);
          goto joined_r0x00142e4c;
        }
        uVar14 = (uint)bVar4;
        switch(uVar1) {
        case 0:
        case 1:
        case 2:
        case 3:
          if (uVar14 < 4) {
            uVar11 = (uVar11 & 3) << 3;
            uVar15 = (ulong)(*(uint *)(param_1 + 0x12) &
                             ((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11 ^ 0xffffffffU)
                            | uVar8 << (ulong)uVar11);
          }
          video_2d_set_display_control(param_1,uVar15);
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        default:
          goto switchD_00142b78_caseD_4;
        case 8:
        case 9:
          video_2d_set_bg_control(param_1,0,uVar15);
          if (2 < uVar13) {
            uVar15 = (ulong)(uVar8 >> 0x10);
            goto switchD_00142b78_caseD_a;
          }
          goto switchD_00142b78_caseD_4;
        case 10:
        case 0xb:
switchD_00142b78_caseD_a:
          video_2d_set_bg_control(param_1,1,uVar15);
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0xc:
        case 0xd:
          video_2d_set_bg_control(param_1,2,uVar15);
          if (2 < uVar13) {
            uVar15 = (ulong)(uVar8 >> 0x10);
            goto switchD_00142b78_caseD_e;
          }
          goto switchD_00142b78_caseD_4;
        case 0xe:
        case 0xf:
switchD_00142b78_caseD_e:
          video_2d_set_bg_control(param_1,3,uVar15);
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x10:
        case 0x11:
          if (uVar13 < 2) {
            uVar11 = (uVar11 & 1) << 3;
            *(ushort *)((long)param_1 + 0x15a) =
                 (*(ushort *)((long)param_1 + 0x15a) &
                  ((ushort)((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
                 (ushort)(uVar8 << (ulong)uVar11)) & 0x1ff;
            bVar4 = *(byte *)(puVar9 + 5);
            break;
          }
          pplVar6 = param_1 + 0x18;
          *(ushort *)((long)param_1 + 0x15a) = uVar2 & 0x1ff;
          if (uVar14 == 2) goto switchD_00142b78_caseD_4;
          uVar8 = uVar8 >> 0x10;
          goto LAB_00142f10;
        case 0x12:
        case 0x13:
          pplVar6 = param_1 + 0x18;
          goto joined_r0x00142f90;
        case 0x14:
        case 0x15:
          if (1 < uVar14) {
            pplVar6 = param_1 + 0x2e;
            *(ushort *)((long)param_1 + 0x20a) = uVar2 & 0x1ff;
            if (uVar14 != 2) {
              uVar8 = uVar8 >> 0x10;
              goto LAB_00142f10;
            }
            goto switchD_00142b78_caseD_4;
          }
          uVar11 = (uVar11 & 1) << 3;
          *(ushort *)((long)param_1 + 0x20a) =
               (*(ushort *)((long)param_1 + 0x20a) &
                ((ushort)((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
               (ushort)(uVar8 << (ulong)uVar11)) & 0x1ff;
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x16:
        case 0x17:
          pplVar6 = param_1 + 0x2e;
          goto joined_r0x00142f90;
        case 0x18:
        case 0x19:
          if (1 < uVar14) {
            pplVar6 = param_1 + 0x44;
            *(ushort *)((long)param_1 + 0x2ba) = uVar2 & 0x1ff;
            if (uVar14 != 2) {
              uVar8 = uVar8 >> 0x10;
              goto LAB_00142f10;
            }
            goto switchD_00142b78_caseD_4;
          }
          uVar11 = (uVar11 & 1) << 3;
          *(ushort *)((long)param_1 + 0x2ba) =
               (*(ushort *)((long)param_1 + 0x2ba) &
                ((ushort)((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
               (ushort)(uVar8 << (ulong)uVar11)) & 0x1ff;
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x1a:
        case 0x1b:
          pplVar6 = param_1 + 0x44;
          goto joined_r0x00142f90;
        case 0x1c:
        case 0x1d:
          if (1 < uVar14) {
            pplVar6 = param_1 + 0x5a;
            *(ushort *)((long)param_1 + 0x36a) = uVar2 & 0x1ff;
            if (uVar14 != 2) {
              uVar8 = uVar8 >> 0x10;
              goto LAB_00142f10;
            }
            goto switchD_00142b78_caseD_4;
          }
          uVar11 = (uVar11 & 1) << 3;
          *(ushort *)((long)param_1 + 0x36a) =
               (*(ushort *)((long)param_1 + 0x36a) &
                ((ushort)((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
               (ushort)(uVar8 << (ulong)uVar11)) & 0x1ff;
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x1e:
        case 0x1f:
          pplVar6 = param_1 + 0x5a;
joined_r0x00142f90:
          if (uVar14 < 2) {
            uVar11 = (uVar11 & 1) << 3;
            uVar8 = (uint)*(ushort *)((long)pplVar6 + 0x9c) &
                    ((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11 ^ 0xffffffffU) |
                    uVar8 << (ulong)uVar11;
          }
LAB_00142f10:
          *(ushort *)((long)pplVar6 + 0x9c) = (ushort)uVar8 & 0x1ff;
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x20:
        case 0x21:
          pplVar6 = param_1 + 0x44;
          if (uVar14 < 2) {
            uVar11 = (uVar11 & 1) << 3;
            *(ushort *)((long)param_1 + 0x2be) =
                 *(ushort *)((long)param_1 + 0x2be) &
                 ((ushort)((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
                 (ushort)(uVar8 << (ulong)uVar11);
            *(undefined *)((long)param_1 + 0x2ce) = 1;
            bVar4 = *(byte *)(puVar9 + 5);
            break;
          }
LAB_00142b88:
          *(ushort *)((long)pplVar6 + 0x9e) = uVar2;
          *(undefined *)((long)pplVar6 + 0xae) = 1;
          if (uVar14 == 2) goto switchD_00142b78_caseD_4;
          uVar15 = (ulong)(uVar8 >> 0x10);
          goto LAB_00142ba0;
        case 0x22:
        case 0x23:
          pplVar6 = param_1 + 0x44;
          goto joined_r0x00143250;
        case 0x24:
        case 0x25:
          pplVar6 = param_1 + 0x44;
          if (uVar14 < 2) {
            uVar11 = (uVar11 & 1) << 3;
            *(ushort *)(param_1 + 0x58) =
                 *(ushort *)(param_1 + 0x58) &
                 ((ushort)((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
                 (ushort)(uVar8 << (ulong)uVar11);
            *(undefined *)((long)param_1 + 0x2ce) = 1;
            bVar4 = *(byte *)(puVar9 + 5);
            break;
          }
LAB_00142dc0:
          *(ushort *)(pplVar6 + 0x14) = uVar2;
          *(undefined *)((long)pplVar6 + 0xae) = 1;
          if (uVar14 == 2) goto switchD_00142b78_caseD_4;
          uVar15 = (ulong)(uVar8 >> 0x10);
          goto LAB_00142dd8;
        case 0x26:
        case 0x27:
          pplVar6 = param_1 + 0x44;
          goto joined_r0x00142e5c;
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
          iVar3 = (int)((uVar15 << 0x24) >> 0x20);
          pplVar6 = param_1 + 0x44;
          goto joined_r0x00142e04;
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
          iVar3 = (int)((uVar15 << 0x24) >> 0x20);
          pplVar6 = param_1 + 0x44;
          goto joined_r0x001431f0;
        case 0x30:
        case 0x31:
          pplVar6 = param_1 + 0x5a;
          if (1 < uVar14) goto LAB_00142b88;
          uVar11 = (uVar11 & 1) << 3;
          *(ushort *)((long)param_1 + 0x36e) =
               *(ushort *)((long)param_1 + 0x36e) &
               ((ushort)((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
               (ushort)(uVar8 << (ulong)uVar11);
          *(undefined *)((long)param_1 + 0x37e) = 1;
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x32:
        case 0x33:
          pplVar6 = param_1 + 0x5a;
joined_r0x00143250:
          if (bVar4 < 2) {
            uVar11 = (uVar11 & 1) << 3;
            uVar15 = (ulong)((int)*(short *)((long)pplVar6 + 0xa2) &
                             ((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11 ^ 0xffffffffU)
                            | uVar8 << (ulong)uVar11);
          }
LAB_00142ba0:
          *(short *)((long)pplVar6 + 0xa2) = (short)uVar15;
          *(undefined *)((long)pplVar6 + 0xae) = 1;
switchD_00142b78_caseD_4:
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x34:
        case 0x35:
          pplVar6 = param_1 + 0x5a;
          if (1 < uVar14) goto LAB_00142dc0;
          uVar11 = (uVar11 & 1) << 3;
          *(ushort *)(param_1 + 0x6e) =
               *(ushort *)(param_1 + 0x6e) &
               ((ushort)((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
               (ushort)(uVar8 << (ulong)uVar11);
          *(undefined *)((long)param_1 + 0x37e) = 1;
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x36:
        case 0x37:
          pplVar6 = param_1 + 0x5a;
joined_r0x00142e5c:
          if (uVar14 < 2) {
            uVar11 = (uVar11 & 1) << 3;
            uVar15 = (ulong)((int)*(short *)((long)pplVar6 + 0xa4) &
                             ((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11 ^ 0xffffffffU)
                            | uVar8 << (ulong)uVar11);
          }
LAB_00142dd8:
          *(short *)((long)pplVar6 + 0xa4) = (short)uVar15;
          *(undefined *)((long)pplVar6 + 0xae) = 1;
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
          iVar3 = (int)((uVar15 << 0x24) >> 0x20);
          pplVar6 = param_1 + 0x5a;
joined_r0x00142e04:
          uVar8 = iVar3 >> 4;
          if (uVar14 < 4) {
            uVar11 = (uVar11 & 3) << 3;
            uVar8 = *(uint *)(pplVar6 + 0x11) &
                    ((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11 ^ 0xffffffffU) |
                    uVar8 << (ulong)uVar11;
          }
          *(uint *)(pplVar6 + 0x11) = uVar8;
          *(uint *)(pplVar6 + 0x12) = uVar8;
          *(undefined *)((long)pplVar6 + 0xae) = 1;
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
          iVar3 = (int)((uVar15 << 0x24) >> 0x20);
          pplVar6 = param_1 + 0x5a;
joined_r0x001431f0:
          uVar8 = iVar3 >> 4;
          if (uVar14 < 4) {
            uVar11 = (uVar11 & 3) << 3;
            uVar8 = *(uint *)((long)pplVar6 + 0x8c) &
                    ((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11 ^ 0xffffffffU) |
                    uVar8 << (ulong)uVar11;
          }
          *(uint *)((long)pplVar6 + 0x8c) = uVar8;
          *(uint *)((long)pplVar6 + 0x94) = uVar8;
          *(undefined *)((long)pplVar6 + 0xae) = 1;
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x40:
        case 0x41:
          bVar4 = *(byte *)((long)param_1 + 0xb5) | 1;
          if (1 < uVar14) {
            *(ushort *)((long)param_1 + 0xaa) = uVar2;
            *(byte *)((long)param_1 + 0xb5) = bVar4;
            if (uVar14 != 2) {
              uVar15 = (ulong)(uVar8 >> 0x10);
              goto LAB_00143180;
            }
            goto switchD_00142b78_caseD_4;
          }
          uVar11 = (uVar11 & 1) << 3;
          *(ushort *)((long)param_1 + 0xaa) =
               *(ushort *)((long)param_1 + 0xaa) &
               ((ushort)((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
               (ushort)(uVar8 << (ulong)uVar11);
          *(byte *)((long)param_1 + 0xb5) = bVar4;
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x42:
        case 0x43:
          bVar4 = *(byte *)((long)param_1 + 0xb5);
          if (uVar14 < 2) {
            uVar11 = (uVar11 & 1) << 3;
            *(ushort *)((long)param_1 + 0xac) =
                 *(ushort *)((long)param_1 + 0xac) &
                 ((ushort)((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
                 (ushort)(uVar8 << (ulong)uVar11);
            *(byte *)((long)param_1 + 0xb5) = bVar4 | 2;
          }
          else {
LAB_00143180:
            *(short *)((long)param_1 + 0xac) = (short)uVar15;
            *(byte *)((long)param_1 + 0xb5) = bVar4 | 2;
          }
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x44:
        case 0x45:
          if (1 < uVar14) {
            *(ushort *)((long)param_1 + 0xae) = uVar2;
            if (uVar14 != 2) {
              uVar15 = (ulong)(uVar8 >> 0x10);
              goto LAB_00142ec8;
            }
            goto switchD_00142b78_caseD_4;
          }
          uVar11 = (uVar11 & 1) << 3;
          *(ushort *)((long)param_1 + 0xae) =
               *(ushort *)((long)param_1 + 0xae) &
               ((ushort)((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
               (ushort)(uVar8 << (ulong)uVar11);
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x46:
        case 0x47:
          if (uVar14 < 2) {
            uVar11 = (uVar11 & 1) << 3;
            *(ushort *)(param_1 + 0x16) =
                 *(ushort *)(param_1 + 0x16) &
                 ((ushort)((1 << (ulong)((uVar12 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
                 (ushort)(uVar8 << (ulong)uVar11);
          }
          else {
LAB_00142ec8:
            *(short *)(param_1 + 0x16) = (short)uVar15;
          }
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
          if (uVar12 < 4) {
            uVar11 = (uVar11 & 3) << 3;
            uVar8 = *(uint *)((long)param_1 + 0x9c) &
                    ((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11 ^ 0xffffffffU) |
                    uVar8 << (ulong)uVar11;
          }
          *(uint *)((long)param_1 + 0x9c) = uVar8 & 0x3f3f3f3f;
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x4c:
          if (uVar14 < 2) {
            uVar11 = (uVar11 & 1) << 3;
            *(ushort *)(param_1 + 0x15) =
                 *(ushort *)(param_1 + 0x15) &
                 ((ushort)((1 << (ulong)((uVar12 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
                 (ushort)(uVar8 << (ulong)uVar11);
          }
          else {
            *(ushort *)(param_1 + 0x15) = uVar2;
          }
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x50:
        case 0x51:
          if (1 < uVar14) {
            *(ushort *)(param_1 + 0x14) = uVar2;
            if (uVar14 != 2) {
              *(short *)((long)param_1 + 0xa4) = (short)(uVar8 >> 0x10);
              goto LAB_00142d14;
            }
            goto switchD_00142b78_caseD_4;
          }
          uVar11 = (uVar11 & 1) << 3;
          *(ushort *)(param_1 + 0x14) =
               *(ushort *)(param_1 + 0x14) &
               ((ushort)((1 << (ulong)((uVar12 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
               (ushort)(uVar8 << (ulong)uVar11);
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x52:
        case 0x53:
          if (uVar12 < 2) {
            uVar11 = (uVar11 & 1) << 3;
            *(ushort *)((long)param_1 + 0xa4) =
                 *(ushort *)((long)param_1 + 0xa4) &
                 ((ushort)((1 << (ulong)((uVar14 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
                 (ushort)(uVar8 << (ulong)uVar11);
          }
          else {
            *(ushort *)((long)param_1 + 0xa4) = uVar2;
          }
LAB_00142d14:
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x54:
          if (uVar13 < 2) {
            uVar11 = (uVar11 & 1) << 3;
            uVar8 = (uint)*(ushort *)((long)param_1 + 0xa2) &
                    ((1 << (ulong)((uVar12 & 3) << 3)) + -1 << (ulong)uVar11 ^ 0xffffffffU) |
                    uVar8 << (ulong)uVar11;
          }
          *(ushort *)((long)param_1 + 0xa2) = (ushort)uVar8 & 0x1f;
          bVar4 = *(byte *)(puVar9 + 5);
          break;
        case 0x6c:
          if (uVar12 < 2) {
            uVar11 = (uVar11 & 1) << 3;
            *(ushort *)((long)param_1 + 0xa6) =
                 *(ushort *)((long)param_1 + 0xa6) &
                 ((ushort)((1 << (ulong)((uVar13 & 3) << 3)) + -1 << (ulong)uVar11) ^ 0xffff) |
                 (ushort)(uVar8 << (ulong)uVar11);
          }
          else {
            *(ushort *)((long)param_1 + 0xa6) = uVar2;
          }
          bVar4 = *(byte *)(puVar9 + 5);
        }
joined_r0x00142e4c:
        puVar9 = puVar9 + 3;
        uVar11 = (uint)bVar4;
      }
LAB_00142bc0:
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
    uVar8 = *(uint *)((long)param_1 + 0x8141c);
  }
  *(uint *)(param_1 + 0x10283) = uVar8;
  *(int *)((long)param_1 + 0x8141c) =
       (int)((long)puVar9 - (long)(param_1 + 0x4283) >> 2) * -0x55555555;
  return;
}


