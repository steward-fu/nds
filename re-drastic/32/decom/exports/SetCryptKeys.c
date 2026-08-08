/*
 * Ghidra decompilation
 *
 * Function : SetCryptKeys
 * Address  : 080e00e4
 * Program  : drastic
 */


/* DWARF original prototype: bool SetCryptKeys(CryptData * this, bool Encrypt, CRYPT_METHOD Method,
   SecPassword * Password, byte * Salt, byte * InitV, uint Lg2Cnt, byte * HashKey, byte * PswCheck)
    */

bool __thiscall
CryptData::SetCryptKeys
          (CryptData *this,bool Encrypt,CRYPT_METHOD Method,SecPassword *Password,byte *Salt,
          byte *InitV,uint Lg2Cnt,byte *HashKey,byte *PswCheck)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  size_t Size;
  uint uVar4;
  uint PswCRC;
  byte P;
  byte P_1;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  wchar PwdW [128];
  char PwdA [128];
  
  iVar1 = __stack_chk_guard;
  if ((Method == CRYPT_NONE) < Password->PasswordSet) {
    this->Method = Method;
    SecPassword::Get(Password,PwdW,0x80);
    WideToChar(PwdW,PwdA,0x80);
    switch(Method) {
    case CRYPT_RAR13:
      uVar7 = (uint)(byte)PwdA[0];
      uVar10 = 0;
      this->Key13[0] = '\0';
      this->Key13[1] = '\0';
      this->Key13[2] = '\0';
      if (uVar7 != 0) {
        pbVar12 = (byte *)PwdA;
        uVar6 = 0;
        uVar11 = 0;
        do {
          iVar8 = uVar7 + uVar10;
          uVar5 = uVar7 + uVar11;
          uVar6 = uVar6 ^ uVar7;
          pbVar12 = pbVar12 + 1;
          uVar7 = (uint)*pbVar12;
          uVar3 = iVar8 * 0x1000000;
          uVar9 = iVar8 * 2;
          uVar11 = uVar5 & 0xff;
          uVar10 = uVar3 >> 0x1f | uVar9 & 0xff;
        } while (uVar7 != 0);
        this->Key13[0] = (byte)uVar5;
        this->Key13[1] = (byte)uVar6;
        this->Key13[2] = (byte)(uVar3 >> 0x1f) | (byte)uVar9;
      }
      break;
    case CRYPT_RAR15:
      InitCRC32(this->CRCTab);
      Size = strlen(PwdA);
      uVar4 = CRC32(0xffffffff,PwdA,Size);
      this->Key15[0] = (ushort)uVar4;
      this->Key15[1] = (ushort)(uVar4 >> 0x10);
      this->Key15[2] = 0;
      this->Key15[3] = 0;
      if ((byte)PwdA[0] != 0) {
        uVar11 = 0;
        pbVar12 = (byte *)PwdA;
        uVar10 = 0;
        uVar7 = (uint)(byte)PwdA[0];
        do {
          pbVar12 = pbVar12 + 1;
          uVar9 = this->CRCTab[uVar7] ^ uVar7 ^ uVar10;
          uVar6 = uVar11 + uVar7 + (this->CRCTab[uVar7] >> 0x10);
          uVar10 = uVar9 & 0xffff;
          uVar11 = uVar6 & 0xffff;
          uVar7 = (uint)*pbVar12;
        } while (*pbVar12 != 0);
        this->Key15[2] = (ushort)uVar9;
        this->Key15[3] = (ushort)uVar6;
      }
      break;
    case CRYPT_RAR20:
      SetKey20(this,PwdA);
      break;
    case CRYPT_RAR30:
      SetKey30(this,Encrypt,Password,PwdW,Salt);
      break;
    case CRYPT_RAR50:
      if (Lg2Cnt < 0x19) {
        SetKey50(this,Encrypt,Password,PwdW,Salt,InitV,Lg2Cnt,HashKey,PswCheck);
      }
    }
    cleandata(PwdA,0x80);
    cleandata(PwdW,0x200);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


