/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptData8SetKey15EPKc
 * Address  : 001bf8d0
 * Program  : drastic64
 */


/* CryptData::SetKey15(char const*) */

void __thiscall CryptData::SetKey15(CryptData *this,char *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  size_t sVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  
  InitCRC32((uint *)(this + 0xaec));
  sVar5 = strlen(param_1);
  uVar4 = CRC32(0xffffffff,param_1,sVar5);
  *(undefined4 *)(this + 0x1000) = uVar4;
  *(undefined4 *)(this + 0x1004) = 0;
  bVar3 = *param_1;
  if (bVar3 != 0) {
    uVar8 = 0;
    uVar7 = 0;
    pbVar6 = (byte *)(param_1 + 1);
    do {
      uVar1 = uVar8 + (uint)bVar3 + (*(uint *)(this + (ulong)bVar3 * 4 + 0xaec) >> 0x10);
      uVar2 = uVar7 ^ (uint)bVar3 ^ *(uint *)(this + (ulong)bVar3 * 4 + 0xaec);
      uVar7 = uVar2 & 0xffff;
      uVar8 = uVar1 & 0xffff;
      *(short *)(this + 0x1004) = (short)uVar2;
      *(short *)(this + 0x1006) = (short)uVar1;
      bVar3 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar3 != 0);
  }
  return;
}


