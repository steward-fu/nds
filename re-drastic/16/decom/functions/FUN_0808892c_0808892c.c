/*
 * Ghidra decompilation
 *
 * Function : FUN_0808892c
 * Address  : 0808892c
 * Program  : drastic16
 */


int * FUN_0808892c(int param_1,int param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  undefined auStack_524 [4];
  undefined auStack_520 [1028];
  undefined local_11c;
  byte local_11b;
  char local_11a;
  undefined local_114;
  undefined local_113;
  undefined local_112;
  undefined local_10c;
  undefined local_10b;
  undefined local_10a;
  undefined local_104;
  undefined local_103;
  undefined local_102;
  undefined local_fc;
  undefined local_fb;
  undefined local_fa;
  undefined local_f4;
  undefined local_f3;
  undefined local_f2;
  undefined local_ec;
  undefined local_eb;
  undefined local_ea;
  undefined local_e4;
  undefined local_e3;
  undefined local_e2;
  undefined local_dc;
  undefined local_db;
  undefined local_da;
  undefined local_d4;
  undefined local_d3;
  undefined local_d2;
  undefined local_cc;
  undefined local_cb;
  undefined local_ca;
  undefined local_c4;
  undefined local_c3;
  undefined local_c2;
  undefined local_bc;
  undefined local_bb;
  undefined local_ba;
  undefined local_b4;
  undefined local_b3;
  undefined local_b2;
  undefined local_ac;
  undefined local_ab;
  undefined local_aa;
  undefined local_a4;
  undefined local_a3;
  undefined local_a2;
  undefined local_a0 [4];
  undefined local_9c;
  undefined local_9b;
  undefined local_9a;
  undefined local_99;
  undefined local_98;
  undefined local_97;
  undefined local_96;
  undefined local_95;
  undefined local_94;
  undefined local_93;
  undefined local_92;
  undefined local_91;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  ushort local_84;
  int local_80;
  uint local_7c;
  uint local_78;
  uint *local_74;
  int iStack_70;
  int local_68;
  int local_64;
  int local_60;
  int *local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  char local_30;
  byte local_2f;
  
  iVar14 = *(int *)(param_2 + 0x2084);
  uVar15 = (uint)*(byte *)(param_1 + 0x1d);
  if (param_4 != 0) {
    uVar15 = uVar15 | 1;
  }
  local_30 = *(char *)(param_2 + 0x2104);
  if ((local_30 == '\x01') && (param_3 < 0x2000000)) {
    uVar8 = 8;
    uVar16 = 0xc;
    bVar4 = true;
  }
  else {
    bVar4 = false;
    if (param_3 >> 0x18 == 2) {
      uVar8 = 0;
      uVar16 = 4;
    }
    else {
      uVar8 = 0x10;
      uVar16 = 0x14;
    }
  }
  iVar17 = *(int *)(iVar14 + (uVar16 | 0x1420000));
  piVar9 = *(int **)(iVar14 + (uVar8 | 0x1420000));
  iVar5 = iVar17 + -0x18;
  local_44 = *(undefined4 *)(param_1 + 8);
  local_3c = *(uint *)(*(int *)(param_2 + 0x230c) + 0xfc80c);
  local_2f = (byte)param_4;
  piVar10 = piVar9 + 1;
  local_7c = 1;
  local_38 = local_3c;
  local_80 = iVar14;
  local_4c = param_1;
  local_40 = param_2;
  if (0xff < local_3c) {
    if ((local_3c & 3) == 0) {
      iVar11 = 0;
      do {
        local_38 = local_38 >> 2;
        iVar11 = iVar11 + 2;
        if (local_38 < 0x100) {
          local_34 = 0x20U - iVar11 >> 1;
          goto LAB_08088a4c;
        }
      } while ((local_38 & 3) == 0);
    }
    iStack_70 = iVar5;
    printf("ERROR: memory_map_offset %x doesn\'t work as an ARM immediate!\n");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_34 = 0x10;
LAB_08088a4c:
  local_11c = 0xff;
  local_11b = 0xff;
  local_114 = 0xff;
  local_113 = 0xff;
  local_99 = 0xff;
  local_98 = 0xff;
  local_97 = 0xff;
  local_cc = 0xff;
  local_cb = 0xff;
  local_96 = 0xff;
  local_c4 = 0xff;
  local_c3 = 0xff;
  local_95 = 0xff;
  local_ac = 0xff;
  local_ab = 0xff;
  local_a4 = 0xff;
  local_a3 = 0xff;
  local_91 = 0xff;
  local_11a = '\0';
  local_112 = 0;
  local_ca = 0;
  local_c2 = 0;
  local_aa = 0;
  local_a2 = 0;
  local_10c = 0;
  local_10b = 0;
  local_10a = 1;
  local_104 = 1;
  local_a0[0] = 2;
  local_103 = 1;
  local_102 = 1;
  local_fc = 2;
  local_fb = 2;
  local_fa = 1;
  local_f2 = 1;
  local_ea = 1;
  local_e2 = 1;
  local_da = 1;
  local_d2 = 1;
  local_ba = 1;
  local_b2 = 1;
  local_a0[1] = 3;
  local_f4 = 3;
  local_f3 = 3;
  local_a0[2] = 4;
  local_ec = 4;
  local_eb = 4;
  local_9c = 6;
  local_dc = 6;
  local_db = 6;
  local_9b = 7;
  local_9a = 8;
  local_d4 = 0xc;
  local_d3 = 0xc;
  local_93 = 0xc;
  local_bc = 0xd;
  local_bb = 0xd;
  local_b4 = 0xe;
  local_b3 = 0xe;
  local_a0[3] = 5;
  local_e4 = 5;
  local_e3 = 5;
  local_94 = 9;
  local_92 = 0xd;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_54 = 0;
  if (*(char *)(param_1 + 0x1e) == '\0') {
    if (local_30 == '\x01') {
      local_54 = 2;
    }
    else {
      local_54 = 4;
    }
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x14);
  if (uVar8 == 0) {
    iStack_70 = 0;
    local_68 = 0;
  }
  else {
    iVar11 = *(int *)(param_1 + 4);
    iVar12 = 0;
    local_68 = 0;
    do {
      pbVar1 = (byte *)(iVar11 + 0x16);
      iVar12 = iVar12 + 0x1c;
      iVar11 = iVar11 + 0x1c;
      if ((*pbVar1 & 4) != 0) {
        local_68 = local_68 + 1;
      }
    } while (iVar12 != uVar8 * 0x1c);
    iStack_70 = local_68 * -4;
  }
  iStack_70 = iVar5 + iStack_70;
  piVar9[1] = -0x1ee5fff6;
  if (local_30 == '\x01') {
    piVar9[2] = (0x807b9d0 - (int)(piVar9 + 2) >> 2) - 2U & 0xffffff | 0x4b000000;
  }
  else {
    piVar9[2] = (0x807ba70 - (int)(piVar9 + 2) >> 2) - 2U & 0xffffff | 0x4b000000;
  }
  local_74 = (uint *)(piVar9 + 3);
  uVar16 = param_3;
  local_64 = iStack_70;
  local_60 = iStack_70;
  local_5c = piVar10;
  local_58 = param_3;
  if (uVar8 != 0) {
    iVar11 = 0;
    uVar8 = 0;
    do {
      local_84 = 0x8c00;
      iVar12 = *(int *)(param_1 + 4) + iVar11;
      if (*(char *)(param_2 + 0x2104) == '\x01') {
        local_54 = *(int *)(*(int *)(local_40 + 0x2308) + 0x2916458) + local_54 +
                   (uint)*(byte *)(iVar12 + 0x17);
      }
      else {
        local_54 = (short)(ushort)*(byte *)(iVar12 + 0x17) * 2 + local_54;
      }
      uVar3 = *(ushort *)(iVar12 + 0x10);
      *(ushort *)(iVar12 + 0x12) = uVar3 | *(ushort *)(iVar12 + 0xe) | *(ushort *)(iVar12 + 0x12);
      local_48 = iVar12;
      if ((*(byte *)(iVar12 + 0x16) & 2) != 0) {
        bVar2 = *(byte *)(iVar12 + 0x15);
        uVar20 = bVar2 & local_7c;
        local_50 = uVar16;
        if ((uVar20 & 0xfffffffe & local_78) != 0) {
          uVar21 = local_7c & 0xfffffffe;
          uVar6 = FUN_080800fc(auStack_520,0xfd,1,auStack_524);
          if ((bVar2 & 0xfffffffe & ~uVar21) == 0) {
            puVar7 = local_74 + 1;
            *local_74 = uVar6 << 0xc | 0xe3a00000;
          }
          else {
            local_74[1] = uVar20 & 0xfffffffe | 0xe3c00200 | uVar6 << 0xc | uVar6 << 0x10;
            puVar7 = local_74 + 2;
            *local_74 = uVar6 << 0xc | 0xe51b0080;
          }
          uVar21 = uVar6 << 0xc;
          puVar18 = puVar7;
          if ((uVar20 & 2) != 0) {
            puVar18 = puVar7 + 1;
            *puVar7 = uVar6 << 0x10 | 0x23800202 | uVar21;
          }
          puVar7 = puVar18;
          if ((uVar20 & 4) != 0) {
            puVar7 = puVar18 + 1;
            *puVar18 = uVar6 << 0x10 | 0x3800204 | uVar21;
          }
          puVar18 = puVar7;
          if ((uVar20 & 8) != 0) {
            puVar18 = puVar7 + 1;
            *puVar7 = uVar6 << 0x10 | 0x43800208 | uVar21;
          }
          local_74 = puVar18 + 1;
          *puVar18 = uVar21 | 0xe50b0080;
          local_84 = local_84 & ~(ushort)(1 << (uVar6 & 0xff));
        }
        local_7c = 1;
        local_78 = 0;
        FUN_0807ff08(auStack_520);
        uVar3 = *(ushort *)(iVar12 + 0x10);
      }
      *(uint **)(iVar12 + 8) = local_74;
      if ((uVar3 & 0x8000) != 0) {
        puVar7 = local_74;
        if (0xff < local_54) {
          puVar7 = local_74 + 1;
          *local_74 = local_54 >> 8 | 0xe24aac00;
        }
        local_74 = puVar7 + 1;
        *puVar7 = local_54 & 0xff | 0xe24aa000;
        local_54 = 0;
      }
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + 0x1c;
      if (param_4 == 0) {
        uVar16 = uVar16 + 4;
      }
      else {
        uVar16 = uVar16 + 2;
      }
      local_50 = uVar16;
      FUN_08086408(auStack_520);
    } while (uVar8 < *(ushort *)(param_1 + 0x14));
  }
  local_84 = 0x8c00;
  switch(*(undefined *)(param_1 + 0x1e)) {
  case 1:
  case 2:
    uVar8 = (uint)local_11b;
    if (((uVar8 < 0xfd) && (local_a0[uVar8] = 0xff, local_11a != '\0')) &&
       (((int)(uint)*(ushort *)(local_48 + 0x12) >> uVar8 & 1U) != 0)) {
      uVar20 = (uVar8 + 0x3fffffeb) * 4;
      if ((int)uVar20 < 0) {
        uVar20 = (uVar8 + 0x3fffffeb) * -4;
        uVar8 = 0;
      }
      else {
        uVar8 = 0x800000;
      }
      *local_74 = uVar8 | 0xe50b0000 | uVar20;
      local_74 = local_74 + 1;
    }
    local_11b = 0xfd;
    *local_74 = uVar16 & 0xfff | (uint)local_2f | 0xe3000000 | ((uVar16 << 0x10) >> 0x1c) << 0x10;
    puVar7 = local_74 + 1;
    if (uVar16 >> 0x10 != 0) {
      local_74[1] = uVar16 >> 0x10 & 0xfff | (uVar16 >> 0x1c) << 0x10 | 0xe3400000;
      puVar7 = local_74 + 2;
    }
    local_74 = puVar7;
    FUN_0807ff08(auStack_520);
    puVar13 = &LAB_0807b960;
    break;
  case 3:
    puVar7 = local_74;
    if (0xff < local_54) {
      puVar7 = local_74 + 1;
      *local_74 = local_54 >> 8 | 0xe24aac00;
    }
    local_74 = puVar7 + 1;
    *puVar7 = local_54 & 0xff | 0xe24aa000;
    local_54 = 0;
    FUN_0808085c(auStack_520,0xe);
    goto switchD_08088ee0_caseD_4;
  case 4:
    *local_74 = uVar16 & 0xfff | 0xe3000000 | ((uVar16 << 0x10) >> 0x1c) << 0x10;
    puVar7 = local_74 + 1;
    if (uVar16 >> 0x10 != 0) {
      local_74[1] = uVar16 >> 0x10 & 0xfff | (uVar16 >> 0x1c) << 0x10 | 0xe3400000;
      puVar7 = local_74 + 2;
    }
    local_74 = puVar7;
    puVar13 = &LAB_0807b898;
    break;
  default:
    goto switchD_08088ee0_caseD_4;
  }
  *local_74 = ((int)puVar13 - (int)local_74 >> 2) - 2U & 0xffffff | 0xea000000;
  local_74 = local_74 + 1;
switchD_08088ee0_caseD_4:
  *piVar9 = iVar5;
  *(int **)(iVar17 + -0x10) = piVar10;
  *(uint *)(iVar17 + -0x14) = param_4 | param_3;
  *(undefined4 *)(iVar17 + -0x18) = 0;
  *(undefined2 *)(iVar17 + -0xc) = *(undefined2 *)(param_1 + 0x1a);
  *(ushort *)(iVar17 + -10) = (ushort)*(byte *)(param_1 + 0x1c);
  uVar3 = *(ushort *)(param_1 + 0x16);
  *(short *)(iVar17 + -6) = (short)local_74 - (short)piVar10;
  *(ushort *)(iVar17 + -8) = (ushort)(((uint)uVar3 << 0x14) >> 0x14) | (ushort)(uVar15 << 0xc);
  *(int *)(iVar17 + -4) = local_64;
  if (bVar4) {
    *(ulonglong *)(iVar14 + 0x1420008) = CONCAT44(iStack_70,local_74);
  }
  else {
    if (param_3 >> 0x18 == 2) {
      puVar19 = (undefined8 *)(iVar14 + 0x1420000);
    }
    else {
      puVar19 = (undefined8 *)(iVar14 + 0x1420010);
    }
    *puVar19 = CONCAT44(iStack_70,local_74);
  }
  uVar3 = *(ushort *)(param_1 + 0x18);
  if (uVar3 != 0) {
    iVar17 = *(int *)(param_1 + 8);
    iVar5 = 0;
    iVar14 = iVar17;
    do {
      if (*(ushort *)(iVar14 + 0x1a) != 0) {
        puVar7 = *(uint **)(iVar17 + iVar5 + 4);
        *puVar7 = (*(int *)(*(int *)(param_1 + 4) + (uint)*(ushort *)(iVar14 + 0x1a) * 0x1c + 8) -
                   (int)puVar7 >> 2) - 2U & 0xffffff | *puVar7 & 0xff000000;
      }
      iVar5 = iVar5 + 0x1c;
      iVar14 = iVar14 + 0x1c;
    } while (iVar5 != (uint)uVar3 * 0x1c);
  }
  return piVar10;
}


