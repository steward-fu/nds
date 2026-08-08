/*
 * Ghidra decompilation
 *
 * Function : FUN_080bf144
 * Address  : 080bf144
 * Program  : drastic16
 */


undefined4 FUN_080bf144(int param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int extraout_r1;
  undefined uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 unaff_r6;
  bool bVar12;
  undefined8 uVar13;
  undefined auStack_6298 [516];
  undefined auStack_6094 [8192];
  undefined auStack_4094 [24];
  undefined auStack_407c [8196];
  int aiStack_2078 [2051];
  char local_6c;
  undefined auStack_68 [32];
  undefined auStack_48 [9];
  char local_3f;
  char local_3e;
  char local_3d;
  int local_3c;
  char local_37;
  char local_36;
  char local_35;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  char local_1f;
  char local_1e;
  char local_1d;
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  undefined auStack_18 [4];
  
  local_24 = *(int *)(param_2 + 0x125c8);
  if (param_4 == 0) {
    if (*(char *)(param_1 + 0x2061) == '\0') {
      return 0;
    }
    cVar1 = FUN_080c2c20(param_3,param_1 + 8,0,local_24);
    if (cVar1 != '\x01') {
      FUN_080b7220(&DAT_081cd0a0,1);
      return 0;
    }
  }
  local_28 = FUN_0809ee40(param_3);
  if (local_28 != 2) {
    if ((local_28 == 0x77) && (*(char *)(param_1 + 0x64e9) != '\0')) {
      FUN_080e52e8(param_2,param_3,param_1 + 0x64ec);
    }
    if ((local_28 == 3) && (*(char *)(param_1 + 0x64e9) != '\0')) {
      FUN_080e5348(param_2,param_3,param_1 + 0x64ec);
    }
    if (local_28 != 5) {
      FUN_080a82d0(param_3);
      return 1;
    }
    if (*(char *)(param_3 + 0x31d3) == '\0') {
      return 0;
    }
    cVar1 = FUN_080c2c20(param_3,param_1 + 8,0,local_24);
    if (cVar1 != '\x01') {
      FUN_080b7220(&DAT_081cd0a0,1);
      return 0;
    }
    (**(code **)(*param_3 + 0xc))
              (param_3,*(code **)(*param_3 + 0xc),param_3[0x43a2],param_3[0x43a3],0);
    return 1;
  }
  *(undefined *)(param_1 + 0x64e9) = 0;
  if (((*(int *)(param_2 + 0xc260) == 0) &&
      (uVar10 = *(uint *)(param_1 + 0x42dc), uVar2 = FUN_080c2b04(param_2 + 0x16608),
      uVar2 <= uVar10)) && (*(char *)(param_1 + 0x42e1) != '\0')) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  if (bVar12) {
    return 0;
  }
  local_2c = 5;
  local_3e = '\0';
  local_30 = FUN_080dae00(param_2,param_3 + 0x210c,&local_3e,5);
  iVar6 = local_30;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  local_19 = (char)iVar6;
  if (local_30 != 0) {
    local_19 = '\x01';
  }
  if ((*(int *)(param_2 + 0xc25c) == 2) && (*(undefined4 *)(param_2 + 0x8024) = 0, local_19 != '\0')
     ) {
    FUN_0809f8d8(param_2 + 0x16608);
    iVar6 = FUN_0809f734(param_2 + 0x16608,param_2 + 0x8024,0x800,local_30 + -1);
    if (iVar6 != 0) {
      puVar3 = (undefined4 *)FUN_080a0c2c(param_2 + 0x8024);
      *puVar3 = 0;
    }
  }
  if ((local_19 != '\0') && (local_3e != '\x01')) {
    *(undefined *)(param_1 + 0x42e1) = 0;
  }
  FUN_080aed38(param_3);
  FUN_080a0d48(param_3 + 0x2114,auStack_6094);
  if (*(char *)((int)param_3 + 0xa513) == '\0') {
    cVar1 = FUN_080aed0c(param_3);
    if ((cVar1 == '\x01') || (*(uint *)(param_2 + 0xe58c) < 2)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      local_19 = '\0';
    }
  }
  else if ((*(int *)(param_2 + 0xe58c) != 1) && (local_3e != '\x01')) {
    if (*(int *)(param_2 + 0xe58c) == 0) {
      local_19 = '\0';
    }
    local_34 = FUN_080a251c(auStack_6094,0);
    if (*(int *)(param_2 + 0xe58c) + -1 == local_34) {
      FUN_080a251c(auStack_6094,1);
    }
    else {
      local_19 = '\0';
    }
  }
  *(undefined *)(param_1 + 0x2061) = *(undefined *)((int)param_3 + 0xa4b9);
  *(undefined *)(param_1 + 0x2062) = 0;
  (**(code **)(*param_3 + 0xc))
            (param_3,auStack_18,param_3[0x43a4] - param_3[0x291e],
             param_3[0x43a5] -
             (param_3[0x291f] + (uint)((uint)param_3[0x43a4] < (uint)param_3[0x291e])),0);
  local_1a = '\0';
  local_1b = '\0';
  if ((*(char *)(param_1 + 0x42e0) != '\0') &&
     (((local_19 != '\0' || (*(char *)(param_3 + 0x43a7) != '\0')) &&
      (*(char *)(param_3 + 0x292e) != '\0')))) {
    if (local_19 != '\0') {
      FUN_080a85d8(param_3 + 6,&DAT_080ee230,auStack_6094);
      *(undefined4 *)(param_2 + 0x125a8) = 0xc;
      FUN_080b7220(&DAT_081cd0a0,6);
    }
    local_19 = '\0';
  }
  *(undefined *)(param_1 + 0x42e0) = 0;
  if ((local_19 == '\0') && (local_1b = *(char *)(param_3 + 0x43a7), local_1b == '\0')) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) goto LAB_080c1768;
  FUN_080c1c1c(param_1,param_2,param_3,auStack_6094,param_1 + 0x64ec,0x800);
  if (((local_1b == '\x01') || (*(int *)(param_1 + 0x64ec) == 0)) ||
     (*(char *)(param_3 + 0x292e) == '\x01')) {
    local_1a = '\0';
  }
  else {
    local_1a = '\x01';
  }
  if (((*(char *)(param_2 + 0xc257) != '\0') || (*(char *)(param_2 + 0xc258) != '\0')) &&
     ((local_24 == 0x45 || (local_24 == 0x58)))) {
    FUN_080a3b4c(aiStack_2078);
    iVar6 = FUN_080c40a4(param_1 + 0x64ec,aiStack_2078,0);
    if (iVar6 == 0) {
      if (*(char *)(param_2 + 0xc257) != '\0') {
        local_1a = '\0';
      }
    }
    else {
      iVar6 = FUN_080c2a9c(auStack_68,param_3 + 0x2918);
      if (iVar6 != 0) {
        if ((local_6c == '\x01') && (iVar6 = FUN_080c2a54(auStack_68,param_1), iVar6 == 0)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (bVar12) {
          local_1a = '\0';
        }
      }
    }
  }
  if (*(char *)((int)param_3 + 0xa4bb) != '\0') {
    cVar1 = FUN_080c1f54(param_1,param_2);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = FUN_080af900(param_1 + 0x62e4);
    if (cVar1 != '\x01') {
      FUN_080b7220(&DAT_081cd0a0,1);
      *(undefined4 *)(param_2 + 0x125a8) = 0x16;
      local_1a = '\0';
    }
  }
  if (*(int *)(param_2 + 0x105a4) != 0) {
    FUN_080a0620(param_1 + 0x64ec,param_2 + 0x105a4,0x800);
  }
  cVar1 = FUN_080c296c(param_1,param_3,auStack_6094);
  if (cVar1 != '\x01') {
    local_1a = '\0';
    FUN_080b7220(&DAT_081cd0a0,1);
    *(undefined4 *)(param_2 + 0x125a8) = 0xe;
  }
  FUN_080a3c04(auStack_4094);
  iVar6 = param_3[0x2948];
  bVar12 = iVar6 == 0;
  if (bVar12) {
    iVar6 = 0;
  }
  local_35 = (char)iVar6;
  if (!bVar12) {
    local_35 = '\x01';
  }
  if ((local_35 == '\0') || (param_3[0x2948] == 5)) {
    iVar6 = FUN_080aed0c(param_3);
    if (iVar6 == 0) {
      if (local_1a != '\0') {
        local_1a = FUN_080c24fc(param_1,param_2,param_3,auStack_4094);
      }
      goto LAB_080c01c4;
    }
    if ((((local_1a == '\x01') && (local_24 != 0x50)) && (local_24 != 0x49)) &&
       ((local_24 != 0x45 && (*(int *)(param_2 + 0xc25c) != 1)))) {
      *(int *)(param_1 + 0x42d4) = *(int *)(param_1 + 0x42d4) + 1;
      FUN_080c2138(param_1,param_2,param_3,auStack_6094);
      unaff_r6 = 1;
      bVar12 = false;
    }
    else {
      unaff_r6 = 1;
      bVar12 = false;
    }
  }
  else {
    if (((local_1a != '\0') && (local_24 != 0x50)) && (*(char *)(param_2 + 0xc4c9) != '\x01')) {
      local_3f = '\0';
      iVar6 = FUN_080a5704(param_1 + 0x64ec);
      if ((iVar6 == 0) || (local_3f == '\x01')) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) {
        FUN_080dff48(param_2,0,param_1 + 0x64ec,0x800,*(undefined4 *)(param_2 + 0xc234),&local_3f,
                     param_3[0x2920],param_3[0x2921],param_3 + 0x2918,0);
      }
      if (local_3f != '\0') {
        local_1a = '\0';
      }
    }
LAB_080c01c4:
    if ((local_1a != '\x01') && (*(char *)(param_3 + 0x43a7) != '\0')) {
      local_1b = '\x01';
      local_1a = '\x01';
    }
    if (local_1a != '\0') {
      if ((*(char *)(param_2 + 0xc4c9) == '\0') && (local_1b == '\0')) {
        local_36 = '\0';
      }
      else {
        local_36 = '\x01';
      }
      if (local_1b != '\x01') {
        if (((local_36 == '\x01') || (local_24 == 0x50)) ||
           (iVar6 = FUN_080a4edc(auStack_4094), iVar6 == 0)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (bVar12) {
          FUN_080a85d8(param_3 + 6,&DAT_080ee230,param_1 + 0x64ec);
          FUN_080b6fc0(&DAT_081cd0a0,param_3 + 6,param_1 + 0x64ec);
        }
        *(int *)(param_1 + 0x42d4) = *(int *)(param_1 + 0x42d4) + 1;
      }
      *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) + 1;
      if (local_24 != 0x49) {
        if (local_1b == '\0') {
          iVar6 = local_24;
          if (*(char *)(param_2 + 0xc4c9) != '\0') {
            iVar6 = 0x54;
          }
          switch(iVar6) {
          case 0x45:
          case 0x58:
            FUN_080a6080(&DAT_080ee230,param_1 + 0x64ec);
            break;
          case 0x50:
            FUN_080a6080(&DAT_080ee230,auStack_6094);
            break;
          case 0x54:
            FUN_080a6080(&DAT_080ee230,auStack_6094);
          }
        }
        else {
          FUN_080a6080(&DAT_080ee230,auStack_6094);
        }
      }
      if (*(char *)(param_2 + 0xc248) != '\x01') {
        FUN_080a6080(&DAT_080ee244);
      }
      memcpy(auStack_6298,(void *)(param_1 + 0x62e4),0x204);
      if (*(char *)(param_3 + 0x2930) == '\0') {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)param_3 + 0xa4c1;
      }
      FUN_080b66b0(param_1 + 8,0,param_3[0x292f],auStack_6298,iVar6,(int)param_3 + 0xa4d1,
                   param_3[0x2943],auStack_48,(int)param_3 + 0xa4eb);
      local_1c = '\0';
      if (((*(char *)((int)param_3 + 0xa4bb) != '\0') && (*(char *)((int)param_3 + 0xa4e1) != '\0'))
         && ((iVar6 = memcmp((void *)((int)param_3 + 0xa4e2),auStack_48,8), iVar6 != 0 &&
             (*(char *)(param_3 + 0x43ab) != '\x01')))) {
        FUN_080a85d8(param_3 + 6,&DAT_080ee230);
        FUN_080b7220(&DAT_081cd0a0,0xb);
        local_1c = '\x01';
      }
      *(undefined8 *)(param_1 + 0x2080) = 0;
      *(undefined8 *)(param_1 + 0x2088) = 0;
      FUN_080bdba8(param_1 + 0x3768,param_3[0x2924],*(undefined4 *)(param_2 + 0x105a0));
      FUN_080bdba8(param_1 + 0x20a0,param_3[0x2924],*(undefined4 *)(param_2 + 0x105a0));
      FUN_080a8550(param_1 + 8,param_1 + 8,param_3[0x291e],param_3[0x291f]);
      FUN_080b6608(param_1 + 8,param_3,auStack_4094);
      FUN_080a857c(param_1 + 8,local_36);
      FUN_080c2b88(param_1 + 8,local_1b);
      iVar6 = extraout_r1;
      if (((local_36 == '\x01') || (local_1c == '\x01')) || (*(char *)(param_3 + 0x43ab) == '\x01'))
      {
LAB_080c09d8:
        bVar12 = false;
      }
      else {
        uVar13 = VectorShiftLeft(*(undefined8 *)(param_3 + 0x291e),0xb,0x40,0);
        iVar6 = (int)((ulonglong)uVar13 >> 0x20);
        iVar7 = param_3[0x2921];
        bVar12 = (uint)param_3[0x2920] < (uint)uVar13;
        if ((int)(iVar7 - (iVar6 + (uint)bVar12)) < 0 ==
            (SBORROW4(iVar7,iVar6) != SBORROW4(iVar7 - iVar6,(uint)bVar12))) goto LAB_080c09d8;
        iVar6 = 0;
        if (0 < (int)(param_3[0x2921] + (uint)(99999999U < (uint)param_3[0x2920])) !=
            (SBORROW4(-param_3[0x2921],(uint)(99999999U < (uint)param_3[0x2920])) != false)) {
          uVar13 = FUN_080a4e38(param_3);
          iVar6 = (int)((ulonglong)uVar13 >> 0x20);
          iVar7 = param_3[0x291f];
          bVar12 = (uint)param_3[0x291e] < (uint)uVar13;
          if ((int)(iVar7 - (iVar6 + (uint)bVar12)) < 0 ==
              (SBORROW4(iVar7,iVar6) != SBORROW4(iVar7 - iVar6,(uint)bVar12))) goto LAB_080c09d8;
        }
        bVar12 = true;
      }
      if (bVar12) {
        FUN_080a4b84(auStack_4094,iVar6,param_3[0x2920],param_3[0x2921]);
      }
      FUN_080c2b58(auStack_4094,*(byte *)(param_2 + 0xc29c) ^ 1);
      if (((local_36 == '\x01') || (local_1b == '\x01')) || (local_24 == 0x50)) {
        local_37 = '\0';
      }
      else {
        local_37 = '\x01';
      }
      local_1d = '\x01';
      local_1e = '\x01';
      if (local_35 == '\0') {
        if ((*(char *)(param_3 + 0x292e) != '\x01') && (local_1c != '\x01')) {
          if (*(char *)((int)param_3 + 0x844a) == '\0') {
            FUN_080c18a8(param_1 + 8,param_1 + 8,param_3[0x2920],param_3[0x2921]);
          }
          else {
            FUN_080d1774(*(undefined4 *)(param_1 + 0x42d0),param_3[0x2945],
                         *(undefined *)(param_3 + 0x2944));
            FUN_080a85fc(*(undefined4 *)(param_1 + 0x42d0),*(undefined4 *)(param_1 + 0x42d0),
                         param_3[0x2920],param_3[0x2921]);
            if ((param_3[0x43a6] == 3) || (0xf < *(byte *)((int)param_3 + 0x8449))) {
              FUN_080d1a40(*(undefined4 *)(param_1 + 0x42d0),*(undefined *)((int)param_3 + 0x8449),
                           *(undefined *)(param_3 + 0x2944));
            }
            else {
              if ((*(uint *)(param_1 + 0x42d8) < 2) || (*(char *)(param_3 + 0x43a7) == '\0')) {
                uVar11 = 0;
              }
              else {
                uVar11 = 1;
              }
              FUN_080d1a40(*(undefined4 *)(param_1 + 0x42d0),0xf,uVar11);
            }
          }
        }
      }
      else {
        local_3c = param_3[0x2948];
        if ((local_3c == 4) || (local_3c == 5)) {
          FUN_080c1c1c(param_1,param_2,param_3,param_3 + 0x2949,aiStack_2078,0x800);
          if ((local_37 != '\0') && (aiStack_2078[0] != 0)) {
            if (local_3c == 4) {
              local_1e = FUN_080e4400(param_1 + 0x64ec,aiStack_2078,0x800);
            }
            else {
              local_1e = FUN_080c19cc(param_1,param_2,auStack_4094,param_3 + 6,param_1 + 0x64ec,
                                      aiStack_2078,0x800);
            }
          }
        }
        else if (((local_3c == 1) || (local_3c == 2)) || (local_3c == 3)) {
          if (local_37 != '\0') {
            local_1e = FUN_080e53dc(param_2,param_1 + 8,param_3,param_1 + 0x64ec);
          }
        }
        else {
          FUN_080a85d8(param_3 + 6,&DAT_080ee230,param_1 + 0x64ec);
          local_1e = '\0';
        }
        if ((local_1e != '\x01') || ((param_3[0x43a6] == 2 && (local_37 != '\x01')))) {
          local_1d = '\0';
        }
        if ((local_37 == '\0') || (local_1e == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        *(undefined *)(param_1 + 0x64e9) = uVar4;
      }
      FUN_080a82d0(param_3);
      if (*(char *)((int)param_3 + 0xa4ea) == '\0') {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)param_3 + 0xa4eb;
      }
      local_3d = FUN_080bde4c(param_1 + 0x3768,param_3 + 0x2924,iVar6);
      if (*(char *)(param_3 + 0x2944) == '\x01') {
        if (((*(char *)((int)param_3 + 0x844a) != '\0') &&
            ((int)(param_3[0x2921] - (uint)(param_3[0x2920] == 0)) < 0 ==
             (SBORROW4(param_3[0x2921],(uint)(param_3[0x2920] == 0)) != false))) &&
           (local_3d != '\0')) {
          *(undefined *)(param_1 + 0x42e3) = 1;
        }
      }
      else {
        *(undefined *)(param_1 + 0x42e3) = 0;
      }
      local_1f = '\0';
      if ((local_1b == '\x01') || (local_1d == '\0')) {
        FUN_080a6080(&DAT_080ee2a8);
      }
      else if ((local_1c == '\x01') || (local_3d == '\0')) {
        if (local_1c != '\x01') {
          if ((*(char *)((int)param_3 + 0xa4bb) == '\0') ||
             (((*(char *)((int)param_3 + 0xa4e1) == '\x01' && (*(char *)(param_3 + 0x43ab) == '\0'))
              || (*(char *)(param_1 + 0x42e3) == '\x01')))) {
            FUN_080a85d8(param_3 + 6,&DAT_080ee230,auStack_6094);
          }
          else {
            FUN_080a85d8(param_3 + 6,&DAT_080ee230,auStack_6094);
          }
        }
        local_1f = '\x01';
        FUN_080b7220(&DAT_081cd0a0,3);
        if (*(int *)(param_2 + 0x125a8) != 0xf) {
          if (local_1c == '\0') {
            uVar11 = 0xc;
          }
          else {
            uVar11 = 0x18;
          }
          *(undefined4 *)(param_2 + 0x125a8) = uVar11;
        }
      }
      else if ((local_24 != 0x50) && (local_24 != 0x49)) {
        if (*(char *)(param_2 + 0xc248) == '\0') {
          uVar2 = 0xe264;
        }
        else {
          uVar2 = 0xe25c;
        }
        if (param_3[0x2924] == 0) {
          uVar10 = 0xe280;
        }
        else {
          uVar10 = 0xe230;
        }
        FUN_080a6080(&DAT_080ee290,uVar2 | 0x80e0000,uVar10 | 0x80e0000);
      }
      if (((((local_36 != '\x01') && (local_1c != '\x01')) &&
           ((local_24 == 0x58 || (local_24 == 0x45)))) &&
          ((local_35 != '\x01' || ((param_3[0x2948] == 5 && (local_1e != '\0')))))) &&
         ((local_1f != '\x01' || (*(char *)(param_2 + 0xc29c) != '\0')))) {
        if (local_1f != '\0') {
          FUN_080a4c2c(auStack_4094);
        }
        if (*(int *)(param_2 + 0xe594) == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = param_3 + 0x2918;
        }
        if (*(int *)(param_2 + 0xe598) == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = param_3 + 0x291a;
        }
        if (*(int *)(param_2 + 0xe59c) == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = param_3 + 0x291c;
        }
        FUN_080a4c50(auStack_4094,piVar5,piVar9,piVar8);
        FUN_080a42dc(auStack_4094);
        if (((*(char *)(param_2 + 0xc290) != '\0') && (param_3[0x43a6] == 3)) &&
           (*(char *)((int)param_3 + 0xc525) != '\0')) {
          FUN_080e4cd4(param_3,auStack_407c);
        }
        if (*(int *)(param_2 + 0xe594) == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = param_3 + 0x2918;
        }
        if (*(int *)(param_2 + 0xe59c) == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = param_3 + 0x291c;
        }
        FUN_080a4c78(auStack_4094,piVar5,piVar9);
        if (*(char *)(param_2 + 0xc4a4) != '\x01') {
          FUN_080a5a7c(auStack_407c,param_3[0x2113]);
        }
        *(undefined *)(param_1 + 0x64e9) = 1;
      }
      FUN_080b752c(auStack_6298);
    }
    bVar12 = true;
  }
  FUN_080a3cc0(auStack_4094);
  if (!bVar12) {
    return unaff_r6;
  }
LAB_080c1768:
  if (local_19 != '\0') {
    *(int *)(param_1 + 0x42dc) = *(int *)(param_1 + 0x42dc) + 1;
  }
  if (*(char *)(param_1 + 0x2062) == '\0') {
    if (local_1a != '\x01') {
      if (*(char *)(param_3 + 0x43a7) == '\x01') {
        if (local_1b != '\x01') {
          return 0;
        }
      }
      else {
        FUN_080a82d0(param_3);
      }
    }
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  return uVar11;
}


