/*
 * Ghidra decompilation
 *
 * Function : FUN_080b4760
 * Address  : 080b4760
 * Program  : drastic16
 */


short FUN_080b4760(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  short sVar3;
  
  if (*(int *)(param_1 + 0x18) + 1U < *(uint *)(param_1 + 0x14)) {
    pbVar2 = (byte *)FUN_080a609c(param_1,*(undefined4 *)(param_1 + 0x18));
    bVar1 = *pbVar2;
    pbVar2 = (byte *)FUN_080a609c(param_1,*(int *)(param_1 + 0x18) + 1);
    sVar3 = (ushort)bVar1 + (ushort)*pbVar2 * 0x100;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 2;
  }
  else {
    sVar3 = 0;
  }
  return sVar3;
}


