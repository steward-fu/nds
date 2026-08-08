/*
 * Ghidra decompilation
 *
 * Function : SetExternalBuffer
 * Address  : 001ef3d0
 * Program  : drastic64
 */


/* BitInput::SetExternalBuffer(unsigned char*) */

void __thiscall BitInput::SetExternalBuffer(BitInput *this,uchar *param_1)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) && (this[8] == (BitInput)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
    this[8] = (BitInput)0x1;
    *(uchar **)(this + 0x10) = param_1;
    return;
  }
  this[8] = (BitInput)0x1;
  *(uchar **)(this + 0x10) = param_1;
  return;
}


