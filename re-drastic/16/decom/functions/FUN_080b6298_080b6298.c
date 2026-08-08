/*
 * Ghidra decompilation
 *
 * Function : FUN_080b6298
 * Address  : 080b6298
 * Program  : drastic16
 */


void FUN_080b6298(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar1 = FUN_080b685c(*(undefined4 *)(param_1 + 0x2c));
  if (*(int *)(iVar1 + 0x125a4) != 0) {
    if ((*(int *)(iVar1 + 0x125b0) == 0) ||
       (iVar2 = (**(code **)(iVar1 + 0x125b0))(1,*(undefined4 *)(iVar1 + 0x125ac),param_2,param_3),
       iVar2 != -1)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_080b71f4(&DAT_081cd0a0,0xff);
    }
    if (*(int *)(iVar1 + 0x125b8) != 0) {
      iVar1 = (**(code **)(iVar1 + 0x125b8))(param_2,param_3);
      if (iVar1 == 0) {
        FUN_080b71f4(&DAT_081cd0a0,0xff);
      }
    }
  }
  *(void **)(param_1 + 0x1c) = param_2;
  *(uint *)(param_1 + 0x18) = param_3;
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (*(char *)(param_1 + 0x29) != '\x01') {
      FUN_080a44e8(*(undefined4 *)(param_1 + 0x30),param_2,param_3);
    }
  }
  else if (param_3 <= *(uint *)(param_1 + 0x10)) {
    memcpy(*(void **)(param_1 + 0x14),param_2,param_3);
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3;
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_3;
  }
  uVar3 = *(uint *)(param_1 + 0x2080);
  *(uint *)(param_1 + 0x2080) = param_3 + uVar3;
  *(uint *)(param_1 + 0x2084) = *(int *)(param_1 + 0x2084) + (uint)CARRY4(param_3,uVar3);
  if (*(char *)(param_1 + 0x2a) != '\x01') {
    FUN_080bdc38(param_1 + 0x3760,param_2,param_3);
  }
  FUN_080b65ec(param_1);
  FUN_080b0edc();
  return;
}


