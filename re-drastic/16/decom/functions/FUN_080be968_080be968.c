/*
 * Ghidra decompilation
 *
 * Function : FUN_080be968
 * Address  : 080be968
 * Program  : drastic16
 */


undefined4 FUN_080be968(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  wchar_t awStack_16f70 [2048];
  uint uStack_14f70;
  int iStack_14f6c;
  undefined auStack_14f40 [8192];
  uint uStack_12f40;
  int iStack_12f3c;
  undefined auStack_12f10 [24];
  wchar_t awStack_12ef8 [17313];
  char local_2073;
  char local_206f;
  byte local_206e;
  char local_2063;
  char local_25;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_080a7108(auStack_12f10,param_2);
  cVar2 = FUN_080a4094(auStack_12f10,param_1 + 0x42e4);
  if (cVar2 == '\x01') {
    cVar2 = FUN_080a79e8(auStack_12f10,1);
    if (cVar2 == '\x01') {
      if (local_2063 == '\0') {
        if ((local_2073 != '\0') && (local_206f != '\x01')) {
          FUN_080a25a4(param_1 + 0x42e4,auStack_14f40,local_206e);
          iVar3 = FUN_080b0b10(param_1 + 0x42e4,auStack_14f40);
          if ((iVar3 == 0) ||
             ((iVar3 = FUN_080a5704(auStack_14f40), iVar3 == 0 ||
              (iVar3 = FUN_0809f900(param_2 + 0x1671c,auStack_14f40,0), iVar3 == 0)))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar6 = 0;
            goto LAB_080bf0f0;
          }
        }
        local_20 = 0;
        if (local_2073 != '\0') {
          wcscpy(awStack_16f70,awStack_12ef8);
          while( true ) {
            FUN_080a1938(awStack_16f70,0x800,local_206e ^ 1);
            FUN_080a3b4c(auStack_14f40);
            iVar3 = FUN_080c40a4(awStack_16f70,auStack_14f40,0);
            if (iVar3 == 0) break;
            local_20 = CONCAT44(local_20._4_4_ + iStack_12f3c +
                                (uint)CARRY4((uint)local_20,uStack_12f40),
                                (uint)local_20 + uStack_12f40);
          }
          uVar4 = *(uint *)(param_1 + 0x2098);
          *(uint *)(param_1 + 0x2098) = uVar4 + (uint)local_20;
          *(uint *)(param_1 + 0x209c) =
               *(int *)(param_1 + 0x209c) + local_20._4_4_ + (uint)CARRY4(uVar4,(uint)local_20);
        }
        FUN_080be830(param_1,param_2,auStack_12f10);
        if ((*(int *)(param_2 + 0x125c8) == 0x54) || (*(int *)(param_2 + 0x125c8) == 0x49)) {
          *(undefined *)(param_2 + 0xc4c9) = 1;
        }
        if (*(int *)(param_2 + 0x125c8) == 0x49) {
          *(undefined *)(param_2 + 0xc248) = 1;
        }
        else if (*(char *)(param_2 + 0xc4c9) == '\0') {
          FUN_080a6080(&DAT_080ee230,param_1 + 0x42e4);
        }
        else {
          FUN_080a6080(&DAT_080ee230,param_1 + 0x42e4);
        }
        FUN_080a6ff4(auStack_12f10);
        do {
          local_24 = FUN_080a8970(auStack_12f10);
          local_25 = '\0';
          cVar2 = FUN_080bf144(param_1,param_2,auStack_12f10,local_24,&local_25);
        } while (cVar2 == '\x01');
        if (local_25 == '\0') {
          uVar6 = 0;
        }
        else {
          FUN_080a3b4c(awStack_16f70);
          FUN_080a3b4c(auStack_14f40);
          iVar3 = FUN_080c40a4(awStack_12ef8,awStack_16f70,0);
          if ((iVar3 == 0) || (iVar3 = FUN_080c40a4(param_1 + 0x42e4,auStack_14f40,0), iVar3 == 0))
          {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar4 = *(uint *)(param_1 + 0x2098);
            uVar5 = uStack_12f40 - ((uint)local_20 + uStack_14f70);
            *(uint *)(param_1 + 0x2098) = uVar5 + uVar4;
            *(uint *)(param_1 + 0x209c) =
                 (iStack_12f3c -
                 (local_20._4_4_ + iStack_14f6c + (uint)CARRY4((uint)local_20,uStack_14f70) +
                 (uint)(uStack_12f40 < (uint)local_20 + uStack_14f70))) + *(int *)(param_1 + 0x209c)
                 + (uint)CARRY4(uVar5,uVar4);
          }
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      FUN_080a6080(&DAT_080ee230,param_1 + 0x42e4);
      iVar3 = FUN_080a1208(param_1 + 0x42e4,&DAT_080ee234);
      if (iVar3 != 0) {
        FUN_080b7220(&DAT_081cd0a0,1);
      }
      uVar6 = 0;
    }
  }
  else {
    FUN_080b7220(&DAT_081cd0a0,6);
    uVar6 = 0;
  }
LAB_080bf0f0:
  FUN_080a7560(auStack_12f10);
  return uVar6;
}


