/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack13UnpInitData20Ei
 * Address  : 001cfad0
 * Program  : drastic64
 */


/* Unpack::UnpInitData20(int) */

void __thiscall Unpack::UnpInitData20(Unpack *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  *(undefined8 *)(this + 0x98b0) = 0;
  *(undefined8 *)(this + 0x98a8) = 0x100000000;
  memset(this + 0x98b8,0,0x170);
  memset(this + 0x94a4,0,0x404);
  memset(this + 0x58f4,0,0x3bb0);
  return;
}


