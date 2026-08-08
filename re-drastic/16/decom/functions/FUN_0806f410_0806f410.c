/*
 * Ghidra decompilation
 *
 * Function : FUN_0806f410
 * Address  : 0806f410
 * Program  : drastic16
 */


void FUN_0806f410(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  memset((void *)(*(int *)(param_1 + 0x230c) + 0xef180),0,0x800);
  iVar2 = 0;
  do {
    *(undefined4 *)(*(int *)(param_1 + 0x2314) + iVar2 * 4) = 0;
    iVar1 = *(int *)(param_1 + 0x2084) + iVar2;
    iVar2 = iVar2 + 1;
    *(byte *)(iVar1 + 0x14b8020) = *(byte *)(iVar1 + 0x14b8020) & 0x7f;
  } while (iVar2 != 0x2000);
  iVar2 = 0;
  do {
    *(undefined4 *)(*(int *)(param_1 + 0x2318) + iVar2) = 0;
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x10000);
  iVar2 = *(int *)(param_1 + 0x2084);
  *(undefined4 *)(iVar2 + 0x14da0e0) = 0;
  FUN_080896d4(iVar2,0,iVar2,param_4);
  return;
}


