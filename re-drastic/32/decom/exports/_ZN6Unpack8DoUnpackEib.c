/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack8DoUnpackEib
 * Address  : 08101994
 * Program  : drastic
 */


/* DWARF original prototype: void DoUnpack(Unpack * this, int Method, bool Solid) */

void __thiscall Unpack::DoUnpack(Unpack *this,int Method,bool Solid)

{
  switch(Method) {
  case 0:
    break;
  default:
    return;
  case 0xf:
    Unpack15(this,Solid);
    return;
  case 0x14:
  case 0x1a:
    Unpack20(this,Solid);
    return;
  case 0x1d:
    Unpack29(this,Solid);
    return;
  }
  if ((1 < this->MaxUserThreads) && (this->Fragmented == false)) {
    Unpack5MT(this,Solid);
    return;
  }
  Unpack5(this,Solid);
  return;
}


