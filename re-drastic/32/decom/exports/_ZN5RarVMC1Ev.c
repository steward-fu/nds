/*
 * Ghidra decompilation
 *
 * Function : _ZN5RarVMC1Ev
 * Address  : 0810aa9c
 * Program  : drastic
 */


/* DWARF original prototype: RarVM * RarVM(RarVM * this) */

RarVM * __thiscall RarVM::RarVM(RarVM *this)

{
  BitInput::BitInput(&this->super_BitInput,true);
  this->Mem = (byte *)0x0;
  return this;
}


