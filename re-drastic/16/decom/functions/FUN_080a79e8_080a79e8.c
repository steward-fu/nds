/*
 * Ghidra decompilation
 *
 * Function : FUN_080a79e8
 * Address  : 080a79e8
 * Program  : drastic16
 */


undefined4 FUN_080a79e8(int *param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 unaff_r6;
  undefined auStack_68 [20];
  undefined auStack_54 [16];
  int local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int local_30;
  char *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  *(undefined *)(param_1 + 0x43a9) = 0;
  *(undefined *)(param_1 + 0x43ab) = 0;
  FUN_080a85ac(param_1 + 0x1cc8);
  (**(code **)(*param_1 + 0xc))(param_1,*(code **)(*param_1 + 0xc),0,0,0);
  iVar2 = FUN_080a4edc(param_1);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 8))(param_1,param_1 + 0x20eb,7);
    if (iVar2 == 7) {
      param_1[0x43aa] = 0;
      local_1c = FUN_080a7878(param_1,param_1 + 0x20eb,7);
      if (local_1c == 0) {
        FUN_0809f148(auStack_54,0x100000);
        local_24 = (**(code **)(*param_1 + 0x10))(param_1);
        pcVar6 = *(code **)(*param_1 + 8);
        uVar5 = FUN_0809f1c0(auStack_54,0);
        iVar2 = FUN_0809f1f4(auStack_54);
        local_28 = (*pcVar6)(param_1,uVar5,iVar2 + -0x10);
        for (local_20 = 0; local_20 < local_28; local_20 = local_20 + 1) {
          pcVar3 = (char *)FUN_0809f1c0(auStack_54,local_20);
          if (*pcVar3 == 'R') {
            uVar5 = FUN_0809f1c0(auStack_54,local_20);
            local_1c = FUN_080a7878(param_1,uVar5,local_28 - local_20);
            if (local_1c == 0) goto LAB_080a7ca4;
            bVar1 = true;
          }
          else {
LAB_080a7ca4:
            bVar1 = false;
          }
          if ((bVar1) &&
             (((((param_1[0x43a6] = local_1c, param_1[0x43a6] != 1 || (local_20 < 1)) ||
                (0x1b < local_24)) || (local_28 < 0x20)) ||
              (((local_2c = (char *)FUN_0809f1c0(auStack_54,0x1c - local_24), *local_2c == 'R' &&
                (local_2c[1] == 'S')) && ((local_2c[2] == 'F' && (local_2c[3] == 'X')))))))) {
            param_1[0x43aa] = local_24 + local_20;
            (**(code **)(*param_1 + 0xc))(param_1,*(code **)(*param_1 + 0xc),param_1[0x43aa],0,0);
            if ((param_1[0x43a6] == 2) || (param_1[0x43a6] == 3)) {
              (**(code **)(*param_1 + 8))(param_1,param_1 + 0x20eb,7);
            }
            break;
          }
        }
        iVar2 = param_1[0x43aa];
        if (iVar2 == 0) {
          unaff_r6 = 0;
        }
        FUN_0809f180(auStack_54);
        if (iVar2 == 0) {
          return unaff_r6;
        }
      }
      else {
        param_1[0x43a6] = local_1c;
        if (param_1[0x43a6] == 1) {
          (**(code **)(*param_1 + 0xc))(param_1,*(code **)(*param_1 + 0xc),0,0,0);
        }
      }
      if (param_1[0x43a6] == 4) {
        FUN_080a85d8(param_1 + 6,&DAT_080ed7c8);
        uVar5 = 0;
      }
      else {
        if (param_1[0x43a6] == 3) {
          (**(code **)(*param_1 + 8))(param_1,(int)param_1 + 0x83b3,1);
          if (*(char *)((int)param_1 + 0x83b3) != '\0') {
            return 0;
          }
          param_1[0x20ed] = 8;
        }
        else {
          param_1[0x20ed] = 7;
        }
        if (*(int *)(param_1[0x1cbd] + 0x125b0) == 0) {
          *(undefined *)(param_1 + 0x1cc6) = 1;
        }
        while (((iVar2 = FUN_080a8970(param_1), iVar2 != 0 &&
                (local_30 = FUN_0809ee40(param_1), local_30 != 1)) &&
               ((*(char *)(param_1 + 0x1cc6) == '\0' || (local_30 != 4))))) {
          FUN_080a82d0(param_1);
        }
        if ((*(char *)((int)param_1 + 0x10ead) == '\0') || (param_2 == '\x01')) {
          FUN_080a82d0(param_1);
          if ((*(char *)(param_1 + 0x43ab) == '\0') ||
             (FUN_080a85d8(param_1 + 6,&DAT_080ed7c8), param_2 == '\x01')) {
            *(undefined *)((int)param_1 + 0x10e9e) = *(undefined *)(param_1 + 0x20f5);
            if ((*(char *)(param_1 + 0x1cc6) != '\x01') || (*(char *)(param_1 + 0x43a9) != '\x01'))
            {
              FUN_080a5148(auStack_68,param_1);
              local_38 = param_1[0x43a2];
              iStack_34 = param_1[0x43a3];
              local_40 = param_1[0x43a4];
              iStack_3c = param_1[0x43a5];
              while (iVar2 = FUN_080a8970(param_1), iVar2 != 0) {
                local_44 = FUN_0809ee40(param_1);
                if (local_44 != 3) {
                  if (((*(char *)((int)param_1 + 0x10e9d) == '\0') || (local_44 != 2)) ||
                     (*(char *)(param_1 + 0x292e) == '\x01')) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = 1;
                  }
                  *(undefined *)((int)param_1 + 0x10ea1) = uVar4;
                  break;
                }
                if ((*(char *)((int)param_1 + 0x10e9d) == '\0') ||
                   (*(char *)(param_1 + 0x39fe) == '\x01')) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = 1;
                }
                *(undefined *)((int)param_1 + 0x10ea1) = uVar4;
                FUN_080a82d0(param_1);
              }
              param_1[0x43a2] = local_38;
              param_1[0x43a3] = iStack_34;
              param_1[0x43a4] = local_40;
              param_1[0x43a5] = iStack_3c;
              FUN_080a51a0(auStack_68);
            }
            if ((*(char *)((int)param_1 + 0x10e9d) != '\x01') ||
               (*(char *)((int)param_1 + 0x10ea1) != '\0')) {
              wcscpy(param_1 + 0x43b9,param_1 + 6);
            }
            uVar5 = 1;
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
      }
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    FUN_080a85d8(param_1 + 6,&DAT_080ed7c8,param_1 + 6);
    uVar5 = 0;
  }
  return uVar5;
}


