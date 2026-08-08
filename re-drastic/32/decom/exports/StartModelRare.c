/*
 * Ghidra decompilation
 *
 * Function : StartModelRare
 * Address  : 080ee1c4
 * Program  : drastic
 */


/* DWARF original prototype: void StartModelRare(ModelPPM * this, int MaxOrder) */

void __thiscall ModelPPM::StartModelRare(ModelPPM *this,int MaxOrder)

{
  undefined8 uVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  
  this->MaxOrder = MaxOrder;
  this->EscCount = '\x01';
  RestartModelRare(this);
  uVar1 = SIMDExpandImmediate(0,0xe,4);
  this->NS2BSIndx[0] = '\0';
  this->NS2BSIndx[1] = '\x02';
  *(undefined8 *)(this->NS2BSIndx + 2) = uVar1;
  *(undefined8 *)(this->NS2BSIndx + 3) = uVar1;
  memset(this->NS2BSIndx + 0xb,6,0xf5);
  this->NS2Indx[0] = '\0';
  iVar2 = 1;
  iVar5 = 1;
  this->NS2Indx[1] = '\x01';
  pbVar3 = this->NS2Indx + 2;
  bVar4 = '\x03';
  this->NS2Indx[2] = '\x02';
  do {
    iVar5 = iVar5 + -1;
    pbVar3 = pbVar3 + 1;
    *pbVar3 = bVar4;
    if (iVar5 == 0) {
      bVar4 = bVar4 + '\x01';
      iVar5 = iVar2 + 1;
      iVar2 = iVar2 + 1;
    }
  } while (pbVar3 != this->NS2Indx + 0xff);
  *(undefined8 *)this->HB2Flag = 0;
  *(undefined8 *)(this->HB2Flag + 8) = 0;
  *(undefined8 *)(this->HB2Flag + 0x10) = 0;
  *(undefined8 *)(this->HB2Flag + 0x18) = 0;
  *(undefined8 *)(this->HB2Flag + 0x20) = 0;
  *(undefined8 *)(this->HB2Flag + 0x28) = 0;
  *(undefined8 *)(this->HB2Flag + 0x30) = 0;
  *(undefined8 *)(this->HB2Flag + 0x38) = 0;
  memset(this->HB2Flag + 0x40,8,0xc0);
  (this->DummySEE2Cont).Shift = '\a';
  return;
}


