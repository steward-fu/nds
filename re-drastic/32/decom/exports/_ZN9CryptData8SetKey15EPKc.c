/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptData8SetKey15EPKc
 * Address  : 080dd84c
 * Program  : drastic
 */


/* DWARF original prototype: void SetKey15(CryptData * this, char * Password) */

void __thiscall CryptData::SetKey15(CryptData *this,char *Password)

{
  size_t Size;
  uint uVar1;
  uint PswCRC;
  uint uVar2;
  uint uVar3;
  byte P;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  InitCRC32(this->CRCTab);
  Size = strlen(Password);
  uVar1 = CRC32(0xffffffff,Password,Size);
  this->Key15[0] = (ushort)uVar1;
  this->Key15[1] = (ushort)(uVar1 >> 0x10);
  this->Key15[2] = 0;
  this->Key15[3] = 0;
  uVar4 = (uint)(byte)*Password;
  if (uVar4 != 0) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 ^ uVar4 ^ this->CRCTab[uVar4];
      uVar4 = uVar5 + uVar4 + (this->CRCTab[uVar4] >> 0x10);
      uVar2 = uVar3 & 0xffff;
      uVar5 = uVar4 & 0xffff;
      this->Key15[2] = (ushort)uVar3;
      this->Key15[3] = (ushort)uVar4;
      Password = (char *)((byte *)Password + 1);
      uVar4 = (uint)(byte)*Password;
    } while (uVar4 != 0);
  }
  return;
}


