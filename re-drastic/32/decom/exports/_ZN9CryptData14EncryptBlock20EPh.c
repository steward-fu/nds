/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptData14EncryptBlock20EPh
 * Address  : 080dda94
 * Program  : drastic
 */


/* DWARF original prototype: void EncryptBlock20(CryptData * this, byte * Buf) */

void __thiscall CryptData::EncryptBlock20(CryptData *this,byte *Buf)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint TA;
  uint uVar4;
  uint T;
  uint uVar5;
  uint D;
  uint uVar6;
  uint C;
  uint uVar7;
  uint uVar8;
  uint B;
  uint A;
  uint TB;
  uint uVar9;
  
  uVar1 = this->Key20[0];
  uVar8 = 0;
  uVar4 = this->Key20[3] ^ *(uint *)(Buf + 0xc);
  uVar5 = this->Key20[2] ^ *(uint *)(Buf + 8);
  uVar3 = this->Key20[1] ^ *(uint *)(Buf + 4);
  uVar9 = *(uint *)Buf ^ uVar1;
  uVar2 = uVar1;
  while( true ) {
    uVar7 = uVar5;
    uVar6 = uVar4;
    uVar4 = uVar7 + (uVar6 >> 0x15 | uVar6 << 0xb) ^ uVar2;
    uVar2 = (uVar6 ^ (uVar7 >> 0xf | uVar7 << 0x11)) + uVar2;
    uVar8 = uVar8 + 1;
    uVar5 = ((uint)this->SubstTable20[uVar4 & 0xff] |
             (uint)this->SubstTable20[uVar4 >> 0x18] << 0x18 |
             (uint)this->SubstTable20[(uVar4 << 0x10) >> 0x18] << 8 |
            (uint)this->SubstTable20[(uVar4 << 8) >> 0x18] << 0x10) ^ uVar9;
    uVar4 = ((uint)this->SubstTable20[uVar2 & 0xff] |
             (uint)this->SubstTable20[uVar2 >> 0x18] << 0x18 |
             (uint)this->SubstTable20[uVar2 * 0x10000 >> 0x18] << 8 |
            (uint)this->SubstTable20[uVar2 * 0x100 >> 0x18] << 0x10) ^ uVar3;
    if (uVar8 == 0x20) break;
    uVar2 = this->Key20[uVar8 & 3];
    uVar3 = uVar6;
    uVar9 = uVar7;
  }
  uVar1 = uVar1 ^ uVar5;
  *Buf = (byte)uVar1;
  Buf[1] = (byte)(uVar1 >> 8);
  Buf[2] = (byte)(uVar1 >> 0x10);
  Buf[3] = (byte)(uVar1 >> 0x18);
  uVar4 = uVar4 ^ this->Key20[1];
  Buf[4] = (byte)uVar4;
  Buf[5] = (byte)(uVar4 >> 8);
  Buf[6] = (byte)(uVar4 >> 0x10);
  Buf[7] = (byte)(uVar4 >> 0x18);
  uVar7 = uVar7 ^ this->Key20[2];
  Buf[8] = (byte)uVar7;
  Buf[9] = (byte)(uVar7 >> 8);
  Buf[10] = (byte)(uVar7 >> 0x10);
  Buf[0xb] = (byte)(uVar7 >> 0x18);
  uVar6 = uVar6 ^ this->Key20[3];
  Buf[0xc] = (byte)uVar6;
  Buf[0xd] = (byte)(uVar6 >> 8);
  Buf[0xe] = (byte)(uVar6 >> 0x10);
  Buf[0xf] = (byte)(uVar6 >> 0x18);
  uVar4 = this->Key20[1];
  uVar5 = this->Key20[2];
  uVar3 = this->Key20[3];
  uVar9 = this->Key20[0] ^ this->CRCTab[uVar1 & 0xff];
  this->Key20[0] = uVar9;
  uVar4 = this->CRCTab[Buf[1]] ^ uVar4;
  this->Key20[1] = uVar4;
  uVar5 = this->CRCTab[Buf[2]] ^ uVar5;
  this->Key20[2] = uVar5;
  uVar3 = uVar3 ^ this->CRCTab[Buf[3]];
  this->Key20[3] = uVar3;
  uVar9 = uVar9 ^ this->CRCTab[Buf[4]];
  this->Key20[0] = uVar9;
  uVar4 = uVar4 ^ this->CRCTab[Buf[5]];
  this->Key20[1] = uVar4;
  uVar5 = uVar5 ^ this->CRCTab[Buf[6]];
  this->Key20[2] = uVar5;
  uVar3 = uVar3 ^ this->CRCTab[Buf[7]];
  this->Key20[3] = uVar3;
  uVar9 = uVar9 ^ this->CRCTab[Buf[8]];
  this->Key20[0] = uVar9;
  uVar4 = uVar4 ^ this->CRCTab[Buf[9]];
  this->Key20[1] = uVar4;
  uVar5 = uVar5 ^ this->CRCTab[Buf[10]];
  this->Key20[2] = uVar5;
  uVar3 = uVar3 ^ this->CRCTab[Buf[0xb]];
  this->Key20[3] = uVar3;
  this->Key20[0] = uVar9 ^ this->CRCTab[Buf[0xc]];
  this->Key20[1] = uVar4 ^ this->CRCTab[Buf[0xd]];
  this->Key20[2] = uVar5 ^ this->CRCTab[Buf[0xe]];
  this->Key20[3] = uVar3 ^ this->CRCTab[Buf[0xf]];
  return;
}


