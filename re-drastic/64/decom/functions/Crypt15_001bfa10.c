/*
 * Ghidra decompilation
 *
 * Function : Crypt15
 * Address  : 001bfa10
 * Program  : drastic64
 */


/* CryptData::Crypt15(unsigned char*, unsigned long) */

void __thiscall CryptData::Crypt15(CryptData *this,uchar *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_2 != 0) {
    pbVar6 = param_1;
    do {
      uVar1 = *(uint *)(this + ((ulong)(*(ushort *)(this + 0x1000) + 0x1234 >> 1) & 0xff) * 4 +
                               0xaec) ^ (uint)*(ushort *)(this + 0x1002);
      uVar2 = uVar1 & 0xffff ^
              ((uint)(*(ushort *)(this + 0x1006) >> 1) | (*(ushort *)(this + 0x1006) & 1) << 0xf);
      uVar4 = (uint)*(ushort *)(this + 0x1004) -
              (*(uint *)(this + ((ulong)(*(ushort *)(this + 0x1000) + 0x1234 >> 1) & 0xff) * 4 +
                                0xaec) >> 0x10);
      uVar5 = uVar2 >> 1;
      uVar2 = uVar2 << 0xf;
      uVar3 = (uVar5 | uVar2 & 0xffff) ^
              *(ushort *)(this + 0x1000) + 0x1234 & 0xffff ^ uVar4 & 0xffff;
      *(short *)(this + 0x1000) = (short)uVar3;
      *(short *)(this + 0x1002) = (short)uVar1;
      *(short *)(this + 0x1004) = (short)uVar4;
      *(ushort *)(this + 0x1006) = (ushort)uVar5 | (ushort)uVar2;
      pbVar7 = pbVar6 + 1;
      *pbVar6 = *pbVar6 ^ (byte)(uVar3 >> 8);
      pbVar6 = pbVar7;
    } while (pbVar7 != param_1 + param_2);
  }
  return;
}


