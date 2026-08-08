/*
 * Ghidra decompilation
 *
 * Function : UpdKeys20
 * Address  : 080de328
 * Program  : drastic
 */


/* DWARF original prototype: void UpdKeys20(CryptData * this, byte * Buf) */

void __thiscall CryptData::UpdKeys20(CryptData *this,byte *Buf)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = this->Key20[1];
  uVar4 = this->Key20[2];
  uVar1 = this->Key20[3];
  uVar2 = this->Key20[0] ^ this->CRCTab[*Buf];
  this->Key20[0] = uVar2;
  uVar3 = this->CRCTab[Buf[1]] ^ uVar3;
  this->Key20[1] = uVar3;
  uVar4 = uVar4 ^ this->CRCTab[Buf[2]];
  this->Key20[2] = uVar4;
  uVar1 = uVar1 ^ this->CRCTab[Buf[3]];
  this->Key20[3] = uVar1;
  uVar2 = uVar2 ^ this->CRCTab[Buf[4]];
  this->Key20[0] = uVar2;
  uVar3 = uVar3 ^ this->CRCTab[Buf[5]];
  this->Key20[1] = uVar3;
  uVar4 = uVar4 ^ this->CRCTab[Buf[6]];
  this->Key20[2] = uVar4;
  uVar1 = uVar1 ^ this->CRCTab[Buf[7]];
  this->Key20[3] = uVar1;
  uVar2 = uVar2 ^ this->CRCTab[Buf[8]];
  this->Key20[0] = uVar2;
  uVar3 = uVar3 ^ this->CRCTab[Buf[9]];
  this->Key20[1] = uVar3;
  uVar4 = uVar4 ^ this->CRCTab[Buf[10]];
  this->Key20[2] = uVar4;
  uVar1 = uVar1 ^ this->CRCTab[Buf[0xb]];
  this->Key20[3] = uVar1;
  this->Key20[0] = uVar2 ^ this->CRCTab[Buf[0xc]];
  this->Key20[1] = uVar3 ^ this->CRCTab[Buf[0xd]];
  this->Key20[2] = uVar4 ^ this->CRCTab[Buf[0xe]];
  this->Key20[3] = uVar1 ^ this->CRCTab[Buf[0xf]];
  return;
}


