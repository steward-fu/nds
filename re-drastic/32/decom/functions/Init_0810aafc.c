/*
 * Ghidra decompilation
 *
 * Function : Init
 * Address  : 0810aafc
 * Program  : drastic
 */


/* DWARF original prototype: void Init(RarVM * this) */

void __thiscall RarVM::Init(RarVM *this)

{
  byte *pbVar1;
  
  if (this->Mem != (byte *)0x0) {
    return;
  }
  pbVar1 = (byte *)operator_new__(0x40004);
  this->Mem = pbVar1;
  return;
}


