/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead4Get1Ev
 * Address  : 080e0f48
 * Program  : drastic
 */


/* DWARF original prototype: byte Get1(RawRead * this) */

byte __thiscall RawRead::Get1(RawRead *this)

{
  byte bVar1;
  uchar *puVar2;
  uint uVar3;
  
  uVar3 = this->ReadPos;
  if (uVar3 < this->DataSize) {
    puVar2 = (this->Data).Buffer;
    this->ReadPos = uVar3 + 1;
    bVar1 = puVar2[uVar3];
  }
  else {
    bVar1 = '\0';
  }
  return bVar1;
}


