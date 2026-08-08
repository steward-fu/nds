/*
 * Ghidra decompilation
 *
 * Function : FUN_08097c38
 * Address  : 08097c38
 * Program  : drastic16
 */


uint FUN_08097c38(int *param_1,int param_2,code **param_3,int param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  char cVar16;
  bool bVar17;
  undefined8 uVar18;
  int local_120;
  int local_d8 [2];
  int local_d0 [2];
  int local_c8 [2];
  int local_c0 [2];
  uint local_b8 [2];
  uint local_b0 [2];
  uint local_a8 [2];
  uint local_a0 [2];
  uint local_98;
  int iStack_94;
  char *local_90;
  uint local_8c;
  char *local_88;
  uint local_84;
  int local_80;
  int iStack_7c;
  char *local_78;
  uint local_74;
  uint local_70;
  uint uStack_6c;
  char local_68;
  char local_67;
  char local_66;
  char local_65;
  char local_64;
  char local_63;
  char local_62;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_98 = 0;
  iStack_94 = 0;
  uVar2 = (**(code **)(param_2 + 0xc))(param_2,&local_98,1);
  if ((uVar2 != 0) || (uVar2 = FUN_08099638(param_2,&local_68,0x20,0x11), uVar2 != 0))
  goto LAB_08097c7c;
  if ((local_68 != DAT_08101c48) ||
     ((((local_67 != DAT_08101c49 || (local_66 != DAT_08101c4a)) || (local_65 != DAT_08101c4b)) ||
      ((local_64 != DAT_08101c4c || (local_63 != DAT_08101c4d)))))) goto LAB_08097e64;
  if (local_62 != '\0') {
    uVar2 = 4;
    goto LAB_08097c7c;
  }
  param_1[8] = local_98 + 0x20;
  param_1[9] = iStack_94 + (uint)(0xffffffdf < local_98);
  uVar2 = FUN_08097080(&local_5c,0x14);
  if (uVar2 != ((uint)local_5e << 0x10 | (uint)local_5f << 8 | (uint)local_60 |
               (uint)local_5d << 0x18)) {
    uVar2 = 3;
    goto LAB_08097c7c;
  }
  uVar8 = (uint)local_52 << 0x10 | (uint)local_53 << 8 | (uint)local_54 | (uint)local_51 << 0x18;
  if (((uint)local_4e << 0x10 | (uint)local_4f << 8 | (uint)local_50 | (uint)local_4d << 0x18) != 0)
  {
LAB_08097e5c:
    uVar2 = 2;
    goto LAB_08097c7c;
  }
  if (uVar8 == 0) {
    return 0;
  }
  uVar15 = (uint)local_56 << 0x10 | (uint)local_57 << 8 | (uint)local_58 | (uint)local_55 << 0x18;
  uVar9 = (uint)local_5a << 0x10 | (uint)local_5b << 8 | (uint)local_5c | (uint)local_59 << 0x18;
  uVar2 = uVar9 + uVar8;
  uVar10 = uVar15 + CARRY4(uVar9,uVar8);
  bVar17 = uVar10 <= uVar15;
  if (uVar15 == uVar10) {
    bVar17 = uVar2 <= uVar9;
  }
  if (bVar17 && (uVar15 != uVar10 || uVar9 != uVar2)) {
LAB_08097e64:
    uVar2 = 0x11;
    goto LAB_08097c7c;
  }
  uVar10 = uVar10 + (0xffffffdf < uVar2);
  bVar17 = uVar10 <= uVar15;
  if (uVar15 == uVar10) {
    bVar17 = uVar2 + 0x20 <= uVar9;
  }
  if (bVar17 && (uVar15 != uVar10 || uVar9 != uVar2 + 0x20)) goto LAB_08097e64;
  local_48 = 0;
  local_44 = 0;
  uVar2 = (**(code **)(param_2 + 0xc))(param_2,&local_48,2);
  if (uVar2 != 0) goto LAB_08097c7c;
  uVar2 = local_98 + uVar9;
  uVar9 = iStack_94 + uVar15 + (uint)CARRY4(local_98,uVar9);
  bVar17 = uVar9 <= local_44;
  if (local_44 == uVar9) {
    bVar17 = uVar2 <= local_48;
  }
  if (!bVar17) {
LAB_08097f84:
    uVar2 = 6;
    goto LAB_08097c7c;
  }
  uVar10 = uVar9 + (0xffffffdf < uVar2);
  bVar17 = uVar10 <= local_44;
  if (local_44 == uVar10) {
    bVar17 = uVar2 + 0x20 <= local_48;
  }
  if (!bVar17) goto LAB_08097f84;
  uVar9 = uVar9 + (0xffffffdf < uVar8) + (uint)CARRY4(uVar2,uVar8 + 0x20);
  bVar17 = uVar9 <= local_44;
  if (local_44 == uVar9) {
    bVar17 = uVar2 + uVar8 + 0x20 <= local_48;
  }
  if (!bVar17) goto LAB_08097f84;
  uVar2 = FUN_080995a8(param_2,local_44,uVar2 + 0x20,uVar10);
  if (uVar2 != 0) goto LAB_08097c7c;
  iVar3 = FUN_08096ff0(&local_90,uVar8,param_4);
  if (iVar3 == 0) goto LAB_08097e5c;
  uVar2 = FUN_080996b0(param_2,local_90,uVar8);
  if (uVar2 != 0) {
LAB_08097fd0:
    FUN_08097034(&local_90,param_4);
    goto LAB_08097c7c;
  }
  uVar2 = FUN_08097080(local_90,uVar8);
  if (((uint)local_4a << 0x10 | (uint)local_4b << 8 | (uint)local_4c | (uint)local_49 << 0x18) !=
      uVar2) {
    uVar2 = 0x10;
    goto LAB_08097fd0;
  }
  local_88 = local_90;
  local_84 = local_8c;
  uVar2 = FUN_08003878(&local_88,&local_80);
  if (uVar2 != 0) goto LAB_08097fd0;
  if (iStack_7c == 0 && local_80 == 0x17) {
    FUN_08096fe0(&local_78);
    uVar9 = param_1[8];
    iVar3 = param_1[9];
    local_b8[0] = uVar2;
    local_b0[0] = uVar2;
    local_a8[0] = uVar2;
    local_a0[0] = uVar2;
    local_48 = uVar2;
    local_44 = uVar2;
    local_40 = uVar2;
    local_3c = uVar2;
    local_38 = uVar2;
    local_34 = uVar2;
    local_30 = uVar2;
    local_2c = uVar2;
    uVar2 = FUN_08003c30(&local_88,&local_70,&local_48,local_b8,local_b0,local_a8,local_a0,param_4,
                         param_4);
    uVar8 = local_3c;
    if (uVar2 == 0) {
      uVar2 = local_70 + uVar9;
      uVar9 = uStack_6c + iVar3 + (uint)CARRY4(local_70,uVar9);
      local_70 = uVar2;
      uStack_6c = uVar9;
      if (local_30 == 1) {
        uVar18 = FUN_08097784(local_3c);
        uVar4 = (undefined4)uVar18;
        uVar2 = FUN_080995a8(param_2,(int)((ulonglong)uVar18 >> 0x20),uVar2,uVar9);
        if (uVar2 == 0) {
          iVar3 = FUN_08096ff0(&local_78,uVar4,param_4);
          if (iVar3 == 0) {
            uVar2 = 2;
          }
          else {
            uVar2 = FUN_080db948(uVar8,local_48,param_2,local_78,CONCAT44(uStack_6c,local_70),
                                 local_78,uVar4,param_4);
            if ((uVar2 == 0) && (*(int *)(uVar8 + 0x1c) != 0)) {
              iVar3 = FUN_08097080(local_78,uVar4);
              if (iVar3 == *(int *)(uVar8 + 0x20)) {
                uVar2 = 0;
              }
              else {
                uVar2 = 3;
              }
            }
          }
        }
      }
      else {
        uVar2 = 0x10;
      }
    }
    FUN_08097898(&local_48,param_4);
    (**(code **)(param_4 + 4))(param_4,local_b0[0]);
    (**(code **)(param_4 + 4))(param_4,local_a8[0]);
    (**(code **)(param_4 + 4))(param_4,local_a0[0]);
    if (uVar2 == 0) {
      FUN_08097034(&local_90,param_4);
      local_90 = local_78;
      local_88 = local_78;
      local_8c = local_74;
      local_84 = local_74;
      uVar2 = FUN_08003878(&local_88,&local_80);
      if (uVar2 == 0) goto LAB_0809804c;
    }
    else {
      FUN_08097034(&local_78,param_4);
    }
    goto LAB_08097fd0;
  }
LAB_0809804c:
  if (iStack_7c != 0 || local_80 != 1) {
    uVar2 = 4;
    goto LAB_08097fd0;
  }
  local_d8[0] = 0;
  local_d0[0] = 0;
  local_c8[0] = 0;
  local_c0[0] = 0;
  local_b8[0] = 0;
  local_b0[0] = 0;
  local_a8[0] = 0;
  local_a0[0] = 0;
  uVar8 = FUN_08003878(&local_88,&local_78);
  uVar2 = uVar8;
  if (uVar8 == 0) {
    if (local_74 == 0 && local_78 == (char *)0x2) {
      while( true ) {
        uVar2 = FUN_08003878(&local_88,&local_48);
        if (uVar2 != 0) break;
        if ((local_48 | local_44) == 0) {
          uVar2 = FUN_08003878(&local_88,&local_78);
          if (uVar2 == 0) goto LAB_080980a8;
          break;
        }
        FUN_08003988(&local_88);
      }
    }
    else {
LAB_080980a8:
      if (local_74 == 0 && local_78 == (char *)0x4) {
        uVar2 = FUN_08003c30(&local_88,param_1 + 10,param_1,local_a8,local_d8,local_d0,local_c8,
                             param_3,param_4);
        if (uVar2 == 0) {
          uVar2 = param_1[10];
          param_1[10] = param_1[8] + uVar2;
          param_1[0xb] = param_1[9] + param_1[0xb] + (uint)CARRY4(param_1[8],uVar2);
          uVar2 = FUN_08003878(&local_88,&local_78);
          if (uVar2 == 0) goto LAB_080980b4;
        }
      }
      else {
LAB_080980b4:
        uVar2 = uVar8;
        if (((uint)local_78 | local_74) != 0) {
          if (local_74 == 0 && local_78 == (char *)0x5) {
            uVar8 = FUN_08003948(&local_88,local_a0);
            uVar2 = uVar8;
            if (uVar8 == 0) {
              param_1[7] = local_a0[0];
              if (local_a0[0] == 0) {
                iVar3 = 0;
LAB_0809829c:
                uVar2 = 0;
                param_1[4] = iVar3;
                iVar5 = iVar3;
                while( true ) {
                  bVar17 = uVar2 == local_a0[0];
                  uVar2 = uVar2 + 1;
                  if (bVar17) break;
                  *(undefined *)(iVar5 + 0x18) = 1;
                  *(undefined *)(iVar5 + 0x19) = 0;
                  *(undefined *)(iVar5 + 0x1a) = 0;
                  *(undefined *)(iVar5 + 0x1b) = 0;
                  *(undefined *)(iVar5 + 0x1c) = 0;
                  iVar5 = iVar5 + 0x20;
                }
                local_120 = 0;
LAB_08098454:
                while( true ) {
                  uVar2 = FUN_08003878(&local_88,&local_70);
                  if (uVar2 != 0) goto LAB_080980cc;
                  if ((local_70 | uStack_6c) == 0) {
                    iVar5 = 0;
                    iVar13 = 0;
                    uVar2 = 0;
                    goto LAB_08098574;
                  }
                  uVar2 = FUN_08003878(&local_88,&local_48);
                  if (uVar2 != 0) goto LAB_080980cc;
                  bVar17 = local_44 == 0;
                  if (local_44 == 0) {
                    bVar17 = local_48 <= local_84;
                  }
                  if (!bVar17) goto LAB_080980c8;
                  if (uStack_6c == (int)local_70 >> 0x1f) break;
switchD_08098504_caseD_10:
                  local_84 = local_84 - local_48;
                  local_88 = local_88 + local_48;
                }
                switch(local_70) {
                case 0xe:
                  uVar2 = FUN_08003a44(&local_88,local_a0[0],local_c0,param_4);
                  if (uVar2 != 0) goto LAB_080980cc;
                  local_120 = 0;
                  uVar2 = 0;
                  while (uVar2 != local_a0[0]) {
                    pcVar7 = (char *)(local_c0[0] + uVar2);
                    uVar2 = uVar2 + 1;
                    if (*pcVar7 != '\0') {
                      local_120 = local_120 + 1;
                    }
                  }
                  goto LAB_08098454;
                case 0xf:
                  goto switchD_08098504_caseD_f;
                default:
                  goto switchD_08098504_caseD_10;
                case 0x11:
                  if (local_84 == 0) goto LAB_080980c8;
                  local_84 = local_84 - 1;
                  pcVar7 = local_88 + 1;
                  cVar16 = *local_88;
                  local_88 = pcVar7;
                  if (cVar16 == '\0') {
                    uVar2 = local_48 - 1;
                    if ((uVar2 & 1) != 0) goto LAB_080980c8;
                    iVar5 = FUN_08096ff0(param_1 + 0x11,uVar2,param_3);
                    if (iVar5 == 0) goto LAB_080984f4;
                    if (local_a0[0] == 0xffffffff) {
                      param_1[0x10] = 0;
                    }
                    else {
                      iVar5 = (**param_3)(param_3,(local_a0[0] + 1) * 4);
                      param_1[0x10] = iVar5;
                      if (iVar5 == 0) goto LAB_080984f4;
                    }
                    memcpy((void *)param_1[0x11],local_88,uVar2);
                    uVar10 = 0;
                    iVar5 = param_1[0x10];
                    for (uVar9 = 0; uVar9 != local_a0[0]; uVar9 = uVar9 + 1) {
                      *(uint *)(iVar5 + uVar9 * 4) = uVar10;
                      pcVar7 = local_88 + uVar10 * 2 + 1;
                      while( true ) {
                        if (uVar2 >> 1 <= uVar10) goto LAB_080980c8;
                        uVar10 = uVar10 + 1;
                        if ((pcVar7[-1] == '\0') && (*pcVar7 == '\0')) break;
                        pcVar7 = pcVar7 + 2;
                      }
                    }
                    *(uint *)(iVar5 + uVar9 * 4) = uVar10;
                    if ((uVar2 >> 1 != uVar10) || (local_84 < uVar2)) goto LAB_080980c8;
                    local_84 = local_84 - uVar2;
                    local_88 = local_88 + uVar2;
                    goto LAB_08098454;
                  }
                  break;
                case 0x14:
                  uVar2 = FUN_08003af8(&local_88,local_a0[0],local_b0,param_4);
                  if (uVar2 != 0) goto LAB_080980cc;
                  if (local_84 == 0) goto LAB_080980c8;
                  local_84 = local_84 - 1;
                  pcVar7 = local_88 + 1;
                  cVar16 = *local_88;
                  local_88 = pcVar7;
                  if (cVar16 == '\0') {
                    puVar14 = (undefined4 *)(iVar3 + 4);
                    uVar9 = 0;
                    while (uVar9 < local_a0[0]) {
                      cVar16 = *(char *)(local_b0[0] + uVar9);
                      uVar9 = uVar9 + 1;
                      *puVar14 = 0;
                      puVar14[-1] = 0;
                      *(char *)(puVar14 + 6) = cVar16;
                      if (cVar16 != '\0') {
                        uVar2 = FUN_08003820(&local_88,puVar14 + -1);
                        if ((uVar2 != 0) || (uVar2 = FUN_08003820(&local_88,puVar14), uVar2 != 0))
                        goto LAB_080980cc;
                      }
                      puVar14 = puVar14 + 8;
                    }
LAB_080986b0:
                    (**(code **)(param_4 + 4))(param_4,local_b0[0]);
                    local_b0[0] = 0;
                    goto LAB_08098454;
                  }
                  break;
                case 0x15:
                  uVar2 = FUN_08003af8(&local_88,local_a0[0],local_b0,param_4);
                  if (uVar2 != 0) goto LAB_080980cc;
                  if (local_84 == 0) goto LAB_080980c8;
                  local_84 = local_84 - 1;
                  pcVar7 = local_88 + 1;
                  cVar16 = *local_88;
                  local_88 = pcVar7;
                  if (cVar16 == '\0') {
                    puVar14 = (undefined4 *)(iVar3 + 0x14);
                    uVar9 = 0;
                    while (uVar9 < local_a0[0]) {
                      cVar16 = *(char *)(local_b0[0] + uVar9);
                      uVar9 = uVar9 + 1;
                      *puVar14 = 0;
                      *(char *)((int)puVar14 + 9) = cVar16;
                      if ((cVar16 != '\0') && (uVar2 = FUN_08003820(&local_88,puVar14), uVar2 != 0))
                      goto LAB_080980cc;
                      puVar14 = puVar14 + 8;
                    }
                    goto LAB_080986b0;
                  }
                }
                uVar2 = 4;
                goto LAB_080980cc;
              }
              iVar3 = (**param_3)(param_3,local_a0[0] << 5);
              if (iVar3 != 0) goto LAB_0809829c;
              goto LAB_080984f4;
            }
          }
          else {
LAB_080980c8:
            uVar2 = 0x10;
          }
        }
      }
    }
  }
LAB_080980cc:
  (**(code **)(param_4 + 4))(param_4,local_d8[0]);
  (**(code **)(param_4 + 4))(param_4,local_d0[0]);
  (**(code **)(param_4 + 4))(param_4,local_c8[0]);
  (**(code **)(param_4 + 4))(param_4,local_c0[0]);
  (**(code **)(param_4 + 4))(param_4,local_b8[0]);
  (**(code **)(param_4 + 4))(param_4,local_b0[0]);
  FUN_08097034(&local_90,param_4);
  if (uVar2 == 0) {
    return 0;
  }
LAB_08097c7c:
  FUN_080979a8(param_1,param_3);
  return uVar2;
LAB_08098574:
  if (uVar2 == local_a0[0]) goto LAB_080986e0;
  *(undefined *)(iVar3 + 0x1a) = 0;
  if (local_c0[0] == 0) {
    *(undefined *)(iVar3 + 0x18) = 1;
LAB_080985a4:
    *(undefined *)(iVar3 + 0x19) = 0;
    *(undefined8 *)(iVar3 + 8) = *(undefined8 *)(local_d8[0] + iVar5 * 8);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(local_c8[0] + iVar5 * 4);
    puVar1 = (undefined *)(local_d0[0] + iVar5);
    iVar5 = iVar5 + 1;
    *(undefined *)(iVar3 + 0x1b) = *puVar1;
  }
  else {
    iVar11 = 1 - (uint)*(byte *)(local_c0[0] + uVar2);
    if (1 < *(byte *)(local_c0[0] + uVar2)) {
      iVar11 = 0;
    }
    *(char *)(iVar3 + 0x18) = (char)iVar11;
    if (iVar11 != 0) goto LAB_080985a4;
    cVar16 = local_b8[0] == 0;
    if ((!(bool)cVar16) &&
       (cVar16 = '\x01' - *(byte *)(local_b8[0] + iVar13), 1 < *(byte *)(local_b8[0] + iVar13))) {
      cVar16 = '\0';
    }
    *(char *)(iVar3 + 0x19) = cVar16;
    iVar13 = iVar13 + 1;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(uint *)(iVar3 + 8) = local_70;
    *(uint *)(iVar3 + 0xc) = uStack_6c;
    *(undefined *)(iVar3 + 0x1b) = 0;
  }
  uVar2 = uVar2 + 1;
  iVar3 = iVar3 + 0x20;
  goto LAB_08098574;
LAB_080986e0:
  if (param_1[6] == 0) {
    param_1[0xc] = 0;
    uVar2 = 0;
LAB_080986f0:
    iVar3 = 0;
    for (uVar9 = 0; uVar9 < uVar2; uVar9 = uVar9 + 1) {
      iVar5 = param_1[3];
      *(int *)(param_1[0xc] + uVar9 * 4) = iVar3;
      uVar2 = param_1[6];
      iVar3 = iVar3 + *(int *)(uVar9 * 0x28 + iVar5 + 0x18);
    }
    if (param_1[5] == 0) {
      param_1[0xd] = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = (**param_3)(param_3,param_1[5] << 3);
      param_1[0xd] = iVar3;
      if (iVar3 == 0) goto LAB_080984f4;
      uVar2 = param_1[6];
      iVar3 = param_1[5];
    }
    uVar18 = 0;
    iVar5 = 0;
    while( true ) {
      bVar17 = iVar5 == iVar3;
      iVar13 = iVar5 * 8;
      iVar5 = iVar5 + 1;
      if (bVar17) break;
      iVar11 = *param_1;
      *(undefined8 *)(param_1[0xd] + iVar13) = uVar18;
      uVar18 = VectorAdd(uVar18,*(undefined8 *)(iVar11 + iVar13),8);
    }
    if (uVar2 == 0) {
      param_1[0xe] = 0;
    }
    else {
      iVar3 = (**param_3)(param_3,uVar2 << 2);
      param_1[0xe] = iVar3;
      if (iVar3 == 0) goto LAB_080984f4;
    }
    if (param_1[7] == 0) {
      param_1[0xf] = 0;
      uVar9 = 0;
    }
    else {
      iVar3 = (**param_3)(param_3,param_1[7] << 2);
      param_1[0xf] = iVar3;
      if (iVar3 == 0) goto LAB_080984f4;
      uVar9 = param_1[7];
    }
    uVar10 = 0;
    uVar12 = 0;
    for (uVar15 = 0; uVar2 = uVar8, uVar15 < uVar9; uVar15 = uVar15 + 1) {
      uVar2 = 1 - uVar10;
      if (1 < uVar10) {
        uVar2 = 0;
      }
      uVar9 = (uint)*(byte *)(param_1[4] + uVar15 * 0x20 + 0x18);
      uVar6 = 1 - uVar9;
      if (1 < uVar9) {
        uVar6 = 0;
      }
      if ((uVar2 & uVar6) == 0) {
        if (uVar2 != 0) {
          iVar5 = uVar12 * 0x28;
          iVar3 = uVar12 << 2;
          while( true ) {
            if ((uint)param_1[6] <= uVar12) goto LAB_080980c8;
            iVar13 = param_1[3] + iVar5;
            iVar5 = iVar5 + 0x28;
            *(uint *)(param_1[0xe] + iVar3) = uVar15;
            iVar3 = iVar3 + 4;
            if (*(int *)(iVar13 + 0x24) != 0) break;
            uVar12 = uVar12 + 1;
          }
        }
        *(uint *)(param_1[0xf] + uVar15 * 4) = uVar12;
        if ((uVar6 == 0) &&
           (uVar10 = uVar10 + 1, *(uint *)(uVar12 * 0x28 + param_1[3] + 0x24) <= uVar10)) {
          uVar12 = uVar12 + 1;
          uVar10 = 0;
        }
      }
      else {
        uVar10 = 0;
        *(undefined4 *)(param_1[0xf] + uVar15 * 4) = 0xffffffff;
      }
      uVar9 = param_1[7];
    }
  }
  else {
    iVar3 = (**param_3)(param_3,param_1[6] << 2);
    param_1[0xc] = iVar3;
    if (iVar3 != 0) {
      uVar2 = param_1[6];
      goto LAB_080986f0;
    }
LAB_080984f4:
    uVar2 = 2;
  }
  goto LAB_080980cc;
switchD_08098504_caseD_f:
  uVar2 = FUN_08003a44(&local_88,local_120,local_b8,param_4);
  if (uVar2 != 0) goto LAB_080980cc;
  goto LAB_08098454;
}


