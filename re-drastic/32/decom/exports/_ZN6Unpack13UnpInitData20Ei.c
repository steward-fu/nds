/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack13UnpInitData20Ei
 * Address  : 080f0e18
 * Program  : drastic
 */


/* DWARF original prototype: void UnpInitData20(Unpack * this, int Solid) */

void __thiscall Unpack::UnpInitData20(Unpack *this,int Solid)

{
  if (Solid != 0) {
    return;
  }
  this->UnpAudioBlock = 0;
  this->UnpChannels = 1;
  this->UnpCurChannel = 0;
  this->UnpChannelDelta = 0;
  memset(this->AudV,0,0x170);
  memset(this->UnpOldTable20,0,0x404);
  memset(this->MD,0,0x3bb0);
  return;
}


