/*
 * Ghidra decompilation
 *
 * Function : FUN_080836c4
 * Address  : 080836c4
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x08083f54) */

void FUN_080836c4(int param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6,
                 int param_7,int param_8,uint param_9)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  code *local_4c;
  code *local_48;
  int local_44;
  code *local_40;
  int local_3c;
  code *local_38;
  code *local_34;
  int local_30 [3];
  
  uVar8 = param_2 >> 0x1c;
  uVar21 = (param_2 << 0x10) >> 0x1c;
  uVar10 = (param_2 << 0xc) >> 0x1c;
  if (uVar8 == 0xf) {
    return;
  }
  uVar19 = param_3;
  if (param_3 != 0) {
    uVar19 = 1;
  }
  if (uVar10 == 0xf) {
    uVar7 = uVar19 & 1;
  }
  else {
    uVar7 = 0;
  }
  if (uVar7 == 0) {
LAB_08083728:
    cVar3 = *(char *)(param_1 + 0x4f0);
    uVar7 = 1 - param_6;
    if (1 < param_6) {
      uVar7 = 0;
    }
    if (uVar10 == 0xd) {
      uVar23 = uVar7 & 1;
    }
    else {
      uVar23 = 0;
    }
    if (uVar23 == 0) {
LAB_08083d80:
      uVar23 = uVar7;
      if (cVar3 != '\x01') goto LAB_08083754;
LAB_08083d88:
      if (param_8 == 0) {
        uVar7 = uVar19 & 1;
      }
      else {
        uVar7 = 0;
      }
      if ((uVar7 == 0) || (uVar23 == 0)) goto LAB_08083754;
LAB_08083da8:
      if ((param_2 & 0x1200000) != 0x1000000) {
LAB_08083db4:
        uVar23 = 1;
        goto LAB_08083754;
      }
      local_4c = (code *)param_9;
      if (param_5 == 0) {
        if ((param_4 != 0) || ((param_9 & 3) == 0)) goto LAB_080843f4;
        goto LAB_08083db4;
      }
      if ((param_9 & 1) != 0) goto LAB_08083db4;
LAB_080843f4:
      local_38 = (code *)(uint)*(byte *)(param_1 + uVar10 + 0x480);
      if ((param_2 & 0x800000) == 0) {
        local_4c = (code *)-param_9;
      }
      bVar25 = 0xfe < local_38;
      if (local_38 != (code *)0xff) {
        bVar25 = local_38 != (code *)0x0;
      }
      bVar1 = *(byte *)(param_1 + uVar21 + 0x480);
      if (!bVar25 || (local_38 == (code *)0xff || local_38 == (code *)0x1)) goto LAB_08083db4;
      uVar23 = 1;
      if (local_38 == (code *)0xe) goto LAB_08083754;
      bVar25 = 0xfe < bVar1;
      if (bVar1 != 0xff) {
        bVar25 = bVar1 != 0;
      }
      if ((!bVar25 || (bVar1 == 0xff || bVar1 == 1)) || (uVar23 = 1, bVar1 == 0xe))
      goto LAB_08083754;
      uVar10 = (uint)*(byte *)(param_1 + 0x405);
      if (uVar10 < 0xfd) {
        *(undefined *)(param_1 + 0x480 + uVar10) = 0xff;
        iVar11 = *(int *)(param_1 + 0x4d8);
        if ((*(char *)(param_1 + 0x406) != '\0') &&
           (((int)(uint)*(ushort *)(iVar11 + 0x12) >> uVar10 & 1U) != 0)) {
          uVar7 = (uVar10 + 0x3fffffeb) * 4;
          puVar18 = *(uint **)(param_1 + 0x4ac);
          if ((int)uVar7 < 0) {
            uVar7 = (uVar10 + 0x3fffffeb) * -4;
            uVar10 = 0;
          }
          else {
            uVar10 = 0x800000;
          }
          *puVar18 = uVar10 | 0xe50b0000 | uVar7;
          *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
        }
      }
      else {
        iVar11 = *(int *)(param_1 + 0x4d8);
      }
      bVar25 = true;
      *(undefined *)(param_1 + 0x405) = 0xfd;
    }
    else {
      if (cVar3 == '\x01') {
LAB_08083f64:
        if ((*(char *)(*(int *)(*(int *)(param_1 + 0x4e0) + 0x2304) + 0x34) != '\0') &&
           (*(int *)(param_1 + 0x4e4) == 0)) {
          iVar11 = FUN_080800fc(param_1,0xd,1,local_30);
          if (local_30[0] != 0) {
            puVar18 = *(uint **)(param_1 + 0x4ac);
            *puVar18 = iVar11 << 0xc | 0xe51b0020;
            *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
          }
          if (param_8 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = FUN_080814b4(param_1,param_2 & 0xf);
          }
          if (uVar19 == 0) {
            iVar17 = FUN_080814b4(param_1,uVar21);
          }
          else {
            iVar17 = FUN_08080b7c(param_1,uVar21,1,uVar8);
          }
          uVar8 = param_2 & 0x1000000;
          if (uVar8 != 0) {
            if ((param_2 & 0x200000) == 0) {
              uVar8 = 8;
              goto LAB_08084230;
            }
            uVar8 = 9;
          }
          *(undefined *)(param_1 + iVar11 * 8 + 0x406) = 1;
LAB_08084230:
          if ((param_5 == 0) && (param_4 != 0)) {
            iVar24 = 2;
            local_3c = param_4;
          }
          else {
            local_3c = 0;
            if (param_7 == 0) {
              iVar24 = 1;
            }
            else {
              iVar24 = 3;
            }
          }
          uVar21 = param_2 & 0x800000;
          if (uVar21 == 0) {
            param_9 = -param_9;
          }
          if (param_8 == 1) {
            uVar21 = uVar21 | param_3 << 0x14;
            if ((param_5 == 0) && (local_3c == 0 || param_7 == 0)) {
              puVar18 = *(uint **)(param_1 + 0x4ac);
              *puVar18 = uVar21 | 0x6000000 | param_2 & 0xf0000000 | iVar11 << 0x10 | uVar10 |
                         iVar17 << 0xc | uVar8 << 0x15 | local_3c << 0x16;
              *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
            }
            else {
              puVar18 = *(uint **)(param_1 + 0x4ac);
              *puVar18 = uVar21 | 0x90 | param_2 & 0xf0000000 | iVar11 << 0x10 | uVar10 |
                         iVar17 << 0xc | uVar8 << 0x15 | iVar24 << 5;
              *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
            }
          }
          else if (param_8 == 0) {
            if ((param_5 == 0) && (local_3c == 0 || param_7 == 0)) {
              bVar25 = (int)param_9 < 0;
              puVar18 = *(uint **)(param_1 + 0x4ac);
              if (bVar25) {
                param_9 = -param_9;
              }
              uVar10 = 0;
              if (!bVar25) {
                uVar10 = 0x800000;
              }
              *puVar18 = param_3 << 0x14 | 0x4000000 | param_2 & 0xf0000000 | iVar11 << 0x10 |
                         iVar17 << 0xc | uVar8 << 0x15 | local_3c << 0x16 | uVar10 | param_9;
              *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
            }
            else {
              puVar18 = *(uint **)(param_1 + 0x4ac);
              bVar25 = (int)param_9 < 0;
              if (bVar25) {
                param_9 = -param_9;
              }
              uVar10 = 0;
              if (!bVar25) {
                uVar10 = 0x800000;
              }
              *puVar18 = param_3 << 0x14 | 0x400090 | param_2 & 0xf0000000 | iVar11 << 0x10 |
                         iVar17 << 0xc | uVar8 << 0x15 | iVar24 << 5 | uVar10 | param_9 & 0xf |
                         ((int)param_9 >> 4) << 8;
              *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
            }
          }
          else if (param_8 == 2) {
            puVar18 = *(uint **)(param_1 + 0x4ac);
            *puVar18 = uVar21 | param_3 << 0x14 | 0x6000000 | param_2 & 0x60 | param_2 & 0xf80 |
                       param_2 & 0xf0000000 | iVar11 << 0x10 | uVar10 | iVar17 << 0xc |
                       uVar8 << 0x15 | local_3c << 0x16;
            *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
          }
          if (uVar19 == 0) {
            return;
          }
          if (-1 < *(short *)(*(int *)(param_1 + 0x4d8) + 0x10)) {
            return;
          }
          uVar21 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
          uVar10 = *(uint *)(param_1 + 0x4a4);
          uVar8 = uVar21 & uVar10;
          if ((uVar8 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
            uVar19 = FUN_080800fc(param_1,0xfd,1,local_30);
            if ((uVar21 & 0xfffffffe & ~(uVar10 & 0xfffffffe)) == 0) {
              puVar18 = *(uint **)(param_1 + 0x4ac) + 1;
              **(uint **)(param_1 + 0x4ac) = uVar19 << 0xc | 0xe3a00000;
              *(uint **)(param_1 + 0x4ac) = puVar18;
            }
            else {
              puVar22 = *(uint **)(param_1 + 0x4ac);
              puVar22[1] = uVar8 & 0xfffffffe | 0xe3c00200 | uVar19 << 0xc | uVar19 << 0x10;
              puVar18 = puVar22 + 2;
              *puVar22 = uVar19 << 0xc | 0xe51b0080;
              *(uint **)(param_1 + 0x4ac) = puVar18;
            }
            uVar10 = uVar19 << 0xc;
            puVar22 = puVar18;
            if ((uVar8 & 2) != 0) {
              puVar22 = puVar18 + 1;
              *puVar18 = uVar19 << 0x10 | 0x23800202 | uVar10;
              *(uint **)(param_1 + 0x4ac) = puVar22;
            }
            puVar18 = puVar22;
            if ((uVar8 & 4) != 0) {
              puVar18 = puVar22 + 1;
              *puVar22 = uVar19 << 0x10 | 0x3800204 | uVar10;
              *(uint **)(param_1 + 0x4ac) = puVar18;
            }
            puVar22 = puVar18;
            if ((uVar8 & 8) != 0) {
              puVar22 = puVar18 + 1;
              *puVar18 = uVar19 << 0x10 | 0x43800208 | uVar10;
            }
            uVar2 = *(ushort *)(param_1 + 0x49c);
            *puVar22 = uVar10 | 0xe50b0080;
            *(ushort *)(param_1 + 0x49c) = uVar2 & ~(ushort)(1 << (uVar19 & 0xff));
            *(uint **)(param_1 + 0x4ac) = puVar22 + 1;
          }
          *(undefined4 *)(param_1 + 0x4a8) = 0;
          *(undefined4 *)(param_1 + 0x4a4) = 1;
          FUN_0807ff08(param_1);
          puVar18 = *(uint **)(param_1 + 0x4ac);
          *puVar18 = ((int)&LAB_0807b960 - (int)puVar18 >> 2) - 2U & 0xffffff | 0xa000000 |
                     param_2 & 0xf0000000;
          *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
          return;
        }
        if (param_8 == 0) {
          uVar7 = uVar19 & 1;
        }
        else {
          uVar7 = 0;
        }
        if (uVar7 != 0) goto LAB_08083da8;
        goto LAB_08083db4;
      }
LAB_08083754:
      bVar25 = false;
      FUN_080819bc(param_1,param_2,param_8,param_9,uVar8);
      iVar11 = *(int *)(param_1 + 0x4d8);
      local_4c = (code *)0x0;
      local_38 = (code *)0x0;
    }
    local_44 = param_1 + 0x480;
    bVar1 = *(byte *)(iVar11 + 0x15);
    uVar7 = *(uint *)(param_1 + 0x4a4);
    uVar10 = bVar1 & uVar7;
    if ((uVar10 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
      uVar6 = FUN_080800fc(param_1,0xfd,1,local_30);
      if ((bVar1 & 0xfffffffe & ~(uVar7 & 0xfffffffe)) == 0) {
        puVar18 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar6 << 0xc | 0xe3a00000;
        *(uint **)(param_1 + 0x4ac) = puVar18;
      }
      else {
        puVar18 = *(uint **)(param_1 + 0x4ac);
        puVar18[1] = uVar10 & 0xfffffffe | 0xe3c00200 | uVar6 << 0xc | uVar6 << 0x10;
        *puVar18 = uVar6 << 0xc | 0xe51b0080;
        puVar18 = puVar18 + 2;
        *(uint **)(param_1 + 0x4ac) = puVar18;
      }
      uVar7 = uVar6 << 0xc;
      puVar22 = puVar18;
      if ((uVar10 & 2) != 0) {
        puVar22 = puVar18 + 1;
        *puVar18 = uVar6 << 0x10 | 0x23800202 | uVar7;
        *(uint **)(param_1 + 0x4ac) = puVar22;
      }
      puVar18 = puVar22;
      if ((uVar10 & 4) != 0) {
        puVar18 = puVar22 + 1;
        *puVar22 = uVar6 << 0x10 | 0x3800204 | uVar7;
        *(uint **)(param_1 + 0x4ac) = puVar18;
      }
      puVar22 = puVar18;
      if ((uVar10 & 8) != 0) {
        puVar22 = puVar18 + 1;
        *puVar18 = uVar6 << 0x10 | 0x43800208 | uVar7;
      }
      uVar2 = *(ushort *)(param_1 + 0x49c);
      *puVar22 = uVar7 | 0xe50b0080;
      *(uint **)(param_1 + 0x4ac) = puVar22 + 1;
      *(ushort *)(param_1 + 0x49c) = uVar2 & ~(ushort)(1 << (uVar6 & 0xff));
    }
    uVar7 = (uint)*(byte *)(param_1 + 0x40d);
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4a4) = 1;
    if (((uVar7 < 0xfd) &&
        (*(undefined *)(local_44 + uVar7) = 0xff, *(char *)(param_1 + 0x40e) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
      uVar6 = (uVar7 + 0x3fffffeb) * 4;
      puVar18 = *(uint **)(param_1 + 0x4ac);
      if ((int)uVar6 < 0) {
        uVar6 = (uVar7 + 0x3fffffeb) * -4;
      }
      else {
        uVar10 = 0x800000;
      }
      *puVar18 = uVar10 | 0xe50b1000 | uVar6;
      *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
    }
    uVar10 = (uint)*(byte *)(param_1 + 0x475);
    *(undefined *)(param_1 + 0x40d) = 0xfd;
    if (((uVar10 < 0xfd) &&
        (*(undefined *)(local_44 + uVar10) = 0xff, *(char *)(param_1 + 0x476) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar10 & 1U) != 0)) {
      uVar7 = (uVar10 + 0x3fffffeb) * 4;
      puVar18 = *(uint **)(param_1 + 0x4ac);
      if ((int)uVar7 < 0) {
        uVar7 = (uVar10 + 0x3fffffeb) * -4;
        uVar10 = 0;
      }
      else {
        uVar10 = 0x800000;
      }
      *puVar18 = uVar10 | 0xe50be000 | uVar7;
      *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
    }
    *(undefined *)(param_1 + 0x475) = 0xfd;
    if (param_3 == 0) {
      FUN_0807ff08(param_1);
    }
    if (uVar8 < 0xe) {
      puVar18 = *(uint **)(param_1 + 0x4ac);
      *puVar18 = 0xfffffffeU - ((int)puVar18 >> 2) & 0xffffff | 0xa000000 | (uVar8 ^ 1) << 0x1c;
      *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
    }
    else {
      puVar18 = (uint *)0x0;
    }
    if (uVar19 == 0) {
      FUN_0807fd88(param_1,uVar21);
      if (param_6 == 0) {
        if (param_5 == 0) {
          cVar3 = *(char *)(param_1 + 0x4f0);
          if (param_4 == 0) {
            puVar9 = &LAB_0807cb40;
            puVar5 = &LAB_0807c500;
          }
          else {
            puVar9 = &LAB_0807c77c;
            puVar5 = &LAB_0807c13c;
          }
        }
        else {
          cVar3 = *(char *)(param_1 + 0x4f0);
          puVar9 = &LAB_0807c95c;
          puVar5 = &LAB_0807c31c;
        }
        puVar22 = *(uint **)(param_1 + 0x4ac);
        if (cVar3 != '\x01') {
          puVar5 = puVar9;
        }
        iVar11 = (int)puVar5 - (int)puVar22;
      }
      else {
        puVar15 = *(undefined4 **)(param_1 + 0x4ac);
        puVar5 = &LAB_0807cb40;
        if (*(char *)(param_1 + 0x4f0) == '\x01') {
          puVar5 = &LAB_0807c500;
        }
        *puVar15 = 0xe50b0100;
        puVar15[2] = 0xe51b0100;
        puVar15[1] = ((int)puVar5 - (int)(puVar15 + 1) >> 2) - 2U & 0xffffff | 0xeb000000;
        puVar15[3] = 0xe2800004;
        *(undefined4 **)(param_1 + 0x4ac) = puVar15 + 4;
        FUN_0807fd88(param_1,uVar21 + 1,1);
        puVar22 = *(uint **)(param_1 + 0x4ac);
        iVar11 = (int)puVar5 - (int)puVar22;
      }
      puVar20 = *(uint **)(param_1 + 0x4c0);
      iVar24 = *(int *)(param_1 + 0x4bc);
      iVar17 = *(int *)(param_1 + 0x4c4);
      *puVar22 = (iVar11 >> 2) - 2U & 0xffffff | 0xeb000000;
      *(uint **)(param_1 + 0x4ac) = puVar22 + 1;
      uVar8 = (int)(puVar22 + 1) - iVar17 >> 2;
      uVar10 = *(int *)(param_1 + 0x4d0) - *(int *)(param_1 + 0x4c8);
      if (*(uint *)(param_1 + 0x4b8) <= (uint)((int)puVar20 - iVar24 >> 2)) {
        printf("FATAL: went past metadata storage of %d for block @ %p (%x)\n");
      }
      if (0xffff < uVar10) {
        printf("FATAL: pc_delta in stored PC metadata is %x\n",uVar10);
      }
      if (0xffff < uVar8) {
        printf("FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar8);
      }
      iVar11 = *(int *)(param_1 + 0x4c0);
      *puVar20 = uVar10 | uVar8 << 0x10;
      *(int *)(param_1 + 0x4c0) = iVar11 + 4;
      goto LAB_08083a88;
    }
    if (uVar23 == 0) {
      uVar10 = 0xff;
LAB_080838b4:
      puVar22 = (uint *)0x0;
LAB_080838b8:
      puVar20 = (uint *)0x0;
      local_34 = FUN_0807be30;
      local_38 = (code *)&LAB_0807bd4c;
      local_40 = (code *)&LAB_0807bdbc;
      local_48 = (code *)&LAB_0807bc70;
      local_4c = (code *)&LAB_0807bcdc;
    }
    else {
      if (uVar8 == 0xe) {
        if (uVar21 == 0xf) {
          uVar10 = (uint)*(byte *)(param_1 + 0x405);
          if (((uVar10 < 0xfd) &&
              (*(undefined *)(local_44 + uVar10) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
             (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar10 & 1U) != 0)) {
            uVar19 = (uVar10 + 0x3fffffeb) * 4;
            puVar22 = *(uint **)(param_1 + 0x4ac);
            if ((int)uVar19 < 0) {
              uVar19 = (uVar10 + 0x3fffffeb) * -4;
              uVar10 = 0;
            }
            else {
              uVar10 = 0x800000;
            }
            *puVar22 = uVar10 | 0xe50b0000 | uVar19;
            *(uint **)(param_1 + 0x4ac) = puVar22 + 1;
          }
          uVar10 = 0;
          *(undefined *)(param_1 + 0x405) = 0xfd;
        }
        else {
          uVar10 = FUN_080800fc(param_1,uVar21,0,local_30);
          *(undefined *)(param_1 + uVar10 * 8 + 0x406) = 1;
        }
      }
      else {
        uVar10 = (uint)*(byte *)(param_1 + uVar21 + 0x480);
        if (uVar10 == 0xff) {
          uVar10 = 0;
        }
      }
      if (*(char *)(param_1 + 0x4f0) != '\x01') goto LAB_080838b4;
      iVar11 = *(int *)(param_1 + 0x4ec);
      uVar19 = *(uint *)(param_1 + 0x4e8);
      if (param_5 == 0) {
        if (param_4 == 0) {
          puVar22 = *(uint **)(param_1 + 0x4ac);
          bVar26 = uVar19 == 0;
          if (bVar26) {
            uVar19 = uVar10 << 0xc;
          }
          uVar7 = (int)local_38 << 0x10;
          puVar13 = puVar22 + 2;
          puVar20 = puVar22 + 1;
          *puVar22 = uVar7 | 0xe31003ff;
          puVar22[1] = 0xfffffffeU - ((int)puVar20 >> 2) & 0xffffff | 0x1a000000;
          *(uint **)(param_1 + 0x4ac) = puVar13;
          if (!bVar26) {
            puVar13 = puVar22 + 3;
            uVar6 = uVar19 | 0xe2800000;
            uVar19 = uVar10 << 0xc;
            uVar6 = uVar6 | iVar11 << 8 | uVar7;
            uVar7 = uVar10 << 0x10;
            puVar22[2] = uVar6 | uVar19;
          }
          if ((int)local_4c < 0) {
            local_4c = (code *)-(int)local_4c;
            uVar6 = 0;
          }
          else {
            uVar6 = 0x800000;
          }
          puVar12 = puVar13 + 1;
          *puVar13 = uVar19 | uVar7 | 0xe5100000 | uVar6 | (uint)local_4c;
          *(uint **)(param_1 + 0x4ac) = puVar12;
        }
        else {
          puVar22 = *(uint **)(param_1 + 0x4ac);
          uVar7 = (int)local_38 << 0x10;
          puVar13 = puVar22 + 2;
          puVar20 = puVar22 + 1;
          *puVar22 = uVar7 | 0xe310033f;
          puVar22[1] = 0xfffffffeU - ((int)puVar20 >> 2) & 0xffffff | 0x1a000000;
          *(uint **)(param_1 + 0x4ac) = puVar13;
          if (uVar19 != 0) {
            puVar13 = puVar22 + 3;
            uVar19 = uVar19 | 0xe2800000 | iVar11 << 8 | uVar7;
            uVar7 = uVar10 << 0x10;
            puVar22[2] = uVar19 | uVar10 << 0xc;
            *(uint **)(param_1 + 0x4ac) = puVar13;
          }
          if (param_7 != 0) {
            uVar7 = uVar10 << 0xc | uVar7;
            if ((int)local_4c < 0) {
              local_4c = (code *)-(int)local_4c;
              uVar6 = 0;
            }
            else {
              uVar6 = 0x800000;
            }
            uVar19 = 0xd0;
            goto LAB_08084070;
          }
          if ((int)local_4c < 0) {
            local_4c = (code *)-(int)local_4c;
            uVar19 = 0;
          }
          else {
            uVar19 = 0x800000;
          }
          puVar12 = puVar13 + 1;
          *puVar13 = uVar10 << 0xc | uVar7 | 0xe5500000 | uVar19 | (uint)local_4c;
          *(uint **)(param_1 + 0x4ac) = puVar12;
        }
      }
      else {
        puVar22 = *(uint **)(param_1 + 0x4ac);
        uVar7 = (int)local_38 << 0x10;
        puVar13 = puVar22 + 2;
        puVar20 = puVar22 + 1;
        *puVar22 = uVar7 | 0xe310037f;
        puVar22[1] = 0xfffffffeU - ((int)puVar20 >> 2) & 0xffffff | 0x1a000000;
        *(uint **)(param_1 + 0x4ac) = puVar13;
        if (uVar19 != 0) {
          puVar13 = puVar22 + 3;
          uVar19 = uVar19 | 0xe2800000 | iVar11 << 8 | uVar7;
          uVar7 = uVar10 << 0x10;
          puVar22[2] = uVar19 | uVar10 << 0xc;
          *(uint **)(param_1 + 0x4ac) = puVar13;
        }
        if (param_7 == 0) {
          uVar7 = uVar10 << 0xc | uVar7;
          uVar19 = 0xb0;
          if ((int)local_4c < 0) {
            local_4c = (code *)-(int)local_4c;
            uVar6 = 0;
          }
          else {
            uVar6 = 0x800000;
          }
        }
        else {
          uVar7 = uVar10 << 0xc | uVar7;
          if ((int)local_4c < 0) {
            local_4c = (code *)-(int)local_4c;
            uVar6 = 0;
          }
          else {
            uVar6 = 0x800000;
          }
          uVar19 = 0xf0;
        }
LAB_08084070:
        puVar12 = puVar13 + 1;
        *puVar13 = uVar7 | uVar19 | 0xe1500000 | uVar6 | (uint)local_4c & 0xf |
                   ((int)local_4c >> 4) << 8;
        *(uint **)(param_1 + 0x4ac) = puVar12;
      }
      puVar22 = puVar12;
      if ((uVar8 != 0xe) && (uVar10 == 0)) {
        puVar22 = puVar12 + 1;
        *puVar12 = uVar21 * -4 + 0x54 | 0xe50b0000;
      }
      *(uint **)(param_1 + 0x4b4) = puVar22;
      *(int *)(param_1 + 0x4ac) = param_1;
      if (puVar20 == (uint *)0x0) goto LAB_080838b8;
      local_34 = (code *)&LAB_0807c0a8;
      local_38 = (code *)&LAB_0807bfb4;
      local_40 = (code *)&LAB_0807c02c;
      local_48 = (code *)&LAB_0807bef8;
      local_4c = (code *)&LAB_0807bf54;
    }
    if (bVar25) {
      FUN_080819bc(param_1,param_2,param_8,param_9,0xe);
    }
    if (param_6 == 0) {
      if (param_5 == 0) {
        if (param_4 == 0) {
          puVar13 = *(uint **)(param_1 + 0x4ac);
          local_40 = local_34;
        }
        else {
          puVar13 = *(uint **)(param_1 + 0x4ac);
          local_40 = local_4c;
          if (param_7 == 0) {
            local_40 = local_48;
          }
        }
      }
      else {
        puVar13 = *(uint **)(param_1 + 0x4ac);
        if (param_7 == 0) {
          local_40 = local_38;
        }
      }
      puVar12 = puVar13 + 1;
      *puVar13 = ((int)local_40 - (int)puVar13 >> 2) - 2U & 0xffffff | 0xeb000000;
      *(uint **)(param_1 + 0x4ac) = puVar12;
      if (puVar20 == (uint *)0x0) goto LAB_08083b0c;
    }
    else {
      puVar12 = *(uint **)(param_1 + 0x4ac);
      uVar19 = (uint)*(byte *)(param_1 + uVar21 + 0x480);
      uVar7 = (uint)*(byte *)(param_1 + uVar21 + 0x481);
      bVar25 = uVar19 != 0xff;
      if (bVar25) {
        uVar19 = uVar19 << 0xc;
      }
      uVar16 = ((int)&LAB_0807bed4 - (int)puVar12 >> 2) - 2U & 0xffffff | 0xeb000000;
      *puVar12 = uVar16;
      uVar6 = uVar21;
      if (bVar25) {
        uVar19 = uVar19 | 0xe0000001;
        uVar6 = uVar16;
      }
      *(uint **)(param_1 + 0x4ac) = puVar12 + 1;
      if (bVar25) {
        uVar19 = uVar19 | 0x1a00000;
      }
      else {
        uVar19 = uVar6 * -4 + 0x54 | 0xe50b1000;
      }
      puVar13 = puVar12 + 2;
      puVar12[1] = uVar19;
      *(uint **)(param_1 + 0x4ac) = puVar13;
      if (uVar7 == 0xff) {
        *puVar13 = uVar21 * -4 + 0x50 | 0xe50b0000;
        *(uint **)(param_1 + 0x4ac) = puVar12 + 3;
      }
      else {
        *puVar13 = uVar7 << 0xc | 0xe1a00000;
        *(uint **)(param_1 + 0x4ac) = puVar12 + 3;
      }
      puVar12 = puVar12 + 3;
      if (puVar20 == (uint *)0x0) {
        if (uVar23 == 0) {
          iVar11 = *(int *)(param_1 + 0x4d8);
          goto LAB_08083a7c;
        }
LAB_08083b0c:
        if (uVar8 == 0xe) {
          if (uVar21 == 0xf) {
            uVar8 = (uint)*(byte *)(param_1 + 0x405);
            if (uVar8 < 0xfd) {
              *(undefined *)(local_44 + uVar8) = 0xff;
              if (*(char *)(param_1 + 0x406) == '\0') {
                iVar11 = *(int *)(param_1 + 0x4d8);
              }
              else {
                iVar11 = *(int *)(param_1 + 0x4d8);
                if (((int)(uint)*(ushort *)(iVar11 + 0x12) >> uVar8 & 1U) != 0) {
                  uVar10 = (uVar8 + 0x3fffffeb) * 4;
                  if ((int)uVar10 < 0) {
                    uVar10 = (uVar8 + 0x3fffffeb) * -4;
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = 0x800000;
                  }
                  puVar12 = *(uint **)(param_1 + 0x4ac) + 1;
                  **(uint **)(param_1 + 0x4ac) = uVar8 | 0xe50b0000 | uVar10;
                  goto LAB_08084b30;
                }
              }
              puVar12 = *(uint **)(param_1 + 0x4ac);
            }
            else {
              iVar11 = *(int *)(param_1 + 0x4d8);
            }
LAB_08084b30:
            *(undefined *)(param_1 + 0x405) = 0xfd;
            uVar8 = 0xe1a00000;
          }
          else {
            iVar11 = FUN_080800fc(param_1,uVar21,0,local_30);
            *(undefined *)(param_1 + iVar11 * 8 + 0x406) = 1;
            uVar8 = iVar11 << 0xc | 0xe1a00000;
            puVar12 = *(uint **)(param_1 + 0x4ac);
            iVar11 = *(int *)(param_1 + 0x4d8);
          }
        }
        else {
          uVar8 = (uint)*(byte *)(param_1 + uVar21 + 0x480);
          if (uVar8 == 0xff) {
            iVar11 = *(int *)(param_1 + 0x4d8);
            *puVar12 = uVar21 * -4 + 0x54 | 0xe50b0000;
            *(uint **)(param_1 + 0x4ac) = puVar12 + 1;
            goto LAB_08083a7c;
          }
          iVar11 = *(int *)(param_1 + 0x4d8);
          uVar8 = uVar8 << 0xc | 0xe1a00000;
        }
        *puVar12 = uVar8;
        *(uint **)(param_1 + 0x4ac) = puVar12 + 1;
        goto LAB_08083a7c;
      }
    }
    iVar11 = 1 - uVar10;
    iVar17 = *(int *)(param_1 + 0x4b0);
    if (1 < uVar10) {
      iVar11 = 0;
    }
    if (uVar8 == 0xe) {
      iVar11 = 0;
    }
    if (iVar11 == 0) {
      uVar8 = uVar10 << 0xc | 0xe1a00000;
    }
    else {
      uVar8 = uVar21 * -4 + 0x54 | 0xe50b0000;
    }
    *puVar12 = uVar8;
    puVar13 = puVar12 + 2;
    puVar12[1] = ((int)puVar22 - (int)(puVar12 + 1) >> 2) - 2U & 0xffffff | 0xea000000;
    *(uint **)(param_1 + 0x4ac) = puVar13;
    iVar11 = (int)puVar13 - param_1 >> 2;
    iVar17 = iVar17 + iVar11 * -4;
    if (iVar11 != 0) {
      puVar13 = (uint *)0x0;
    }
    *(int *)(param_1 + 0x4b0) = iVar17;
    if (iVar11 != 0) {
      do {
        uVar8 = *(uint *)(param_1 + (int)puVar13);
        if ((uVar8 << 4) >> 0x1d == 5) {
          uVar8 = uVar8 + (param_1 - iVar17 >> 2) & 0xffffff | uVar8 & 0xff000000;
        }
        *(uint *)(iVar17 + (int)puVar13) = uVar8;
        puVar13 = puVar13 + 1;
      } while ((uint *)(iVar11 * 4) != puVar13);
    }
    uVar14 = *(undefined4 *)(param_1 + 0x4b4);
    iVar11 = *(int *)(param_1 + 0x4d8);
    *puVar20 = (iVar17 - (int)puVar20 >> 2) - 2U & 0xffffff | *puVar20 & 0xff000000;
    *(undefined4 *)(param_1 + 0x4ac) = uVar14;
  }
  else {
    if (param_6 != 0) {
      cVar3 = *(char *)(param_1 + 0x4f0);
      uVar7 = 0;
      goto LAB_08083d80;
    }
    if (((param_2 & 0x1200000) != 0x1000000) || (param_8 != 0)) goto LAB_08083728;
    cVar3 = *(char *)(param_1 + 0x4f0);
    if (cVar3 != '\x01') {
      uVar23 = (uint)(uVar10 == 0xd);
      if (uVar23 == 0) {
        uVar7 = 1;
        goto LAB_08083d80;
      }
      goto LAB_08083754;
    }
    iVar11 = *(int *)(*(int *)(param_1 + 0x4d8) + 4);
    if ((param_2 & 0x800000) == 0) {
      uVar7 = iVar11 - param_9;
    }
    else {
      uVar7 = param_9 + iVar11;
    }
    if ((0x3ffffff < uVar7) ||
       ((((param_5 == 0 || ((uVar7 & 1) != 0)) && (param_4 == 0)) && ((uVar7 & 3) != 0)))) {
      uVar23 = 1;
      if (uVar10 == 0xd) goto LAB_08083f64;
      goto LAB_08083d88;
    }
    if (uVar21 == 0xf) {
      uVar8 = (uint)*(byte *)(param_1 + 0x405);
      if (((uVar8 < 0xfd) &&
          (*(undefined *)(param_1 + 0x480 + uVar8) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
         (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar8 & 1U) != 0)) {
        uVar10 = (uVar8 + 0x3fffffeb) * 4;
        puVar18 = *(uint **)(param_1 + 0x4ac);
        if ((int)uVar10 < 0) {
          uVar10 = (uVar8 + 0x3fffffeb) * -4;
          uVar8 = 0;
        }
        else {
          uVar8 = 0x800000;
        }
        *puVar18 = uVar8 | 0xe50b0000 | uVar10;
        *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
      }
      uVar8 = 0;
      *(undefined *)(param_1 + 0x405) = 0xfd;
      *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | 1;
    }
    else {
      iVar11 = FUN_080800fc(param_1,uVar21,1,local_30);
      *(undefined *)(param_1 + iVar11 * 8 + 0x406) = 1;
      if ((uVar8 == 0xe) || (local_30[0] == 0)) {
        uVar8 = iVar11 << 0xc;
      }
      else {
        uVar8 = iVar11 << 0xc;
        puVar18 = *(uint **)(param_1 + 0x4ac);
        *puVar18 = uVar21 * -4 + 0x54 | 0xe51b0000 | uVar8;
        *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
      }
    }
    iVar11 = *(int *)(param_1 + 0x4e0);
    if (uVar7 < 0x2000000) {
      iVar17 = *(int *)(iVar11 + 0x2084);
      if (7 < *(byte *)(iVar17 + ((uVar7 << 0x11) >> 0x13) + 0x14b8020)) {
LAB_080849ac:
        if ((*(uint *)(iVar17 + (((uVar7 << 10) >> 0x11) + 0x52e800) * 4 + 0xe0) &
            1 << ((uVar7 << 0x19) >> 0x1b)) == 0) goto LAB_080849d4;
      }
      uVar7 = uVar7 + *(int *)(param_1 + 0x4e4);
      iVar11 = FUN_080800fc(param_1,0xfe,0,local_30);
      puVar18 = *(uint **)(param_1 + 0x4ac);
      *(uint *)(param_1 + (iVar11 + 0x80) * 8) = uVar7;
      puVar22 = puVar18 + 1;
      *puVar18 = uVar7 & 0xfff | 0xe3000000 | (uVar7 * 0x10000 >> 0x1c) << 0x10 | iVar11 << 0xc;
      *(uint **)(param_1 + 0x4ac) = puVar22;
      if (uVar7 >> 0x10 != 0) {
        puVar22 = puVar18 + 2;
        puVar18[1] = uVar7 >> 0x10 & 0xfff | (uVar7 >> 0x1c) << 0x10 | 0xe3400000 | iVar11 << 0xc;
        *(uint **)(param_1 + 0x4ac) = puVar22;
      }
      if (param_5 == 0) {
        if (param_4 == 0) {
          *puVar22 = uVar8 | param_2 & 0xf0000000 | 0x5900000 | iVar11 << 0x10;
          *(uint **)(param_1 + 0x4ac) = puVar22 + 1;
        }
        else {
          if (param_7 == 0) {
            uVar8 = uVar8 | param_2 & 0xf0000000 | 0x5d00000 | iVar11 << 0x10;
          }
          else {
            uVar8 = param_2 & 0xf0000000 | 0x1d000d0 | uVar8 | iVar11 << 0x10;
          }
          *puVar22 = uVar8;
          *(uint **)(param_1 + 0x4ac) = puVar22 + 1;
        }
      }
      else {
        if (param_7 == 0) {
          uVar10 = param_2 & 0xf0000000 | 0x1d000b0;
        }
        else {
          uVar10 = param_2 & 0xf0000000 | 0x1d000f0;
        }
        *puVar22 = uVar10 | uVar8 | iVar11 << 0x10;
        *(uint **)(param_1 + 0x4ac) = puVar22 + 1;
      }
    }
    else {
      if (uVar7 < 0x3000000) {
        iVar17 = *(int *)(iVar11 + 0x2084);
        goto LAB_080849ac;
      }
LAB_080849d4:
      if (param_5 == 0) {
        if (param_4 == 0) {
          FUN_08069a54(iVar11,uVar7,4);
          uVar10 = FUN_080101a4(iVar11 + 0x2380,uVar7);
        }
        else {
          FUN_08069a54(iVar11,uVar7 & 0xfffffffe,2);
          if (param_7 == 0) {
            uVar10 = FUN_0800fe98(iVar11 + 0x2380,uVar7);
          }
          else {
            cVar3 = FUN_0800fe98(iVar11 + 0x2380,uVar7);
            uVar10 = (uint)cVar3;
          }
        }
      }
      else {
        FUN_08069a54(iVar11,uVar7,2);
        if (param_7 == 0) {
          uVar10 = FUN_0801001c(iVar11 + 0x2380,uVar7);
        }
        else {
          sVar4 = FUN_0801001c(iVar11 + 0x2380,uVar7);
          uVar10 = (uint)sVar4;
        }
      }
      puVar18 = *(uint **)(param_1 + 0x4ac);
      *puVar18 = param_2 & 0xf0000000 | 0x3000000 | uVar8 | uVar10 & 0xfff |
                 ((uVar10 << 0x10) >> 0x1c) << 0x10;
      *(uint **)(param_1 + 0x4ac) = puVar18 + 1;
      if (uVar10 >> 0x10 != 0) {
        puVar18[1] = param_2 & 0xf0000000 | 0x3400000 | uVar8 | (uVar10 >> 0x1c) << 0x10 |
                     uVar10 >> 0x10 & 0xfff;
        *(uint **)(param_1 + 0x4ac) = puVar18 + 2;
      }
    }
    iVar11 = *(int *)(param_1 + 0x4d8);
    puVar18 = (uint *)0x0;
  }
LAB_08083a7c:
  if (*(short *)(iVar11 + 0x10) < 0) {
    if (*(char *)(param_1 + 0x4f0) != '\x01') {
      if (*(char *)(param_1 + 0x4f1) == '\0') {
        puVar15 = *(undefined4 **)(param_1 + 0x4ac);
        *puVar15 = 0xe3c00003;
        *(undefined4 **)(param_1 + 0x4ac) = puVar15 + 1;
      }
      else if (*(char *)(param_1 + 0x4f1) == '\x01') {
        puVar15 = *(undefined4 **)(param_1 + 0x4ac);
        *puVar15 = 0xe3800001;
        *(undefined4 **)(param_1 + 0x4ac) = puVar15 + 1;
      }
    }
    FUN_0807ff08(param_1);
    puVar22 = *(uint **)(param_1 + 0x4ac);
    *puVar22 = ((int)&LAB_0807b960 - (int)puVar22 >> 2) - 2U & 0xffffff | 0xea000000;
    *(uint **)(param_1 + 0x4ac) = puVar22 + 1;
  }
LAB_08083a88:
  if (puVar18 != (uint *)0x0) {
    *puVar18 = (*(int *)(param_1 + 0x4ac) - (int)puVar18 >> 2) - 2U & 0xffffff |
               *puVar18 & 0xff000000;
  }
  return;
}


