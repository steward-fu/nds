/*
 * Ghidra decompilation
 *
 * Function : FUN_080cae20
 * Address  : 080cae20
 * Program  : drastic16
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_080cae20(int param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_c;
  
  if (DAT_081d4bb4 == 0) {
    local_c = 0;
    bVar5 = 0;
    local_14 = 0;
    for (local_18 = 0; local_18 < 0x13; local_18 = local_18 + 1) {
      for (local_1c = 0; local_1c < *(int *)(&DAT_08102210 + local_18 * 4); local_1c = local_1c + 1)
      {
        *(int *)(&DAT_081d4bb0 + local_14 * 4) = local_c;
        (&DAT_081d4cb0)[local_14] = bVar5;
        local_14 = local_14 + 1;
        local_c = local_c + (1 << (uint)bVar5);
      }
      bVar5 = bVar5 + 1;
    }
  }
  *(undefined *)(param_1 + 0x4c58) = 1;
  if (*(char *)(param_1 + 0x4c48) != '\x01') {
    FUN_080d1b7c(param_1,param_2);
    cVar1 = FUN_080cca98(param_1);
    if (cVar1 != '\x01') {
      return;
    }
    if (((param_2 == '\x01') && (*(char *)(param_1 + 0xe674) == '\x01')) ||
       (cVar1 = FUN_080cd648(param_1), cVar1 == '\x01')) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      return;
    }
  }
LAB_080cafe0:
  do {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8);
    if ((*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 4)) &&
       (cVar1 = FUN_080cca98(param_1), cVar1 != '\x01')) goto LAB_080cb9d0;
    if (((*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8)) < 0x104
        ) && (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x70))) {
      FUN_080ccbd8(param_1);
      iVar6 = *(int *)(param_1 + 0x4c54);
      iVar4 = *(int *)(param_1 + 0x4c44);
      bVar8 = *(uint *)(param_1 + 0x4c40) < *(uint *)(param_1 + 0x4c50);
      if ((int)(iVar4 - (iVar6 + (uint)bVar8)) < 0 !=
          (SBORROW4(iVar4,iVar6) != SBORROW4(iVar4 - iVar6,(uint)bVar8))) {
        return;
      }
      if (*(char *)(param_1 + 0x4c48) != '\0') {
        *(undefined *)(param_1 + 0x4c58) = 0;
        return;
      }
    }
    if (*(int *)(param_1 + 0xe670) == 1) {
      iVar4 = FUN_080c55ac(param_1 + 0x98d0);
      if (iVar4 == -1) {
        FUN_080c53c8(param_1 + 0x98d0);
        *(undefined4 *)(param_1 + 0xe670) = 0;
        goto LAB_080cb9d0;
      }
      if (*(int *)(param_1 + 0xe4bc) != iVar4) {
LAB_080cb314:
        iVar6 = *(int *)(param_1 + 0x70);
        *(int *)(param_1 + 0x70) = iVar6 + 1;
        *(char *)(*(int *)(param_1 + 0x4b34) + iVar6) = (char)iVar4;
        goto LAB_080cafe0;
      }
      iVar6 = FUN_080d518c(param_1);
      if (iVar6 == 0) {
        cVar1 = FUN_080cd648(param_1);
      }
      else {
        if ((iVar6 == -1) || (iVar6 == 2)) goto LAB_080cb9d0;
        if (iVar6 != 3) {
          if (iVar6 == 4) {
            local_20 = 0;
            bVar8 = false;
            local_2c = 0;
            while ((local_2c < 4 && (!bVar8))) {
              uVar2 = FUN_080d518c(param_1);
              if (uVar2 == 0xffffffff) {
                bVar8 = true;
              }
              else if (local_2c == 3) {
                local_24 = uVar2 & 0xff;
              }
              else {
                local_20 = local_20 * 0x100 + (uVar2 & 0xff);
              }
              local_2c = local_2c + 1;
            }
            if (bVar8) goto LAB_080cb9d0;
            FUN_080d4be0(param_1,local_24 + 0x20,local_20 + 2);
          }
          else {
            if (iVar6 != 5) goto LAB_080cb314;
            iVar4 = FUN_080d518c(param_1);
            if (iVar4 == -1) goto LAB_080cb9d0;
            FUN_080d4be0(param_1,iVar4 + 4,1);
          }
          goto LAB_080cafe0;
        }
        cVar1 = FUN_080cbcd4(param_1);
      }
    }
    else {
      local_38 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0x94);
      if (local_38 < 0x100) {
        iVar4 = *(int *)(param_1 + 0x70);
        *(int *)(param_1 + 0x70) = iVar4 + 1;
        *(char *)(*(int *)(param_1 + 0x4b34) + iVar4) = (char)local_38;
        goto LAB_080cafe0;
      }
      if (0x10e < local_38) {
        local_30 = (byte)(&DAT_0810214d)[local_38] + 3;
        cVar1 = (&DAT_08102169)[local_38];
        if (cVar1 != '\0') {
          uVar2 = FUN_080d229c(param_1 + 4);
          local_30 = local_30 + (uVar2 >> (uint)(byte)(0x10 - cVar1));
          FUN_080d2234(param_1 + 4,cVar1);
        }
        iVar4 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0xf80);
        local_34 = *(int *)(&DAT_081d4bb0 + iVar4 * 4) + 1;
        uVar2 = (uint)(byte)(&DAT_081d4cb0)[iVar4];
        if (uVar2 != 0) {
          if (iVar4 < 10) {
            uVar3 = FUN_080d229c(param_1 + 4);
            local_34 = local_34 + (uVar3 >> (0x10 - uVar2 & 0xff));
            FUN_080d2234(param_1 + 4,uVar2);
          }
          else {
            if (4 < uVar2) {
              uVar3 = FUN_080d229c(param_1 + 4);
              local_34 = local_34 + (uVar3 >> (0x14 - uVar2 & 0xff)) * 0x10;
              FUN_080d2234(param_1 + 4,uVar2 - 4);
            }
            if (*(int *)(param_1 + 0x98cc) < 1) {
              iVar4 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0x1e6c);
              if (iVar4 != 0x10) {
                local_34 = local_34 + iVar4;
                *(int *)(param_1 + 0x98c8) = iVar4;
                goto LAB_080cb654;
              }
              *(undefined4 *)(param_1 + 0x98cc) = 0xf;
              iVar4 = *(int *)(param_1 + 0x98c8);
            }
            else {
              *(int *)(param_1 + 0x98cc) = *(int *)(param_1 + 0x98cc) + -1;
              iVar4 = *(int *)(param_1 + 0x98c8);
            }
            local_34 = local_34 + iVar4;
          }
        }
LAB_080cb654:
        iVar4 = local_30;
        if ((0x1fff < local_34) && (iVar4 = local_30 + 1, 0x3ffff < local_34)) {
          iVar4 = local_30 + 2;
        }
        local_30 = iVar4;
        FUN_080d4b84(param_1,local_34);
        *(int *)(param_1 + 0x68) = local_30;
        FUN_080d4be0(param_1,local_30,local_34);
        goto LAB_080cafe0;
      }
      if (local_38 != 0x100) {
        if (local_38 == 0x101) {
          cVar1 = FUN_080cbab4(param_1);
          goto joined_r0x080cb18c;
        }
        if (local_38 == 0x102) {
          if (*(int *)(param_1 + 0x68) != 0) {
            FUN_080d4be0(param_1,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x54));
          }
        }
        else if (local_38 < 0x107) {
          uVar7 = *(undefined4 *)(param_1 + (local_38 + -0xef) * 4 + 4);
          for (local_38 = local_38 + -0x103; 0 < local_38; local_38 = local_38 + -1) {
            *(undefined4 *)(param_1 + (local_38 + 0x14) * 4 + 4) =
                 *(undefined4 *)(param_1 + (local_38 + 0x13) * 4 + 4);
          }
          *(undefined4 *)(param_1 + 0x54) = uVar7;
          iVar4 = FUN_080d4ef0(param_1,param_1 + 4,param_1 + 0x2d58);
          local_3c = (byte)(&DAT_0810225c)[iVar4] + 2;
          cVar1 = (&DAT_08102278)[iVar4];
          if (cVar1 != '\0') {
            uVar2 = FUN_080d229c(param_1 + 4);
            local_3c = local_3c + (uVar2 >> (uint)(byte)(0x10 - cVar1));
            FUN_080d2234(param_1 + 4,cVar1);
          }
          *(int *)(param_1 + 0x68) = local_3c;
          FUN_080d4be0(param_1,local_3c,uVar7);
        }
        else if (local_38 < 0x110) {
          local_40 = (byte)(&DAT_0810218d)[local_38] + 1;
          cVar1 = (&DAT_08102195)[local_38];
          if (cVar1 != '\0') {
            uVar2 = FUN_080d229c(param_1 + 4);
            local_40 = local_40 + (uVar2 >> (uint)(byte)(0x10 - cVar1));
            FUN_080d2234(param_1 + 4,cVar1);
          }
          FUN_080d4b84(param_1,local_40);
          *(undefined4 *)(param_1 + 0x68) = 2;
          FUN_080d4be0(param_1,2,local_40);
        }
        goto LAB_080cafe0;
      }
      cVar1 = FUN_080cb9e0(param_1);
    }
joined_r0x080cb18c:
    if (cVar1 != '\x01') {
LAB_080cb9d0:
      FUN_080ccbd8(param_1);
      return;
    }
  } while( true );
}


