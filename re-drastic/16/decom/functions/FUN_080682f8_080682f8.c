/*
 * Ghidra decompilation
 *
 * Function : FUN_080682f8
 * Address  : 080682f8
 * Program  : drastic16
 */


void FUN_080682f8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_2 + 0x418);
  if (uVar2 == 0) {
    return;
  }
  uVar5 = 0;
  bVar7 = false;
  iVar6 = -1;
  do {
    while( true ) {
      iVar1 = *(int *)(*(int *)(param_2 + 0x414) + uVar5 * 4);
      iVar4 = *(int *)(iVar1 + 0x10);
      iVar3 = iVar4;
      if (iVar4 != -1) break;
      bVar7 = false;
LAB_0806834c:
      FUN_080678b4(param_1,iVar1,param_3,iVar3,param_4);
      uVar2 = *(uint *)(param_2 + 0x418);
      uVar5 = uVar5 + 1;
      if (uVar2 <= uVar5) {
        return;
      }
    }
    if (iVar6 != iVar4) {
      iVar3 = *(byte *)(*(int *)(param_2 + 0x434) + iVar4 * 0x14 + 0x10) - 0x11;
      bVar7 = iVar3 == 0;
      iVar6 = iVar4;
      goto LAB_0806834c;
    }
    if (!bVar7) goto LAB_0806834c;
    uVar5 = uVar5 + 1;
    bVar7 = true;
    if (uVar2 <= uVar5) {
      return;
    }
  } while( true );
}


