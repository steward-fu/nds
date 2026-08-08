/*
 * Ghidra decompilation
 *
 * Function : FUN_080a8f44
 * Address  : 080a8f44
 * Program  : drastic16
 */


undefined4 FUN_080a8f44(int *param_1)

{
  longlong lVar1;
  undefined uVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined auStack_290c [32];
  undefined auStack_28ec [20];
  int local_28d8;
  uint local_28d4;
  undefined auStack_28c8 [2048];
  char acStack_20c8 [8192];
  undefined auStack_c8 [20];
  int *local_b4 [4];
  undefined auStack_a4 [20];
  undefined auStack_90 [8];
  undefined8 local_88;
  ushort local_7a;
  ushort local_78;
  undefined local_76;
  byte local_75;
  uint local_74;
  undefined4 local_70;
  uint local_6c;
  int *local_68;
  ushort local_62;
  undefined8 local_60;
  byte *local_54;
  size_t local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  uint *local_3c;
  char local_35;
  int local_34;
  char local_2d;
  int local_2c;
  char local_25;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  FUN_080b43e4(auStack_290c,param_1);
  if (*(char *)(param_1 + 0x43a9) == '\0') {
LAB_080a9010:
    local_2d = '\0';
  }
  else {
    iVar7 = param_1[0x43a3];
    uVar5 = (uint)(0xfffffff8 < (uint)param_1[0x43aa]);
    bVar12 = param_1[0x43aa] + 7U < (uint)param_1[0x43a2];
    if ((int)(uVar5 - (iVar7 + (uint)bVar12)) < 0 ==
        (SBORROW4(uVar5,iVar7) != SBORROW4(uVar5 - iVar7,(uint)bVar12))) goto LAB_080a9010;
    local_2d = '\x01';
  }
  if (local_2d != '\0') {
    FUN_080ad5e4(param_1);
    iVar7 = (**(code **)(*param_1 + 8))(param_1,auStack_90,8);
    if (iVar7 != 8) {
      FUN_080a8da8(param_1);
      uVar10 = 0;
      goto LAB_080abcf8;
    }
    FUN_080b38d8(param_1 + 0x807,0,4,param_1[0x1cbd] + 0xa024,auStack_90,0,0,0,0);
    FUN_080afa84(auStack_290c,param_1 + 0x807);
  }
  FUN_080b4484(auStack_290c,7);
  iVar7 = FUN_080af9d4(auStack_290c);
  if (iVar7 == 0) {
    FUN_080a8da8(param_1);
    uVar10 = 0;
    goto LAB_080abcf8;
  }
  iVar7 = FUN_080b4760(auStack_290c);
  param_1[0x20e6] = iVar7;
  FUN_080af928(param_1 + 0x20e6);
  local_34 = FUN_080b46f8(auStack_290c);
  iVar7 = FUN_080b4760(auStack_290c);
  param_1[0x20e8] = iVar7;
  *(bool *)(param_1 + 0x20ea) = (param_1[0x20e8] & 0x4000U) != 0;
  iVar7 = FUN_080b4760(auStack_290c);
  param_1[0x20e9] = iVar7;
  param_1[0x20e7] = local_34;
  if ((uint)param_1[0x20e9] < 7) {
    FUN_080a8ea8(param_1);
    uVar10 = 0;
    goto LAB_080abcf8;
  }
  switch(param_1[0x20e7]) {
  case 0x73:
    param_1[0x20e7] = 1;
    break;
  case 0x74:
    param_1[0x20e7] = 2;
    break;
  case 0x7a:
    param_1[0x20e7] = 3;
    break;
  case 0x7b:
    param_1[0x20e7] = 5;
  }
  param_1[0x1cc5] = param_1[0x20e7];
  if (param_1[0x20e7] == 0x75) {
    FUN_080b4484(auStack_290c,6);
  }
  else if ((param_1[0x20e7] == 1) && ((param_1[0x20e8] & 2U) != 0)) {
    FUN_080b4484(auStack_290c,6);
  }
  else {
    FUN_080b4484(auStack_290c,param_1[0x20e9] + -7);
  }
  uVar11 = param_1[0x43a2];
  iVar7 = param_1[0x43a3];
  uVar5 = FUN_080a831c(param_1,param_1[0x20e9]);
  param_1[0x43a4] = uVar11 + uVar5;
  param_1[0x43a5] = iVar7 + (uint)CARRY4(uVar11,uVar5);
  iVar7 = param_1[0x20e7];
  if (iVar7 == 0x75) {
    param_1[0x429c] = param_1[0x20e6];
    param_1[0x429d] = param_1[0x20e7];
    param_1[0x429e] = param_1[0x20e8];
    param_1[0x429f] = param_1[0x20e9];
    param_1[0x42a0] = param_1[0x20ea];
    uVar4 = FUN_080b4760(auStack_290c);
    *(undefined2 *)(param_1 + 0x42a1) = uVar4;
    uVar2 = FUN_080b46f8(auStack_290c);
    *(undefined *)((int)param_1 + 0x10a86) = uVar2;
    uVar2 = FUN_080b46f8(auStack_290c);
    *(undefined *)((int)param_1 + 0x10a87) = uVar2;
    uVar4 = FUN_080b4760(auStack_290c);
    *(undefined2 *)(param_1 + 0x42a2) = uVar4;
  }
  else if (iVar7 < 0x76) {
    if (iVar7 < 4) {
      if (iVar7 < 2) {
        if (iVar7 != 1) goto LAB_080ab988;
        FUN_080d6098(param_1 + 0x20ee);
        param_1[0x20ee] = param_1[0x20e6];
        param_1[0x20ef] = param_1[0x20e7];
        param_1[0x20f0] = param_1[0x20e8];
        param_1[0x20f1] = param_1[0x20e9];
        param_1[0x20f2] = param_1[0x20ea];
        uVar4 = FUN_080b4760(auStack_290c);
        *(undefined2 *)(param_1 + 0x20f3) = uVar4;
        iVar7 = FUN_080b4810(auStack_290c);
        param_1[0x20f4] = iVar7;
        *(bool *)((int)param_1 + 0x10e9d) = (param_1[0x20f0] & 1U) != 0;
        *(bool *)(param_1 + 0x43a7) = (param_1[0x20f0] & 8U) != 0;
        *(bool *)((int)param_1 + 0x10e9f) = (param_1[0x20f0] & 4U) != 0;
        *(bool *)((int)param_1 + 0x10ea3) = (param_1[0x20f0] & 0x40U) != 0;
        *(bool *)(param_1 + 0x43a9) = (param_1[0x20f0] & 0x80U) != 0;
        if ((param_1[0x20f4] == 0) && (*(short *)(param_1 + 0x20f3) == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        *(undefined *)(param_1 + 0x43a8) = uVar2;
        *(bool *)(param_1 + 0x20f5) = (param_1[0x20f0] & 2U) != 0;
        *(bool *)((int)param_1 + 0x10ea1) = (param_1[0x20f0] & 0x100U) != 0;
        *(bool *)((int)param_1 + 0x10ea2) = (param_1[0x20f0] & 0x10U) != 0;
      }
      else {
        iVar7 = param_1[0x20e7];
        bVar12 = iVar7 != 2;
        if (bVar12) {
          iVar7 = 0;
        }
        local_35 = (char)iVar7;
        if (!bVar12) {
          local_35 = '\x01';
        }
        if (local_35 == '\0') {
          local_3c = (uint *)(param_1 + 0x31dc);
        }
        else {
          local_3c = (uint *)(param_1 + 0x210c);
        }
        FUN_080d5e4c(local_3c,0);
        uVar5 = param_1[0x20e7];
        uVar11 = param_1[0x20e8];
        uVar8 = param_1[0x20e9];
        *local_3c = param_1[0x20e6];
        local_3c[1] = uVar5;
        local_3c[2] = uVar11;
        local_3c[3] = uVar8;
        local_3c[4] = param_1[0x20ea];
        *(bool *)(local_3c + 0x822) = (local_3c[2] & 1) != 0;
        *(bool *)((int)local_3c + 0x2089) = (local_3c[2] & 2) != 0;
        *(bool *)((int)local_3c + 0x208b) = (local_3c[2] & 4) != 0;
        *(bool *)(local_3c + 0x824) = (local_3c[2] & 0x400) != 0;
        if ((local_35 == '\0') || ((local_3c[2] & 0x10) == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        *(undefined *)(local_3c + 0x838) = uVar2;
        if ((local_35 == '\x01') || ((local_3c[2] & 0x10) == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        *(undefined *)((int)local_3c + 0x20ea) = uVar2;
        *(bool *)((int)local_3c + 0x20e1) = (local_3c[2] & 0xe0) == 0xe0;
        if (*(char *)((int)local_3c + 0x20e1) == '\0') {
          uVar5 = 0x10000 << ((local_3c[2] & 0xe0) >> 5);
        }
        else {
          uVar5 = 0;
        }
        local_3c[0x839] = uVar5;
        *(bool *)((int)local_3c + 0x20e2) = (local_3c[2] & 8) != 0;
        *(bool *)((int)local_3c + 0x20e3) = (local_3c[2] & 0x800) != 0;
        uVar5 = FUN_080b4810(auStack_290c);
        local_3c[5] = uVar5;
        local_40 = FUN_080b4810(auStack_290c);
        uVar2 = FUN_080b46f8(auStack_290c);
        *(undefined *)(local_3c + 6) = uVar2;
        local_3c[0x818] = 2;
        uVar5 = FUN_080b4810(auStack_290c);
        local_3c[0x819] = uVar5;
        local_44 = FUN_080b4810(auStack_290c);
        uVar2 = FUN_080b46f8(auStack_290c);
        *(undefined *)((int)local_3c + 0x19) = uVar2;
        cVar3 = FUN_080b46f8(auStack_290c);
        *(char *)((int)local_3c + 0x1a) = cVar3 + -0x30;
        local_48 = FUN_080b4760(auStack_290c);
        uVar5 = FUN_080b4810(auStack_290c);
        local_3c[7] = uVar5;
        local_3c[0x823] = 0;
        if (*(char *)((int)local_3c + 0x208b) != '\0') {
          switch(*(undefined *)((int)local_3c + 0x19)) {
          case 0xd:
            local_3c[0x823] = 1;
            break;
          default:
            local_3c[0x823] = 4;
            break;
          case 0xf:
            local_3c[0x823] = 2;
            break;
          case 0x14:
          case 0x1a:
            local_3c[0x823] = 3;
          }
        }
        local_3c[0x83b] = 2;
        if ((*(char *)(local_3c + 6) == '\x03') || (*(char *)(local_3c + 6) == '\x05')) {
          local_3c[0x83b] = 1;
        }
        else if (*(byte *)(local_3c + 6) < 6) {
          local_3c[0x83b] = 0;
        }
        local_3c[0x83c] = 0;
        if ((*(char *)(local_3c + 6) == '\x03') && ((local_3c[7] & 0xf000) == 0xa000)) {
          local_3c[0x83c] = 1;
          local_3c[0x83d] = 0;
        }
        if ((local_35 == '\x01') || (-1 < (int)local_3c[7])) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        *(undefined *)(local_3c + 0x83a) = uVar2;
        *(bool *)((int)local_3c + 0x20e9) = (local_3c[2] & 0x100) != 0;
        if (*(char *)((int)local_3c + 0x20e9) == '\0') {
          local_18 = 0;
          local_14 = 0;
          uVar5 = local_40;
          if (local_40 != 0xffffffff) {
            uVar5 = 0;
          }
          uVar2 = (undefined)uVar5;
          if (local_40 == 0xffffffff) {
            uVar2 = 1;
          }
          *(undefined *)((int)local_3c + 0x208a) = uVar2;
        }
        else {
          local_14 = FUN_080b4810(auStack_290c);
          local_18 = FUN_080b4810(auStack_290c);
          if ((local_40 == 0xffffffff) && (local_18 == -1)) {
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
          *(undefined *)((int)local_3c + 0x208a) = uVar2;
        }
        uVar13 = VectorShiftRight(CONCAT44(local_14,local_14),0x20);
        uVar13 = VectorShiftLeft(uVar13,0x20,0x40,0);
        local_3c[0x812] = local_3c[5] + (uint)uVar13;
        local_3c[0x813] = (int)((ulonglong)uVar13 >> 0x20) + (uint)CARRY4(local_3c[5],(uint)uVar13);
        uVar13 = VectorShiftRight(CONCAT44(local_18,local_18),0x20);
        uVar13 = VectorShiftLeft(uVar13,0x20,0x40,0);
        local_3c[0x814] = local_40 + (uint)uVar13;
        local_3c[0x815] = (int)((ulonglong)uVar13 >> 0x20) + (uint)CARRY4(local_40,(uint)uVar13);
        if (*(char *)((int)local_3c + 0x208a) != '\0') {
          uVar13 = SIMDExpandImmediate(1,6,0x80);
          *(undefined8 *)(local_3c + 0x814) = uVar13;
        }
        local_4c = local_48;
        if (0x1ffe < local_48) {
          local_4c = 0x1fff;
        }
        FUN_080b4af8(auStack_290c,acStack_20c8,local_4c);
        acStack_20c8[local_4c] = '\0';
        if (local_35 == '\0') {
          FUN_080afc9c(acStack_20c8,local_3c + 8,0x800);
          local_1c = (local_3c[3] - local_48) + -0x20;
          if ((local_3c[2] & 0x400) != 0) {
            local_1c = (local_3c[3] - local_48) + -0x28;
          }
          if (0 < local_1c) {
            FUN_080afadc(local_3c + 0x808,local_1c);
            uVar10 = FUN_080a609c(local_3c + 0x808,0);
            FUN_080b4af8(auStack_290c,uVar10,local_1c);
            iVar7 = FUN_080af950(local_3c,&DAT_080ed900);
            if (iVar7 != 0) {
              local_54 = (byte *)FUN_080a609c(local_3c + 0x808,8);
              param_1[0x1cbe] =
                   (uint)*local_54 + (uint)local_54[1] * 0x100 + (uint)local_54[2] * 0x10000 +
                   (uint)local_54[3] * 0x1000000;
              param_1[0x1cbf] = 0;
              uVar13 = VectorShiftLeft(*(undefined8 *)(param_1 + 0x1cbe),9,0x40,0);
              *(undefined8 *)(param_1 + 0x1cbe) = uVar13;
              local_60 = (**(code **)(*param_1 + 0x10))(param_1);
              iVar7 = FUN_080dfe7c(param_1[0x1cbe],param_1[0x1cbf],(int)local_60,
                                   (int)((ulonglong)local_60 >> 0x20));
              param_1[0x1cc0] = iVar7;
              lVar1 = *(longlong *)(param_1 + 0x1cbe);
              lVar14 = __aeabi_ldivmod((undefined4)local_60,local_60._4_4_,200,0);
              iVar7 = FUN_080dfe7c((int)(lVar14 + lVar1),(int)((ulonglong)(lVar14 + lVar1) >> 0x20),
                                   (undefined4)local_60,local_60._4_4_);
              if (param_1[0x1cc0] < iVar7) {
                param_1[0x1cc0] = param_1[0x1cc0] + 1;
              }
            }
          }
          iVar7 = FUN_080af950(local_3c,&DAT_080ed910);
          if (iVar7 != 0) {
            *(undefined *)((int)param_1 + 0x10e9e) = 1;
          }
        }
        else {
          if ((local_3c[2] & 0x200) == 0) {
            local_3c[8] = 0;
          }
          else {
            FUN_080b4eac(auStack_a4);
            sVar6 = strlen(acStack_20c8);
            if (sVar6 == local_48) {
              local_50 = sVar6;
              FUN_080b07d4(acStack_20c8,local_3c + 8,0x7ff);
            }
            else {
              local_50 = sVar6 + 1;
              FUN_080b4f00(auStack_a4,acStack_20c8,acStack_20c8 + sVar6 + 1,local_48 - local_50,
                           local_3c + 8,0x800);
            }
          }
          FUN_0809fcfc(acStack_20c8,auStack_28c8,0x800);
          FUN_080a3a8c(auStack_28c8,local_3c + 8,local_3c + 8,0x800);
          FUN_080aeca8(param_1,local_3c + 8);
          FUN_080aeec0(param_1,local_3c);
        }
        if ((local_3c[2] & 0x400) != 0) {
          FUN_080b4af8(auStack_290c,(int)local_3c + 0x2091,8);
        }
        FUN_080b55dc(local_3c + 0x80c,local_44);
        if ((local_3c[2] & 0x1000) != 0) {
          local_62 = FUN_080b4760(auStack_290c);
          local_b4[0] = param_1 + 0x2918;
          local_b4[1] = param_1 + 0x291a;
          local_b4[2] = param_1 + 0x291c;
          local_b4[3] = (int *)0x0;
          for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
            local_68 = local_b4[local_20];
            local_6c = (int)(uint)local_62 >> ((3 - local_20) * 4 & 0xffU);
            if (((local_6c & 8) != 0) && (local_b4[local_20] != (int *)0x0)) {
              if (local_20 != 0) {
                local_70 = FUN_080b4810(auStack_290c);
                FUN_080b55dc(local_68,local_70);
              }
              FUN_080b537c(local_68,auStack_28ec);
              if ((local_6c & 4) != 0) {
                local_28d8 = local_28d8 + 1;
              }
              local_28d4 = 0;
              local_74 = local_6c & 3;
              for (local_24 = 0; local_24 < (int)local_74; local_24 = local_24 + 1) {
                local_75 = FUN_080b46f8(auStack_290c);
                local_28d4 = local_28d4 | (uint)local_75 << (((local_24 + 3) - local_74) * 8 & 0xff)
                ;
              }
              FUN_080b5470(local_68,auStack_28ec);
            }
          }
        }
        uVar5 = param_1[0x43a4];
        uVar11 = local_3c[0x812];
        uVar8 = local_3c[0x813];
        param_1[0x43a4] = uVar5 + uVar11;
        param_1[0x43a5] = param_1[0x43a5] + uVar8 + (uint)CARRY4(uVar5,uVar11);
        local_76 = *(undefined *)((int)local_3c + 0x20e2);
        local_78 = FUN_080b4c80(auStack_290c,local_76);
        if (*local_3c != (uint)local_78) {
          *(undefined *)(param_1 + 0x43ab) = 1;
          FUN_080b7220(&DAT_081cd0a0,1);
          if (local_2d != '\x01') {
            FUN_080a85d8(param_1 + 6,&DAT_080ed90c,local_3c + 8);
          }
        }
      }
    }
    else if (iVar7 == 5) {
      param_1[0x31cc] = param_1[0x20e6];
      param_1[0x31cd] = param_1[0x20e7];
      param_1[0x31ce] = param_1[0x20e8];
      param_1[0x31cf] = param_1[0x20e9];
      param_1[0x31d0] = param_1[0x20ea];
      *(bool *)(param_1 + 0x31d3) = (param_1[0x31ce] & 1U) != 0;
      *(bool *)((int)param_1 + 0xc74d) = (param_1[0x31ce] & 2U) != 0;
      *(bool *)((int)param_1 + 0xc74e) = (param_1[0x31ce] & 4U) != 0;
      *(bool *)((int)param_1 + 0xc74f) = (param_1[0x31ce] & 8U) != 0;
      if (*(char *)((int)param_1 + 0xc74d) != '\0') {
        iVar7 = FUN_080b4810(auStack_290c);
        param_1[0x31d1] = iVar7;
      }
      if (*(char *)((int)param_1 + 0xc74f) != '\0') {
        iVar7 = FUN_080b4760(auStack_290c);
        param_1[0x31d2] = iVar7;
        param_1[0x43b0] = param_1[0x31d2];
      }
    }
    else {
LAB_080ab988:
      if ((param_1[0x20e8] & 0x8000U) != 0) {
        uVar5 = FUN_080b4810(auStack_290c);
        uVar11 = param_1[0x43a4];
        param_1[0x43a4] = uVar11 + uVar5;
        param_1[0x43a5] = param_1[0x43a5] + (uint)CARRY4(uVar11,uVar5);
      }
    }
  }
  else if (iVar7 == 0x77) {
    param_1[0x31d4] = param_1[0x20e6];
    param_1[0x31d5] = param_1[0x20e7];
    param_1[0x31d6] = param_1[0x20e8];
    param_1[0x31d7] = param_1[0x20e9];
    param_1[0x31d8] = param_1[0x20ea];
    iVar7 = FUN_080b4810(auStack_290c);
    param_1[0x31d9] = iVar7;
    uVar5 = param_1[0x43a4];
    param_1[0x43a4] = uVar5 + param_1[0x31d9];
    param_1[0x43a5] = param_1[0x43a5] + (uint)CARRY4(uVar5,param_1[0x31d9]);
    uVar4 = FUN_080b4760(auStack_290c);
    *(undefined2 *)(param_1 + 0x31da) = uVar4;
    uVar2 = FUN_080b46f8(auStack_290c);
    *(undefined *)((int)param_1 + 0xc76a) = uVar2;
    switch(*(undefined2 *)(param_1 + 0x31da)) {
    case 0x100:
    case 0x103:
    case 0x104:
      param_1[0x434c] = param_1[0x31d4];
      param_1[0x434d] = param_1[0x31d5];
      param_1[0x434e] = param_1[0x31d6];
      param_1[0x434f] = param_1[0x31d7];
      param_1[0x4350] = param_1[0x31d8];
      param_1[0x4351] = param_1[0x31d9];
      *(undefined2 *)(param_1 + 0x4352) = *(undefined2 *)(param_1 + 0x31da);
      *(undefined *)((int)param_1 + 0x10d4a) = *(undefined *)((int)param_1 + 0xc76a);
      iVar7 = FUN_080b4810(auStack_290c);
      param_1[0x4353] = iVar7;
      uVar2 = FUN_080b46f8(auStack_290c);
      *(undefined *)(param_1 + 0x4354) = uVar2;
      uVar2 = FUN_080b46f8(auStack_290c);
      *(undefined *)((int)param_1 + 0x10d51) = uVar2;
      iVar7 = FUN_080b4810(auStack_290c);
      param_1[0x4355] = iVar7;
      break;
    case 0x101:
      param_1[0x42bb] = param_1[0x31d4];
      param_1[0x42bc] = param_1[0x31d5];
      param_1[0x42bd] = param_1[0x31d6];
      param_1[0x42be] = param_1[0x31d7];
      param_1[0x42bf] = param_1[0x31d8];
      param_1[0x42c0] = param_1[0x31d9];
      *(undefined2 *)(param_1 + 0x42c1) = *(undefined2 *)(param_1 + 0x31da);
      *(undefined *)((int)param_1 + 0x10b06) = *(undefined *)((int)param_1 + 0xc76a);
      uVar4 = FUN_080b4760(auStack_290c);
      *(undefined2 *)(param_1 + 0x42c2) = uVar4;
      uVar4 = FUN_080b4760(auStack_290c);
      *(undefined2 *)((int)param_1 + 0x10b0a) = uVar4;
      if (0xff < *(ushort *)(param_1 + 0x42c2)) {
        *(undefined2 *)(param_1 + 0x42c2) = 0xff;
      }
      if (0xff < *(ushort *)((int)param_1 + 0x10b0a)) {
        *(undefined2 *)((int)param_1 + 0x10b0a) = 0xff;
      }
      FUN_080b4af8(auStack_290c,param_1 + 0x42c3,*(undefined2 *)(param_1 + 0x42c2));
      FUN_080b4af8(auStack_290c,param_1 + 0x4303,*(undefined2 *)((int)param_1 + 0x10b0a));
      *(undefined *)((int)param_1 + *(ushort *)(param_1 + 0x42c2) + 0x10b0c) = 0;
      *(undefined *)((int)param_1 + *(ushort *)((int)param_1 + 0x10b0a) + 0x10c0c) = 0;
      break;
    case 0x102:
      param_1[0x4343] = param_1[0x31d4];
      param_1[0x4344] = param_1[0x31d5];
      param_1[0x4345] = param_1[0x31d6];
      param_1[0x4346] = param_1[0x31d7];
      param_1[0x4347] = param_1[0x31d8];
      param_1[0x4348] = param_1[0x31d9];
      *(undefined2 *)(param_1 + 0x4349) = *(undefined2 *)(param_1 + 0x31da);
      *(undefined *)((int)param_1 + 0x10d26) = *(undefined *)((int)param_1 + 0xc76a);
      iVar7 = FUN_080b4810(auStack_290c);
      param_1[0x434a] = iVar7;
      iVar7 = FUN_080b4810(auStack_290c);
      param_1[0x434b] = iVar7;
      break;
    case 0x105:
      param_1[0x4356] = param_1[0x31d4];
      param_1[0x4357] = param_1[0x31d5];
      param_1[0x4358] = param_1[0x31d6];
      param_1[0x4359] = param_1[0x31d7];
      param_1[0x435a] = param_1[0x31d8];
      param_1[0x435b] = param_1[0x31d9];
      *(undefined2 *)(param_1 + 0x435c) = *(undefined2 *)(param_1 + 0x31da);
      *(undefined *)((int)param_1 + 0x10d72) = *(undefined *)((int)param_1 + 0xc76a);
      iVar7 = FUN_080b4810(auStack_290c);
      param_1[0x435d] = iVar7;
      uVar2 = FUN_080b46f8(auStack_290c);
      *(undefined *)(param_1 + 0x435e) = uVar2;
      uVar2 = FUN_080b46f8(auStack_290c);
      *(undefined *)((int)param_1 + 0x10d79) = uVar2;
      iVar7 = FUN_080b4810(auStack_290c);
      param_1[0x435f] = iVar7;
      uVar4 = FUN_080b4760(auStack_290c);
      *(undefined2 *)(param_1 + 0x4360) = uVar4;
      if (0x103 < *(ushort *)(param_1 + 0x4360)) {
        *(undefined2 *)(param_1 + 0x4360) = 0x103;
      }
      FUN_080b4af8(auStack_290c,(int)param_1 + 0x10d82,*(undefined2 *)(param_1 + 0x4360));
      *(undefined *)((int)param_1 + *(ushort *)(param_1 + 0x4360) + 0x10d82) = 0;
    }
  }
  else if (iVar7 < 0x77) {
    param_1[0x42ad] = param_1[0x20e6];
    param_1[0x42ae] = param_1[0x20e7];
    param_1[0x42af] = param_1[0x20e8];
    param_1[0x42b0] = param_1[0x20e9];
    param_1[0x42b1] = param_1[0x20ea];
    uVar2 = FUN_080b46f8(auStack_290c);
    *(undefined *)(param_1 + 0x42b2) = uVar2;
    uVar2 = FUN_080b46f8(auStack_290c);
    *(undefined *)((int)param_1 + 0x10ac9) = uVar2;
    uVar2 = FUN_080b46f8(auStack_290c);
    *(undefined *)((int)param_1 + 0x10aca) = uVar2;
    iVar7 = FUN_080b4810(auStack_290c);
    param_1[0x42b3] = iVar7;
  }
  else if (iVar7 == 0x78) {
    param_1[0x42a3] = param_1[0x20e6];
    param_1[0x42a4] = param_1[0x20e7];
    param_1[0x42a5] = param_1[0x20e8];
    param_1[0x42a6] = param_1[0x20e9];
    param_1[0x42a7] = param_1[0x20ea];
    iVar7 = FUN_080b4810(auStack_290c);
    param_1[0x42a8] = iVar7;
    uVar2 = FUN_080b46f8(auStack_290c);
    *(undefined *)(param_1 + 0x42a9) = uVar2;
    uVar4 = FUN_080b4760(auStack_290c);
    *(undefined2 *)((int)param_1 + 0x10aa6) = uVar4;
    iVar7 = FUN_080b4810(auStack_290c);
    param_1[0x42aa] = iVar7;
    FUN_080b4af8(auStack_290c,param_1 + 0x42ab,8);
    uVar5 = param_1[0x43a4];
    param_1[0x43a4] = uVar5 + param_1[0x42a8];
    param_1[0x43a5] = param_1[0x43a5] + (uint)CARRY4(uVar5,param_1[0x42a8]);
    param_1[0x1cbe] = (uint)*(ushort *)((int)param_1 + 0x10aa6) << 9;
    param_1[0x1cbf] = 0;
  }
  else {
    if (iVar7 != 0x79) goto LAB_080ab988;
    param_1[0x42b4] = param_1[0x20e6];
    param_1[0x42b5] = param_1[0x20e7];
    param_1[0x42b6] = param_1[0x20e8];
    param_1[0x42b7] = param_1[0x20e9];
    param_1[0x42b8] = param_1[0x20ea];
    iVar7 = FUN_080b4810(auStack_290c);
    param_1[0x42b9] = iVar7;
    uVar4 = FUN_080b4760(auStack_290c);
    *(undefined2 *)(param_1 + 0x42ba) = uVar4;
    uVar4 = FUN_080b4760(auStack_290c);
    *(undefined2 *)((int)param_1 + 0x10aea) = uVar4;
  }
  local_7a = FUN_080b4c80(auStack_290c,0);
  uVar13 = CONCAT44(local_88._4_4_,(undefined4)local_88);
  local_88 = uVar13;
  if (((param_1[0x20e6] != (uint)local_7a) && (param_1[0x20e7] != 0x79)) &&
     (param_1[0x20e7] != 0x76)) {
    local_25 = '\0';
    local_88 = CONCAT44(local_88._4_4_,(undefined4)local_88);
    if ((param_1[0x20e7] == 5) && (local_88 = uVar13, *(char *)((int)param_1 + 0xc74e) != '\0')) {
      FUN_080a5148(auStack_c8,param_1);
      local_88 = (**(code **)(*param_1 + 0x10))(param_1);
      (**(code **)(*param_1 + 0xc))
                (param_1,*(code **)(*param_1 + 0xc),(uint)local_88 - 7,
                 (int)((ulonglong)local_88 >> 0x20) - (uint)((uint)local_88 < 7),0);
      local_25 = '\x01';
      for (local_2c = 0; local_2c < 7; local_2c = local_2c + 1) {
        iVar7 = FUN_080a4ba4(param_1);
        if (iVar7 != 0) {
          local_25 = '\0';
        }
      }
      FUN_080a51a0(auStack_c8);
    }
    if (local_25 != '\x01') {
      *(undefined *)(param_1 + 0x43ab) = 1;
      FUN_080b7220(&DAT_081cd0a0,3);
      if (local_2d != '\0') {
        *(undefined *)((int)param_1 + 0x10ead) = 1;
        uVar10 = 0;
        goto LAB_080abcf8;
      }
    }
  }
  iVar7 = param_1[0x43a5];
  iVar9 = param_1[0x43a3];
  if ((int)(iVar9 - (iVar7 + (uint)((uint)param_1[0x43a2] < (uint)param_1[0x43a4]))) < 0 ==
      (SBORROW4(iVar9,iVar7) !=
      SBORROW4(iVar9 - iVar7,(uint)((uint)param_1[0x43a2] < (uint)param_1[0x43a4])))) {
    FUN_080a8ea8(param_1);
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_080af9d4(auStack_290c);
  }
LAB_080abcf8:
  FUN_080afab0(auStack_290c);
  return uVar10;
}


