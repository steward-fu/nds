/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptData14EncryptBlock20EPh
 * Address  : 001bfaa0
 * Program  : drastic64
 */


/* CryptData::EncryptBlock20(unsigned char*) */

void __thiscall CryptData::EncryptBlock20(CryptData *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = 0;
  uVar5 = *(uint *)(this + 0xfec);
  uVar10 = uVar5 ^ *(uint *)param_1;
  uVar9 = *(uint *)(param_1 + 4) ^ *(uint *)(this + 0xff0);
  uVar7 = *(uint *)(param_1 + 8) ^ *(uint *)(this + 0xff4);
  uVar6 = *(uint *)(param_1 + 0xc) ^ *(uint *)(this + 0xff8);
  uVar3 = uVar5;
  while( true ) {
    uVar2 = (uVar6 ^ (uVar7 >> 0xf | uVar7 << 0x11)) + uVar3;
    uVar3 = (uVar6 >> 0x15 | uVar6 << 0xb) + uVar7 ^ uVar3;
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar1;
    uVar4 = ((uint)(byte)this[((ulong)(uVar3 >> 0x10) & 0xff) + 0xeec] << 0x10 |
             (uint)(byte)this[((ulong)(uVar3 >> 8) & 0xff) + 0xeec] << 8 |
            (uint)(byte)this[(ulong)(byte)uVar3 + 0xeec] |
            (uint)(byte)this[(ulong)(uVar3 >> 0x18) + 0xeec] << 0x18) ^ uVar10;
    uVar2 = ((uint)(byte)this[((ulong)(uVar2 >> 0x10) & 0xff) + 0xeec] << 0x10 |
             (uint)(byte)this[((ulong)(uVar2 >> 8) & 0xff) + 0xeec] << 8 |
            (uint)(byte)this[(ulong)(byte)uVar2 + 0xeec] |
            (uint)(byte)this[(ulong)(uVar2 >> 0x18) + 0xeec] << 0x18) ^ uVar9;
    if (uVar1 == 0x20) break;
    uVar3 = *(uint *)(this + (uVar8 & 3) * 4 + 0xfec);
    uVar10 = uVar7;
    uVar9 = uVar6;
    uVar7 = uVar4;
    uVar6 = uVar2;
  }
  uVar5 = uVar5 ^ uVar4;
  *(uint *)param_1 = uVar5;
  *(uint *)(param_1 + 4) = *(uint *)(this + 0xff0) ^ uVar2;
  *(uint *)(param_1 + 8) = *(uint *)(this + 0xff4) ^ uVar7;
  *(uint *)(param_1 + 0xc) = *(uint *)(this + 0xff8) ^ uVar6;
  uVar3 = *(uint *)(this + (ulong)(byte)uVar5 * 4 + 0xaec);
  uVar5 = *(uint *)(this + 0xfec);
  uVar10 = *(uint *)(this + 0xff0);
  *(uint *)(this + 0xfec) = uVar3 ^ uVar5;
  uVar9 = *(uint *)(this + 0xff4);
  uVar7 = *(uint *)(this + 0xff8);
  uVar6 = *(uint *)(this + (ulong)param_1[1] * 4 + 0xaec);
  *(uint *)(this + 0xff0) = uVar10 ^ uVar6;
  uVar1 = *(uint *)(this + (ulong)param_1[2] * 4 + 0xaec);
  *(uint *)(this + 0xff4) = uVar9 ^ uVar1;
  uVar2 = *(uint *)(this + (ulong)param_1[3] * 4 + 0xaec);
  *(uint *)(this + 0xff8) = uVar7 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ *(uint *)(this + (ulong)param_1[4] * 4 + 0xaec);
  *(uint *)(this + 0xfec) = uVar3;
  uVar5 = uVar10 ^ uVar6 ^ *(uint *)(this + (ulong)param_1[5] * 4 + 0xaec);
  *(uint *)(this + 0xff0) = uVar5;
  uVar10 = uVar9 ^ uVar1 ^ *(uint *)(this + (ulong)param_1[6] * 4 + 0xaec);
  *(uint *)(this + 0xff4) = uVar10;
  uVar9 = uVar7 ^ uVar2 ^ *(uint *)(this + (ulong)param_1[7] * 4 + 0xaec);
  *(uint *)(this + 0xff8) = uVar9;
  uVar3 = uVar3 ^ *(uint *)(this + (ulong)param_1[8] * 4 + 0xaec);
  *(uint *)(this + 0xfec) = uVar3;
  uVar5 = uVar5 ^ *(uint *)(this + (ulong)param_1[9] * 4 + 0xaec);
  *(uint *)(this + 0xff0) = uVar5;
  uVar10 = uVar10 ^ *(uint *)(this + (ulong)param_1[10] * 4 + 0xaec);
  *(uint *)(this + 0xff4) = uVar10;
  uVar9 = uVar9 ^ *(uint *)(this + (ulong)param_1[0xb] * 4 + 0xaec);
  *(uint *)(this + 0xff8) = uVar9;
  *(uint *)(this + 0xfec) = *(uint *)(this + (ulong)param_1[0xc] * 4 + 0xaec) ^ uVar3;
  *(uint *)(this + 0xff0) = *(uint *)(this + (ulong)param_1[0xd] * 4 + 0xaec) ^ uVar5;
  *(uint *)(this + 0xff4) = *(uint *)(this + (ulong)param_1[0xe] * 4 + 0xaec) ^ uVar10;
  *(uint *)(this + 0xff8) = *(uint *)(this + (ulong)param_1[0xf] * 4 + 0xaec) ^ uVar9;
  return;
}


