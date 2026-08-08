/*
 * Ghidra decompilation
 *
 * Function : FUN_080a8da8
 * Address  : 080a8da8
 * Program  : drastic16
 */


void FUN_080a8da8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_080a4e38(param_1);
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  uVar1 = (uint)uVar5;
  iVar3 = *(int *)(param_1 + 0x10e8c);
  bVar4 = uVar1 < *(uint *)(param_1 + 0x10e88);
  if ((((int)(iVar2 - (iVar3 + (uint)bVar4)) < 0 !=
        (SBORROW4(iVar2,iVar3) != SBORROW4(iVar2 - iVar3,(uint)bVar4))) ||
      (iVar3 = *(int *)(param_1 + 0x10e94), bVar4 = uVar1 < *(uint *)(param_1 + 0x10e90),
      (int)(iVar2 - (iVar3 + (uint)bVar4)) < 0 !=
      (SBORROW4(iVar2,iVar3) != SBORROW4(iVar2 - iVar3,(uint)bVar4)))) ||
     ((*(int *)(param_1 + 0x10e8c) != iVar2 || *(uint *)(param_1 + 0x10e88) != uVar1 &&
      ((*(int *)(param_1 + 0x10e94) != iVar2 || *(uint *)(param_1 + 0x10e90) != uVar1 &&
       (*(int *)(param_1 + 0x10e98) == 3)))))) {
    FUN_080a85d8(param_1 + 0x18,&DAT_080ed90c);
    FUN_080b7220(&DAT_081cd0a0,1);
  }
  return;
}


