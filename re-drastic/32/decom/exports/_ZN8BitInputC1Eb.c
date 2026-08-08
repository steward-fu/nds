/*
 * Ghidra decompilation
 *
 * Function : _ZN8BitInputC1Eb
 * Address  : 0810bf70
 * Program  : drastic
 */


/* DWARF original prototype: BitInput * BitInput(BitInput * this, bool AllocBuffer) */

BitInput * __thiscall BitInput::BitInput(BitInput *this,bool AllocBuffer)

{
  byte *__s;
  
  this->ExternalBuffer = false;
  if (AllocBuffer) {
    __s = (byte *)operator_new__(0x8003);
    this->InBuf = __s;
    memset(__s,0,0x8003);
  }
  else {
    this->InBuf = (byte *)0x0;
  }
  return this;
}


