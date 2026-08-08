/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptData8SetKey13EPKc
 * Address  : 080dd7e0
 * Program  : drastic
 */


/* DWARF original prototype: void SetKey13(CryptData * this, char * Password) */

void __thiscall CryptData::SetKey13(CryptData *this,char *Password)

{
  uint uVar1;
  byte P;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = 0;
  this->Key13[0] = '\0';
  this->Key13[1] = '\0';
  this->Key13[2] = '\0';
  uVar2 = (uint)(byte)*Password;
  if (uVar2 == 0) {
    return;
  }
  uVar5 = 0;
  uVar4 = 0;
  do {
    uVar6 = uVar5 + uVar2;
    uVar7 = (uVar3 + uVar2) * 0x1000000;
    uVar5 = uVar6 & 0xff;
    uVar1 = (uVar3 + uVar2) * 2;
    uVar4 = uVar4 ^ uVar2;
    uVar3 = uVar7 >> 0x1f | uVar1 & 0xff;
    this->Key13[0] = (byte)uVar6;
    this->Key13[1] = (byte)uVar4;
    this->Key13[2] = (byte)(uVar7 >> 0x1f) | (byte)uVar1;
    Password = (char *)((byte *)Password + 1);
    uVar2 = (uint)(byte)*Password;
  } while (uVar2 != 0);
  return;
}


