/*
 * Ghidra decompilation
 *
 * Function : FUN_080d6efc
 * Address  : 080d6efc
 * Program  : drastic16
 */


void FUN_080d6efc(undefined4 param_1,char param_2,int param_3,int param_4)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined auStack_24 [16];
  int local_14;
  
  FUN_0809f120(auStack_24);
  for (local_14 = 1; local_14 < param_3; local_14 = local_14 + 1) {
    sVar2 = strlen(*(char **)(param_4 + local_14 * 4));
    FUN_080a8888(auStack_24,sVar2 + 1);
    uVar5 = *(undefined4 *)(param_4 + local_14 * 4);
    uVar3 = FUN_0809f21c(auStack_24,0);
    uVar4 = FUN_0809f0b8(auStack_24);
    FUN_080afc9c(uVar5,uVar3,uVar4);
    if (param_2 == '\0') {
      uVar3 = FUN_0809f21c(auStack_24,0);
      FUN_080d7078(param_1,uVar3);
    }
    else {
      uVar3 = FUN_0809f21c(auStack_24,0);
      cVar1 = FUN_080d79b0(param_1,uVar3);
      if (cVar1 != '\x01') break;
    }
  }
  if (param_2 != '\x01') {
    FUN_080d7794(param_1);
  }
  FUN_0809f0e0(auStack_24);
  return;
}


