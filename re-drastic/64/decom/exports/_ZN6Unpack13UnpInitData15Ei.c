/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack13UnpInitData15Ei
 * Address  : 001cf1d0
 * Program  : drastic64
 */


/* Unpack::UnpInitData15(int) */

void __thiscall Unpack::UnpInitData15(Unpack *this,int param_1)

{
  if (param_1 == 0) {
    *(undefined8 *)(this + 0x58d0) = 0;
    *(undefined8 *)(this + 0x58c8) = 0;
    *(undefined8 *)(this + 0x58c0) = 0x3500;
    *(undefined4 *)(this + 0x58d8) = 0;
    *(undefined8 *)(this + 0x58e8) = 0x8000000080;
    *(undefined4 *)(this + 0x58f0) = 0x2001;
  }
  *(undefined4 *)(this + 0x58bc) = 0;
  *(undefined4 *)(this + 0x58e4) = 0;
  *(undefined8 *)(this + 0x58dc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  return;
}


