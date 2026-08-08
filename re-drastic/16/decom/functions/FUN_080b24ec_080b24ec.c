/*
 * Ghidra decompilation
 *
 * Function : FUN_080b24ec
 * Address  : 080b24ec
 * Program  : drastic16
 */


void FUN_080b24ec(int param_1,undefined param_2,void *param_3,wchar_t *param_4,undefined4 *param_5)

{
  bool bVar1;
  size_t sVar2;
  int extraout_r1;
  undefined4 uVar3;
  undefined uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined auStackY_20044 [130428];
  void *local_2bc;
  undefined local_2b5;
  int local_2b4;
  undefined auStack_2b0 [156];
  undefined auStack_214 [156];
  undefined auStack_178 [264];
  undefined auStack_70 [16];
  undefined4 local_60;
  undefined local_5c;
  undefined local_5b;
  undefined local_5a;
  uint auStack_58 [5];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  char local_9;
  
  local_9 = '\0';
  local_10 = 0;
  do {
    if (3 < local_10) {
LAB_080b26a8:
      local_2b5 = param_2;
      local_2b4 = param_1;
      if (local_9 != '\x01') {
        FUN_080b01c8(param_4,auStack_178,0x108);
        sVar2 = wcslen(param_4);
        local_14 = sVar2 * 2;
        if (param_5 != (undefined4 *)0x0) {
          memcpy(auStack_178 + local_14,param_5,8);
          local_14 = local_14 + 8;
        }
        FUN_080bca5c(auStack_2b0);
        local_24 = 0x40000;
        local_2bc = param_3;
        for (local_18 = 0; (int)local_18 < 0x40000; local_18 = local_18 + 1) {
          FUN_080bcae4(auStack_2b0,auStack_178,local_14,0);
          local_5c = (undefined)local_18;
          local_5b = (undefined)(local_18 >> 8);
          local_5a = (undefined)(local_18 >> 0x10);
          FUN_080bcae4(auStack_2b0,&local_5c,3,0);
          if ((local_18 & 0x3fff) == 0) {
            memcpy(auStack_214,auStack_2b0,0x9c);
            FUN_080bcd18(auStack_214,auStack_70,0);
            uVar5 = local_18;
            if ((int)local_18 < 0) {
              uVar5 = local_18 + 0x3fff;
            }
            *(char *)((int)&local_44 + ((int)uVar5 >> 0xe)) = (char)local_60;
          }
        }
        FUN_080bcd18(auStack_2b0,auStack_58,0);
        for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
          for (local_20 = 0; (int)local_20 < 4; local_20 = local_20 + 1) {
            *(char *)((int)&local_34 + local_1c * 4 + local_20) =
                 (char)(auStack_58[local_1c] >> ((local_20 & 0x1f) << 3));
          }
        }
        memcpy((void *)(DAT_081cd974 * 0x230 + 0x81cd0d4),local_2bc,0x201);
        iVar7 = DAT_081cd974;
        puVar6 = param_5;
        if (param_5 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        uVar4 = SUB41(puVar6,0);
        if (param_5 != (undefined4 *)0x0) {
          uVar4 = 1;
        }
        (&DAT_081cd2d8)[DAT_081cd974 * 0x230] = uVar4;
        if ((&DAT_081cd2d8)[iVar7 * 0x230] != '\0') {
          iVar7 = DAT_081cd974 * 0x230;
          uVar3 = param_5[1];
          *(undefined4 *)(&DAT_081cd2d9 + iVar7) = *param_5;
          *(undefined4 *)(&DAT_081cd2dd + iVar7) = uVar3;
        }
        iVar7 = DAT_081cd974 * 0x230;
        *(undefined4 *)(&DAT_081cd0b4 + iVar7) = local_34;
        *(undefined4 *)(&DAT_081cd0b8 + iVar7) = uStack_30;
        *(undefined4 *)(&DAT_081cd0bc + iVar7) = uStack_2c;
        *(undefined4 *)(&DAT_081cd0c0 + iVar7) = uStack_28;
        iVar7 = DAT_081cd974 * 0x230;
        *(undefined4 *)(&DAT_081cd0c4 + iVar7) = local_44;
        *(undefined4 *)(&DAT_081cd0c8 + iVar7) = uStack_40;
        *(undefined4 *)(&DAT_081cd0cc + iVar7) = uStack_3c;
        *(undefined4 *)(&DAT_081cd0d0 + iVar7) = uStack_38;
        __aeabi_uidivmod(DAT_081cd974 + 1,4);
        DAT_081cd974 = extraout_r1;
        FUN_080b7588(auStack_178,0x108);
      }
      FUN_080b7964(local_2b4 + 0x9e8,local_2b5,&local_34,0x80,&local_44);
      FUN_080b7588(&local_34,0x10);
      FUN_080b7588(&local_44,0x10);
      return;
    }
    iVar7 = FUN_080b77d0(local_10 * 0x230 + 0x81cd0d4,param_3);
    if ((iVar7 == 0) ||
       (((param_5 != (undefined4 *)0x0 || ((&DAT_081cd2d8)[local_10 * 0x230] == '\x01')) &&
        ((param_5 == (undefined4 *)0x0 ||
         (((&DAT_081cd2d8)[local_10 * 0x230] == '\0' ||
          (iVar7 = memcmp(&DAT_081cd2d9 + local_10 * 0x230,param_5,8), iVar7 != 0)))))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar7 = local_10 * 0x230;
      local_34 = *(undefined4 *)(&DAT_081cd0b4 + iVar7);
      uStack_30 = *(undefined4 *)(&DAT_081cd0b8 + iVar7);
      uStack_2c = *(undefined4 *)(&DAT_081cd0bc + iVar7);
      uStack_28 = *(undefined4 *)(&DAT_081cd0c0 + iVar7);
      iVar7 = local_10 * 0x230;
      local_44 = *(undefined4 *)(&DAT_081cd0c4 + iVar7);
      uStack_40 = *(undefined4 *)(&DAT_081cd0c8 + iVar7);
      uStack_3c = *(undefined4 *)(&DAT_081cd0cc + iVar7);
      uStack_38 = *(undefined4 *)(&DAT_081cd0d0 + iVar7);
      local_9 = '\x01';
      goto LAB_080b26a8;
    }
    local_10 = local_10 + 1;
  } while( true );
}


