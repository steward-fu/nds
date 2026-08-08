/*
 * Ghidra decompilation
 *
 * Function : FUN_08003c30
 * Address  : 08003c30
 * Program  : drastic16
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_08003c30(byte **param_1,undefined4 param_2,int *param_3,byte **param_4,int *param_5,
                 int *param_6,int *param_7,code **param_8,code **param_9)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  byte *extraout_r1;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  byte *pbVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte **ppbVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  byte *pbVar24;
  bool bVar25;
  undefined auVar26 [16];
  ulonglong uVar27;
  ulonglong in_d18;
  undefined8 uVar28;
  uint local_8c;
  byte *local_80;
  uint local_74;
  int local_70;
  uint local_68;
  uint local_60 [2];
  int local_58;
  int iStack_54;
  undefined8 local_50;
  byte *local_48;
  byte *local_44;
  
  auVar26 = ZEXT816(0);
LAB_08003c58:
  do {
    uVar4 = FUN_08003878(param_1,&local_58);
    if (uVar4 != 0) {
      return uVar4;
    }
    if (iStack_54 != local_58 >> 0x1f) {
switchD_08003c88_caseD_0:
      return 4;
    }
    switch(local_58) {
    case 0:
      return 0;
    default:
      goto switchD_08003c88_caseD_0;
    case 6:
      uVar4 = FUN_08003878(param_1,param_2);
      if (uVar4 != 0) {
        return uVar4;
      }
      uVar28 = FUN_08003948(param_1,param_3 + 5);
      if ((uint)uVar28 != 0) {
        return (uint)uVar28;
      }
      uVar4 = FUN_080039dc(param_1,(int)((ulonglong)uVar28 >> 0x20),9,0);
      if (uVar4 != 0) {
        return uVar4;
      }
      if (param_3[5] == 0) {
        *param_3 = 0;
      }
      else {
        iVar9 = (**param_8)(param_8,param_3[5] << 3);
        *param_3 = iVar9;
        if (iVar9 == 0) {
          return 2;
        }
      }
      uVar4 = 0;
      while (uVar4 < (uint)param_3[5]) {
        iVar9 = uVar4 * 8;
        uVar4 = uVar4 + 1;
        uVar8 = FUN_08003878(param_1,*param_3 + iVar9);
        if (uVar8 != 0) {
          return uVar8;
        }
      }
      while( true ) {
        uVar4 = FUN_08003878(param_1,&local_48);
        if (uVar4 != 0) {
          return uVar4;
        }
        if (((uint)local_48 | (uint)local_44) == 0) break;
        if (local_44 == (byte *)0x0 && local_48 == (byte *)0xa) {
          uVar4 = FUN_08003b94(param_1,param_3[5],param_3 + 1,param_3 + 2,param_8);
        }
        else {
          uVar4 = FUN_08003988(param_1);
        }
        if (uVar4 != 0) {
          return uVar4;
        }
      }
      if (param_3[1] == 0) {
        if (param_3[5] != 0) {
          iVar9 = (**param_8)(param_8);
          param_3[1] = iVar9;
          if (iVar9 == 0) {
            return 2;
          }
        }
        if (param_3[5] == 0) {
          param_3[2] = 0;
        }
        else {
          iVar9 = (**param_8)(param_8,param_3[5] << 2);
          param_3[2] = iVar9;
          if (iVar9 == 0) {
            return 2;
          }
        }
        for (uVar4 = 0; uVar4 < (uint)param_3[5]; uVar4 = uVar4 + 1) {
          *(undefined *)(param_3[1] + uVar4) = 0;
          *(undefined4 *)(param_3[2] + uVar4 * 4) = 0;
        }
      }
      goto LAB_08003c58;
    case 7:
      uVar4 = FUN_080039dc(param_1,local_58 >> 0x1f,0xb,0);
      if (uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_08003948(param_1,param_3 + 6);
      if (uVar4 != 0) {
        return uVar4;
      }
      if (param_1[1] == (byte *)0x0) {
        return 0x10;
      }
      pbVar17 = *param_1;
      param_1[1] = param_1[1] + -1;
      *param_1 = pbVar17 + 1;
      if (*pbVar17 != 0) {
        return 4;
      }
      if (param_3[6] == 0) {
        param_3[3] = 0;
      }
      else {
        iVar9 = (**param_8)(param_8,param_3[6] * 0x28);
        param_3[3] = iVar9;
        if (iVar9 == 0) {
          return 2;
        }
      }
      for (pbVar17 = (byte *)0x0; pbVar17 < (byte *)param_3[6]; pbVar17 = pbVar17 + 1) {
        puVar11 = (undefined8 *)((int)pbVar17 * 0x28 + param_3[3]);
        *puVar11 = auVar26._0_8_;
        puVar11[1] = auVar26._8_8_;
        *(undefined4 *)(puVar11 + 2) = 0;
        *(undefined4 *)((int)puVar11 + 0x14) = 0;
        *(undefined4 *)(puVar11 + 3) = 0;
        *(undefined4 *)((int)puVar11 + 0x1c) = 0;
        *(undefined4 *)(puVar11 + 4) = 0;
        *(undefined4 *)((int)puVar11 + 0x24) = 0;
      }
      local_8c = 0;
LAB_08004360:
      if (local_8c < (uint)param_3[6]) {
        iVar9 = param_3[3];
        uVar28 = FUN_08003948(param_1,local_60);
        pbVar17 = (byte *)((ulonglong)uVar28 >> 0x20);
        if ((int)uVar28 == 0) {
          if (0x20 < local_60[0]) {
            return 4;
          }
          iVar16 = local_8c * 0x28;
          piVar14 = (int *)(iVar9 + iVar16);
          piVar14[4] = local_60[0];
          if (local_60[0] == 0) {
            *(undefined4 *)(iVar9 + iVar16) = 0;
          }
          else {
            uVar28 = (**param_8)(param_8,local_60[0] * 0x18);
            pbVar17 = (byte *)((ulonglong)uVar28 >> 0x20);
            *(int *)(iVar9 + iVar16) = (int)uVar28;
            if ((int)uVar28 == 0) {
              return 2;
            }
          }
          for (uVar4 = 0; uVar4 < local_60[0]; uVar4 = uVar4 + 1) {
            FUN_08096fe0(uVar4 * 0x18 + *piVar14 + 0x10);
            pbVar17 = extraout_r1;
          }
          local_70 = 0;
          local_68 = 0;
          for (local_74 = 0; local_74 < local_60[0]; local_74 = local_74 + 1) {
            iVar16 = local_74 * 0x18;
            iVar22 = *piVar14;
            iVar9 = iVar22 + iVar16;
            if (param_1[1] == (byte *)0x0) {
              return 0x10;
            }
            pbVar17 = *param_1;
            param_1[1] = param_1[1] + -1;
            *param_1 = pbVar17 + 1;
            bVar1 = *pbVar17;
            uVar4 = (uint)bVar1;
            pbVar17 = (byte *)(uVar4 & 0xf);
            for (pbVar13 = (byte *)0x0; pbVar13 < pbVar17; pbVar13 = pbVar13 + 1) {
              if (param_1[1] == (byte *)0x0) {
                return 0x10;
              }
              pbVar18 = *param_1;
              param_1[1] = param_1[1] + -1;
              *param_1 = pbVar18 + 1;
              pbVar13[(int)&local_48] = *pbVar18;
            }
            if ((byte *)0x8 < pbVar17) {
              return 4;
            }
            *(undefined4 *)(iVar9 + 8) = 0;
            *(undefined4 *)(iVar9 + 0xc) = 0;
            uVar8 = 0;
            while( true ) {
              uVar12 = uVar8 - 1;
              if (pbVar17 <= (byte *)~uVar12) break;
              in_d18 = in_d18 & 0xffffffffffff0000 | (ulonglong)(uVar8 * -8) & 0xffff;
              uVar2 = CONCAT11(((byte *)((int)&local_48 + (int)pbVar17))[uVar12],
                               ((byte *)((int)&local_48 + (int)pbVar17))[uVar12]);
              uVar3 = CONCAT22(uVar2,uVar2);
              uVar28 = VectorShiftRight(CONCAT44(uVar3,uVar3),0x38);
              uVar27 = VectorShiftLeft(uVar28,in_d18,8,1);
              *(ulonglong *)(iVar9 + 8) = *(ulonglong *)(iVar9 + 8) | uVar27;
              uVar8 = uVar12;
            }
            if ((bVar1 & 0x10) == 0) {
              *(undefined4 *)(iVar22 + iVar16) = 1;
              *(undefined4 *)(iVar9 + 4) = 1;
            }
            else {
              uVar28 = FUN_08003948(param_1,iVar9);
              if ((int)uVar28 != 0) goto LAB_080046cc;
              uVar28 = FUN_08003948(param_1,iVar9 + 4);
              pbVar17 = (byte *)((ulonglong)uVar28 >> 0x20);
              if ((int)uVar28 != 0) goto LAB_080046cc;
              if (0x20 < *(uint *)(iVar22 + iVar16)) {
                return 4;
              }
              if (0x20 < *(uint *)(iVar9 + 4)) {
                return 4;
              }
            }
            if ((bVar1 & 0x20) != 0) {
              local_50 = 0;
              uVar28 = FUN_08003878(param_1,&local_50);
              if ((int)uVar28 != 0) goto LAB_080046cc;
              uVar28 = FUN_08096ff0(iVar9 + 0x10,(uint)local_50,param_8);
              pbVar17 = (byte *)((ulonglong)uVar28 >> 0x20);
              if ((int)uVar28 == 0) {
                return 2;
              }
              iVar15 = *(int *)(iVar9 + 0x10);
              for (uVar8 = 0; uVar8 < (uint)local_50; uVar8 = uVar8 + 1) {
                if (param_1[1] == (byte *)0x0) {
                  return 0x10;
                }
                pbVar13 = *param_1;
                param_1[1] = param_1[1] + -1;
                pbVar17 = pbVar13 + 1;
                *param_1 = pbVar17;
                *(byte *)(iVar15 + uVar8) = *pbVar13;
              }
            }
            while ((uVar4 & 0x80) != 0) {
              pbVar13 = param_1[1] + -1;
              if (param_1[1] == (byte *)0x0) {
                return 0x10;
              }
              pbVar17 = *param_1;
              param_1[1] = pbVar13;
              pbVar24 = pbVar17 + 1;
              *param_1 = pbVar24;
              bVar1 = *pbVar17;
              uVar4 = (uint)bVar1;
              pbVar18 = (byte *)(uVar4 & 0xf);
              pbVar17 = pbVar13 + -(int)pbVar18;
              if (pbVar13 < pbVar18) {
                return 0x10;
              }
              *param_1 = pbVar24 + (int)pbVar18;
              param_1[1] = pbVar17;
              if ((bVar1 & 0x10) != 0) {
                iVar15 = FUN_08003948(param_1,&local_48);
                uVar28 = CONCAT44(&local_48,iVar15);
                if (iVar15 != 0) goto LAB_080046cc;
                uVar28 = FUN_08003948(param_1);
                pbVar17 = (byte *)((ulonglong)uVar28 >> 0x20);
                if ((int)uVar28 != 0) goto LAB_080046cc;
              }
              if ((bVar1 & 0x20) != 0) {
                local_48 = (byte *)0x0;
                local_44 = (byte *)0x0;
                uVar28 = FUN_08003878(param_1,&local_48);
                if ((int)uVar28 != 0) goto LAB_080046cc;
                pbVar13 = param_1[1];
                pbVar17 = (byte *)0x0;
                if ((local_44 != (byte *)0x0 || pbVar13 <= local_48) &&
                    (local_44 != (byte *)0x0 || local_48 != pbVar13)) {
                  return 0x10;
                }
                param_1[1] = pbVar13 + -(int)local_48;
                *param_1 = *param_1 + (int)local_48;
              }
            }
            local_68 = local_68 + *(int *)(iVar22 + iVar16);
            local_70 = local_70 + *(int *)(iVar9 + 4);
          }
          if (local_70 == 0) {
            return 4;
          }
          uVar4 = local_70 - 1;
          piVar14[5] = uVar4;
          if (uVar4 == 0) {
            piVar14[1] = 0;
          }
          else {
            uVar28 = (**param_8)(param_8,uVar4 * 8);
            pbVar17 = (byte *)((ulonglong)uVar28 >> 0x20);
            piVar14[1] = (int)uVar28;
            if ((int)uVar28 == 0) {
              return 2;
            }
          }
          uVar8 = 0;
LAB_080045c4:
          if (uVar4 <= uVar8) {
            if (local_68 < uVar4) {
              return 4;
            }
            iVar9 = local_68 - uVar4;
            piVar14[6] = iVar9;
            if (iVar9 != 0) {
              uVar28 = (**param_8)(param_8,iVar9 * 4);
              pbVar17 = (byte *)((ulonglong)uVar28 >> 0x20);
              puVar6 = (uint *)uVar28;
              piVar14[2] = (int)puVar6;
              if (puVar6 == (uint *)0x0) {
                return 2;
              }
              if (iVar9 != 1) goto LAB_0800461c;
              uVar4 = 0;
              while( true ) {
                if (uVar4 == local_68) {
                  return 4;
                }
                pbVar17 = (byte *)piVar14[5];
                pbVar13 = (byte *)0x0;
                while( true ) {
                  if (pbVar13 == pbVar17) goto LAB_08004664;
                  if (uVar4 == *(uint *)(piVar14[1] + (int)pbVar13 * 8)) break;
                  pbVar13 = pbVar13 + 1;
                }
                if ((int)pbVar13 < 0) break;
                uVar4 = uVar4 + 1;
              }
LAB_08004664:
              if (uVar4 == local_68) {
                return 4;
              }
              *puVar6 = uVar4;
              goto LAB_080046d4;
            }
            piVar14[2] = 0;
LAB_0800461c:
            iVar16 = 0;
            goto LAB_08004690;
          }
          iVar16 = piVar14[1] + uVar8 * 8;
          uVar8 = uVar8 + 1;
          iVar9 = FUN_08003948(param_1,iVar16);
          uVar28 = CONCAT44(iVar16 + 4,iVar9);
          if (iVar9 == 0) goto code_r0x080045b8;
        }
        goto LAB_080046cc;
      }
      uVar4 = FUN_080039dc(param_1,pbVar17,0xc,0);
      if (uVar4 != 0) {
        return uVar4;
      }
      for (uVar4 = 0; uVar4 < (uint)param_3[6]; uVar4 = uVar4 + 1) {
        iVar16 = 0;
        piVar14 = (int *)(uVar4 * 0x28 + param_3[3]);
        for (iVar9 = 0; iVar9 != piVar14[4]; iVar9 = iVar9 + 1) {
          iVar16 = iVar16 + *(int *)(iVar9 * 0x18 + *piVar14 + 4);
        }
        if (iVar16 == 0) {
          piVar14[3] = 0;
        }
        else {
          iVar9 = (**param_8)(param_8,iVar16 << 3);
          piVar14[3] = iVar9;
          if (iVar9 == 0) {
            return 2;
          }
        }
        iVar9 = 0;
        while (iVar9 != iVar16) {
          iVar22 = iVar9 * 8;
          iVar9 = iVar9 + 1;
          uVar8 = FUN_08003878(param_1,piVar14[3] + iVar22);
          if (uVar8 != 0) {
            return uVar8;
          }
        }
      }
      do {
        while( true ) {
          uVar4 = FUN_08003878(param_1,&local_48);
          if (uVar4 != 0) {
            return uVar4;
          }
          if (((uint)local_48 | (uint)local_44) == 0) goto LAB_08003c58;
          if (local_44 != (byte *)0x0 || local_48 != (byte *)0xa) break;
          local_50 = local_50 & 0xffffffff00000000;
          local_60[0] = uVar4;
          uVar4 = FUN_08003b94(param_1,param_3[6],local_60,&local_50,param_9);
          if (uVar4 == 0) {
            for (uVar8 = 0; uVar8 < (uint)param_3[6]; uVar8 = uVar8 + 1) {
              iVar9 = uVar8 * 0x28 + param_3[3];
              *(uint *)(iVar9 + 0x1c) = (uint)*(byte *)(local_60[0] + uVar8);
              *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)((uint)local_50 + uVar8 * 4);
            }
          }
          (*param_9[1])(param_9,(uint)local_50);
          (*param_9[1])(param_9,local_60[0]);
          if (uVar4 != 0) goto LAB_0800433c;
        }
        uVar4 = FUN_08003988(param_1);
      } while (uVar4 == 0);
      break;
    case 8:
      iVar22 = param_3[3];
      pbVar17 = (byte *)param_3[6];
      local_50 = 0;
      iVar16 = (int)pbVar17 * 0x28 + iVar22;
      for (iVar9 = iVar22; iVar9 != iVar16; iVar9 = iVar9 + 0x28) {
        *(undefined4 *)(iVar9 + 0x24) = 1;
      }
      *param_4 = pbVar17;
LAB_08003eec:
      while( true ) {
        uVar4 = FUN_08003878(param_1,&local_50);
        if (uVar4 != 0) {
          return uVar4;
        }
        if (local_50._4_4_ != 0 || (uint)local_50 != 0xd) break;
        *param_4 = (byte *)0x0;
        pbVar13 = (byte *)0x0;
        iVar9 = iVar22;
        while (pbVar13 != pbVar17) {
          uVar4 = FUN_08003948(param_1,&local_48);
          pbVar13 = pbVar13 + 1;
          if (uVar4 != 0) goto LAB_0800433c;
          *(byte **)(iVar9 + 0x24) = local_48;
          *param_4 = *param_4 + (int)local_48;
          iVar9 = iVar9 + 0x28;
        }
      }
      bVar25 = local_50._4_4_ != (uint)local_50 < 9;
      if (((bVar25 || (uint)local_50 != 9) && (bVar25 || (uint)local_50 != 10)) &&
         (((uint)local_50 | local_50._4_4_) != 0)) goto code_r0x08003f7c;
      if (*param_4 == (byte *)0x0) {
        *param_5 = 0;
        *param_6 = 0;
        *param_7 = 0;
        ppbVar19 = (byte **)0x0;
      }
      else {
        iVar9 = (**param_9)(param_9,(int)*param_4 << 3);
        *param_5 = iVar9;
        if (iVar9 == 0) {
          return 2;
        }
        iVar9 = (**param_9)(param_9,*param_4);
        *param_6 = iVar9;
        if (iVar9 == 0) {
          return 2;
        }
        uVar28 = (**param_9)(param_9,(int)*param_4 << 2);
        ppbVar19 = (byte **)((ulonglong)uVar28 >> 0x20);
        *param_7 = (int)uVar28;
        if ((int)uVar28 == 0) {
          return 2;
        }
      }
      iVar9 = 0;
      local_80 = (byte *)0x0;
      local_8c = iVar22;
      while( true ) {
        if (local_80 == pbVar17) break;
        iVar15 = *(int *)(local_8c + 0x24);
        if (iVar15 != 0) {
          if (local_50._4_4_ == 0 && (uint)local_50 == 9) {
            iVar5 = 0;
            pbVar13 = (byte *)0x0;
            pbVar18 = (byte *)0x0;
            while( true ) {
              bVar25 = iVar5 == iVar15 + -1;
              iVar21 = iVar5 + iVar9;
              ppbVar19 = &local_48;
              iVar5 = iVar5 + 1;
              if (bVar25) break;
              uVar4 = FUN_08003878(param_1);
              if (uVar4 != 0) goto LAB_0800433c;
              ppbVar19 = (byte **)(*param_5 + iVar21 * 8);
              *ppbVar19 = local_48;
              ppbVar19[1] = local_44;
              bVar25 = CARRY4((uint)pbVar13,(uint)local_48);
              pbVar13 = pbVar13 + (int)local_48;
              pbVar18 = local_44 + (int)(pbVar18 + bVar25);
            }
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar18 = (byte *)0x0;
            iVar21 = iVar9;
          }
          iVar9 = iVar21 + 1;
          piVar14 = (int *)(*param_5 + iVar21 * 8);
          uVar28 = FUN_08097784(local_8c,ppbVar19);
          ppbVar19 = (byte **)((int)((ulonglong)uVar28 >> 0x20) -
                              (int)(pbVar18 + ((byte *)uVar28 < pbVar13)));
          *piVar14 = (int)(byte *)uVar28 - (int)pbVar13;
          piVar14[1] = (int)ppbVar19;
        }
        local_80 = local_80 + 1;
        local_8c = local_8c + 0x28;
      }
      if ((local_50._4_4_ == 0 && (uint)local_50 == 9) &&
         (uVar4 = FUN_08003878(param_1,&local_50), uVar4 != 0)) break;
      for (pbVar17 = (byte *)0x0; pbVar17 < *param_4; pbVar17 = pbVar17 + 1) {
        pbVar17[*param_6] = 0;
        *(undefined4 *)(*param_7 + (int)pbVar17 * 4) = 0;
      }
      iVar15 = 0;
      for (iVar9 = iVar22; iVar9 != iVar16; iVar9 = iVar9 + 0x28) {
        if ((*(int *)(iVar9 + 0x24) != 1) || (*(int *)(iVar9 + 0x1c) == 0)) {
          iVar15 = iVar15 + *(int *)(iVar9 + 0x24);
        }
      }
      iVar9 = 0;
      do {
        if (local_50._4_4_ != 0 || (uint)local_50 != 10) {
          if (((uint)local_50 | local_50._4_4_) == 0) goto LAB_08003c58;
          uVar4 = FUN_08003988(param_1);
          if (uVar4 == 0) goto LAB_08004320;
          break;
        }
        local_60[0] = 0;
        local_48 = (byte *)0x0;
        uVar4 = FUN_08003b94(param_1,iVar15,local_60,&local_48,param_9);
        if (uVar4 == 0) {
          iVar21 = 0;
          for (iVar5 = iVar22; iVar5 != iVar16; iVar5 = iVar5 + 0x28) {
            iVar20 = *(int *)(iVar5 + 0x24);
            if ((iVar20 == 1) && (*(int *)(iVar5 + 0x1c) != 0)) {
              iVar7 = iVar9 + 1;
              *(undefined *)(*param_6 + iVar9) = 1;
              *(undefined4 *)(*param_7 + iVar9 * 4) = *(undefined4 *)(iVar5 + 0x20);
            }
            else {
              iVar23 = iVar21 - iVar9;
              iVar10 = iVar9 << 2;
              iVar7 = iVar20 + iVar9;
              for (; iVar9 != iVar7; iVar9 = iVar9 + 1) {
                *(undefined *)(*param_6 + iVar9) = *(undefined *)(local_60[0] + iVar9 + iVar23);
                *(undefined4 *)(*param_7 + iVar10) = *(undefined4 *)(local_48 + iVar23 * 4 + iVar10)
                ;
                iVar10 = iVar10 + 4;
              }
              iVar21 = iVar21 + iVar20;
            }
            iVar9 = iVar7;
          }
        }
        (*param_9[1])(param_9,local_60[0]);
        (*param_9[1])(param_9,local_48);
        if (uVar4 != 0) break;
LAB_08004320:
        uVar4 = FUN_08003878(param_1,&local_50);
      } while (uVar4 == 0);
    }
LAB_0800433c:
    if (uVar4 != 0) {
      return uVar4;
    }
  } while( true );
code_r0x08003f7c:
  uVar4 = FUN_08003988(param_1);
  if (uVar4 != 0) goto LAB_0800433c;
  goto LAB_08003eec;
  while( true ) {
    iVar22 = iVar16 * 4;
    iVar16 = iVar16 + 1;
    uVar28 = FUN_08003948(param_1,piVar14[2] + iVar22);
    pbVar17 = (byte *)((ulonglong)uVar28 >> 0x20);
    if ((int)uVar28 != 0) break;
LAB_08004690:
    if (iVar16 == iVar9) goto LAB_080046d4;
  }
LAB_080046cc:
  pbVar17 = (byte *)((ulonglong)uVar28 >> 0x20);
  if ((uint)uVar28 != 0) {
    return (uint)uVar28;
  }
LAB_080046d4:
  local_8c = local_8c + 1;
  goto LAB_08004360;
code_r0x080045b8:
  uVar28 = FUN_08003948(param_1);
  pbVar17 = (byte *)((ulonglong)uVar28 >> 0x20);
  if ((int)uVar28 != 0) goto LAB_080046cc;
  goto LAB_080045c4;
}


