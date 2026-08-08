/*
 * Ghidra decompilation
 *
 * Function : SetKey20
 * Address  : 080dddf4
 * Program  : drastic
 */


/* DWARF original prototype: void SetKey20(CryptData * this, char * Password) */

void __thiscall CryptData::SetKey20(CryptData *this,char *Password)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  size_t PswLength;
  int iVar5;
  byte *Buf;
  uint uVar6;
  size_t sVar7;
  uint N1;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  size_t I;
  int J;
  byte Ch;
  uint uVar11;
  uint N2;
  char cStack_ad;
  char Psw [128];
  
  iVar3 = __stack_chk_guard;
  J = 0;
  InitCRC32(this->CRCTab);
  strncpyz(Psw,Password,0x80);
  sVar4 = strlen(Psw);
  this->Key20[0] = 0xd3a3b879;
  this->Key20[1] = 0x3f6d12f7;
  this->Key20[2] = 0x7515a235;
  this->Key20[3] = 0xa4e7f123;
  memcpy(this->SubstTable20,InitSubstTable20,0x100);
  do {
    if (sVar4 != 0) {
      uVar11 = 0;
      do {
        bVar1 = *(byte *)(this->CRCTab + ((uint)(byte)(Password + uVar11)[1] + J & 0xff));
        if ((uint)*(byte *)(this->CRCTab + ((uint)(byte)Password[uVar11] - J & 0xff)) != (uint)bVar1
           ) {
          iVar5 = 1;
          uVar8 = (uint)*(byte *)(this->CRCTab + ((uint)(byte)Password[uVar11] - J & 0xff));
          do {
            uVar6 = uVar8 + uVar11 + iVar5;
            bVar2 = this->SubstTable20[uVar8];
            iVar5 = iVar5 + 1;
            uVar6 = uVar6 & 0xff;
            uVar9 = uVar8 + 1 & 0xff;
            this->SubstTable20[uVar8] = this->SubstTable20[uVar6];
            this->SubstTable20[uVar6] = bVar2;
            uVar8 = uVar9;
          } while (bVar1 != uVar9);
        }
        uVar11 = uVar11 + 2;
      } while (uVar11 < sVar4);
    }
    J = J + 1;
  } while (J != 0x100);
  if ((sVar4 & 0xf) == 0) {
    if (sVar4 == 0) goto LAB_080ddf5c;
  }
  else if (sVar4 <= (sVar4 | 0xf)) {
    pcVar10 = Psw + (sVar4 - 1);
    sVar7 = sVar4;
    do {
      sVar7 = sVar7 + 1;
      pcVar10 = pcVar10 + 1;
      *pcVar10 = '\0';
    } while (sVar7 <= (sVar4 | 0xf));
  }
  uVar11 = 0;
  do {
    Buf = (byte *)(Psw + uVar11);
    uVar11 = uVar11 + 0x10;
    EncryptBlock20(this,Buf);
  } while (uVar11 < sVar4);
LAB_080ddf5c:
  if (iVar3 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


