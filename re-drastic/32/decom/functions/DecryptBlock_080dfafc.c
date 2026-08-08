/*
 * Ghidra decompilation
 *
 * Function : DecryptBlock
 * Address  : 080dfafc
 * Program  : drastic
 */


/* DWARF original prototype: void DecryptBlock(CryptData * this, byte * Buf, size_t Size) */

void __thiscall CryptData::DecryptBlock(CryptData *this,byte *Buf,size_t Size)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte bVar20;
  uint uVar21;
  byte bVar22;
  uint uVar23;
  uint TA;
  uint T;
  uint uVar24;
  uint uVar25;
  uint D;
  uint uVar26;
  uint C;
  uint uVar27;
  byte *pbVar28;
  byte *pbVar29;
  uint uVar30;
  uint B;
  uint uVar31;
  uint A;
  uint uVar32;
  uint TB;
  uint uVar33;
  uint *local_78;
  uint local_74;
  
  switch(this->Method) {
  case CRYPT_RAR13:
    if (Size != 0) {
      pbVar18 = Buf;
      do {
        bVar20 = this->Key13[1] + this->Key13[2];
        bVar22 = bVar20 + this->Key13[0];
        this->Key13[0] = bVar22;
        this->Key13[1] = bVar20;
        pbVar19 = pbVar18 + 1;
        *pbVar18 = *pbVar18 - bVar22;
        pbVar18 = pbVar19;
      } while (pbVar19 != Buf + Size);
    }
    break;
  case CRYPT_RAR15:
    if (Size != 0) {
      pbVar28 = Buf;
      do {
        uVar17 = this->Key15[0] + 0x1234;
        uVar33 = (uint)this->Key15[1] ^ this->CRCTab[(uVar17 & 0x1fe) >> 1];
        uVar25 = (uint)this->Key15[2] - (this->CRCTab[(uVar17 & 0x1fe) >> 1] >> 0x10);
        uVar21 = ((uint)this->Key15[3] << 0xf | (uint)(this->Key15[3] >> 1)) ^ uVar33 & 0xffff;
        this->Key15[1] = (ushort)uVar33;
        this->Key15[2] = (ushort)uVar25;
        uVar17 = uVar17 & 0xffff ^ uVar25 & 0xffff ^
                 ((uVar21 << 0x10) >> 0x11 | uVar21 << 0xf & 0xffff);
        this->Key15[0] = (ushort)uVar17;
        this->Key15[3] = (ushort)uVar21 >> 1 | (ushort)(uVar21 << 0xf);
        pbVar29 = pbVar28 + 1;
        *pbVar28 = *pbVar28 ^ (byte)(uVar17 >> 8);
        pbVar28 = pbVar29;
      } while (Buf + Size != pbVar29);
    }
    break;
  case CRYPT_RAR20:
    if (Size != 0) {
      local_74 = this->Key20[0];
      uVar25 = this->Key20[2];
      uVar17 = this->Key20[3];
      uVar23 = this->Key20[1];
      local_78 = (uint *)Buf;
      do {
        uVar30 = 0x1f;
        bVar1 = *(byte *)local_78;
        bVar2 = *(byte *)((int)local_78 + 1);
        bVar3 = *(byte *)((int)local_78 + 2);
        bVar4 = *(byte *)((int)local_78 + 3);
        bVar5 = *(byte *)(local_78 + 1);
        bVar6 = *(byte *)((int)local_78 + 5);
        bVar7 = *(byte *)((int)local_78 + 6);
        bVar8 = *(byte *)((int)local_78 + 7);
        bVar9 = *(byte *)(local_78 + 2);
        bVar10 = *(byte *)((int)local_78 + 9);
        bVar11 = *(byte *)((int)local_78 + 10);
        bVar12 = *(byte *)((int)local_78 + 0xb);
        bVar13 = *(byte *)(local_78 + 3);
        bVar14 = *(byte *)((int)local_78 + 0xd);
        bVar15 = *(byte *)((int)local_78 + 0xe);
        bVar16 = *(byte *)((int)local_78 + 0xf);
        uVar33 = local_78[3] ^ uVar17;
        uVar25 = local_78[2] ^ uVar25;
        uVar21 = local_78[1] ^ uVar23;
        uVar24 = *local_78 ^ local_74;
        while( true ) {
          uVar27 = uVar25;
          uVar26 = uVar33;
          uVar25 = uVar27 + (uVar26 >> 0x15 | uVar26 << 0xb) ^ uVar17;
          uVar17 = (uVar26 ^ (uVar27 >> 0xf | uVar27 << 0x11)) + uVar17;
          uVar30 = uVar30 - 1;
          uVar25 = ((uint)this->SubstTable20[uVar25 & 0xff] |
                    (uint)this->SubstTable20[uVar25 >> 0x18] << 0x18 |
                    (uint)this->SubstTable20[(uVar25 << 0x10) >> 0x18] << 8 |
                   (uint)this->SubstTable20[(uVar25 << 8) >> 0x18] << 0x10) ^ uVar24;
          uVar33 = ((uint)this->SubstTable20[uVar17 & 0xff] |
                    (uint)this->SubstTable20[uVar17 >> 0x18] << 0x18 |
                    (uint)this->SubstTable20[uVar17 * 0x10000 >> 0x18] << 8 |
                   (uint)this->SubstTable20[uVar17 * 0x100 >> 0x18] << 0x10) ^ uVar21;
          if (uVar30 == 0xffffffff) break;
          uVar17 = this->Key20[uVar30 & 3];
          uVar21 = uVar26;
          uVar24 = uVar27;
        }
        uVar25 = uVar25 ^ local_74;
        *(byte *)local_78 = (byte)uVar25;
        *(byte *)((int)local_78 + 1) = (byte)(uVar25 >> 8);
        *(byte *)((int)local_78 + 2) = (byte)(uVar25 >> 0x10);
        *(byte *)((int)local_78 + 3) = (byte)(uVar25 >> 0x18);
        uVar33 = uVar33 ^ this->Key20[1];
        *(byte *)(local_78 + 1) = (byte)uVar33;
        *(byte *)((int)local_78 + 5) = (byte)(uVar33 >> 8);
        *(byte *)((int)local_78 + 6) = (byte)(uVar33 >> 0x10);
        *(byte *)((int)local_78 + 7) = (byte)(uVar33 >> 0x18);
        uVar27 = uVar27 ^ this->Key20[2];
        *(byte *)(local_78 + 2) = (byte)uVar27;
        *(byte *)((int)local_78 + 9) = (byte)(uVar27 >> 8);
        *(byte *)((int)local_78 + 10) = (byte)(uVar27 >> 0x10);
        *(byte *)((int)local_78 + 0xb) = (byte)(uVar27 >> 0x18);
        uVar26 = uVar26 ^ this->Key20[3];
        *(byte *)(local_78 + 3) = (byte)uVar26;
        *(byte *)((int)local_78 + 0xd) = (byte)(uVar26 >> 8);
        *(byte *)((int)local_78 + 0xe) = (byte)(uVar26 >> 0x10);
        *(byte *)((int)local_78 + 0xf) = (byte)(uVar26 >> 0x18);
        local_78 = local_78 + 4;
        uVar26 = this->CRCTab[bVar4];
        uVar27 = this->CRCTab[bVar8];
        uVar30 = this->CRCTab[bVar1];
        uVar31 = this->CRCTab[bVar5];
        uVar32 = this->CRCTab[bVar12];
        uVar23 = this->CRCTab[bVar14] ^
                 this->CRCTab[bVar6] ^ this->CRCTab[bVar2] ^ this->Key20[1] ^ this->CRCTab[bVar10];
        uVar21 = this->CRCTab[bVar9];
        uVar33 = this->Key20[0];
        uVar25 = this->CRCTab[bVar3] ^ this->CRCTab[bVar7] ^ this->Key20[2] ^ this->CRCTab[bVar11] ^
                 this->CRCTab[bVar15];
        uVar24 = this->CRCTab[bVar13];
        uVar17 = this->CRCTab[bVar16];
        this->Key20[1] = uVar23;
        this->Key20[2] = uVar25;
        local_74 = uVar21 ^ uVar31 ^ uVar30 ^ uVar33 ^ uVar24;
        uVar17 = uVar17 ^ uVar26 ^ uVar27 ^ this->Key20[3] ^ uVar32;
        this->Key20[0] = local_74;
        this->Key20[3] = uVar17;
      } while ((uint)((int)local_78 - (int)Buf) < Size);
    }
    break;
  case CRYPT_RAR30:
  case CRYPT_RAR50:
    Rijndael::blockDecrypt(&this->rin,Buf,Size,Buf);
    return;
  }
  return;
}


