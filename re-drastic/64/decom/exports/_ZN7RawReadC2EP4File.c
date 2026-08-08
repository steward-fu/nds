/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawReadC2EP4File
 * Address  : 001c1d10
 * Program  : drastic64
 */


/* RawRead::RawRead(File*) */

void __thiscall RawRead::RawRead(RawRead *this,File *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(File **)(this + 0x20) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}


