/*
 * Ghidra decompilation
 *
 * Function : FUN_08032cac
 * Address  : 08032cac
 * Program  : drastic16
 */


void FUN_08032cac(int param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
                 undefined param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x80f3c);
  if (iVar1 == 0x8000) {
    puts("VIDEO EVENT BUFFER FULL");
  }
  iVar2 = param_1 + 0x20f38 + iVar1 * 0xc;
  *(undefined *)(iVar2 + 8) = param_5;
  *(undefined4 *)(param_1 + 0x20f38 + iVar1 * 0xc) = param_2;
  *(undefined4 *)(iVar2 + 4) = param_3;
  *(undefined *)(iVar2 + 9) = param_4;
  *(int *)(param_1 + 0x80f3c) = iVar1 + 1;
  return;
}


