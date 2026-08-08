/*
 * Ghidra decompilation
 *
 * Function : FUN_080b4810
 * Address  : 080b4810
 * Program  : drastic16
 */


int FUN_080b4810(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x18) + 3U < *(uint *)(param_1 + 0x14)) {
    pbVar4 = (byte *)FUN_080a609c(param_1,*(undefined4 *)(param_1 + 0x18));
    bVar1 = *pbVar4;
    pbVar4 = (byte *)FUN_080a609c(param_1,*(int *)(param_1 + 0x18) + 1);
    bVar2 = *pbVar4;
    pbVar4 = (byte *)FUN_080a609c(param_1,*(int *)(param_1 + 0x18) + 2);
    bVar3 = *pbVar4;
    pbVar4 = (byte *)FUN_080a609c(param_1,*(int *)(param_1 + 0x18) + 3);
    iVar5 = (uint)bVar1 + (uint)bVar2 * 0x100 + (uint)bVar3 * 0x10000 + (uint)*pbVar4 * 0x1000000;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}


