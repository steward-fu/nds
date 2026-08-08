/*
 * Ghidra decompilation
 *
 * Function : _ZN5RarVMD2Ev
 * Address  : 0810aac8
 * Program  : drastic
 */


/* DWARF original prototype: void * ~RarVM(RarVM * this, int __in_chrg) */

void * __thiscall RarVM::~RarVM(RarVM *this,int __in_chrg)

{
  int extraout_r1;
  
  if (this->Mem != (byte *)0x0) {
    operator_delete__(this->Mem);
    __in_chrg = extraout_r1;
  }
  BitInput::~BitInput(&this->super_BitInput,__in_chrg);
  return this;
}


