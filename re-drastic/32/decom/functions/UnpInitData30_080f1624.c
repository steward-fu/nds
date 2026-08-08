/*
 * Ghidra decompilation
 *
 * Function : UnpInitData30
 * Address  : 080f1624
 * Program  : drastic
 */


/* DWARF original prototype: void UnpInitData30(Unpack * this, bool Solid) */

void __thiscall Unpack::UnpInitData30(Unpack *this,bool Solid)

{
  if (Solid) {
    return;
  }
  this->TablesRead = Solid;
  memset(this->UnpOldTable,0,0x1ae);
  this->PPMEscChar = 2;
  this->UnpBlockType = 0;
  InitFilters30(this);
  return;
}


