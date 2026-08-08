/*
 * Ghidra decompilation
 *
 * Function : FUN_080d7794
 * Address  : 080d7794
 * Program  : drastic16
 */


void FUN_080d7794(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_080c2b04(param_1 + 0x16608);
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x125bc) != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_0809f558(param_1 + 0x16608,&DAT_080ee880);
  }
  iVar2 = FUN_080b0d5c(*(undefined4 *)(param_1 + 0x125c8));
  if (((iVar2 == 0x58) || (iVar2 == 0x45)) || (iVar2 == 0x50)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((*(char *)(param_1 + 0xc4c9) != '\0') && (bVar1)) {
    *(undefined *)(param_1 + 0xc4c9) = 0;
  }
  if (((iVar2 == 0x4c) || (iVar2 == 0x56)) && (*(int *)(param_1 + 0x125cc) == 0x42)) {
    *(undefined *)(param_1 + 0x125c4) = 1;
  }
  return;
}


