/*
 * Ghidra decompilation
 *
 * Function : SetExternalBuffer
 * Address  : 0810c044
 * Program  : drastic
 */


/* DWARF original prototype: void SetExternalBuffer(BitInput * this, byte * Buf) */

void __thiscall BitInput::SetExternalBuffer(BitInput *this,byte *Buf)

{
  if ((this->InBuf != (byte *)0x0) && (this->ExternalBuffer == false)) {
    operator_delete__(this->InBuf);
  }
  this->ExternalBuffer = true;
  this->InBuf = Buf;
  return;
}


