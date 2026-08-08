/*
 * Ghidra decompilation
 *
 * Function : FUN_08089340
 * Address  : 08089340
 * Program  : drastic16
 */


void FUN_08089340(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x2084) + 0x1480018);
  iVar5 = *(int *)(param_1 + 0x2084) + 0x1420018;
  if (iVar6 == 0) {
    return;
  }
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    iVar1 = FUN_0806d394(param_1,*(undefined4 *)(iVar5 + iVar3 + 4));
    if (iVar1 != 0) {
      puVar2 = *(uint **)(iVar5 + iVar3);
      *puVar2 = (iVar1 - (int)puVar2 >> 2) - 2U & 0xffffff | *puVar2 & 0xff000000;
    }
    iVar3 = iVar3 + 0xc;
  } while (iVar4 != iVar6);
  return;
}


