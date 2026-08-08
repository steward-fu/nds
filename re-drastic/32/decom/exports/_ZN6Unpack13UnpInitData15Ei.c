/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack13UnpInitData15Ei
 * Address  : 080ee944
 * Program  : drastic
 */


/* DWARF original prototype: void UnpInitData15(Unpack * this, int Solid) */

void __thiscall Unpack::UnpInitData15(Unpack *this,int Solid)

{
  if (Solid == 0) {
    this->AvrPlc = 0x3500;
    this->AvrPlcB = 0;
    this->AvrLn1 = 0;
    this->AvrLn2 = 0;
    this->AvrLn3 = 0;
    this->Buf60 = 0;
    this->NumHuf = 0;
    this->Nhfb = 0x80;
    this->Nlzb = 0x80;
    this->MaxDist3 = 0x2001;
  }
  this->FlagBuf = 0;
  this->StMode = 0;
  this->LCount = 0;
  this->FlagsCnt = 0;
  this->ReadTop = 0;
  return;
}


