/*
 * Ghidra decompilation
 *
 * Function : FUN_080d78e4
 * Address  : 080d78e4
 * Program  : drastic16
 */


void FUN_080d78e4(undefined4 param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined auStack_24 [16];
  char *local_14;
  
  local_14 = getenv("RAR");
  if (local_14 != (char *)0x0) {
    sVar1 = strlen(local_14);
    FUN_0809fb14(auStack_24,sVar1 + 1);
    uVar2 = FUN_0809f21c(auStack_24,0);
    uVar3 = FUN_0809f0b8(auStack_24);
    FUN_080afc9c(local_14,uVar2,uVar3);
    uVar2 = FUN_0809f21c(auStack_24,0);
    FUN_080d7ca0(param_1,uVar2);
    FUN_0809f0e0(auStack_24);
  }
  return;
}


