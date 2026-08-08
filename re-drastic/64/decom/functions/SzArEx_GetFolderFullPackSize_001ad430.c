/*
 * Ghidra decompilation
 *
 * Function : SzArEx_GetFolderFullPackSize
 * Address  : 001ad430
 * Program  : drastic64
 */


undefined8 SzArEx_GetFolderFullPackSize(long *param_1,ulong param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = *(uint *)(param_1[9] + (param_2 & 0xffffffff) * 4);
  iVar2 = *(int *)(param_1[3] + (param_2 & 0xffffffff) * 0x38 + 0x28);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = uVar4 + iVar2;
    uVar5 = *(ulong *)(*param_1 + (ulong)uVar4 * 8);
    while (uVar4 = uVar4 + 1, uVar1 != uVar4) {
      uVar6 = *(ulong *)(*param_1 + (ulong)uVar4 * 8);
      bVar3 = CARRY8(uVar6,uVar5);
      uVar5 = uVar6 + uVar5;
      if (bVar3) {
        return 0xb;
      }
    }
  }
  *param_3 = uVar5;
  return 0;
}


