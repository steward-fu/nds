/*
 * Ghidra decompilation
 *
 * Function : FUN_08003988
 * Address  : 08003988
 * Program  : drastic16
 */


int FUN_08003988(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint local_18;
  int iStack_14;
  
  iVar3 = FUN_08003878(param_1,&local_18);
  if (iVar3 == 0) {
    uVar4 = param_1[1];
    bVar5 = iStack_14 != 0;
    bVar2 = uVar4 <= local_18;
    bVar1 = local_18 != uVar4;
    if (!bVar5 && !bVar2 || !bVar5 && !bVar1) {
      param_1[1] = uVar4 - local_18;
      iStack_14 = *param_1;
    }
    if ((bVar5 || bVar2) && (bVar5 || bVar1)) {
      iVar3 = 0x10;
    }
    if (!bVar5 && !bVar2 || !bVar5 && !bVar1) {
      *param_1 = iStack_14 + local_18;
    }
  }
  return iVar3;
}


