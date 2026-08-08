/*
 * Ghidra decompilation
 *
 * Function : FUN_080b497c
 * Address  : 080b497c
 * Program  : drastic16
 */


undefined8 FUN_080b497c(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong in_d17;
  uint local_1c;
  undefined8 local_18;
  
  local_18 = 0;
  local_1c = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0x14) <= *(uint *)(param_1 + 0x18)) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar2 + 1;
    pbVar1 = (byte *)FUN_080a609c(param_1,iVar2);
    in_d17 = in_d17 & 0xffffffffffff0000 | (ulonglong)local_1c & 0xffff;
    uVar3 = VectorShiftLeft((ulonglong)(*pbVar1 & 0x7f),in_d17,8,1);
    local_18 = CONCAT44(local_18._4_4_ + (int)((ulonglong)uVar3 >> 0x20) +
                        (uint)CARRY4((uint)local_18,(uint)uVar3),(uint)local_18 + (uint)uVar3);
    if (-1 < (char)*pbVar1) break;
    local_1c = local_1c + 7;
  }
  return local_18;
}


