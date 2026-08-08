/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack13UnpInitData30Eb
 * Address  : 001d0f80
 * Program  : drastic64
 */


/* Unpack::UnpInitData30(bool) */

void __thiscall Unpack::UnpInitData30(Unpack *this,bool param_1)

{
  if (param_1) {
    return;
  }
  this[0xe8a8] = (Unpack)0x0;
  memset(this + 0xe6f4,0,0x1ae);
  *(undefined4 *)(this + 0xe6f0) = 2;
  *(undefined4 *)(this + 0xe8a4) = 0;
  InitFilters30();
  return;
}


