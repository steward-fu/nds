/*
 * Ghidra decompilation
 *
 * Function : FUN_080be2f8
 * Address  : 080be2f8
 * Program  : drastic16
 */


void FUN_080be2f8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  undefined auStack_224c [516];
  undefined auStack_2048 [8192];
  uint local_48;
  int iStack_44;
  int local_14;
  
  *(undefined *)(param_1 + 0x84ec) = 0;
  FUN_080c2bb8(param_1 + 8,*(undefined4 *)(param_2 + 0x125c8));
  FUN_080a3b4c(auStack_2048);
  while (iVar1 = FUN_080db5e4(param_2,param_1 + 0x42e4,0x800), iVar1 != 0) {
    iVar1 = FUN_080c40a4(param_1 + 0x42e4,auStack_2048,0);
    if (iVar1 != 0) {
      uVar3 = *(uint *)(param_1 + 0x2098);
      *(uint *)(param_1 + 0x2098) = local_48 + uVar3;
      *(uint *)(param_1 + 0x209c) =
           iStack_44 + *(int *)(param_1 + 0x209c) + (uint)CARRY4(local_48,uVar3);
    }
  }
  FUN_0809f8d8(param_2 + 0x1671c);
  while (iVar1 = FUN_080db5e4(param_2,param_1 + 0x42e4,0x800), iVar1 != 0) {
    do {
      FUN_080b74fc(auStack_224c);
      memcpy(auStack_224c,(void *)(param_2 + 0xa024),0x201);
      local_14 = FUN_080be968(param_1,param_2);
      memcpy((void *)(param_2 + 0xa024),auStack_224c,0x201);
      bVar4 = local_14 == 1;
      FUN_080b752c(auStack_224c);
    } while (bVar4);
    iVar1 = FUN_080c40a4(param_1 + 0x42e4,auStack_2048,0);
    if (iVar1 != 0) {
      uVar3 = *(uint *)(param_1 + 0x2090);
      *(uint *)(param_1 + 0x2090) = local_48 + uVar3;
      *(uint *)(param_1 + 0x2094) =
           iStack_44 + *(int *)(param_1 + 0x2094) + (uint)CARRY4(local_48,uVar3);
    }
  }
  if (((*(int *)(param_1 + 0x42d4) == 0) && (*(int *)(param_2 + 0x125c8) != 0x49)) &&
     (iVar1 = FUN_0809ede0(&DAT_081cd0a0), iVar1 != 0xb)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if (*(char *)(param_1 + 0x84ec) != '\x01') {
      FUN_080a6080(&DAT_080ee230);
    }
    FUN_080b7220(&DAT_081cd0a0,10);
  }
  else if (*(char *)(param_2 + 0xc24a) != '\x01') {
    if (*(int *)(param_2 + 0x125c8) == 0x49) {
      FUN_080a6080(&DAT_080ee230);
    }
    else {
      iVar1 = FUN_080c2a2c(&DAT_081cd0a0);
      if (iVar1 == 0) {
        FUN_080a6080(&DAT_080ee230);
      }
      else {
        uVar2 = FUN_080c2a2c(&DAT_081cd0a0);
        FUN_080a6080(&DAT_080ee230,uVar2);
      }
    }
  }
  return;
}


