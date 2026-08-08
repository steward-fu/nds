/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptData12DecryptBlockEPhm
 * Address  : 001c1530
 * Program  : drastic64
 */


/* CryptData::DecryptBlock(unsigned char*, unsigned long) */

void __thiscall CryptData::DecryptBlock(CryptData *this,uchar *param_1,ulong param_2)

{
  CryptData CVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uchar *puVar9;
  uchar *puVar10;
  ulong uVar11;
  
  uVar4 = *(uint *)(this + 0x9e4);
  if (uVar4 == 3) {
    if (param_2 != 0) {
      uVar11 = 0;
      do {
        puVar9 = param_1 + uVar11;
        uVar11 = uVar11 + 0x10;
        DecryptBlock20(this,puVar9);
      } while (uVar11 < param_2);
      return;
    }
  }
  else if (uVar4 < 4) {
    if (uVar4 == 1) {
      puVar9 = param_1;
      if (param_2 != 0) {
        do {
          CVar1 = (CryptData)((char)this[0xffd] + (char)this[0xffe] + (char)this[0xffc]);
          this[0xffc] = CVar1;
          this[0xffd] = (CryptData)((char)this[0xffd] + (char)this[0xffe]);
          puVar10 = puVar9 + 1;
          *puVar9 = *puVar9 - (char)CVar1;
          puVar9 = puVar10;
        } while (puVar10 != param_1 + param_2);
      }
    }
    else if ((uVar4 == 2) && (param_2 != 0)) {
      pbVar7 = param_1;
      do {
        uVar2 = *(uint *)(this + ((ulong)(*(ushort *)(this + 0x1000) + 0x1234 >> 1) & 0xff) * 4 +
                                 0xaec) ^ (uint)*(ushort *)(this + 0x1002);
        uVar4 = uVar2 & 0xffff ^
                ((uint)(*(ushort *)(this + 0x1006) >> 1) | (*(ushort *)(this + 0x1006) & 1) << 0xf);
        uVar5 = (uint)*(ushort *)(this + 0x1004) -
                (*(uint *)(this + ((ulong)(*(ushort *)(this + 0x1000) + 0x1234 >> 1) & 0xff) * 4 +
                                  0xaec) >> 0x10);
        uVar6 = uVar4 >> 1;
        uVar4 = uVar4 << 0xf;
        uVar3 = (uVar6 | uVar4 & 0xffff) ^
                *(ushort *)(this + 0x1000) + 0x1234 & 0xffff ^ uVar5 & 0xffff;
        *(short *)(this + 0x1000) = (short)uVar3;
        *(short *)(this + 0x1002) = (short)uVar2;
        *(short *)(this + 0x1004) = (short)uVar5;
        *(ushort *)(this + 0x1006) = (ushort)uVar6 | (ushort)uVar4;
        pbVar8 = pbVar7 + 1;
        *pbVar7 = *pbVar7 ^ (byte)(uVar3 >> 8);
        pbVar7 = pbVar8;
      } while (pbVar8 != param_1 + param_2);
    }
  }
  else if (uVar4 - 4 < 2) {
    Rijndael::blockDecrypt((Rijndael *)(this + 0x9e8),param_1,param_2,param_1);
    return;
  }
  return;
}


