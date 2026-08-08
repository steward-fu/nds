/*
 * Ghidra decompilation
 *
 * Function : _ZN8BitInputD1Ev
 * Address  : 0810bfc4
 * Program  : drastic
 */


/* DWARF original prototype: void * ~BitInput(BitInput * this, int __in_chrg) */

void * __thiscall BitInput::~BitInput(BitInput *this,int __in_chrg)

{
  if ((this->ExternalBuffer == false) && (this->InBuf != (byte *)0x0)) {
    operator_delete__(this->InBuf);
  }
  return this;
}


