/*
 * Ghidra decompilation
 *
 * Function : DecryptBlock20
 * Address  : 080ddfc0
 * Program  : drastic
 */


/* DWARF original prototype: void DecryptBlock20(CryptData * this, byte * Buf) */

void __thiscall CryptData::DecryptBlock20(CryptData *this,byte *Buf)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint TB;
  uint uVar6;
  uint T;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint D;
  uint uVar10;
  uint C;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint TA;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint A;
  uint uVar17;
  uint B;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  byte InBuf [16];
  
  iVar1 = __stack_chk_guard;
  uVar12 = 0x1f;
  uVar5 = *(uint *)(Buf + 8);
  uVar3 = *(uint *)(Buf + 4);
  uVar16 = *(uint *)Buf;
  uVar9 = *(uint *)(Buf + 0xc);
  uVar4 = this->Key20[3];
  uVar6 = uVar9 ^ uVar4;
  uVar14 = this->Key20[2] ^ uVar5;
  uVar7 = uVar16 ^ this->Key20[0];
  uVar8 = this->Key20[1] ^ uVar3;
  while( true ) {
    uVar11 = uVar14;
    uVar10 = uVar6;
    uVar6 = uVar11 + (uVar10 >> 0x15 | uVar10 << 0xb) ^ uVar4;
    uVar4 = (uVar10 ^ (uVar11 >> 0xf | uVar11 << 0x11)) + uVar4;
    uVar12 = uVar12 - 1;
    uVar14 = ((uint)this->SubstTable20[uVar6 & 0xff] |
              (uint)this->SubstTable20[uVar6 >> 0x18] << 0x18 |
              (uint)this->SubstTable20[(uVar6 << 0x10) >> 0x18] << 8 |
             (uint)this->SubstTable20[(uVar6 << 8) >> 0x18] << 0x10) ^ uVar7;
    uVar6 = ((uint)this->SubstTable20[uVar4 & 0xff] |
             (uint)this->SubstTable20[uVar4 >> 0x18] << 0x18 |
             (uint)this->SubstTable20[uVar4 * 0x10000 >> 0x18] << 8 |
            (uint)this->SubstTable20[uVar4 * 0x100 >> 0x18] << 0x10) ^ uVar8;
    if (uVar12 == 0xffffffff) break;
    uVar4 = this->Key20[uVar12 & 3];
    uVar7 = uVar11;
    uVar8 = uVar10;
  }
  uVar14 = this->Key20[0] ^ uVar14;
  *Buf = (byte)uVar14;
  Buf[1] = (byte)(uVar14 >> 8);
  Buf[2] = (byte)(uVar14 >> 0x10);
  Buf[3] = (byte)(uVar14 >> 0x18);
  uVar6 = uVar6 ^ this->Key20[1];
  Buf[4] = (byte)uVar6;
  Buf[5] = (byte)(uVar6 >> 8);
  Buf[6] = (byte)(uVar6 >> 0x10);
  Buf[7] = (byte)(uVar6 >> 0x18);
  uVar11 = uVar11 ^ this->Key20[2];
  Buf[8] = (byte)uVar11;
  Buf[9] = (byte)(uVar11 >> 8);
  Buf[10] = (byte)(uVar11 >> 0x10);
  Buf[0xb] = (byte)(uVar11 >> 0x18);
  uVar10 = uVar10 ^ this->Key20[3];
  Buf[0xc] = (byte)uVar10;
  Buf[0xd] = (byte)(uVar10 >> 8);
  Buf[0xe] = (byte)(uVar10 >> 0x10);
  Buf[0xf] = (byte)(uVar10 >> 0x18);
  uVar19 = this->CRCTab[uVar16 >> 0x10 & 0xff];
  uVar15 = this->CRCTab[uVar3 >> 0x10 & 0xff];
  uVar14 = this->CRCTab[uVar16 & 0xff];
  uVar11 = this->CRCTab[uVar3 & 0xff];
  uVar8 = this->CRCTab[uVar5 & 0xff];
  uVar6 = this->CRCTab[uVar9 >> 0x10 & 0xff];
  uVar20 = this->Key20[0];
  uVar12 = this->CRCTab[uVar5 >> 0x10 & 0xff];
  uVar17 = this->CRCTab[uVar16 >> 0x18];
  uVar13 = this->CRCTab[uVar3 >> 0x18];
  uVar4 = this->CRCTab[uVar5 >> 0x18];
  uVar10 = this->Key20[3];
  uVar7 = this->CRCTab[uVar9 & 0xff];
  uVar18 = this->CRCTab[uVar9 >> 0x18];
  this->Key20[1] =
       this->CRCTab[uVar5 >> 8 & 0xff] ^
       this->CRCTab[uVar16 >> 8 & 0xff] ^ this->Key20[1] ^ this->CRCTab[uVar3 >> 8 & 0xff] ^
       this->CRCTab[uVar9 >> 8 & 0xff];
  this->Key20[2] = uVar15 ^ this->Key20[2] ^ uVar19 ^ uVar12 ^ uVar6;
  iVar2 = __stack_chk_guard;
  this->Key20[0] = uVar7 ^ uVar8 ^ uVar14 ^ uVar20 ^ uVar11;
  this->Key20[3] = uVar18 ^ uVar4 ^ uVar13 ^ uVar17 ^ uVar10;
  if (iVar1 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


