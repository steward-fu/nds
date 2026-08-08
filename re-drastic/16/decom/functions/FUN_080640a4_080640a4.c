/*
 * Ghidra decompilation
 *
 * Function : FUN_080640a4
 * Address  : 080640a4
 * Program  : drastic16
 */


undefined4 FUN_080640a4(int *param_1)

{
  char **ppcVar1;
  bool bVar2;
  ulonglong uVar3;
  int *__ptr;
  size_t sVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *puVar15;
  uint *__dest;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  char cVar21;
  char *pcVar22;
  bool bVar23;
  undefined8 uVar24;
  uint local_8e8;
  uint *local_8e4;
  int local_8dc;
  uint local_8d0;
  size_t local_8c4;
  char local_8c0 [8];
  int local_8b8;
  undefined4 local_8b4;
  undefined4 local_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 local_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 local_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined local_880;
  uint local_830;
  int iStack_82c;
  undefined local_7f0;
  undefined uStack_7e9;
  
  uVar24 = 0;
  bVar2 = false;
  local_8d0 = 0;
  iVar20 = *param_1;
  local_8e8 = 0;
  iVar10 = *(int *)(iVar20 + 0x5ec);
  iVar7 = *(int *)(iVar20 + 0x5f0);
  FUN_08077374();
  FUN_080771cc();
  uVar19 = 0;
  local_8c4 = 0;
  local_8dc = 0;
  __ptr = (int *)malloc((iVar10 + iVar7) * 0xc);
LAB_08064118:
  local_8b0._0_1_ = 'B';
  local_8b0._1_1_ = ':';
  local_8b0._2_1_ = ' ';
  local_8b0._3_1_ = 't';
  uStack_8ac._0_1_ = 'o';
  uStack_8ac._1_1_ = 'g';
  uStack_8ac._2_1_ = 'g';
  uStack_8ac._3_1_ = 'l';
  uStack_8a8._0_1_ = 'e';
  uStack_8a8._1_1_ = ' ';
  uStack_8a8._2_1_ = 'c';
  uStack_8a8._3_1_ = 'h';
  uStack_8a4._0_1_ = 'e';
  uStack_8a4._1_1_ = 'a';
  uStack_8a4._2_1_ = 't';
  uStack_8a4._3_1_ = '/';
  local_8a0._0_1_ = 'f';
  local_8a0._1_1_ = 'o';
  local_8a0._2_1_ = 'l';
  local_8a0._3_1_ = 'd';
  uStack_89c._0_1_ = 'e';
  uStack_89c._1_1_ = 'r';
  uStack_89c._2_1_ = ' ';
  uStack_89c._3_1_ = ' ';
  uStack_898._0_1_ = ' ';
  uStack_898._1_1_ = ' ';
  uStack_898._2_1_ = 'X';
  uStack_898._3_1_ = ':';
  uStack_894._0_1_ = ' ';
  uStack_894._1_1_ = 'r';
  uStack_894._2_1_ = 'e';
  uStack_894._3_1_ = 't';
  local_890._0_1_ = 'u';
  local_890._1_1_ = 'r';
  local_890._2_1_ = 'n';
  local_890._3_1_ = ' ';
  uStack_88c._0_1_ = 't';
  uStack_88c._1_1_ = 'o';
  uStack_88c._2_1_ = ' ';
  uStack_88c._3_1_ = 'm';
  uStack_888._0_1_ = 'a';
  uStack_888._1_1_ = 'i';
  uStack_888._2_1_ = 'n';
  uStack_888._3_1_ = ' ';
  uStack_884._0_1_ = 'm';
  uStack_884._1_1_ = 'e';
  uStack_884._2_1_ = 'n';
  uStack_884._3_1_ = 'u';
  local_880 = 0;
  FUN_08079b48();
  if (*(int *)(iVar20 + 0x5f0) == 0) {
    uVar18 = 0;
  }
  else {
    iVar8 = *(int *)(iVar20 + 0x5e4);
    piVar12 = (int *)0x0;
    iVar16 = iVar8 + *(int *)(iVar20 + 0x5f0) * 0x18;
    iVar10 = 0;
    uVar18 = 0;
    bVar23 = false;
    piVar6 = __ptr;
    iVar7 = -1;
    do {
      while (iVar5 = *(int *)(iVar8 + 0x10), iVar5 != iVar7) {
        if (iVar5 != -1) {
          uVar18 = uVar18 + 1;
          bVar23 = true;
          iVar10 = *(int *)(iVar20 + 0x5e8) + iVar5 * 0x14;
          piVar6[2] = 0;
          pcVar22 = *(char **)(iVar10 + 0xc);
          *piVar6 = iVar10;
          cVar21 = *pcVar22;
          if (cVar21 == '\0') {
            iVar7 = 2;
          }
          else {
            iVar7 = 1;
          }
          piVar6[1] = iVar7;
          piVar12 = piVar6;
          piVar6 = piVar6 + 3;
          goto LAB_080641d4;
        }
LAB_08064220:
        *piVar6 = iVar8;
        iVar8 = iVar8 + 0x18;
        piVar6[1] = 0;
        uVar18 = uVar18 + 1;
        piVar6 = piVar6 + 3;
        bVar23 = false;
        iVar7 = iVar5;
        if (iVar8 == iVar16) goto LAB_08064248;
      }
      if (!bVar23) goto LAB_08064220;
      cVar21 = **(char **)(iVar10 + 0xc);
LAB_080641d4:
      if (cVar21 != '\0') {
        *piVar6 = iVar8;
        piVar6[1] = 0;
        piVar6 = piVar6 + 3;
      }
      ppcVar1 = (char **)(iVar8 + 0x14);
      iVar8 = iVar8 + 0x18;
      if (cVar21 != '\0') {
        uVar18 = uVar18 + 1;
      }
      if (**ppcVar1 != '\0') {
        piVar12[2] = 1;
      }
      iVar7 = iVar5;
    } while (iVar8 != iVar16);
  }
LAB_08064248:
  FUN_08076bb8(&local_8b0,0xffff,0,6,0x1c2);
  iVar7 = 0x14;
  local_8e4 = (uint *)0x0;
  puVar15 = (uint *)(__ptr + local_8dc + local_8e8);
  puVar17 = puVar15 + 2;
  uVar11 = local_8e8;
  do {
    if (uVar11 < uVar18) {
      if (uVar11 == uVar19) {
        uVar13 = 0x17;
      }
      else {
        uVar13 = 0;
      }
      if (puVar17[-1] == 0) {
        uVar14 = puVar17[-2];
        if (uVar11 == uVar19) {
          puVar15 = *(uint **)(uVar14 + 8);
        }
        if (uVar11 == uVar19) {
          local_8e4 = puVar15;
        }
        if (*(int *)(uVar14 + 0x10) == -1) {
          strcpy((char *)&local_830,*(char **)(uVar14 + 4));
        }
        else {
          sprintf((char *)&local_830," %s",*(undefined4 *)(uVar14 + 4));
        }
        sVar4 = strlen((char *)&local_830);
        if (0x46 < sVar4) {
          uStack_7e9 = 0;
        }
        if (**(char **)(uVar14 + 0x14) == '\0') {
          FUN_08076bb8("disabled",0x80a1,uVar13,0x28a,iVar7);
          uVar9 = 0x7bef;
        }
        else {
          FUN_08076bb8("enabled",0x17e4,uVar13,0x28a,iVar7);
          uVar9 = 0xffff;
        }
        FUN_08076bb8(&local_830,uVar9,uVar13,10,iVar7);
      }
      else {
        puVar15 = *(uint **)puVar17[-2];
        if (uVar11 == uVar19) {
          local_8e4 = ((uint **)puVar17[-2])[1];
        }
        sVar4 = strlen((char *)puVar15);
        __dest = puVar15;
        if (0x46 < sVar4) {
          __dest = &local_830;
          memcpy(__dest,puVar15,0x47);
          local_7f0 = 0;
        }
        puVar15 = (uint *)0x4c42;
        uVar9 = 0x9603;
        if (*puVar17 == 0) {
          uVar9 = 0x4c42;
        }
        FUN_08076bb8(__dest,uVar9,uVar13,10,iVar7);
      }
    }
    iVar7 = iVar7 + 0xf;
    uVar11 = uVar11 + 1;
    puVar17 = puVar17 + 3;
  } while (iVar7 != 0x19a);
  if (local_8e4 != (uint *)0x0) {
    FUN_08076bb8(local_8e4,0xffff,0,6,0x1a4);
  }
  FUN_0807b0dc();
  usleep(5000);
  if (*(char *)(*param_1 + 0x2916467) == '\x02') {
    FUN_08078bf4(*param_1 + 0x155e000);
  }
  FUN_08079b70(&local_8b8);
  switch(local_8b8) {
  case 0:
    if (uVar19 != 0) {
      uVar19 = uVar19 - 1;
      if (local_8d0 == 0) {
        local_8e8 = local_8e8 - 1;
        local_8dc = local_8e8 * 2;
      }
      else {
        local_8d0 = local_8d0 - 1;
      }
      FUN_08077374(0);
      goto LAB_08064248;
    }
    break;
  case 1:
    if (uVar19 < uVar18 - 1) {
      uVar19 = uVar19 + 1;
      if (local_8d0 == 0x19) {
        local_8e8 = local_8e8 + 1;
        local_8dc = local_8e8 * 2;
      }
      else {
        local_8d0 = local_8d0 + 1;
      }
      FUN_08077374(0);
      goto LAB_08064248;
    }
    break;
  case 4:
    goto switchD_08064458_caseD_4;
  case 6:
    FUN_08077374(0);
    free(__ptr);
    FUN_080771b4();
    FUN_08079b48();
    if (bVar2) {
      FUN_08069734(*param_1 + 0x1b4);
      FUN_080687e0(*param_1 + 0x1b4);
    }
    return 0xffffffff;
  case 7:
    iVar7 = 0x1c;
    do {
      if (uVar19 != 0) {
        uVar19 = uVar19 - 1;
        if (local_8d0 == 0) {
          local_8e8 = local_8e8 - 1;
        }
        else {
          local_8d0 = local_8d0 - 1;
        }
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    local_8dc = local_8e8 << 1;
    FUN_08077374(0);
    goto LAB_08064248;
  case 8:
    goto switchD_08064458_caseD_8;
  case 10:
    FUN_0807b7f0(&local_830);
    uVar3 = (ulonglong)uVar24 >> 0x20;
    uVar14 = (uint)uVar24;
    uVar24 = CONCAT44(iStack_82c,local_830);
    uVar11 = local_830 - uVar14;
    bVar23 = iStack_82c != (int)uVar3 + (uint)(local_830 < uVar14);
    if ((bVar23 || 499999 < uVar11) && (bVar23 || uVar11 != 500000)) {
      iVar7 = 2;
      uVar11 = 0;
      local_8c4 = 1;
    }
    else {
      if (5 < local_8c4) break;
      iVar7 = local_8c4 + 2;
      uVar11 = local_8c4;
      local_8c4 = local_8c4 + 1;
    }
    uVar14 = 0;
    local_8c0[uVar11] = (char)local_8b4;
    local_8c0[iVar7] = '\0';
    piVar6 = __ptr;
    if (uVar18 != 0) {
      do {
        if (piVar6[1] == 0) {
          pcVar22 = ((char **)*piVar6)[1];
        }
        else {
          pcVar22 = *(char **)*piVar6;
        }
        iVar7 = strncasecmp(pcVar22,local_8c0,local_8c4);
        if (iVar7 == 0) {
          local_8e8 = uVar14 - 0xd;
          if ((int)local_8e8 < 0) {
            local_8e8 = 0;
            local_8d0 = uVar14;
          }
          else {
            local_8d0 = 0xd;
          }
          local_8dc = local_8e8 << 1;
          uVar19 = uVar14;
          break;
        }
        uVar14 = uVar14 + 1;
        piVar6 = piVar6 + 3;
      } while (uVar14 != uVar18);
    }
  }
  FUN_08077374(0);
  goto LAB_08064248;
switchD_08064458_caseD_8:
  iVar7 = 0x1c;
  do {
    if (uVar19 < uVar18 - 1) {
      uVar19 = uVar19 + 1;
      if (local_8d0 == 0x19) {
        local_8e8 = local_8e8 + 1;
      }
      else {
        local_8d0 = local_8d0 + 1;
      }
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_8dc = local_8e8 << 1;
  FUN_08077374(0);
  goto LAB_08064248;
switchD_08064458_caseD_4:
  iVar7 = __ptr[uVar19 * 3];
  if (__ptr[uVar19 * 3 + 1] == 0) {
    **(byte **)(iVar7 + 0x14) = **(byte **)(iVar7 + 0x14) ^ 1;
  }
  else {
    **(byte **)(iVar7 + 0xc) = **(byte **)(iVar7 + 0xc) ^ 1;
    if (((**(char **)(iVar7 + 0xc) != '\0') && (0x19 < local_8d0 + *(int *)(iVar7 + 8))) &&
       (local_8d0 != 0)) {
      do {
        local_8d0 = local_8d0 - 1;
        local_8e8 = local_8e8 + 1;
        if (local_8d0 + *(int *)(iVar7 + 8) < 0x1a) break;
      } while (local_8d0 != 0);
      local_8dc = local_8e8 * 2;
    }
  }
  bVar2 = true;
  FUN_08077374(0);
  goto LAB_08064118;
}


