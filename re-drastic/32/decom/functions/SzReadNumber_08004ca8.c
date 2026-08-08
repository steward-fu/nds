/*
 * Ghidra decompilation
 *
 * Function : SzReadNumber
 * Address  : 08004ca8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes SzReadNumber(CSzData *sd,UInt64 *value)

{
  uint uVar1;
  int i;
  Byte firstByte;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  UInt64 UVar8;
  ulonglong in_d17;
  ulonglong in_d18;
  
  if (sd->Size == 0) {
    return 0x10;
  }
  pbVar6 = sd->Data;
  i = 0;
  sd->Size = sd->Size - 1;
  uVar5 = 0x80;
  sd->Data = pbVar6 + 1;
  uVar2 = (uint)*pbVar6;
  *value = 0;
  while( true ) {
    uVar1 = i << 3;
    if ((uVar2 & uVar5) == 0) {
      uVar2 = uVar2 & uVar5 - 1;
      uVar7 = VectorShiftRight(CONCAT44(uVar2,uVar2),0x20);
      uVar7 = VectorShiftLeft(uVar7,in_d18 & 0xffffffffffff0000 | (ulonglong)uVar1 & 0xffff,8,1);
      UVar8 = VectorAdd(*value,uVar7,8);
      *value = UVar8;
      return 0;
    }
    i = i + 1;
    uVar5 = uVar5 >> 1;
    if (sd->Size == 0) break;
    pbVar6 = sd->Data;
    sd->Size = sd->Size - 1;
    uVar3 = *(uint *)value;
    uVar4 = *(uint *)((int)value + 4);
    in_d17 = in_d17 & 0xffffffffffff0000 | (ulonglong)uVar1 & 0xffff;
    sd->Data = pbVar6 + 1;
    uVar7 = VectorShiftLeft((ulonglong)*pbVar6,in_d17,8,1);
    *(uint *)value = uVar3 | (uint)uVar7;
    *(uint *)((int)value + 4) = uVar4 | (uint)((ulonglong)uVar7 >> 0x20);
    if (i == 8) {
      return 0;
    }
  }
  return 0x10;
}


